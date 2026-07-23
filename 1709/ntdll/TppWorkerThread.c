/*
 * XREFs of TppWorkerThread @ 0x18000CFC0
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolUpdateTrimmedWorker @ 0x18000A49C (TppPoolUpdateTrimmedWorker.c)
 *     TppCritResetThread @ 0x18000A5D4 (TppCritResetThread.c)
 *     TppFreeThreadData @ 0x18000A664 (TppFreeThreadData.c)
 *     TppFreeDirectParamsCache @ 0x18000A6A8 (TppFreeDirectParamsCache.c)
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     TppPoolRemoveWorker @ 0x18000A8AC (TppPoolRemoveWorker.c)
 *     TppPoolAddWorker @ 0x18000B4C8 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x18000B550 (RtlRegisterThreadWithCsrss.c)
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x18000B680 (TppAllocThreadData.c)
 *     TppWaitCompletion @ 0x18000CA10 (TppWaitCompletion.c)
 *     TppIopExecuteCallback @ 0x18000CC70 (TppIopExecuteCallback.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18000E770 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x18000E980 (TppPrepareDirectParams.c)
 *     TppCheckForTransactions @ 0x18000EE1C (TppCheckForTransactions.c)
 *     TppWorkpExecuteCallback @ 0x18000EE70 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18000F4D0 (TppTimerpExecuteCallback.c)
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitCouldDeadlock @ 0x18004A984 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x1800697A0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     TppPoolpFree @ 0x180081F4C (TppPoolpFree.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008662C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppQueueRemoveHead @ 0x18008D900 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008D960 (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A00E0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A39D0 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DDA78 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoal @ 0x18010AA10 (TppAdjustRunningThreadGoal.c)
 *     TppETWWorkerNodeSwitch @ 0x18010B10C (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18010B1B4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010B234 (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  unsigned int v4; // r8d
  unsigned int v5; // r14d
  unsigned int i; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  signed __int64 v16; // rax
  __int64 (__fastcall ***v17)(PTP_CALLBACK_INSTANCE); // rbx
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  struct _TEB *v21; // rcx
  __int64 (__fastcall *v22)(PTP_CALLBACK_INSTANCE); // rax
  signed __int64 v23; // rax
  char v24; // r8
  signed __int64 v25; // rtt
  char v26; // di
  _RTL_SRWLOCK *v27; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v30; // rbx
  ULONG DoNotUseThisField_high; // esi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 AlpcSendMessagePort_low; // rsi
  int v38; // eax
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(PTP_CALLBACK_INSTANCE); // rax
  int v41; // ebx
  __int64 v42; // rax
  ULONG *Heap; // rax
  _PORT_MESSAGE *v44; // rax
  NTSTATUS v45; // ecx
  NTSTATUS v46; // ecx
  __int64 v47; // rcx
  unsigned __int16 v48; // di
  unsigned __int16 v49; // si
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int16 v52; // di
  unsigned __int16 v53; // si
  __int64 v54; // rcx
  unsigned __int64 v55; // rbx
  char v56; // cl
  char *v57; // rdx
  bool v58; // zf
  signed __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int16 v61; // r14
  unsigned __int16 v62; // r15
  int k; // ecx
  signed __int64 v65; // rcx
  __int64 v66; // rdx
  signed __int64 v67; // rdx
  signed __int64 v68; // rtt
  __int64 AlpcSendMessageFlags; // r8
  int v70; // r8d
  signed __int64 v71; // rax
  signed __int64 v72; // rtt
  _RTL_SRWLOCK *v73; // rbx
  PPORT_MESSAGE v74; // rax
  PVOID AlpcSendMessagePort; // rdx
  char v76; // [rsp+31h] [rbp-357h] BYREF
  char v77; // [rsp+32h] [rbp-356h]
  char v78; // [rsp+33h] [rbp-355h]
  char v79; // [rsp+34h] [rbp-354h]
  char v80; // [rsp+35h] [rbp-353h]
  char v81; // [rsp+36h] [rbp-352h]
  char v82; // [rsp+37h] [rbp-351h]
  bool v83; // [rsp+38h] [rbp-350h]
  unsigned __int8 v84; // [rsp+39h] [rbp-34Fh]
  char v85; // [rsp+3Ah] [rbp-34Eh]
  int v86; // [rsp+3Ch] [rbp-34Ch]
  NTSTATUS v87; // [rsp+40h] [rbp-348h]
  int v88; // [rsp+44h] [rbp-344h]
  signed __int64 v89; // [rsp+48h] [rbp-340h]
  ULONG PacketsReturned; // [rsp+50h] [rbp-338h] BYREF
  int j; // [rsp+54h] [rbp-334h]
  unsigned int v92; // [rsp+58h] [rbp-330h]
  signed __int64 v93; // [rsp+60h] [rbp-328h]
  __int64 v94; // [rsp+68h] [rbp-320h]
  struct _PEB *v95; // [rsp+70h] [rbp-318h]
  signed __int64 v96; // [rsp+78h] [rbp-310h]
  int v97; // [rsp+80h] [rbp-308h] BYREF
  __int64 v98; // [rsp+88h] [rbp-300h]
  ULONG *v99; // [rsp+90h] [rbp-2F8h]
  PVOID BaseAddress; // [rsp+98h] [rbp-2F0h] BYREF
  _DWORD v101[3]; // [rsp+A0h] [rbp-2E8h] BYREF
  unsigned int v102; // [rsp+ACh] [rbp-2DCh]
  int v103[3]; // [rsp+B0h] [rbp-2D8h] BYREF
  int WorkerFactoryInformation; // [rsp+BCh] [rbp-2CCh] BYREF
  _DWORD v105[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 (__fastcall ***v106)(PTP_CALLBACK_INSTANCE); // [rsp+D0h] [rbp-2B8h]
  HANDLE v107; // [rsp+D8h] [rbp-2B0h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int64 *v110; // [rsp+F8h] [rbp-290h]
  __int64 v111; // [rsp+100h] [rbp-288h]
  void *UniqueThread; // [rsp+108h] [rbp-280h]
  int v113; // [rsp+110h] [rbp-278h]
  signed __int32 v114[4]; // [rsp+114h] [rbp-274h] BYREF
  HANDLE v115; // [rsp+138h] [rbp-250h]
  HANDLE v116; // [rsp+140h] [rbp-248h]
  struct _TEB *v117; // [rsp+158h] [rbp-230h]
  struct _TEB *v118; // [rsp+160h] [rbp-228h]
  struct _TEB *v119; // [rsp+168h] [rbp-220h]
  __int64 v120; // [rsp+178h] [rbp-210h]
  struct _TEB *v121; // [rsp+180h] [rbp-208h]
  struct _TEB *v122; // [rsp+188h] [rbp-200h]
  struct _TEB *v123; // [rsp+190h] [rbp-1F8h]
  HANDLE v124; // [rsp+1A8h] [rbp-1E0h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+1B0h] [rbp-1D8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+320h] [rbp-68h] BYREF
  _QWORD v127[2]; // [rsp+330h] [rbp-58h] BYREF
  _QWORD v128[2]; // [rsp+340h] [rbp-48h] BYREF

  v89 = a1;
  v107 = 0LL;
  v94 = a1;
  v77 = 0;
  v78 = 0;
  v81 = 0;
  v79 = 0;
  v76 = 0;
  v82 = 0;
  v80 = 0;
  BaseAddress = 0LL;
  v86 = 0;
  RtlRegisterThreadWithCsrss();
  v95 = NtCurrentPeb();
  TppCritSetThread(&v107);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v87 = -1073741558;
  }
  else
  {
    v115 = *(HANDLE *)(a1 + 56);
    v87 = NtWorkerFactoryWorkerReady(v115);
    if ( v87 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v26 = v81;
LABEL_72:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v26 )
        goto LABEL_224;
      TppPoolAddWorker((_RTL_SRWLOCK *)a1, (__int64)DeferredWork);
      v79 = 1;
      v27 = (_RTL_SRWLOCK *)v95;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v95->TppWorkerpListLock);
      Blink = (struct _PEB **)v95->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v95->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v95->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v27[115].Value = (unsigned __int64)DeferredWork;
      v78 = 1;
      RtlReleaseSRWLockExclusive(v27 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v77 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
LABEL_76:
      while ( 1 )
      {
        v86 = 0;
        memset(&DeferredWork[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v88 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_195;
        v30 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v30->DoNotUseThisField);
        v88 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_79:
        v99 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v116 = *(HANDLE *)(a1 + 56);
        v33 = ZwWaitForWorkViaWorkerFactory(
                v116,
                (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
                DoNotUseThisField_high,
                &PacketsReturned,
                &DeferredWork[11]);
        v87 = v33;
        if ( v33 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v33 = v87;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v99;
          DoNotUseThisField_high = v88;
        }
        if ( v33 )
        {
          v45 = v33 - 128;
          if ( !v45 )
            goto LABEL_224;
          v46 = v45 - 64;
          if ( v46 )
          {
            if ( v46 == 66 )
            {
              v80 = 1;
              goto LABEL_224;
            }
          }
          else
          {
            TppCallbackCheckThreadAfterCallback(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(a1);
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v76) )
          {
LABEL_224:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v77 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v78 )
            {
              v73 = (_RTL_SRWLOCK *)v95;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v95->TppWorkerpListLock);
              v74 = DeferredWork[0].AlpcSendMessage;
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v74->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v73 + 113);
            }
            if ( v79 )
            {
              TppPoolRemoveWorker(DeferredWork);
              if ( v80 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v107);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache((__int64)DeferredWork);
            v87 = 0;
            RtlExitUserThread(0);
          }
          if ( !v76 )
          {
            v35 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v98 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v105[0] = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v36 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v38 = *(_DWORD *)(a1 + 428);
              v39 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              if ( (_DWORD)v36 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v38 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
                }
              }
              else
              {
                if ( v38 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v36));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v36;
                v60 = *(_QWORD *)(a1 + 48);
                v61 = *(_WORD *)(v60 + 16 * v36 + 8);
                v62 = *(_WORD *)(v60 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v39 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v39 = 2147353478LL;
                if ( *(_BYTE *)v39 )
                  TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v36, v62, v61);
                if ( v62 != v61 )
                {
                  ThreadInformation[1] = v61;
                  ThreadInformation[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v105, 4u);
                }
              }
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v117 = NtCurrentTeb();
                AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags;
                if ( v117->IsImpersonating )
                {
                  AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags | 4;
                  DeferredWork[6].AlpcSendMessageFlags |= 4u;
                }
                if ( (unsigned __int8)TppCheckForTransactions(v39, v34, AlpcSendMessageFlags) )
                  DeferredWork[6].AlpcSendMessageFlags = v70 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v118 = NtCurrentTeb();
                if ( v118->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v119 = NtCurrentTeb();
                if ( v119->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              v40 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE))(v35 + 56);
              if ( v40 == TppAlpcpExecuteCallback )
              {
                TppAlpcpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( (char *)v40 == (char *)TppIopExecuteCallback )
              {
                TppIopExecuteCallback(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v98,
                  (__int64)DeferredWork[13].AlpcSendMessage,
                  (__int64)&DeferredWork[13].AlpcSendMessagePort);
              }
              else if ( (char *)v40 == (char *)TppTimerQueueExpiration )
              {
                TppTimerQueueExpiration(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v98,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              else if ( (char *)v40 == (char *)TppWaitCompletion )
              {
                TppWaitCompletion(
                  (PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort,
                  v98,
                  (__int64)DeferredWork[13].AlpcSendMessage);
              }
              else
              {
                ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v40)(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v98,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              goto LABEL_55;
            }
            while ( 1 )
            {
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v4 = TppNumberNodes;
              v5 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v4 = TppNumberNodes;
              }
              for ( i = 0; ; ++i )
              {
                v105[2] = i;
                if ( i >= v4 )
                  goto LABEL_11;
                v7 = 16LL * i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v7 + 8) == Group )
                {
                  v8 = *(_QWORD *)v7;
                  if ( _bittest64(&v8, Number) )
                    break;
                }
              }
              v5 = i;
LABEL_11:
              if ( v5 >= v4 )
                v5 = 0;
              v92 = v5;
              v84 = Number;
              v101[0] = Number;
              v9 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v10 = *(_DWORD *)(a1 + 428);
              if ( v5 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v10 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                }
              }
              else
              {
                if ( v10 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v5;
                v51 = *(_QWORD *)(a1 + 48);
                v52 = *(_WORD *)(v51 + 16LL * v5 + 8);
                v53 = *(_WORD *)(v51 + 16 * v9 + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v54 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v54 = 2147353478LL;
                if ( *(_BYTE *)v54 )
                  TppETWWorkerNodeSwitch(a1, v9, v5, v53, v52);
                if ( v53 != v52 )
                {
                  v127[1] = v52;
                  v127[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v127, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v101, 4u);
                }
              }
              v102 = v5;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(DeferredWork[14].AlpcSendMessagePort) < 0x10
                || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
              {
                break;
              }
LABEL_110:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                  goto LABEL_224;
                v41 = 0;
LABEL_112:
                j = v41;
                if ( v41 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v120 = *(_QWORD *)(a1 + 8LL * v41 + 16) + 24LL * v5;
                v42 = TppQueueRemoveHead();
                if ( v42 )
                  break;
                if ( ++v5 >= TppNumberNodes )
                  v5 = 0;
                v102 = v5;
                if ( v5 == v92 )
                {
                  ++v41;
                  goto LABEL_112;
                }
              }
              v17 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v42 - 16);
LABEL_26:
              v106 = v17;
              v103[0] = *((unsigned __int8 *)v17 + 12);
              v18 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v19 = *(_DWORD *)(a1 + 428);
              if ( v5 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v19 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                }
              }
              else
              {
                if ( v19 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v5));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v5;
                v47 = *(_QWORD *)(a1 + 48);
                v48 = *(_WORD *)(v47 + 16LL * v5 + 8);
                v49 = *(_WORD *)(v47 + 16 * v18 + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v50 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v50 = 2147353478LL;
                if ( *(_BYTE *)v50 )
                  TppETWWorkerNodeSwitch(a1, v18, v5, v49, v48);
                if ( v49 != v48 )
                {
                  v128[1] = v48;
                  v128[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v128, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, v103, 4u);
                }
              }
              if ( v5 == v92 )
              {
                if ( HIDWORD(DeferredWork[14].AlpcSendMessagePort) < 0x10 )
                  v20 = HIDWORD(DeferredWork[14].AlpcSendMessagePort) + 1;
                else
                  v20 = 16;
              }
              else
              {
                v20 = 0;
              }
              HIDWORD(DeferredWork[14].AlpcSendMessagePort) = v20;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v106;
              DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v106;
              DeferredWork[6].AlpcSendMessagePort = v106;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v121 = NtCurrentTeb();
                if ( v121->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags |= 4u;
                v21 = NtCurrentTeb();
                if ( (((unsigned __int64)v21->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
                  || v21->TxnScopeEnterCallback
                  || v21->TxnScopeExitCallback
                  || v21->TxnScopeContext
                  || v21->TxFsContext != 65534 )
                {
                  DeferredWork[6].AlpcSendMessageFlags |= 0x10u;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v122 = NtCurrentTeb();
                if ( v122->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v123 = NtCurrentTeb();
                if ( v123->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              v22 = **v106;
              if ( v22 == TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v22 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v22 == RtlpTpWorkCallback )
              {
                RtlpTpWorkCallback((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else
              {
                v22((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
LABEL_55:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v82 = 1;
              v83 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v82 )
              {
                _m_prefetchw((const void *)(a1 + 8));
                v71 = *(_QWORD *)(a1 + 8);
                v89 = v71;
                do
                {
                  LODWORD(v89) = (unsigned __int16)(v89 ^ (v89 + 1)) ^ (unsigned int)v89;
                  v72 = v71;
                  v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v89, v71);
                  v89 = v71;
                }
                while ( v72 != v71 );
                WorkerFactoryInformation = 3;
                v124 = *(HANDLE *)(a1 + 56);
                NtSetInformationWorkerFactory(v124, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
                goto LABEL_224;
              }
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v23 = *(_QWORD *)(a1 + 8);
              v96 = v23;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_224;
                if ( HIDWORD(v23) && ((v96 & 0x8000u) == 0LL || v83) )
                {
                  v24 = 0;
                  HIDWORD(v96) = HIDWORD(v23) - 1;
                }
                else
                {
                  v24 = 1;
                  LODWORD(v96) = (unsigned __int16)(v96 ^ (v96 + 1)) ^ (unsigned int)v96;
                }
                v25 = v23;
                v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v96, v23);
                v96 = v23;
              }
              while ( v25 != v23 );
              v76 = v24;
              if ( v24 )
                goto LABEL_76;
            }
            v11 = 0;
            for ( j = 0; ; j = v11 )
            {
              if ( v11 > 2 )
                goto LABEL_110;
              v108 = *(_QWORD *)(a1 + 8LL * v11 + 16) + 24LL * v92;
              v12 = (volatile signed __int64 *)(v108 + 16);
              v97 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v108 + 16), 0LL) )
                break;
LABEL_19:
              v13 = v108;
              v14 = *(__int64 **)v108;
              v15 = **(_QWORD **)v108;
              if ( *(_QWORD *)(*(_QWORD *)v108 + 8LL) != v108 || *(__int64 **)(v15 + 8) != v14 )
                __fastfail(3u);
              *(_QWORD *)v108 = v15;
              *(_QWORD *)(v15 + 8) = v13;
              v16 = _InterlockedCompareExchange64(v12, 0LL, 1LL);
              if ( v16 != 1 )
              {
                do
                {
                  v65 = v16 & 6;
                  v66 = 3LL;
                  if ( v65 != 2 )
                    v66 = -1LL;
                  v67 = v16 + v66;
                  v68 = v16;
                  v16 = _InterlockedCompareExchange64(v12, v67, v16);
                }
                while ( v68 != v16 );
                if ( v65 == 2 )
                  RtlpWakeSRWLock(v12, v67, 0LL);
              }
              if ( v14 != (__int64 *)v108 && v14 )
              {
                v17 = (__int64 (__fastcall ***)(PTP_CALLBACK_INSTANCE))(v14 - 2);
                goto LABEL_26;
              }
              ++v11;
            }
            v55 = *v12;
            while ( 2 )
            {
              while ( (v55 & 1) != 0 )
              {
                if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
                UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                v114[0] = 3;
                v111 = 0LL;
                v56 = 0;
                v85 = 0;
                if ( (v55 & 2) != 0 )
                {
                  v110 = 0LL;
                  v109 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
                  v113 = -1;
                  v57 = (char *)((unsigned __int64)&v109 | v55 & 8 | 7);
                  v93 = (signed __int64)v57;
                  if ( (v55 & 4) == 0 )
                  {
                    v56 = 1;
                    v85 = 1;
                  }
                }
                else
                {
                  v110 = &v109;
                  v113 = v55 >> 4;
                  if ( v113 > 1 )
                    v57 = (char *)((unsigned __int64)&v109 | 0xB);
                  else
                    v57 = (char *)&v109 + 3;
                  v93 = (signed __int64)v57;
                  if ( !(unsigned int)(v55 >> 4) )
                    v113 = -2;
                }
                v59 = _InterlockedCompareExchange64(v12, (signed __int64)v57, v55);
                v58 = v55 == v59;
                v55 = v59;
                v93 = v59;
                if ( !v58 )
                  goto LABEL_163;
                if ( v56 )
                  RtlpOptimizeSRWLockList(v12);
                if ( MEMORY[0x7FFE036A] > 1u )
                {
                  for ( k = SRWLockSpinCount; ; --k )
                  {
                    v101[2] = k;
                    if ( !k || (v114[0] & 2) == 0 )
                      break;
                    _mm_pause();
                  }
                }
                if ( _interlockedbittestandreset(v114, 1u) )
                {
                  do
                    NtWaitForAlertByThreadId((PVOID)v12, 0LL);
                  while ( (v114[0] & 4) == 0 );
                }
              }
              v93 = v55 + 1;
              v93 = _InterlockedCompareExchange64(v12, v55 + 1, v55);
              if ( v55 == v93 )
                goto LABEL_19;
LABEL_163:
              RtlBackoff(&v97);
              _m_prefetchw((const void *)v12);
              v55 = *v12;
              v93 = *v12;
              continue;
            }
          }
        }
      }
      v114[3] = TppHeapTag + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v44 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v44->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v44->DoNotUseThisField) = 1;
        HIDWORD(v44->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v44;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_195:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v88 = DoNotUseThisField_high;
      goto LABEL_79;
    }
  }
  v26 = 1;
  v81 = 1;
  goto LABEL_72;
}
