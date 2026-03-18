/*
 * XREFs of ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8
 * Callers:
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxUpdateInputHangInfo @ 0x1C00526B0 (xxxUpdateInputHangInfo.c)
 *     zzzWakeInputIdle @ 0x1C005B6D8 (zzzWakeInputIdle.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00B5B18 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     SleepInputIdle @ 0x1C00C87E0 (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C00C8860 (xxxRemoveQueueCompletion.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(unsigned int a1, struct LegacyInputDispatcher *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  v4 = a1;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 15615;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) & 0x1CFF) != 0 )
  {
LABEL_9:
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 0;
    return v4;
  }
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x400) == 0
    || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0, 0LL, 0xBu);
    }
    xxxUpdateInputHangInfo(0LL, 0);
    zzzWakeInputIdle(gptiCurrent, v5);
    if ( gdwInAtomicOperation )
    {
      v6 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
    v4 = LegacyInputDispatcher::WaitAndDispatch(a2);
    EnterCrit(0LL, 1LL);
    if ( v4 == a1 )
      xxxRemoveQueueCompletion();
    xxxUpdateInputHangInfo(0LL, 1);
    if ( v4 == a1 )
      SleepInputIdle(gptiCurrent);
    goto LABEL_9;
  }
  return result;
}
