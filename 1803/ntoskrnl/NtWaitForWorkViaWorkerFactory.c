/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1400F4000
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KeRegisterObjectNotification @ 0x140085E90 (KeRegisterObjectNotification.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400AA020 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400C4720 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x1400C5AA8 (ExpWorkerFactoryWantsToCreate.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140552910 (ObpHandleRevocationBlockRemoveObject.c)
 *     AlpciDestroyDeferredMessageContext @ 0x140554700 (AlpciDestroyDeferredMessageContext.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObpRemoveObjectRoutine @ 0x14059C950 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14075A4D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r12d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // r14d
  PVOID v12; // r13
  unsigned __int64 *v13; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // r15
  _DWORD *v20; // rcx
  _DWORD *v21; // rdi
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int8 v25; // r14
  unsigned __int64 *v26; // r10
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  _QWORD *v30; // rdx
  int *v31; // r8
  struct _KTHREAD *v32; // r12
  unsigned int v33; // ecx
  _QWORD *v34; // rdi
  struct _KTHREAD **v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  PVOID *v38; // rdi
  __int64 v39; // rdi
  __int64 Next; // rax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  signed __int64 v43; // rdi
  signed __int64 v44; // rsi
  bool v45; // cc
  signed __int64 v46; // rsi
  ULONG v48; // r15d
  HANDLE v49; // rdi
  struct _KTHREAD *v50; // rax
  unsigned int v51; // r15d
  signed __int32 v52; // edi
  PVOID v53; // rax
  __int64 v54; // r9
  char *v55; // r15
  int v56; // eax
  int v57; // ecx
  char *v58; // r8
  void **v59; // rax
  void **v60; // rcx
  char v61; // al
  __int64 v62; // rdi
  struct _KPRCB *v63; // rdx
  _DWORD *v64; // rcx
  struct _KPRCB *v65; // r14
  char v66; // cl
  int v67; // eax
  char v68; // r11
  __int64 v69; // rcx
  struct _KPRCB *v70; // rdx
  _DWORD *v71; // rcx
  struct _KPRCB *v72; // r14
  struct _KPRCB *v73; // r15
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  struct _KPRCB *v78; // r9
  ULONG_PTR v79; // r10
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  bool v82; // zf
  struct _KTHREAD *v83; // rcx
  int v84; // edx
  void *v85; // rdi
  bool v86; // al
  __int64 v87; // rdx
  __int64 v88; // rdx
  int v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  struct _KEVENT *v94; // rcx
  ULONG_PTR v95; // rcx
  struct _KTHREAD *v96; // rdi
  __int64 v97; // rdx
  ULONG_PTR SessionId; // r9
  __int64 v99; // r8
  ULONG_PTR v100; // r10
  unsigned int v101; // r11d
  __int64 v102; // rcx
  unsigned __int8 v103; // al
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  __int64 v108; // rdi
  struct _KPRCB *v109; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v111; // r9
  __int64 v112; // r10
  _QWORD *v113; // r9
  __int64 v114; // rcx
  _QWORD *v115; // rdi
  char v116; // al
  int v117; // r8d
  _QWORD *v118; // rdx
  int v119; // eax
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  int HandleInformation; // [rsp+28h] [rbp-220h]
  int Timeout; // [rsp+38h] [rbp-210h]
  unsigned __int8 v127; // [rsp+40h] [rbp-208h]
  unsigned __int8 v128; // [rsp+41h] [rbp-207h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-200h]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-200h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-1F8h] BYREF
  struct _KPRCB *v132; // [rsp+68h] [rbp-1E0h]
  __int64 v133; // [rsp+70h] [rbp-1D8h]
  struct _KPRCB *v134; // [rsp+78h] [rbp-1D0h]
  int v135; // [rsp+80h] [rbp-1C8h] BYREF
  ULONG v136; // [rsp+84h] [rbp-1C4h] BYREF
  __int64 v137; // [rsp+88h] [rbp-1C0h]
  PVOID v138; // [rsp+90h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+98h] [rbp-1B0h] BYREF
  unsigned int *v140; // [rsp+A0h] [rbp-1A8h]
  _DWORD *v141; // [rsp+A8h] [rbp-1A0h]
  _DWORD *v142; // [rsp+B0h] [rbp-198h]
  PVOID P; // [rsp+B8h] [rbp-190h]
  ULONG_PTR v144; // [rsp+C0h] [rbp-188h]
  PVOID v145; // [rsp+C8h] [rbp-180h] BYREF
  PVOID v146; // [rsp+D0h] [rbp-178h]
  HANDLE Handle[2]; // [rsp+D8h] [rbp-170h]
  ULONG Flags[2]; // [rsp+E8h] [rbp-160h]
  int v149; // [rsp+F0h] [rbp-158h]
  int v150; // [rsp+F4h] [rbp-154h] BYREF
  int v151; // [rsp+F8h] [rbp-150h] BYREF
  int v152; // [rsp+FCh] [rbp-14Ch] BYREF
  PULONG v153; // [rsp+100h] [rbp-148h]
  struct _KPRCB *v154; // [rsp+108h] [rbp-140h]
  PFILE_IO_COMPLETION_INFORMATION v155; // [rsp+110h] [rbp-138h]
  char *v156; // [rsp+118h] [rbp-130h]
  _QWORD *v157; // [rsp+120h] [rbp-128h]
  char *v158; // [rsp+128h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-118h]
  PVOID v160[8]; // [rsp+140h] [rbp-108h] BYREF
  _BYTE v161[128]; // [rsp+180h] [rbp-C8h] BYREF
  _UNKNOWN *retaddr; // [rsp+248h] [rbp+0h]

  v153 = PacketsReturned;
  v6 = Count;
  v155 = MiniPackets;
  v137 = (__int64)WorkerFactoryHandle;
  v133 = (__int64)MiniPackets;
  v134 = (struct _KPRCB *)PacketsReturned;
  v136 = 0;
  v144 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v128 = PreviousMode;
  P = v161;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v11 = -1073741811;
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
  v11 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v144 = (ULONG_PTR)Object;
  if ( v11 >= 0 )
  {
    if ( v6 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
      if ( !P )
      {
        v6 = 16;
        P = v161;
      }
    }
    v13 = (unsigned __int64 *)*((_QWORD *)v12 + 2);
    LockHandle.LockQueue.Lock = v13;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v89 = SchedulerAssist[5];
        SchedulerAssist[5] = v89 + 1;
        if ( v89 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v13);
    }
    else
    {
      v17 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v13, (__int64)&LockHandle);
      if ( v17 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v17);
    }
    v18 = *((_QWORD *)v12 + 2);
    if ( *(_BYTE *)(v18 + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v11 = 128;
      goto LABEL_54;
    }
    v19 = Object;
    v140 = (unsigned int *)((char *)Object + 152);
    if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    {
      ExpLeaveWorkerFactoryAwayMode(Object);
      v18 = *((_QWORD *)v12 + 2);
    }
    ++*(_DWORD *)(v18 + 28);
    v20 = v19 + 31;
    v142 = v19 + 31;
    v21 = v19 + 32;
    v141 = v19 + 32;
    while ( 1 )
    {
      if ( *v20 < *v21 || *(_BYTE *)(*((_QWORD *)v12 + 2) + 33LL) )
      {
        v11 = 258;
LABEL_36:
        --*(_DWORD *)(*((_QWORD *)v12 + 2) + 28LL);
        if ( v11 == 258 )
        {
          --*v21;
          --v19[33];
          ExpRemoveCurrentThreadFromThreadHistory((__int64)v19);
          v31 = (int *)v140;
        }
        else
        {
          v31 = (int *)v140;
          if ( (*v140 & 7) != 4 )
          {
            v32 = KeGetCurrentThread();
            v33 = 0;
            v19 = Object;
            v34 = (char *)Object + 72;
            v35 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v35 != v32 )
            {
              ++v33;
              ++v35;
              if ( v33 >= 4 )
              {
                ObfReferenceObjectWithTag(v32, 0x746C6644u);
                v36 = 0LL;
                while ( *v34 )
                {
                  v36 = (unsigned int)(v36 + 1);
                  ++v34;
                  if ( (unsigned int)v36 >= 4 )
                  {
                    v37 = *v140 & 7;
                    v38 = (PVOID *)&v19[2 * v37];
                    ObfDereferenceObjectWithTag(v38[9], 0x746C6644u);
                    v38[9] = v32;
                    v31 = (int *)v140;
                    *v140 = *v140 & 0xFFFFFFF8 | ((_BYTE)v37 + 1) & 3;
                    goto LABEL_45;
                  }
                }
                *(_QWORD *)&v19[2 * v36 + 18] = v32;
                v31 = (int *)v140;
                break;
              }
            }
          }
        }
LABEL_45:
        v39 = *((_QWORD *)v12 + 2);
        if ( *v141 >= *v142 || *(_DWORD *)(v39 + 28) )
        {
LABEL_47:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_50;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
            {
LABEL_50:
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              if ( v42 )
              {
                if ( v41->NestingLevel <= 1u )
                {
                  v120 = v42[5] - 1;
                  v42[5] = v120;
                  if ( !v120 && !*((_BYTE *)v42 + 25) && !*((_BYTE *)v42 + 27) )
                    KiPerformUnboostKick(v41);
                }
              }
              __writecr8(LockHandle.OldIrql);
              goto LABEL_52;
            }
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_50;
        }
        if ( v19[37] )
        {
          v84 = *v31 | 0x200;
          *v31 = v84;
          if ( !*(_DWORD *)(*(_QWORD *)(v39 + 8) + 4LL) )
          {
            if ( (v84 & 0x400) == 0 )
            {
              *v31 = v84 | 0x400;
              ObfReferenceObjectWithTag(v19, 0x746C6644u);
              KeRegisterObjectNotification(
                *(_QWORD *)(v39 + 8),
                (__int64)&ExpWorkerFactoryManagerQueue,
                (__int64)(v19 + 90));
            }
            goto LABEL_47;
          }
        }
        ExpWorkerFactoryCheckCreate((char *)v19, (__int64)&LockHandle, 0LL, v10);
LABEL_52:
        if ( !v11 )
          *v153 = v136;
        goto LABEL_54;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_26;
      }
      _m_prefetchw(&LockHandle);
      v22 = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_115;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
        break;
LABEL_26:
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v90 = v24[5] - 1;
          v24[5] = v90;
          if ( !v90 && !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
            KiPerformUnboostKick(v23);
        }
      }
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) != 0 )
      {
        v133 = (__int64)Handle[0];
        v48 = Flags[0];
        v49 = Handle[1];
        memset(v160, 0, sizeof(v160));
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        v145 = 0LL;
        v146 = 0LL;
        v51 = v48 & 0xFFFF0000;
        v25 = v128;
        if ( ObReferenceObjectByHandle(v49, 1u, AlpcPortObjectType, v128, &v138, 0LL) >= 0 )
        {
          if ( (v51 & 0x40000) != 0 )
          {
            v52 = _InterlockedIncrement((volatile signed __int32 *)v138 + 101);
            v53 = v138;
            if ( !*((_QWORD *)v138 + 51) )
              goto LABEL_66;
            BugCheckParameter2a = (ULONG_PTR)v138 + 352;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v138 + 352, 0LL);
            v94 = (struct _KEVENT *)*((_QWORD *)v138 + 51);
            if ( v94 && v52 == v94[1].Header.LockNV )
              KeSetEvent(v94, 0, 0);
            v95 = BugCheckParameter2a;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a, v91, v92, v93);
              v95 = BugCheckParameter2a;
            }
            v135 = 0;
            v96 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v95) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v127 = ++v96->AbAllocationRegionCount;
            v99 = 0LL;
            v134 = 0LL;
            v100 = BugCheckParameter2a;
            v137 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
            v101 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v82 = !_BitScanReverse((unsigned int *)&v102, v101);
            v149 = v102;
            if ( !v82 )
            {
              while ( 1 )
              {
                v101 &= ~(1 << v102);
                v97 = (__int64)&v96->LockEntries[v102];
                if ( (*(_BYTE *)(v97 + 26) & 1) != 0
                  && (*(_DWORD *)(v97 + 32) & 1) == 0
                  && (*(_QWORD *)(v97 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v137
                  && *(_DWORD *)(v97 + 40) == (_DWORD)SessionId )
                {
                  *(_BYTE *)(v97 + 26) &= ~1u;
                  if ( *(_QWORD *)(v97 + 32) )
                    break;
                }
                v82 = !_BitScanReverse((unsigned int *)&v102, v101);
                v149 = v102;
                if ( v82 )
                  goto LABEL_172;
              }
              v99 = (__int64)&v96->LockEntries[v102];
              v134 = (struct _KPRCB *)v99;
            }
LABEL_172:
            if ( v99 )
            {
              *(_BYTE *)(v99 + 32) |= 2u;
              if ( *(__int64 *)(v99 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v99, v97);
                v99 = (__int64)v134;
                v100 = BugCheckParameter2a;
              }
              v135 = 0;
              v135 = *(_DWORD *)(v99 + 88) & 0x1FFFF;
              *(_DWORD *)(v99 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v99 + 25) &= ~1u;
              *(_QWORD *)(v99 + 32) = 0LL;
              v103 = 1 << ((v99 - (__int64)v96 - 800) / 96);
              if ( v127 == 1 )
                v96->AbEntrySummary |= v103;
              else
                _InterlockedOr8((volatile signed __int8 *)&v96->AbOrphanedEntrySummary, v103);
            }
            else if ( (*((_DWORD *)&v96->0 + 1) & 0x10000) == 0 )
            {
              KeBugCheckEx(0x162u, (ULONG_PTR)v96, BugCheckParameter2a, SessionId, 0LL);
            }
            --v96->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v96, v100, &v135);
            v82 = v96->SpecialApcDisable++ == -1;
            if ( v82 && ($005F0E83B22994B61E86C72E0CE43C71 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
              KiCheckForKernelApcDelivery();
          }
          v53 = v138;
LABEL_66:
          v160[0] = v53;
          LODWORD(v160[6]) = v51 | 4;
          memset(&v160[3], 0, 24);
          if ( (int)AlpcpSendMessage(v160, v133, 0LL, v128) < 0 )
          {
            ObfDereferenceObject(v160[0]);
          }
          else
          {
            v145 = v160[4];
            v146 = v160[0];
            if ( v160[4] )
            {
              if ( BYTE2(v160[7]) )
                AlpcpQueueIoCompletionPort((_QWORD *)v160[4], SBYTE3(v160[7]), 1, 1);
              else
                KeReleaseSemaphoreEx(*((_QWORD *)v160[4] + 31), 1, 1, v54, 1);
            }
            else
            {
              v55 = (char *)v160[3];
              v156 = (char *)v160[3];
              if ( v160[3] )
              {
                v137 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v134 = KeGetCurrentPrcb();
                v150 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)v160[3] + 402, 7u) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v150);
                    while ( (*((_DWORD *)v55 + 402) & 0x80u) != 0 );
                  }
                  while ( _interlockedbittestandset((volatile signed __int32 *)v55 + 402, 7u) );
                }
                v56 = *((_DWORD *)v55 + 403);
                v57 = v56 + 1;
                if ( v56 + 1 > *((_DWORD *)v55 + 408) || v57 < v56 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v55 + 402, 0xFFFFFF7F);
                  __writecr8((unsigned __int8)v137);
                  RtlRaiseStatus(-1073741753);
                }
                *((_DWORD *)v55 + 403) = v57;
                if ( !v56 )
                {
                  v58 = (char *)*((_QWORD *)v55 + 202);
                  if ( v58 != v55 + 1616 )
                  {
                    do
                    {
                      BugCheckParameter2 = (ULONG_PTR)v58;
                      v59 = *(void ***)v58;
                      v158 = (char *)v59;
                      v60 = (void **)*((_QWORD *)v58 + 1);
                      if ( v59[1] != v58 || *v60 != v58 )
                        __fastfail(3u);
                      *v60 = v59;
                      v59[1] = v60;
                      v61 = v58[16];
                      if ( v61 == 1 )
                      {
                        v133 = *((unsigned __int16 *)v58 + 9);
                        v62 = *((_QWORD *)v58 + 3);
                        v63 = KeGetCurrentPrcb();
                        v132 = v63;
                        v151 = 0;
                        v64 = v63->SchedulerAssist;
                        if ( v64 )
                        {
                          if ( v63->NestingLevel <= 1u )
                          {
                            v104 = v64[5];
                            v64[5] = v104 + 1;
                            if ( v104 == -1 && !*((_BYTE *)v64 + 25) && !*((_BYTE *)v64 + 27) )
                              KiPerformUnboostKick(v63);
                          }
                        }
                        v65 = v132;
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 64), 0LL) )
                        {
                          KiSetVpThreadSpinLockCount(v65, 0LL);
                          do
                            KeYieldProcessorEx(&v151);
                          while ( *(_QWORD *)(v62 + 64) );
                          LOBYTE(v88) = 1;
                          KiSetVpThreadSpinLockCount(v65, v88);
                        }
                        v25 = v128;
                        if ( *(_BYTE *)(v62 + 388) != 5 )
                        {
                          v68 = 0;
                          goto LABEL_95;
                        }
                        v66 = *(_BYTE *)(v62 + 112);
                        v67 = v66 & 7;
                        v68 = 0;
                        if ( v67 == 1 || v67 == 4 )
                        {
                          v69 = *(_QWORD *)(v62 + 232);
                          if ( v69 )
                          {
                            if ( (*(_BYTE *)v69 & 0x7F) == 0x15 )
                            {
                              *(_DWORD *)(v62 + 540) = (unsigned __int8)*(_DWORD *)(v62 + 540);
                              _InterlockedIncrement((volatile signed __int32 *)(v69
                                                                              + 4LL * *(unsigned int *)(v62 + 540)
                                                                              + 536));
                            }
                            else
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v69 + 40));
                            }
                          }
                          v132 = *(struct _KPRCB **)(v62 + 712);
                          if ( v132 )
                          {
                            v70 = KeGetCurrentPrcb();
                            v154 = v70;
                            v152 = 0;
                            v71 = v70->SchedulerAssist;
                            if ( v71 )
                            {
                              if ( v70->NestingLevel <= 1u )
                              {
                                v105 = v71[5];
                                v71[5] = v105 + 1;
                                if ( v105 == -1 && !*((_BYTE *)v71 + 25) && !*((_BYTE *)v71 + 27) )
                                  KiPerformUnboostKick(v70);
                              }
                            }
                            v72 = v132;
                            v73 = v154;
                            while ( _interlockedbittestandset64((volatile signed __int32 *)&v72->WaitLock, 0LL) )
                            {
                              KiSetVpThreadSpinLockCount(v73, 0LL);
                              do
                                KeYieldProcessorEx(&v152);
                              while ( v72->WaitLock );
                              LOBYTE(v87) = 1;
                              KiSetVpThreadSpinLockCount(v73, v87);
                            }
                            v25 = v128;
                            v55 = v156;
                            if ( *(_QWORD *)(v62 + 712) )
                            {
                              v74 = *(_QWORD *)(v62 + 216);
                              v75 = *(_QWORD **)(v62 + 224);
                              if ( *(_QWORD *)(v74 + 8) != v62 + 216 || *v75 != v62 + 216 )
                                __fastfail(3u);
                              *v75 = v74;
                              *(_QWORD *)(v74 + 8) = v75;
                              *(_QWORD *)(v62 + 712) = 0LL;
                            }
                            _InterlockedAnd64((volatile signed __int64 *)&v132->WaitLock, 0LL);
                            v76 = KeGetCurrentPrcb();
                            v77 = v76->SchedulerAssist;
                            if ( v77 )
                            {
                              if ( v76->NestingLevel <= 1u )
                              {
                                v106 = v77[5] - 1;
                                v77[5] = v106;
                                if ( !v106 && !*((_BYTE *)v77 + 25) && !*((_BYTE *)v77 + 27) )
                                  KiPerformUnboostKick(v76);
                              }
                            }
                          }
                          *(_BYTE *)(v62 + 388) = 7;
                          v78 = v134;
                          *(_QWORD *)(v62 + 216) = v134->DeferredReadyListHead.Next;
                          v78->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v62 + 216);
                          *(_QWORD *)(v62 + 200) = v133;
                          v68 = 1;
LABEL_95:
                          v79 = BugCheckParameter2;
                        }
                        else
                        {
                          if ( (*(_BYTE *)(v62 + 112) & 7) == 0 )
                          {
                            *(_BYTE *)(v62 + 112) = v66 & 0xF8 | 2;
                            *(_QWORD *)(v62 + 200) = v133;
                            v68 = 1;
                            v79 = BugCheckParameter2;
                            *(_BYTE *)(BugCheckParameter2 + 17) = 0;
                            goto LABEL_96;
                          }
                          if ( v67 == 5 )
                          {
                            *(_BYTE *)(v62 + 112) = v66 & 0xF8 | 6;
                            goto LABEL_95;
                          }
                          v79 = BugCheckParameter2;
                          if ( v67 == 3 )
                            *(_BYTE *)(BugCheckParameter2 + 17) = 2;
                        }
LABEL_96:
                        *(_QWORD *)(v62 + 64) = 0LL;
                        v80 = KeGetCurrentPrcb();
                        v81 = v80->SchedulerAssist;
                        if ( v81 )
                        {
                          if ( v80->NestingLevel <= 1u )
                          {
                            v107 = v81[5] - 1;
                            v81[5] = v107;
                            if ( !v107 && !*((_BYTE *)v81 + 25) && !*((_BYTE *)v81 + 27) )
                              KiPerformUnboostKick(v80);
                          }
                        }
                        ++*(_BYTE *)(v79 + 17);
                        if ( v68 )
                        {
                          v82 = (*((_DWORD *)v55 + 403))-- == 1;
                          if ( v82 )
                            break;
                        }
                        goto LABEL_232;
                      }
                      if ( v61 != 2 )
                      {
                        KiTryUnwaitThread(v134, v58, 256LL, 0LL);
                        goto LABEL_232;
                      }
                      v58[17] = 5;
                      v132 = (struct _KPRCB *)*((_QWORD *)v58 + 3);
                      v108 = (__int64)v132;
                      *(_QWORD *)v58 = 0LL;
                      v157 = (_QWORD *)(v108 + 8);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v133 = (__int64)KeGetCurrentPrcb();
                      v109 = *(struct _KPRCB **)(v133 + 8);
                      v154 = v109;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v109);
                        EtwTraceEnqueueWork(v111, v112, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe((volatile signed __int32 *)v108);
                      v113 = (_QWORD *)(v108 + 8);
                      if ( (_QWORD *)*v113 == v113 )
                      {
                        v114 = (__int64)v132;
                      }
                      else
                      {
                        v114 = v108;
                        if ( *(_DWORD *)(v108 + 40) < *(_DWORD *)(v108 + 44)
                          && (*(_QWORD *)&v154->CFlushSize != v108 || BYTE3(v154->ProcessorState.ContextFrame.Rbx) != 15) )
                        {
                          v115 = (_QWORD *)BugCheckParameter2;
                          v116 = KiWakeQueueWaiter(v133, v114, BugCheckParameter2);
                          v114 = (__int64)v132;
                          v113 = v157;
                          goto LABEL_224;
                        }
                      }
                      v115 = (_QWORD *)BugCheckParameter2;
                      v116 = 0;
LABEL_224:
                      if ( !v116 )
                      {
                        v117 = *(_DWORD *)(v114 + 4);
                        *(_DWORD *)(v114 + 4) = v117 + 1;
                        v118 = *(_QWORD **)(v114 + 32);
                        if ( *v118 != v114 + 24 )
                          __fastfail(3u);
                        *v115 = v114 + 24;
                        v115[1] = v118;
                        *v118 = v115;
                        *(_QWORD *)(v114 + 32) = v115;
                        if ( !v117 && (_QWORD *)*v113 != v113 )
                        {
                          KiWakeOtherQueueWaiters(v133, v114);
                          v114 = (__int64)v132;
                        }
                      }
                      _InterlockedAnd((volatile signed __int32 *)v114, 0xFFFFFF7F);
                      v82 = (*((_DWORD *)v55 + 403))-- == 1;
                      if ( v82 )
                        break;
LABEL_232:
                      v58 = v158;
                    }
                    while ( v158 != v55 + 1616 );
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v55 + 402, 0xFFFFFF7F);
                KiExitDispatcher((_DWORD)v134, 1, 1, 1, v137);
              }
              else if ( v160[5] )
              {
                v85 = (void *)((unsigned __int64)v160[5] & 0xFFFFFFFFFFFFFFFEuLL);
                KeSetEvent((PRKEVENT)((unsigned __int64)v160[5] & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
                if ( ((__int64)v160[5] & 1) != 0 )
                  ObfDereferenceObject(v85);
                v160[5] = 0LL;
              }
            }
          }
        }
        v83 = KeGetCurrentThread();
        v82 = v83->KernelApcDisable++ == -1;
        if ( !v82
          || ($005F0E83B22994B61E86C72E0CE43C71 *)v83->ApcState.ApcListHead[0].Flink == &v83->152
          || v83->SpecialApcDisable )
        {
          v21 = v141;
        }
        else
        {
          KiCheckForKernelApcDelivery();
          v21 = v141;
        }
        goto LABEL_29;
      }
      v25 = v128;
LABEL_29:
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v25;
      v11 = IoRemoveIoCompletion(
              *(_QWORD *)(*((_QWORD *)v12 + 2) + 8LL),
              v155,
              P,
              v6,
              &v136,
              HandleInformation,
              0LL,
              Timeout);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v145);
        Flags[1] &= ~1u;
      }
      v26 = (unsigned __int64 *)*((_QWORD *)v12 + 2);
      LockHandle.LockQueue.Lock = v26;
      LockHandle.LockQueue.Next = 0LL;
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v27;
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v119 = v29[5];
          v29[5] = v119 + 1;
          if ( v119 == -1 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
            KiPerformUnboostKick(v28);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v26);
      }
      else
      {
        v30 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v26, (__int64)&LockHandle);
        if ( v30 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v30);
      }
      v19 = Object;
      if ( v11 == 258 )
      {
        v86 = ExpWorkerFactoryWantsToCreate((__int64)Object, 1);
        v20 = v142;
        if ( v86
          || *v21 <= v19[30]
          || *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
        {
          continue;
        }
      }
      goto LABEL_36;
    }
    v22 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_115:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
    goto LABEL_26;
  }
LABEL_54:
  if ( P != v161 )
    ExFreePoolWithTag(P, 0);
  if ( v144 )
  {
    v43 = v144 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v144 - 48);
    v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL);
    v45 = v44 <= 1;
    v46 = v44 - 1;
    if ( v45 )
    {
      if ( *(_QWORD *)(v43 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v43 + 24) ^ (unsigned __int64)BYTE1(v43)],
          v144,
          1uLL,
          *(_QWORD *)(v43 + 8));
      if ( v46 < 0 )
        KeBugCheckEx(0x18u, 0LL, v144, 2uLL, v46);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v43, v121, v122, v123);
      }
      else
      {
        v124 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v43);
        if ( v124 )
          ObpHandleRevocationBlockRemoveObject(v124);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v43);
        ObpRemoveObjectRoutine(v43, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v11;
}
