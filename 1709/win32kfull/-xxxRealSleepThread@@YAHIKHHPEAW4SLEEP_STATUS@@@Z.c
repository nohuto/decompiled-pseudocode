/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0009CC4 (xxxComputeInputSinkInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C000AD80 (IsMulDestroyBrushInternalSupported.c)
 *     xxxDesktopThreadWaiter @ 0x1C0048A94 (xxxDesktopThreadWaiter.c)
 *     xxxDoSysExpunge @ 0x1C0058E0C (xxxDoSysExpunge.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0085D70 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0089210 (zzzCalcStartCursorHide.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 *     ClientDeliverUserApc @ 0x1C0112D44 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  int v7; // r15d
  int v8; // r12d
  enum SLEEP_STATUS *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // dx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v17; // rax
  struct _KEVENT *v18; // rcx
  int v19; // eax
  int v20; // r14d
  char v21; // r12
  void *v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int128 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rcx
  BOOL v27; // r14d
  int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // r14
  struct _KEVENT *v31; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int16 v35; // dx
  __int64 v36; // rdx
  struct _KEVENT *v37; // rcx
  int v38; // edx
  __int64 v39; // rdx
  ULONG Count; // [rsp+40h] [rbp-98h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-90h]
  _DWORD v42[5]; // [rsp+50h] [rbp-88h] BYREF
  int v43; // [rsp+64h] [rbp-74h]
  _QWORD v44[3]; // [rsp+68h] [rbp-70h] BYREF
  PVOID Object[11]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v46; // [rsp+E0h] [rbp+8h]
  int v48; // [rsp+F8h] [rbp+20h]

  v48 = a4;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  v43 = v8;
  v42[4] = 0;
  v42[0] = 0;
  if ( !gfShellFrameHangResilient || (v9 = a5) == 0LL )
  {
    v9 = (enum SLEEP_STATUS *)v42;
    a5 = (enum SLEEP_STATUS *)v42;
  }
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    v44[0] = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)v44;
  }
  else
  {
    Timeout = 0LL;
  }
  v44[2] = gptiCurrent;
  v46 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL);
  while ( 1 )
  {
    v11 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0 || a4 && ((unsigned __int16)v10 & *(_WORD *)(v11 + 6)) != 0 )
    {
      v6 = 1;
      goto LABEL_54;
    }
    if ( *(_DWORD *)v9 == 2 )
      goto LABEL_54;
    if ( !v8 && (*(_BYTE *)(v11 + 6) & 0x40) != 0 )
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(gptiCurrent + 424LL);
        v35 = *(_WORD *)(v34 + 6);
        if ( (v35 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(v34 + 4) |= v35 & *(_WORD *)(gptiCurrent + 848LL);
      *(_WORD *)(gptiCurrent + 848LL) = 0;
    }
    v12 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( *(_DWORD *)(v12 + 376) != gcSysExpunge )
    {
      *(_DWORD *)(v12 + 376) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 380LL) & gdwSysExpungeMask) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v13 = 0;
    if ( !v8 )
      v13 = 64;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = v10 | v13;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 704LL));
    if ( v7 == 258 )
    {
      UserSetLastError(1460LL, v14);
      *(_DWORD *)v9 = 1;
      goto LABEL_54;
    }
    if ( v7 == 192 )
      break;
    v15 = *(_QWORD *)(gptiCurrent + 424LL);
    a4 = v48;
    if ( (*(_WORD *)(v15 + 10) & *(_WORD *)(v15 + 4)) == 0 )
    {
      if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      {
        v7 = xxxDesktopThreadWaiter(0, v10);
        if ( v7 == -1073741790 )
          goto LABEL_54;
        a4 = v48;
      }
      else
      {
        if ( v5 )
        {
          if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
            goto LABEL_54;
          *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) = 0LL;
          if ( gptiCurrent == gptiForeground )
          {
            v33 = *(__int64 **)(gptiCurrent + 440LL);
            v15 = *v33;
            if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(*v33 + 16)) & 0x1000) != 0 )
              xxxCallHook(0LL, 0LL, 0LL, 11LL);
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
          *(_DWORD *)(gptiCurrent + 464LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v36 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL);
              v37 = *(struct _KEVENT **)(v36 + 32);
              if ( v37 )
              {
                if ( v37 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v37, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v36 + 32) = -1LL;
              }
            }
          }
          else
          {
            v17 = *(_QWORD *)(gptiCurrent + 400LL);
            if ( !*(_QWORD *)(v17 + 304) )
              *(_QWORD *)(v17 + 304) = gptiCurrent;
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 304LL) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v18 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
              if ( !v18 )
                goto LABEL_29;
              if ( v18 != (struct _KEVENT *)-1LL )
              {
                KeSetEvent(v18, 1, 0);
                ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
LABEL_29:
                *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
              }
            }
          }
          v19 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          if ( (v19 & 4) != 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 12) = v19 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0);
          }
        }
        IsMulDestroyBrushInternalSupported();
        Object[0] = *(PVOID *)(gptiCurrent + 1376LL);
        v20 = 1;
        Count = 1;
        if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
        {
          v21 = 1;
          Object[1] = gpkeComputeInputSinkInfo;
          v20 = 2;
          Count = 2;
        }
        else
        {
          v21 = 0;
        }
        if ( gfShellFrameHangResilient )
        {
          v22 = *(void **)(gptiCurrent + 1344LL);
          if ( v22 )
          {
            if ( (v10 & 0xFFFF7DFF) != 0 )
            {
              Object[v20] = v22;
              Count = v20 + 1;
            }
          }
        }
        if ( v21 )
          gfMITWaitingForLLHook = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v23 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
              v24 = v23 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
              v25 = *((_QWORD *)&v24 + 1);
              if ( gdwInAtomicOperation )
              {
                v23 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v23, *((_QWORD *)&v24 + 1));
              v7 = KeWaitForMultipleObjects(Count, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
              EnterCrit(0LL, 1LL);
              v27 = 0;
              if ( !v7 )
              {
                if ( (unsigned int)xxxRemoveQueueCompletion() )
                {
                  v26 = 3LL;
                  LOBYTE(v26) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 8) != 0;
                  if ( ((unsigned __int8)v26 & ((v10 & 8) != 0)) == 0 )
                    v27 = 1;
                }
              }
              if ( v7 == 1 )
                break;
              if ( !v27 )
              {
                v28 = 0;
                goto LABEL_45;
              }
            }
            if ( v21 )
              break;
            if ( gfShellFrameHangResilient )
            {
              *(_DWORD *)a5 = 2;
              v44[0] = -100000LL;
            }
          }
          v38 = (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                 - v25) >= 0x10
              ? ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - v25
              : 16;
          v26 = -10000LL * v38;
          if ( v26 <= Timeout->QuadPart )
            break;
          Timeout->QuadPart -= v26;
          gfAppWaitingForLLHookSignal = 0;
          xxxComputeInputSinkInfo();
        }
        v7 = 258;
        v28 = 1;
LABEL_45:
        if ( v21 )
        {
          gfMITWaitingForLLHook = 0;
          if ( gfAppWaitingForLLHookSignal )
          {
            WakeDIT(128LL);
            if ( !v28 )
              KeClearEvent(gpkeComputeInputSinkInfo);
          }
        }
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000) != 0 )
        {
          if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) )
            goto LABEL_52;
          EtwTraceSleepInputIdle(0LL, gptiCurrent);
          v39 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL);
          v31 = *(struct _KEVENT **)(v39 + 32);
          if ( v31 == (struct _KEVENT *)-1LL )
          {
            *(_QWORD *)(v39 + 32) = 0LL;
            goto LABEL_52;
          }
          if ( v31 )
LABEL_111:
            KeClearEvent(v31);
        }
        else
        {
          v29 = *(_QWORD *)(gptiCurrent + 400LL);
          if ( !*(_QWORD *)(v29 + 304) )
            *(_QWORD *)(v29 + 304) = gptiCurrent;
          if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 304LL) == gptiCurrent )
          {
            v30 = PsGetCurrentProcessWin32Process(v26);
            EtwTraceSleepInputIdle(0LL, gptiCurrent);
            v31 = *(struct _KEVENT **)(v30 + 16);
            if ( v31 == (struct _KEVENT *)-1LL )
            {
              *(_QWORD *)(v30 + 16) = 0LL;
              goto LABEL_52;
            }
            if ( v31 )
              goto LABEL_111;
          }
        }
LABEL_52:
        v9 = a5;
        v8 = v43;
        v5 = a3;
        a4 = v48;
      }
    }
  }
  ClientDeliverUserApc();
LABEL_54:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = v46;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
