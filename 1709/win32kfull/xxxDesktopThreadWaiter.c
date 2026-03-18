/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C0048A94
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C000AD80 (IsMulDestroyBrushInternalSupported.c)
 *     zzzWakeInputIdle @ 0x1C0048C68 (zzzWakeInputIdle.c)
 *     SleepInputIdle @ 0x1C0048DF0 (SleepInputIdle.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0085D70 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, char a2)
{
  LegacyInputDispatcher *v4; // r14
  int v5; // esi
  char v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // al
  __int64 result; // rax
  int v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+94h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C0327A68;
  if ( gptiCurrent == gTermIO[2] )
    v4 = (LegacyInputDispatcher *)qword_1C0327A70;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
  {
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 15615;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 704LL));
  }
  if ( !a1 )
  {
    IsMulDestroyBrushInternalSupported();
    goto LABEL_10;
  }
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 4LL) & 0x1CFF) != 0 )
  {
LABEL_21:
    if ( a1 )
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 0;
    return (unsigned int)v5;
  }
  else if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x400) == 0
         || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0LL, 0LL, 0LL, 11LL);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(gptiCurrent);
    while ( 1 )
    {
LABEL_10:
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
      if ( a1 )
      {
        v8 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v11 = 0;
        v12 = 96;
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(gpMouseSensor, (struct CEventBitmap *)&v11, v4);
        if ( v5 < 0 )
          goto LABEL_14;
        v8 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v8;
LABEL_14:
      EnterCrit(0LL, 1LL);
      if ( v5 != *((_DWORD *)v4 + 15) )
        goto LABEL_27;
      v9 = (unsigned int)xxxRemoveQueueCompletion() != 0;
      if ( a1 )
      {
LABEL_16:
        if ( !v6 )
        {
          if ( a1 )
            xxxUpdateInputHangInfo(0LL, 1LL);
          if ( v5 == *((_DWORD *)v4 + 15) )
          {
            SleepInputIdle(gptiCurrent);
            v5 = a1 != 0 ? v5 : 0;
          }
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v9
          || (v7 = 3LL,
              LOBYTE(v7) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 8) != 0,
              ((unsigned __int8)v7 & ((a2 & 8) != 0)) != 0) )
        {
LABEL_27:
          v6 = 0;
          goto LABEL_16;
        }
        v6 = 1;
      }
    }
  }
  return result;
}
