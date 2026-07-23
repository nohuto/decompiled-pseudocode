/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1400E8090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14002F0FC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x140030880 (ExpWorkerFactoryWantsToCreate.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400402CC (AlpcpQueueIoCompletionPort.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeRegisterObjectNotification @ 0x14012A4E8 (KeRegisterObjectNotification.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140428F60 (ObpHandleRevocationBlockRemoveObject.c)
 *     AlpciDestroyDeferredMessageContext @ 0x14042C1F0 (AlpciDestroyDeferredMessageContext.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x140520990 (ObpRemoveObjectRoutine.c)
 *     NtAlpcSendWaitReceivePort @ 0x140522360 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpDeregisterObject @ 0x1406C2688 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r12d
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  int v10; // r15d
  char *v11; // r14
  unsigned __int64 *volatile *v12; // r13
  unsigned __int64 *v13; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v15; // rdx
  _DWORD *v16; // rdx
  unsigned __int8 v17; // di
  _KSPIN_LOCK_QUEUE *volatile v18; // rax
  volatile __int64 *v19; // r8
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdx
  int *v22; // rdx
  struct _KTHREAD *v23; // r12
  unsigned int v24; // ecx
  _QWORD *v25; // rdi
  struct _KTHREAD **v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  PVOID *v29; // rdi
  unsigned __int64 *volatile v30; // rdi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int64 v32; // rdi
  signed __int64 v33; // rsi
  bool v34; // cc
  signed __int64 v35; // rsi
  ULONG v37; // r15d
  HANDLE v38; // rdi
  struct _KTHREAD *v39; // rax
  unsigned int v40; // r15d
  NTSTATUS v41; // eax
  PVOID v42; // rdi
  __int64 v43; // r9
  char *v44; // r14
  ULONG_PTR v45; // r9
  struct _KPRCB *CurrentPrcb; // r10
  int v47; // eax
  int v48; // ecx
  char *v49; // rax
  __int64 v50; // r15
  char *v51; // rcx
  char **v52; // rax
  char v53; // al
  __int64 v54; // rdi
  char v55; // cl
  int v56; // eax
  char v57; // dl
  __int64 v58; // rdx
  ULONG *v59; // rax
  ULONG *v60; // r14
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  bool v63; // zf
  struct _KTHREAD *v64; // rcx
  __int16 v65; // ax
  int v66; // r8d
  void *v67; // rdi
  bool v68; // al
  __int64 v69; // rcx
  struct _KEVENT *v70; // rcx
  ULONG_PTR v71; // rcx
  struct _KTHREAD *v72; // rdi
  ULONG_PTR SessionId; // r9
  __int64 v74; // rdx
  ULONG_PTR v75; // r10
  unsigned int v76; // r11d
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  unsigned __int8 v80; // al
  __int16 v81; // ax
  __int64 v82; // rdi
  ULONG *v83; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v85; // r9
  _QWORD *v86; // rcx
  char v87; // al
  int v88; // r8d
  __int64 *v89; // rdx
  __int64 v90; // rax
  int HandleInformation; // [rsp+28h] [rbp-210h]
  int Timeout; // [rsp+38h] [rbp-200h]
  unsigned __int8 v93; // [rsp+41h] [rbp-1F7h]
  signed __int32 v94; // [rsp+48h] [rbp-1F0h]
  struct _KPRCB *v95; // [rsp+48h] [rbp-1F0h]
  BOOL v96; // [rsp+48h] [rbp-1F0h]
  PVOID Object; // [rsp+50h] [rbp-1E8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v99; // [rsp+70h] [rbp-1C8h]
  __int64 v100; // [rsp+78h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-1B8h]
  int v102; // [rsp+88h] [rbp-1B0h] BYREF
  ULONG v103; // [rsp+8Ch] [rbp-1ACh] BYREF
  unsigned int *v104; // [rsp+90h] [rbp-1A8h]
  PVOID v105; // [rsp+98h] [rbp-1A0h] BYREF
  _DWORD *v106; // [rsp+A0h] [rbp-198h]
  PVOID P; // [rsp+A8h] [rbp-190h]
  ULONG_PTR v108; // [rsp+B0h] [rbp-188h]
  _DWORD *v109; // [rsp+B8h] [rbp-180h]
  PVOID v110; // [rsp+C0h] [rbp-178h] BYREF
  PVOID v111; // [rsp+C8h] [rbp-170h]
  HANDLE Handle[2]; // [rsp+D0h] [rbp-168h]
  ULONG Flags[2]; // [rsp+E0h] [rbp-158h]
  int v114; // [rsp+E8h] [rbp-150h]
  int v115; // [rsp+ECh] [rbp-14Ch] BYREF
  int v116; // [rsp+F0h] [rbp-148h] BYREF
  int v117; // [rsp+F4h] [rbp-144h] BYREF
  PULONG v118; // [rsp+F8h] [rbp-140h]
  char *v119; // [rsp+100h] [rbp-138h]
  PFILE_IO_COMPLETION_INFORMATION v120; // [rsp+108h] [rbp-130h]
  char *v121; // [rsp+110h] [rbp-128h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-120h]
  PVOID v123[10]; // [rsp+120h] [rbp-118h] BYREF
  _BYTE v124[128]; // [rsp+170h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+238h] [rbp+0h]

  v118 = PacketsReturned;
  v6 = Count;
  v120 = MiniPackets;
  v109 = WorkerFactoryHandle;
  v100 = (__int64)MiniPackets;
  v99 = PacketsReturned;
  v103 = 0;
  v108 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v93 = PreviousMode;
  P = v124;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v9 = (__int64)PacketsReturned;
    if ( (unsigned __int64)PacketsReturned >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  v10 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v11 = (char *)Object;
  v108 = (ULONG_PTR)Object;
  if ( v10 >= 0 )
  {
    if ( v6 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
      if ( !P )
      {
        v6 = 16;
        P = v124;
      }
    }
    v12 = (unsigned __int64 *volatile *)(v11 + 16);
    v13 = (unsigned __int64 *)*((_QWORD *)v11 + 2);
    LockHandle.LockQueue.Lock = v13;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v13);
    }
    else
    {
      v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v13, (__int64)&LockHandle);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v15);
      v11 = (char *)Object;
    }
    if ( *((_BYTE *)*v12 + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v10 = 128;
      goto LABEL_54;
    }
    v104 = (unsigned int *)(v11 + 152);
    if ( (*((_DWORD *)v11 + 38) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(v11);
    ++*((_DWORD *)*v12 + 7);
    v16 = v11 + 128;
    v106 = v11 + 128;
    v109 = v11 + 124;
    v17 = v93;
    while ( 1 )
    {
      if ( *v109 < *v16 || *((_BYTE *)*v12 + 33) )
      {
        v10 = 258;
LABEL_37:
        --*((_DWORD *)*v12 + 7);
        if ( v10 == 258 )
        {
          --*v16;
          --*((_DWORD *)v11 + 33);
          ExpRemoveCurrentThreadFromThreadHistory((__int64)v11);
LABEL_115:
          v22 = (int *)v104;
        }
        else
        {
          v22 = (int *)v104;
          if ( (*v104 & 7) != 4 )
          {
            v23 = KeGetCurrentThread();
            v24 = 0;
            v11 = (char *)Object;
            v25 = (char *)Object + 72;
            v26 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v26 != v23 )
            {
              ++v24;
              ++v26;
              if ( v24 >= 4 )
              {
                ObfReferenceObjectWithTag(v23, 0x746C6644u);
                v27 = 0LL;
                while ( *v25 )
                {
                  v27 = (unsigned int)(v27 + 1);
                  ++v25;
                  if ( (unsigned int)v27 >= 4 )
                  {
                    v28 = *v104 & 7;
                    v29 = (PVOID *)&v11[8 * v28];
                    ObfDereferenceObjectWithTag(v29[9], 0x746C6644u);
                    v29[9] = v23;
                    v22 = (int *)v104;
                    *v104 = *v104 & 0xFFFFFFF8 | ((_BYTE)v28 + 1) & 3;
                    goto LABEL_46;
                  }
                }
                *(_QWORD *)&v11[8 * v27 + 72] = v23;
                goto LABEL_115;
              }
            }
          }
        }
LABEL_46:
        v30 = *v12;
        if ( *v106 < *v109 && !*((_DWORD *)v30 + 7) )
        {
          if ( !*((_DWORD *)v11 + 37) || (v66 = *v22 | 0x200, *v22 = v66, *(_DWORD *)(v30[1] + 4)) )
          {
            ExpWorkerFactoryCheckCreate((__int64)v11, &LockHandle, 0);
LABEL_52:
            if ( !v10 )
              *v118 = v103;
            goto LABEL_54;
          }
          if ( (v66 & 0x400) == 0 )
          {
            *v22 = v66 | 0x400;
            ObfReferenceObjectWithTag(v11, 0x746C6644u);
            KeRegisterObjectNotification(v30[1], &ExpWorkerFactoryManagerQueue, v11 + 360);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_51;
        }
        _m_prefetchw(&LockHandle);
        Next = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_51:
            __writecr8(LockHandle.OldIrql);
            goto LABEL_52;
          }
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        goto LABEL_51;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        break;
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_28:
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) == 0 )
        goto LABEL_29;
      v119 = (char *)Handle[0];
      v37 = Flags[0];
      v38 = Handle[1];
      memset(v123, 0, 0x40uLL);
      v39 = KeGetCurrentThread();
      --v39->KernelApcDisable;
      v110 = 0LL;
      v111 = 0LL;
      v40 = v37 & 0xFFFF0000;
      v41 = ObReferenceObjectByHandle(v38, 1u, AlpcPortObjectType, v93, &v105, 0LL);
      v42 = v105;
      v123[8] = v105;
      if ( v41 >= 0 )
      {
        if ( (v40 & 0x40000) != 0 )
        {
          v94 = _InterlockedIncrement((volatile signed __int32 *)v105 + 101);
          v42 = v105;
          if ( *((_QWORD *)v105 + 51) )
          {
            BugCheckParameter2 = (ULONG_PTR)v105 + 352;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v105 + 352, 0LL);
            v70 = (struct _KEVENT *)*((_QWORD *)v42 + 51);
            if ( v70 && v94 == v70[1].Header.LockNV )
              KeSetEvent(v70, 0, 0);
            v71 = (ULONG_PTR)v42 + 352;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v71);
              v71 = BugCheckParameter2;
            }
            v102 = 0;
            v72 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v71) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx(v72->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v72->SpecialApcDisable;
            v96 = ++v72->AbAllocationRegionCount == 1;
            v74 = 0LL;
            v99 = 0LL;
            v75 = BugCheckParameter2;
            v100 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
            v76 = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
            v63 = !_BitScanReverse((unsigned int *)&v77, v76);
            v114 = v77;
            if ( !v63 )
            {
              while ( 1 )
              {
                v76 &= ~(1 << v77);
                v78 = (__int64)&v72->LockEntries[v77];
                if ( (*(_BYTE *)(v78 + 26) & 1) != 0
                  && (*(_DWORD *)(v78 + 32) & 1) == 0
                  && (*(_QWORD *)(v78 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v100
                  && *(_DWORD *)(v78 + 40) == (_DWORD)SessionId )
                {
                  *(_BYTE *)(v78 + 26) &= ~1u;
                  if ( *(_QWORD *)(v78 + 32) )
                    break;
                }
                v63 = !_BitScanReverse((unsigned int *)&v77, v76);
                v114 = v77;
                if ( v63 )
                  goto LABEL_159;
              }
              v74 = (__int64)&v72->LockEntries[v77];
              v99 = (PULONG)v74;
            }
LABEL_159:
            if ( v74 )
            {
              *(_BYTE *)(v74 + 32) |= 2u;
              if ( *(__int64 *)(v74 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v74, v74);
                v74 = (__int64)v99;
                v75 = BugCheckParameter2;
              }
              v102 = 0;
              v102 = *(_DWORD *)(v74 + 88) & 0x1FFFF;
              *(_DWORD *)(v74 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v74 + 25) &= ~1u;
              *(_QWORD *)(v74 + 32) = 0LL;
              v79 = (__int64)((unsigned __int128)((v74 - (__int64)v72 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
              v80 = 1 << ((v79 < 0) + v79);
              if ( v96 )
                v72->AbEntrySummary |= v80;
              else
                _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, v80);
            }
            else if ( (*((_DWORD *)&v72->0 + 1) & 0x8000) == 0 )
            {
              KeBugCheckEx(0x162u, (ULONG_PTR)v72, v75, SessionId, 0LL);
            }
            --v72->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v72, v75, &v102);
            v81 = v72->SpecialApcDisable + 1;
            v72->SpecialApcDisable = v81;
            if ( !v81 && ($69CD3F157F9F39B6F7113F2231989901 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
              KiCheckForKernelApcDelivery();
            v42 = v105;
          }
        }
        v123[0] = v42;
        LODWORD(v123[6]) = v40 | 4;
        memset(&v123[3], 0, 24);
        if ( (int)AlpcpSendMessage(v123, v119, 0LL, v93) < 0 )
        {
          ObfDereferenceObject(v123[0]);
        }
        else
        {
          v110 = v123[4];
          v111 = v123[0];
          if ( v123[4] )
          {
            if ( BYTE2(v123[7]) )
              AlpcpQueueIoCompletionPort((__int64)v123[4], SBYTE3(v123[7]), 1, 1);
            else
              KeReleaseSemaphoreEx(*((_QWORD *)v123[4] + 31), 1, 1, v43, 1);
          }
          else
          {
            v44 = (char *)v123[3];
            v119 = (char *)v123[3];
            if ( v123[3] )
            {
              v45 = KeGetCurrentIrql();
              BugCheckParameter2 = v45;
              __writecr8(2uLL);
              CurrentPrcb = KeGetCurrentPrcb();
              v95 = CurrentPrcb;
              v115 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v123[3] + 402, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v115);
                  while ( (*((_DWORD *)v44 + 402) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v44 + 402, 7u) );
                CurrentPrcb = v95;
                LOBYTE(v45) = BugCheckParameter2;
              }
              v47 = *((_DWORD *)v44 + 403);
              v48 = v47 + 1;
              if ( v47 + 1 > *((_DWORD *)v44 + 408) || v48 < v47 )
              {
                _InterlockedAnd((volatile signed __int32 *)v44 + 402, 0xFFFFFF7F);
                __writecr8((unsigned __int8)v45);
                RtlRaiseStatus(-1073741753);
              }
              *((_DWORD *)v44 + 403) = v48;
              if ( !v47 )
              {
                v49 = (char *)*((_QWORD *)v44 + 202);
                if ( v49 != v44 + 1616 )
                {
                  while ( 1 )
                  {
                    v50 = (__int64)v49;
                    v121 = *(char **)v49;
                    v51 = *(char **)v49;
                    v52 = (char **)*((_QWORD *)v49 + 1);
                    if ( *((_QWORD *)v51 + 1) != v50 || *v52 != (char *)v50 )
                      __fastfail(3u);
                    *v52 = v51;
                    *((_QWORD *)v51 + 1) = v52;
                    v53 = *(_BYTE *)(v50 + 16);
                    if ( v53 == 1 )
                    {
                      v100 = *(unsigned __int16 *)(v50 + 18);
                      v54 = *(_QWORD *)(v50 + 24);
                      v116 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 64), 0LL) )
                      {
                        do
                          KeYieldProcessorEx(&v116);
                        while ( *(_QWORD *)(v54 + 64) );
                      }
                      if ( *(_BYTE *)(v54 + 388) != 5 )
                      {
                        v57 = 0;
                        goto LABEL_135;
                      }
                      v55 = *(_BYTE *)(v54 + 112);
                      v56 = v55 & 7;
                      v57 = 0;
                      if ( v56 == 1 || v56 == 4 )
                      {
                        v58 = *(_QWORD *)(v54 + 232);
                        if ( v58 )
                        {
                          if ( (*(_BYTE *)v58 & 0x7F) == 0x15 )
                          {
                            v69 = (unsigned __int8)*(_DWORD *)(v54 + 540);
                            *(_DWORD *)(v54 + 540) = v69;
                            _InterlockedIncrement((volatile signed __int32 *)(v58 + 4 * v69 + 536));
                          }
                          else
                          {
                            _InterlockedIncrement((volatile signed __int32 *)(v58 + 40));
                          }
                        }
                        v59 = *(ULONG **)(v54 + 712);
                        v99 = v59;
                        if ( v59 )
                        {
                          v117 = 0;
                          v60 = v59;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)v60 + 5700, 0LL) )
                          {
                            do
                              KeYieldProcessorEx(&v117);
                            while ( *((_QWORD *)v60 + 2850) );
                          }
                          v44 = v119;
                          if ( *(_QWORD *)(v54 + 712) )
                          {
                            v61 = *(_QWORD *)(v54 + 216);
                            v62 = *(_QWORD **)(v54 + 224);
                            if ( *(_QWORD *)(v61 + 8) != v54 + 216 || *v62 != v54 + 216 )
                              __fastfail(3u);
                            *v62 = v61;
                            *(_QWORD *)(v61 + 8) = v62;
                            *(_QWORD *)(v54 + 712) = 0LL;
                          }
                          _InterlockedAnd64((volatile signed __int64 *)v99 + 2850, 0LL);
                        }
                        *(_BYTE *)(v54 + 388) = 7;
                        CurrentPrcb = v95;
                        *(_QWORD *)(v54 + 216) = v95->DeferredReadyListHead.Next;
                        v95->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v54 + 216);
                        *(_QWORD *)(v54 + 200) = v100;
                        v57 = 1;
                      }
                      else
                      {
                        if ( (*(_BYTE *)(v54 + 112) & 7) == 0 )
                        {
                          *(_BYTE *)(v54 + 112) = v55 & 0xF8 | 2;
                          *(_QWORD *)(v54 + 200) = v100;
                          v57 = 1;
                          *(_BYTE *)(v50 + 17) = 0;
                          goto LABEL_135;
                        }
                        if ( v56 == 5 )
                        {
                          *(_BYTE *)(v54 + 112) = v55 & 0xF8 | 6;
LABEL_135:
                          CurrentPrcb = v95;
                        }
                        else
                        {
                          CurrentPrcb = v95;
                          if ( v56 == 3 )
                            *(_BYTE *)(v50 + 17) = 2;
                        }
                      }
                      *(_QWORD *)(v54 + 64) = 0LL;
                      ++*(_BYTE *)(v50 + 17);
                      if ( v57 )
                      {
                        v63 = (*((_DWORD *)v44 + 403))-- == 1;
                        if ( v63 )
                          goto LABEL_95;
                      }
                      goto LABEL_200;
                    }
                    if ( v53 != 2 )
                    {
                      KiTryUnwaitThread((__int64)CurrentPrcb, v50, 256LL, 0LL);
                      CurrentPrcb = v95;
                      goto LABEL_200;
                    }
                    *(_BYTE *)(v50 + 17) = 5;
                    v82 = *(_QWORD *)(v50 + 24);
                    *(_QWORD *)v50 = 0LL;
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v100 = (__int64)KeGetCurrentPrcb();
                    v83 = *(ULONG **)(v100 + 8);
                    v99 = v83;
                    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                    {
                      IsThreadRunning = KeIsThreadRunning(v83);
                      EtwTraceEnqueueWork(v85, v50, IsThreadRunning);
                    }
                    KiAcquireKobjectLockSafe((volatile signed __int32 *)v82);
                    v86 = (_QWORD *)(v82 + 8);
                    if ( (_QWORD *)*v86 != v86 && *(_DWORD *)(v82 + 40) < *(_DWORD *)(v82 + 44) )
                    {
                      if ( *((_QWORD *)v99 + 29) != v82 || *((_BYTE *)v99 + 643) != 15 )
                      {
                        v87 = KiWakeQueueWaiter(v100, v82, v50);
                        v86 = (_QWORD *)(v82 + 8);
                        goto LABEL_192;
                      }
                      v86 = (_QWORD *)(v82 + 8);
                    }
                    v87 = 0;
LABEL_192:
                    if ( !v87 )
                    {
                      v88 = *(_DWORD *)(v82 + 4);
                      *(_DWORD *)(v82 + 4) = v88 + 1;
                      v89 = *(__int64 **)(v82 + 32);
                      if ( *v89 != v82 + 24 )
                        __fastfail(3u);
                      *(_QWORD *)v50 = v82 + 24;
                      *(_QWORD *)(v50 + 8) = v89;
                      *v89 = v50;
                      *(_QWORD *)(v82 + 32) = v50;
                      if ( !v88 && (_QWORD *)*v86 != v86 )
                        KiWakeOtherQueueWaiters(v100, v82);
                    }
                    _InterlockedAnd((volatile signed __int32 *)v82, 0xFFFFFF7F);
                    v63 = (*((_DWORD *)v44 + 403))-- == 1;
                    CurrentPrcb = v95;
                    if ( v63 )
                    {
LABEL_95:
                      LOBYTE(v45) = BugCheckParameter2;
                      break;
                    }
LABEL_200:
                    v49 = v121;
                    if ( v121 == v44 + 1616 )
                      goto LABEL_95;
                  }
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v44 + 402, 0xFFFFFF7F);
              KiExitDispatcher((__int64)CurrentPrcb, 1, 1LL, 1LL, v45);
            }
            else if ( v123[5] )
            {
              v67 = (void *)((unsigned __int64)v123[5] & 0xFFFFFFFFFFFFFFFEuLL);
              KeSetEvent((PRKEVENT)((unsigned __int64)v123[5] & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
              if ( ((__int64)v123[5] & 1) != 0 )
                ObfDereferenceObject(v67);
              v123[5] = 0LL;
            }
          }
        }
      }
      v64 = KeGetCurrentThread();
      v65 = v64->KernelApcDisable + 1;
      v64->KernelApcDisable = v65;
      if ( !v65
        && ($69CD3F157F9F39B6F7113F2231989901 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
        && !v64->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v17 = v93;
      v11 = (char *)Object;
LABEL_29:
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v17;
      v10 = IoRemoveIoCompletion(*((_QWORD *)*v12 + 1), v120, P, v6, &v103, HandleInformation, 0LL, Timeout);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v110);
        Flags[1] &= ~1u;
      }
      v19 = (volatile __int64 *)*v12;
      LockHandle.LockQueue.Lock = *v12;
      LockHandle.LockQueue.Next = 0LL;
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v20;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v19);
      }
      else
      {
        v21 = (_QWORD *)_InterlockedExchange64(v19, (__int64)&LockHandle);
        if ( v21 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v21);
        v11 = (char *)Object;
      }
      if ( v10 != 258 )
      {
        v16 = v106;
        goto LABEL_37;
      }
      v68 = ExpWorkerFactoryWantsToCreate((__int64)v11, 1);
      v16 = v106;
      if ( !v68 && *v106 > *((_DWORD *)v11 + 30) && CurrentThread[1].FirstArgument == &CurrentThread[1].FirstArgument )
        goto LABEL_37;
    }
    _m_prefetchw(&LockHandle);
    v18 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_27:
        v11 = (char *)Object;
        goto LABEL_28;
      }
      v18 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v18->Lock, 1uLL);
    goto LABEL_27;
  }
LABEL_54:
  if ( P != v124 )
    ExFreePoolWithTag(P, 0);
  if ( v108 )
  {
    v32 = v108 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v108 - 48);
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
    v34 = v33 <= 1;
    v35 = v33 - 1;
    if ( v34 )
    {
      if ( *(_QWORD *)(v32 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)],
          v108,
          1uLL,
          *(_QWORD *)(v32 + 8));
      if ( v35 < 0 )
        KeBugCheckEx(0x18u, 0LL, v108, 2uLL, v35);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v32);
      }
      else
      {
        v90 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v32);
        if ( v90 )
          ObpHandleRevocationBlockRemoveObject(v90);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v32);
        ObpRemoveObjectRoutine(v32, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v10;
}
