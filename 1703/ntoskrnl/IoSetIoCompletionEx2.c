/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400E2780
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x1400402CC (AlpcpQueueIoCompletionPort.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpShutdownWorkerFactory @ 0x14012AB80 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetIoCompletion @ 0x14043E664 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x140459F30 (IoSetIoCompletion.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14055DE1C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  unsigned int v8; // edi
  __int64 v12; // rbx
  char v13; // r14
  _QWORD **v14; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _KTHREAD *CurrentThread; // rbp
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbp
  char v22; // dl
  __int64 v23; // rsi
  char v24; // cl
  __int64 MiniCompletionPacket; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // r14
  unsigned __int8 v29; // r12
  struct _KPRCB *v30; // r13
  int v31; // edx
  _QWORD *v32; // rcx
  char v33; // cl
  int v34; // edx
  _QWORD *v35; // rcx
  unsigned __int8 v36; // al
  __int64 v37; // r9
  unsigned __int8 IsThreadRunning; // al
  char v39; // [rsp+30h] [rbp-48h]
  int v40; // [rsp+34h] [rbp-44h] BYREF
  _DWORD v41[2]; // [rsp+38h] [rbp-40h] BYREF
  struct _KPRCB *v42; // [rsp+40h] [rbp-38h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-30h]
  _KTHREAD *v44; // [rsp+B0h] [rbp+38h]

  v8 = 0;
  v12 = a1;
  if ( a7 )
  {
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
    if ( a8 )
    {
      v13 = 1;
      v39 = 1;
    }
    else
    {
      v13 = 0;
      v39 = 0;
    }
    v14 = (_QWORD **)(a1 + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    v40 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( (*(_DWORD *)v12 & 0x80u) != 0 );
    }
    v41[1] = *(_DWORD *)(v12 + 4);
    if ( *v14 != v14
      && *(_DWORD *)(v12 + 40) < *(_DWORD *)(v12 + 44)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v12 || CurrentThread->WaitReason != 15) )
    {
      v17 = *v14;
      do
      {
        v18 = v17;
        v17 = (_QWORD *)*v17;
        if ( *((_BYTE *)v18 + 16) != 3 )
          break;
        v19 = *v18;
        v20 = (_QWORD *)v18[1];
        if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = v18[3];
        v41[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(v41);
          while ( *(_QWORD *)(v21 + 64) );
        }
        if ( *(_BYTE *)(v21 + 388) == 5 )
          v22 = KiSignalThread(v42, v21, a7, v18);
        else
          v22 = 0;
        *(_QWORD *)(v21 + 64) = 0LL;
        ++*((_BYTE *)v18 + 17);
        if ( v22 )
        {
          v13 = v39;
          goto LABEL_20;
        }
      }
      while ( v17 != v14 );
      v13 = v39;
    }
    v34 = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v12 + 4) = v34 + 1;
    v35 = *(_QWORD **)(v12 + 32);
    if ( *v35 != v12 + 24 )
      __fastfail(3u);
    *(_QWORD *)a7 = v12 + 24;
    *(_QWORD *)(a7 + 8) = v35;
    *v35 = a7;
    *(_QWORD *)(v12 + 32) = a7;
    if ( v34 )
    {
LABEL_20:
      v23 = (__int64)v42;
    }
    else
    {
      v23 = (__int64)v42;
      if ( *v14 != v14 )
        KiWakeOtherQueueWaiters((__int64)v42, v12);
    }
    _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    if ( (v13 & 1) != 0 )
      v24 = 3;
    else
      v24 = 0;
    KiExitDispatcher(v23, v24, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    v27 = (_QWORD *)MiniCompletionPacket;
    if ( MiniCompletionPacket )
    {
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      v28 = (_QWORD *)(v12 + 8);
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v30 = KeGetCurrentPrcb();
      v44 = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v36 = KeIsThreadRunning(v30->CurrentThread);
        EtwTraceEnqueueWork(v37, v27, v36);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v12);
      if ( (_QWORD *)*v28 == v28
        || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44)
        || v44->Queue == (_DISPATCHER_HEADER *volatile)v12 && v44->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v30, v12, (__int64)v27) )
      {
        v31 = *(_DWORD *)(v12 + 4);
        *(_DWORD *)(v12 + 4) = v31 + 1;
        v32 = *(_QWORD **)(v12 + 32);
        if ( *v32 != v12 + 24 )
          __fastfail(3u);
        *v27 = v12 + 24;
        v27[1] = v32;
        *v32 = v27;
        *(_QWORD *)(v12 + 32) = v27;
        if ( !v31 && (_QWORD *)*v28 != v28 )
          KiWakeOtherQueueWaiters((__int64)v30, v12);
      }
      _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
      if ( a8 )
        v33 = 3;
      else
        v33 = 0;
      KiExitDispatcher((__int64)v30, v33, 1LL, 0LL, v29);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
