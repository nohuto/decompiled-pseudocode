/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1400E3860
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueEx @ 0x140010EB0 (KeInsertQueueEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14055DE1C (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  _QWORD *v2; // rbx
  volatile signed __int64 *v3; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdx
  __int64 *v6; // rcx
  char v7; // di
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbx
  _QWORD **v14; // r13
  struct _KPRCB *CurrentPrcb; // r8
  _KTHREAD *CurrentThread; // rdi
  _QWORD *v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // r15
  __int64 v22; // rdi
  char v23; // cl
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  int v29; // edx
  _QWORD *v30; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v33; // rcx
  _DWORD v34[2]; // [rsp+30h] [rbp-19h] BYREF
  struct _KPRCB *v35; // [rsp+38h] [rbp-11h]
  PVOID Object; // [rsp+40h] [rbp-9h] BYREF
  __int64 v37; // [rsp+48h] [rbp-1h]
  __int64 v38; // [rsp+50h] [rbp+7h] BYREF
  volatile signed __int64 *v39; // [rsp+58h] [rbp+Fh]
  unsigned __int8 v40; // [rsp+60h] [rbp+17h]
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  NTSTATUS v42; // [rsp+B8h] [rbp+6Fh]
  int v43; // [rsp+C0h] [rbp+77h] BYREF
  int v44; // [rsp+C8h] [rbp+7Fh] BYREF

  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v2 = Object;
  v3 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v39 = v3;
  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v40 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38, v3);
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64(v3, (__int64)&v38);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)&v38, v5);
  }
  v6 = (__int64 *)v2[2];
  v7 = 0;
  if ( *((_BYTE *)v6 + 33) )
  {
    v42 = 128;
  }
  else
  {
    v8 = *((_DWORD *)v6 + 6);
    if ( v8 == -1 )
    {
      v42 = -1073741823;
    }
    else
    {
      *((_DWORD *)v6 + 6) = v8 + 1;
      v9 = v2[2];
      if ( !*(_BYTE *)(v9 + 32) )
      {
        *(_BYTE *)(v9 + 32) = 1;
        v7 = 1;
      }
      v42 = 0;
      if ( v7 )
      {
        v6 = (__int64 *)Object;
        if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(Object);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
    goto LABEL_15;
  }
  _m_prefetchw(&v38);
  v10 = v38;
  if ( v38 )
    goto LABEL_50;
  v6 = &v38;
  if ( (__int64 *)_InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38) != &v38 )
  {
    v10 = KxWaitForLockChainValid(&v38);
LABEL_50:
    v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_15:
  __writecr8(v40);
  if ( v7 )
  {
    v11 = v2[2];
    v12 = *(_QWORD *)(v11 + 16);
    v13 = *(_QWORD *)(v11 + 8);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 24) = 0LL;
      v14 = (_QWORD **)(v13 + 8);
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0LL;
      v37 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = CurrentPrcb;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v12, IsThreadRunning);
        CurrentPrcb = v35;
      }
      v43 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v43);
          while ( (*(_DWORD *)v13 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) );
        CurrentPrcb = v35;
      }
      v34[1] = *(_DWORD *)(v13 + 4);
      if ( *v14 != v14
        && *(_DWORD *)(v13 + 40) < *(_DWORD *)(v13 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v13 || CurrentThread->WaitReason != 15) )
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
          v21 = 0;
          *(_QWORD *)(v19 + 8) = v20;
          v22 = v18[3];
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v44);
            while ( *(_QWORD *)(v22 + 64) );
          }
          if ( *(_BYTE *)(v22 + 388) == 5 )
          {
            v23 = *(_BYTE *)(v22 + 112);
            v21 = 0;
            v24 = v23 & 7;
            if ( v24 == 1 || v24 == 4 )
            {
              v25 = *(_QWORD *)(v22 + 232);
              if ( v25 )
              {
                if ( (*(_BYTE *)v25 & 0x7F) == 0x15 )
                {
                  v33 = (unsigned __int8)*(_DWORD *)(v22 + 540);
                  *(_DWORD *)(v22 + 540) = v33;
                  _InterlockedIncrement((volatile signed __int32 *)(v25 + 4 * v33 + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v25 + 40));
                }
              }
              v26 = *(_QWORD *)(v22 + 712);
              if ( v26 )
              {
                v34[0] = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 22800), 0LL) )
                {
                  do
                    KeYieldProcessorEx(v34);
                  while ( *(_QWORD *)(v26 + 22800) );
                }
                if ( *(_QWORD *)(v22 + 712) )
                {
                  v27 = *(_QWORD *)(v22 + 216);
                  v28 = *(_QWORD **)(v22 + 224);
                  if ( *(_QWORD *)(v27 + 8) != v22 + 216 || *v28 != v22 + 216 )
                    __fastfail(3u);
                  *v28 = v27;
                  *(_QWORD *)(v27 + 8) = v28;
                  *(_QWORD *)(v22 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v26 + 22800), 0LL);
              }
              CurrentPrcb = v35;
              *(_BYTE *)(v22 + 388) = 7;
              v21 = 1;
              *(_QWORD *)(v22 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
              CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v22 + 216);
              *(_QWORD *)(v22 + 200) = v12;
              goto LABEL_44;
            }
            if ( (*(_BYTE *)(v22 + 112) & 7) != 0 )
            {
              if ( v24 != 5 )
              {
                CurrentPrcb = v35;
                if ( v24 == 3 )
                  *((_BYTE *)v18 + 17) = 2;
                goto LABEL_44;
              }
              *(_BYTE *)(v22 + 112) = v23 & 0xF8 | 6;
            }
            else
            {
              v21 = 1;
              *(_BYTE *)(v22 + 112) = v23 & 0xF8 | 2;
              *(_QWORD *)(v22 + 200) = v12;
              *((_BYTE *)v18 + 17) = 0;
            }
          }
          CurrentPrcb = v35;
LABEL_44:
          *(_QWORD *)(v22 + 64) = 0LL;
          ++*((_BYTE *)v18 + 17);
          if ( v21 )
            goto LABEL_45;
        }
        while ( v17 != v14 );
      }
      v29 = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = v29 + 1;
      v30 = *(_QWORD **)(v13 + 32);
      if ( *v30 != v13 + 24 )
        __fastfail(3u);
      *(_QWORD *)v12 = v13 + 24;
      *(_QWORD *)(v12 + 8) = v30;
      *v30 = v12;
      *(_QWORD *)(v13 + 32) = v12;
      if ( !v29 && *v14 != v14 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v13);
LABEL_45:
      _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v35, 0, 1LL, 0LL, v37);
    }
    else
    {
      LOBYTE(v6) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v6, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v13, (_QWORD *)MiniCompletionPacket, 0, 0);
      }
    }
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v42;
}
