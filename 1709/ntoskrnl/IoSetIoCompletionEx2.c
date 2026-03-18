/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400759E0
 * Callers:
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14006B170 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14006B320 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IoSetIoCompletionEx @ 0x1400765E0 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     ExpShutdownWorkerFactory @ 0x1400E3A58 (ExpShutdownWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011DF30 (AlpcpQueueIoCompletionPort.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IoSetIoCompletion @ 0x14050AFA0 (IoSetIoCompletion.c)
 *     NtSetIoCompletion @ 0x14056FB50 (NtSetIoCompletion.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiRemovePrcbWaitEntry @ 0x1400762E0 (KiRemovePrcbWaitEntry.c)
 *     KiIncrementConcurrencyCount @ 0x140076388 (KiIncrementConcurrencyCount.c)
 *     KeInsertQueueEx @ 0x140110C00 (KeInsertQueueEx.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404EBA2C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  unsigned int v8; // esi
  __int64 v12; // rbx
  _QWORD **v13; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r13
  char v22; // cl
  int v23; // eax
  __int64 v24; // rcx
  int v26; // edx
  _QWORD *v27; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  int v30; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v31[3]; // [rsp+34h] [rbp-44h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-38h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-30h]

  v8 = 0;
  v12 = a1;
  if ( a7 )
  {
    v13 = (_QWORD **)(a1 + 8);
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    v30 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( (*(_DWORD *)v12 & 0x80u) != 0 );
    }
    v31[1] = *(_DWORD *)(v12 + 4);
    if ( *v13 != v13
      && *(_DWORD *)(v12 + 40) < *(_DWORD *)(v12 + 44)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v12 || CurrentThread->WaitReason != 15) )
    {
      v16 = *v13;
      do
      {
        v17 = v16;
        v18 = (_QWORD *)*v16;
        v32 = v18;
        if ( *((_BYTE *)v17 + 16) != 3 )
          break;
        v19 = *v17;
        v20 = (_QWORD *)v17[1];
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v20 != v17 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = v17[3];
        v31[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(v31);
          while ( *(_QWORD *)(v21 + 64) );
        }
        if ( *(_BYTE *)(v21 + 388) == 5 )
        {
          v22 = *(_BYTE *)(v21 + 112);
          LOBYTE(v18) = 0;
          v23 = v22 & 7;
          if ( v23 == 1 || v23 == 4 )
          {
            v24 = *(_QWORD *)(v21 + 232);
            if ( v24 )
              KiIncrementConcurrencyCount(v24, v21);
            KiRemovePrcbWaitEntry(v21, v18);
            *(_BYTE *)(v21 + 388) = 7;
            LOBYTE(v18) = 1;
            *(_QWORD *)(v21 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
            CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v21 + 216);
            *(_QWORD *)(v21 + 200) = a7;
          }
          else if ( (*(_BYTE *)(v21 + 112) & 7) != 0 )
          {
            if ( v23 == 5 )
            {
              *(_BYTE *)(v21 + 112) = v22 & 0xF8 | 6;
            }
            else if ( v23 == 3 )
            {
              *((_BYTE *)v17 + 17) = 2;
            }
          }
          else
          {
            LOBYTE(v18) = 1;
            *(_BYTE *)(v21 + 112) = v22 & 0xF8 | 2;
            *(_QWORD *)(v21 + 200) = a7;
            *((_BYTE *)v17 + 17) = 0;
          }
        }
        else
        {
          LOBYTE(v18) = 0;
        }
        *(_QWORD *)(v21 + 64) = 0LL;
        ++*((_BYTE *)v17 + 17);
        if ( (_BYTE)v18 )
          goto LABEL_20;
        v16 = v32;
      }
      while ( v32 != v13 );
    }
    v26 = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v12 + 4) = v26 + 1;
    v27 = *(_QWORD **)(v12 + 32);
    if ( *v27 != v12 + 24 )
      __fastfail(3u);
    *(_QWORD *)a7 = v12 + 24;
    *(_QWORD *)(a7 + 8) = v27;
    *v27 = a7;
    *(_QWORD *)(v12 + 32) = a7;
    if ( !v26 && *v13 != v13 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v12);
LABEL_20:
    _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, a8 != 0 ? 3 : 0, 1u, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    if ( MiniCompletionPacket )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      KeInsertQueueEx(v12, MiniCompletionPacket, 0LL, a8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
