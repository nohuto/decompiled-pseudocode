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
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int8 Number; // bl
  unsigned __int16 Group; // di
  unsigned int v6; // r8d
  unsigned int v7; // r14d
  __int64 i; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edi
  char *v14; // rdx
  volatile signed __int64 *v15; // rsi
  __int64 **v16; // rax
  __int64 **v17; // rbx
  __int64 v18; // rcx
  signed __int64 v19; // rax
  __int64 **v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  struct _TEB *v24; // rcx
  void (__fastcall *v25)(char *); // rax
  signed __int64 v26; // rax
  char v27; // r8
  signed __int64 v28; // rtt
  char v29; // di
  struct _PEB *v30; // rbx
  _LIST_ENTRY *Blink; // rcx
  _OWORD **v32; // rdi
  __int64 v33; // rbx
  unsigned int v34; // esi
  _OWORD *v35; // rbx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rcx
  void (__fastcall *v43)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v44; // ebx
  __int64 v45; // rax
  __int64 Heap; // rax
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rcx
  unsigned __int16 v51; // di
  unsigned __int16 v52; // si
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int16 v55; // di
  unsigned __int16 v56; // si
  __int64 v57; // rcx
  unsigned __int64 v58; // rbx
  char v59; // cl
  bool v60; // zf
  signed __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int16 v63; // r14
  unsigned __int16 v64; // r15
  int k; // ecx
  signed __int64 v67; // rcx
  __int64 v68; // rdx
  signed __int64 v69; // rtt
  __int64 v70; // r8
  int v71; // r8d
  signed __int64 v72; // rax
  signed __int64 v73; // rtt
  struct _PEB *v74; // rbx
  __int128 v75; // rax
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
  int v87; // [rsp+40h] [rbp-348h]
  int v88; // [rsp+44h] [rbp-344h]
  signed __int64 v89; // [rsp+48h] [rbp-340h]
  int v90; // [rsp+50h] [rbp-338h] BYREF
  int j; // [rsp+54h] [rbp-334h]
  unsigned int v92; // [rsp+58h] [rbp-330h]
  signed __int64 v93; // [rsp+60h] [rbp-328h]
  __int64 v94; // [rsp+68h] [rbp-320h]
  struct _PEB *v95; // [rsp+70h] [rbp-318h]
  signed __int64 v96; // [rsp+78h] [rbp-310h]
  int v97; // [rsp+80h] [rbp-308h] BYREF
  __int64 v98; // [rsp+88h] [rbp-300h]
  _OWORD *v99; // [rsp+90h] [rbp-2F8h]
  _QWORD *v100; // [rsp+98h] [rbp-2F0h] BYREF
  _DWORD v101[3]; // [rsp+A0h] [rbp-2E8h] BYREF
  unsigned int v102; // [rsp+ACh] [rbp-2DCh]
  int v103[3]; // [rsp+B0h] [rbp-2D8h] BYREF
  int v104; // [rsp+BCh] [rbp-2CCh] BYREF
  _DWORD v105[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 **v106; // [rsp+D0h] [rbp-2B8h]
  HANDLE v107; // [rsp+D8h] [rbp-2B0h] BYREF
  __int64 **v108; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int64 *v110; // [rsp+F8h] [rbp-290h]
  __int64 v111; // [rsp+100h] [rbp-288h]
  void *UniqueThread; // [rsp+108h] [rbp-280h]
  int v113; // [rsp+110h] [rbp-278h]
  signed __int32 v114[4]; // [rsp+114h] [rbp-274h] BYREF
  __int64 v115; // [rsp+138h] [rbp-250h]
  __int64 v116; // [rsp+140h] [rbp-248h]
  struct _TEB *v117; // [rsp+158h] [rbp-230h]
  struct _TEB *v118; // [rsp+160h] [rbp-228h]
  struct _TEB *v119; // [rsp+168h] [rbp-220h]
  __int64 v120; // [rsp+178h] [rbp-210h]
  struct _TEB *v121; // [rsp+180h] [rbp-208h]
  struct _TEB *v122; // [rsp+188h] [rbp-200h]
  struct _TEB *v123; // [rsp+190h] [rbp-1F8h]
  __int64 v124; // [rsp+1A8h] [rbp-1E0h]
  _OWORD v125[23]; // [rsp+1B0h] [rbp-1D8h] BYREF
  _QWORD v126[2]; // [rsp+320h] [rbp-68h] BYREF
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
  v100 = 0LL;
  v86 = 0;
  RtlRegisterThreadWithCsrss();
  v95 = NtCurrentPeb();
  TppCritSetThread(&v107);
  TppAllocThreadData(&v100);
  if ( v100 )
    *v100 = v125;
  memset(v125, 0, 0x168uLL);
  RtlAcquireSRWLockShared(a1 + 368);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v87 = -1073741558;
  }
  else
  {
    v115 = *(_QWORD *)(a1 + 56);
    v87 = NtWorkerFactoryWorkerReady();
    if ( v87 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v29 = v81;
LABEL_72:
      RtlReleaseSRWLockShared(a1 + 368, v2, v3);
      if ( v29 )
        goto LABEL_224;
      TppPoolAddWorker(a1, (__int64)v125);
      v79 = 1;
      v30 = v95;
      RtlAcquireSRWLockExclusive(&v95->TppWorkerpListLock);
      Blink = v95->TppWorkerpList.Blink;
      if ( Blink->Flink != &v95->TppWorkerpList )
        __fastfail(3u);
      *(_QWORD *)&v125[0] = &v95->TppWorkerpList;
      *((_QWORD *)&v125[0] + 1) = Blink;
      Blink->Flink = (_LIST_ENTRY *)v125;
      v30->TppWorkerpList.Blink = (_LIST_ENTRY *)v125;
      v78 = 1;
      RtlReleaseSRWLockExclusive(&v30->TppWorkerpListLock);
      memset((char *)&v125[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v77 = 1;
      TppGetCurrentThreadNumaNode(a1, (char *)&v125[21] + 8, 0LL);
LABEL_76:
      while ( 1 )
      {
        v86 = 0;
        memset(&v125[19], 0, 0x20uLL);
        v32 = *(_OWORD ***)&v125[21];
        v88 = 16;
        if ( !*(_QWORD *)&v125[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v125[21] + 8LL) != 1 )
          goto LABEL_195;
        v33 = *(_QWORD *)&v125[21];
        memset(**(void ***)&v125[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v125[21] + 12LL));
        v34 = *(_DWORD *)(v33 + 12);
        v88 = v34;
        v35 = *v32;
LABEL_79:
        v99 = v35;
        v90 = 0;
        v116 = *(_QWORD *)(a1 + 56);
        v36 = ZwWaitForWorkViaWorkerFactory(v116, v35, v34, &v90, (char *)&v125[16] + 8);
        v87 = v36;
        if ( v36 )
          v90 = 0;
        if ( (BYTE12(v125[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v125[16] + 1));
          HIDWORD(v125[17]) &= ~1u;
          v36 = v87;
          LODWORD(v35) = (_DWORD)v99;
          v34 = v88;
        }
        if ( v36 )
        {
          v48 = v36 - 128;
          if ( !v48 )
            goto LABEL_224;
          v49 = v48 - 64;
          if ( v49 )
          {
            if ( v49 == 66 )
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
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v125, (_DWORD)v35, v90, v34, a1, (__int64)&v76) )
          {
LABEL_224:
            if ( (BYTE12(v125[17]) & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage((char *)&v125[3] + 8);
              HIDWORD(v125[17]) &= ~1u;
            }
            if ( v77 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v78 )
            {
              v74 = v95;
              RtlAcquireSRWLockExclusive(&v95->TppWorkerpListLock);
              v75 = v125[0];
              if ( *(_OWORD **)(*(_QWORD *)&v125[0] + 8LL) != v125 || **((_OWORD ***)&v125[0] + 1) != v125 )
                __fastfail(3u);
              **((_QWORD **)&v125[0] + 1) = *(_QWORD *)&v125[0];
              *(_QWORD *)(v75 + 8) = *((_QWORD *)&v75 + 1);
              RtlReleaseSRWLockExclusive(&v74->TppWorkerpListLock);
            }
            if ( v79 )
            {
              TppPoolRemoveWorker(v125);
              if ( v80 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree(a1);
            }
            TppCritResetThread(v107);
            TppFreeThreadData((__int64)v100);
            TppFreeDirectParamsCache((__int64)v125);
            v87 = 0;
            RtlExitUserThread(0);
          }
          if ( !v76 )
          {
            v38 = *(_QWORD *)&v125[19];
            if ( *(_QWORD *)&v125[19] )
            {
              v98 = *(_QWORD *)&v125[19];
              *(_QWORD *)&v125[9] = *(_QWORD *)(*(_QWORD *)&v125[19] + 56LL);
              *((_QWORD *)&v125[9] + 1) = *(_QWORD *)&v125[19];
              v105[0] = *(unsigned __int8 *)(*(_QWORD *)&v125[19] + 68LL);
              v39 = *(unsigned int *)(*(_QWORD *)&v125[19] + 64LL);
              v40 = DWORD2(v125[21]);
              v41 = *(_DWORD *)(a1 + 428);
              v42 = DWORD2(v125[21]);
              if ( (_DWORD)v39 == DWORD2(v125[21]) )
              {
                if ( v41 == -1 && !LOBYTE(v125[22]) )
                {
                  LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v39));
                }
              }
              else
              {
                if ( v41 == -1 )
                {
                  if ( LOBYTE(v125[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v125[21])));
                  else
                    LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v39));
                }
                DWORD2(v125[21]) = v39;
                v62 = *(_QWORD *)(a1 + 48);
                v63 = *(_WORD *)(v62 + 16 * v39 + 8);
                v64 = *(_WORD *)(v62 + 16 * v40 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v62, v37) )
                  v42 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v42 = 2147353478LL;
                if ( *(_BYTE *)v42 )
                  TppETWWorkerNodeSwitch(a1, v40, v39, v64, v63);
                if ( v64 != v63 )
                {
                  v126[1] = v63;
                  v126[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v126);
                  NtSetInformationThread(-2LL, 13LL, v105);
                }
              }
              v125[18] = NtCurrentTeb()->ActivityId;
              if ( *((_QWORD *)&v125[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v125[11] + 1) + 436LL) & 1) == 0 )
              {
                LODWORD(v125[10]) |= 8u;
                v117 = NtCurrentTeb();
                v70 = LODWORD(v125[10]);
                if ( v117->IsImpersonating )
                {
                  v70 = LODWORD(v125[10]) | 4u;
                  LODWORD(v125[10]) |= 4u;
                }
                if ( (unsigned __int8)TppCheckForTransactions(v42, v37, v70) )
                  LODWORD(v125[10]) = v71 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v125[10]) |= 0x20u;
                v118 = NtCurrentTeb();
                if ( v118->PreferredLanguages )
                  LODWORD(v125[10]) |= 0x40u;
                v119 = NtCurrentTeb();
                if ( v119->SavedPriorityState )
                  LODWORD(v125[10]) |= 0x80u;
              }
              v43 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v38 + 56);
              if ( (char *)v43 == (char *)TppAlpcpExecuteCallback )
              {
                TppAlpcpExecuteCallback((char *)&v125[3] + 8, v98, *((_QWORD *)&v125[19] + 1), &v125[20]);
              }
              else if ( (char *)v43 == (char *)TppIopExecuteCallback )
              {
                TppIopExecuteCallback((__int64)&v125[3] + 8, v98, *((__int64 *)&v125[19] + 1), (__int64)&v125[20]);
              }
              else if ( (char *)v43 == (char *)TppTimerQueueExpiration )
              {
                TppTimerQueueExpiration((char *)&v125[3] + 8, v98, *((_QWORD *)&v125[19] + 1), &v125[20]);
              }
              else if ( (char *)v43 == (char *)TppWaitCompletion )
              {
                TppWaitCompletion((__int64)&v125[3] + 8, v98, *((__int64 *)&v125[19] + 1));
              }
              else
              {
                v43((char *)&v125[3] + 8, v98, *((_QWORD *)&v125[19] + 1), &v125[20]);
              }
              goto LABEL_55;
            }
            while ( 1 )
            {
              Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
              Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
              v6 = TppNumberNodes;
              v7 = TppNumberNodes;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
              {
                TppAdjustRunningThreadGoal(a1);
                v6 = TppNumberNodes;
              }
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v105[2] = i;
                if ( (unsigned int)i >= v6 )
                  goto LABEL_11;
                v9 = 16LL * (unsigned int)i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v9 + 8) == Group )
                {
                  v10 = *(_QWORD *)v9;
                  if ( _bittest64(&v10, Number) )
                    break;
                }
              }
              v7 = i;
LABEL_11:
              if ( v7 >= v6 )
                v7 = 0;
              v92 = v7;
              v84 = Number;
              v101[0] = Number;
              v11 = DWORD2(v125[21]);
              v12 = *(_DWORD *)(a1 + 428);
              if ( v7 == DWORD2(v125[21]) )
              {
                if ( v12 == -1 && !LOBYTE(v125[22]) )
                {
                  LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
                }
              }
              else
              {
                if ( v12 == -1 )
                {
                  if ( LOBYTE(v125[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v125[21])));
                  else
                    LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
                }
                DWORD2(v125[21]) = v7;
                v54 = *(_QWORD *)(a1 + 48);
                v55 = *(_WORD *)(v54 + 16LL * v7 + 8);
                v56 = *(_WORD *)(v54 + 16 * v11 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v54, i) )
                  v57 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v57 = 2147353478LL;
                if ( *(_BYTE *)v57 )
                  TppETWWorkerNodeSwitch(a1, v11, v7, v56, v55);
                if ( v56 != v55 )
                {
                  v127[1] = v55;
                  v127[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v127);
                  NtSetInformationThread(-2LL, 13LL, v101);
                }
              }
              v102 = v7;
              if ( *(_DWORD *)(a1 + 428) != -1
                || HIDWORD(v125[21]) < 0x10
                || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
              {
                break;
              }
LABEL_110:
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                  goto LABEL_224;
                v44 = 0;
LABEL_112:
                j = v44;
                if ( v44 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v120 = *(_QWORD *)(a1 + 8LL * v44 + 16) + 24LL * v7;
                v45 = TppQueueRemoveHead();
                if ( v45 )
                  break;
                if ( ++v7 >= TppNumberNodes )
                  v7 = 0;
                v102 = v7;
                if ( v7 == v92 )
                {
                  ++v44;
                  goto LABEL_112;
                }
              }
              v20 = (__int64 **)(v45 - 16);
LABEL_26:
              v106 = v20;
              v103[0] = *((unsigned __int8 *)v20 + 12);
              v21 = DWORD2(v125[21]);
              v22 = *(_DWORD *)(a1 + 428);
              if ( v7 == DWORD2(v125[21]) )
              {
                if ( v22 == -1 && !LOBYTE(v125[22]) )
                {
                  LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
                }
              }
              else
              {
                if ( v22 == -1 )
                {
                  if ( LOBYTE(v125[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v125[21])));
                  else
                    LOBYTE(v125[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
                }
                DWORD2(v125[21]) = v7;
                v50 = *(_QWORD *)(a1 + 48);
                v51 = *(_WORD *)(v50 + 16LL * v7 + 8);
                v52 = *(_WORD *)(v50 + 16 * v21 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v50, v14) )
                  v53 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v53 = 2147353478LL;
                if ( *(_BYTE *)v53 )
                  TppETWWorkerNodeSwitch(a1, v21, v7, v52, v51);
                if ( v52 != v51 )
                {
                  v128[1] = v51;
                  v128[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v128);
                  NtSetInformationThread(-2LL, 13LL, v103);
                }
              }
              if ( v7 == v92 )
              {
                if ( HIDWORD(v125[21]) < 0x10 )
                  v23 = HIDWORD(v125[21]) + 1;
                else
                  v23 = 16;
              }
              else
              {
                v23 = 0;
              }
              HIDWORD(v125[21]) = v23;
              if ( (BYTE12(v125[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v125[3] + 8);
                HIDWORD(v125[17]) &= ~1u;
              }
              *(_QWORD *)&v125[2] = v106;
              *(_QWORD *)&v125[9] = **v106;
              *((_QWORD *)&v125[9] + 1) = v106;
              *((_QWORD *)&v125[11] + 1) = *(_QWORD *)&v125[3];
              v125[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v125[3] && (*(_BYTE *)(*(_QWORD *)&v125[3] + 436LL) & 1) == 0 )
              {
                LODWORD(v125[10]) |= 8u;
                v121 = NtCurrentTeb();
                if ( v121->IsImpersonating )
                  LODWORD(v125[10]) |= 4u;
                v24 = NtCurrentTeb();
                if ( (((unsigned __int64)v24->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
                  || v24->TxnScopeEnterCallback
                  || v24->TxnScopeExitCallback
                  || v24->TxnScopeContext
                  || v24->TxFsContext != 65534 )
                {
                  LODWORD(v125[10]) |= 0x10u;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v125[10]) |= 0x20u;
                v122 = NtCurrentTeb();
                if ( v122->PreferredLanguages )
                  LODWORD(v125[10]) |= 0x40u;
                v123 = NtCurrentTeb();
                if ( v123->SavedPriorityState )
                  LODWORD(v125[10]) |= 0x80u;
              }
              v25 = (void (__fastcall *)(char *))**v106;
              if ( (char *)v25 == (char *)TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((char *)&v125[3] + 8);
              }
              else if ( (char *)v25 == (char *)TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((char *)&v125[3] + 8);
              }
              else if ( (char *)v25 == (char *)RtlpTpWorkCallback )
              {
                RtlpTpWorkCallback((char *)&v125[3] + 8);
              }
              else
              {
                v25((char *)&v125[3] + 8);
              }
LABEL_55:
              if ( (BYTE4(v125[8]) & 4) != 0 )
                v82 = 1;
              v83 = LODWORD(v125[8]) == 4;
              TppCallbackEpilog((char *)&v125[3] + 8);
              *(_QWORD *)&v125[2] = 0LL;
              if ( v82 )
              {
                _m_prefetchw((const void *)(a1 + 8));
                v72 = *(_QWORD *)(a1 + 8);
                v89 = v72;
                do
                {
                  LODWORD(v89) = (unsigned __int16)(v89 ^ (v89 + 1)) ^ (unsigned int)v89;
                  v73 = v72;
                  v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v89, v72);
                  v89 = v72;
                }
                while ( v73 != v72 );
                v104 = 3;
                v124 = *(_QWORD *)(a1 + 56);
                NtSetInformationWorkerFactory(v124, 9LL, &v104);
                goto LABEL_224;
              }
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                TppAdjustRunningThreadGoal(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v26 = *(_QWORD *)(a1 + 8);
              v96 = v26;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_224;
                if ( HIDWORD(v26) && ((v96 & 0x8000u) == 0LL || v83) )
                {
                  v27 = 0;
                  HIDWORD(v96) = HIDWORD(v26) - 1;
                }
                else
                {
                  v27 = 1;
                  LODWORD(v96) = (unsigned __int16)(v96 ^ (v96 + 1)) ^ (unsigned int)v96;
                }
                v28 = v26;
                v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v96, v26);
                v96 = v26;
              }
              while ( v28 != v26 );
              v76 = v27;
              if ( v27 )
                goto LABEL_76;
            }
            v13 = 0;
            for ( j = 0; ; j = v13 )
            {
              if ( v13 > 2 )
                goto LABEL_110;
              v14 = (char *)(*(_QWORD *)(a1 + 8LL * v13 + 16) + 24LL * v92);
              v108 = (__int64 **)v14;
              v15 = (volatile signed __int64 *)(v14 + 16);
              v97 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 4, 0LL) )
                break;
LABEL_19:
              v16 = v108;
              v17 = (__int64 **)*v108;
              v18 = **v108;
              if ( (__int64 **)(*v108)[1] != v108 || *(__int64 ***)(v18 + 8) != v17 )
                __fastfail(3u);
              *v108 = (__int64 *)v18;
              *(_QWORD *)(v18 + 8) = v16;
              v19 = _InterlockedCompareExchange64(v15, 0LL, 1LL);
              if ( v19 != 1 )
              {
                do
                {
                  v67 = v19 & 6;
                  v68 = 3LL;
                  if ( v67 != 2 )
                    v68 = -1LL;
                  v14 = (char *)(v19 + v68);
                  v69 = v19;
                  v19 = _InterlockedCompareExchange64(v15, (signed __int64)v14, v19);
                }
                while ( v69 != v19 );
                if ( v67 == 2 )
                  RtlpWakeSRWLock(v15, v14, 0LL);
              }
              if ( v17 != v108 && v17 )
              {
                v20 = v17 - 2;
                goto LABEL_26;
              }
              ++v13;
            }
            v58 = *v15;
            while ( 2 )
            {
              while ( (v58 & 1) != 0 )
              {
                if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
                  ZwTerminateProcess(-1LL, 3221225547LL);
                UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
                v114[0] = 3;
                v111 = 0LL;
                v59 = 0;
                v85 = 0;
                if ( (v58 & 2) != 0 )
                {
                  v110 = 0LL;
                  v109 = v58 & 0xFFFFFFFFFFFFFFF0uLL;
                  v113 = -1;
                  v14 = (char *)((unsigned __int64)&v109 | v58 & 8 | 7);
                  v93 = (signed __int64)v14;
                  if ( (v58 & 4) == 0 )
                  {
                    v59 = 1;
                    v85 = 1;
                  }
                }
                else
                {
                  v110 = &v109;
                  v113 = v58 >> 4;
                  if ( v113 > 1 )
                    v14 = (char *)((unsigned __int64)&v109 | 0xB);
                  else
                    v14 = (char *)&v109 + 3;
                  v93 = (signed __int64)v14;
                  if ( !(unsigned int)(v58 >> 4) )
                    v113 = -2;
                }
                v61 = _InterlockedCompareExchange64(v15, (signed __int64)v14, v58);
                v60 = v58 == v61;
                v58 = v61;
                v93 = v61;
                if ( !v60 )
                  goto LABEL_163;
                if ( v59 )
                  RtlpOptimizeSRWLockList(v15);
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
                    NtWaitForAlertByThreadId(v15, 0LL);
                  while ( (v114[0] & 4) == 0 );
                }
              }
              v93 = v58 + 1;
              v93 = _InterlockedCompareExchange64(v15, v58 + 1, v58);
              if ( v58 == v93 )
                goto LABEL_19;
LABEL_163:
              RtlBackoff(&v97);
              _m_prefetchw((const void *)v15);
              v58 = *v15;
              v93 = *v15;
              continue;
            }
          }
        }
      }
      v114[3] = TppHeapTag + 3145728;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      v35 = (_OWORD *)Heap;
      if ( Heap )
      {
        v47 = Heap + 896;
        *(_QWORD *)v47 = v35;
        *(_DWORD *)(v47 + 8) = 1;
        *(_DWORD *)(v47 + 12) = 16;
        *(_QWORD *)&v125[21] = v47;
        v34 = 16;
      }
      else
      {
LABEL_195:
        v34 = 1;
        v35 = &v125[19];
      }
      v88 = v34;
      goto LABEL_79;
    }
  }
  v29 = 1;
  v81 = 1;
  goto LABEL_72;
}
