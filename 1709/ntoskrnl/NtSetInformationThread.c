/*
 * XREFs of NtSetInformationThread @ 0x1404CD4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400071FC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140021850 (PsSetIoPriorityThread.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KeVerifyGroupAffinity @ 0x1400B37AC (KeVerifyGroupAffinity.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     KeSetIdealProcessorThread @ 0x1400E57B0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400E5800 (KeSetIdealProcessorThreadByNumber.c)
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x140202B78 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x1402082A8 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x14024E250 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x14024E3A4 (PspDetachThreadFromUmsCompletionList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     RtlTestProtectedAccess @ 0x1405391F8 (RtlTestProtectedAccess.c)
 *     PspWriteTebIdealProcessor @ 0x14053F518 (PspWriteTebIdealProcessor.c)
 *     KeSetDisableBoostThread @ 0x14059E348 (KeSetDisableBoostThread.c)
 *     EtwTraceThreadSetName @ 0x1405F0F48 (EtwTraceThreadSetName.c)
 *     KeEnableProfiling @ 0x1406D84B8 (KeEnableProfiling.c)
 *     PspSetThreadPpmPolicy @ 0x140716200 (PspSetThreadPpmPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // r10
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  NTSTATUS v10; // esi
  NTSTATUS result; // eax
  struct _KTHREAD *v12; // rax
  unsigned __int64 v13; // rbx
  NTSTATUS v14; // edi
  PETHREAD v15; // rbx
  PVOID v16; // rbx
  unsigned int v17; // ebx
  ULONG_PTR v18; // r10
  PETHREAD v19; // rcx
  ULONG v20; // edx
  LONG v21; // ebx
  _SINGLE_LIST_ENTRY *v22; // r8
  __int64 v23; // r9
  PETHREAD v24; // rdi
  unsigned int v25; // r13d
  NTSTATUS v26; // r12d
  PETHREAD v27; // rdi
  _KPROCESS *v28; // rdi
  __int64 i; // rax
  struct _EX_RUNDOWN_REF *v30; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v32; // rdx
  bool v33; // al
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int16 v37; // ax
  __int16 v38; // ax
  __int16 v39; // ax
  __int64 v40; // rdx
  int v41; // ebx
  PETHREAD v42; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  LONG v47; // edx
  HANDLE v48; // rbx
  _KPROCESS *v49; // r14
  unsigned int v50; // ebx
  UCHAR v51; // dl
  PETHREAD v52; // rbx
  NTSTATUS v53; // edi
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rdi
  bool v56; // zf
  PETHREAD v57; // rdi
  KPRIORITY v58; // ebx
  _KPROCESS *v59; // rbx
  signed __int64 *p_Lock; // rdi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  PETHREAD v63; // rsi
  NTSTATUS v64; // ebx
  int v65; // ebx
  _KPROCESS *v66; // rbx
  int v67; // edi
  NTSTATUS v68; // ebx
  PVOID v69; // rcx
  _QWORD *v70; // r13
  _PROCESSOR_NUMBER v71; // eax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned __int16 v74; // bx
  char *PoolWithTag; // rax
  void *v76; // rax
  PETHREAD v77; // rbx
  PETHREAD v78; // rbx
  char v79; // al
  char v80; // bl
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  PETHREAD v83; // rdi
  NTSTATUS v84; // ebx
  struct _KTHREAD *v85; // rbx
  struct _LIST_ENTRY *v87; // rbx
  __int64 v88; // rdx
  unsigned int v89; // ebx
  NTSTATUS v90; // ebx
  int v91; // ebx
  int v92; // ebx
  struct _KTHREAD *v93; // rax
  __int64 v94; // rax
  PVOID v95; // rdi
  PVOID v96; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 CurrentServerSilo; // rax
  int v99; // ecx
  unsigned int v100; // ebx
  PETHREAD Thread; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v102; // [rsp+48h] [rbp-230h]
  char v103; // [rsp+4Ch] [rbp-22Ch]
  char v104; // [rsp+4Dh] [rbp-22Bh]
  bool v105; // [rsp+4Eh] [rbp-22Ah]
  unsigned __int8 v106; // [rsp+50h] [rbp-228h]
  char v107; // [rsp+52h] [rbp-226h]
  LONG Increment; // [rsp+54h] [rbp-224h]
  _PROCESSOR_NUMBER v109; // [rsp+58h] [rbp-220h] BYREF
  _QWORD *v110; // [rsp+60h] [rbp-218h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-210h]
  PVOID v112; // [rsp+70h] [rbp-208h] BYREF
  struct _KTHREAD *v113; // [rsp+78h] [rbp-200h]
  int v114; // [rsp+80h] [rbp-1F8h]
  PVOID v115; // [rsp+88h] [rbp-1F0h] BYREF
  PVOID P; // [rsp+90h] [rbp-1E8h]
  PETHREAD v117; // [rsp+98h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v119; // [rsp+A8h] [rbp-1D0h]
  unsigned __int64 v120; // [rsp+B8h] [rbp-1C0h]
  KPRIORITY v121; // [rsp+C0h] [rbp-1B8h]
  unsigned int v122; // [rsp+C4h] [rbp-1B4h]
  int v123; // [rsp+C8h] [rbp-1B0h]
  int v124; // [rsp+CCh] [rbp-1ACh]
  int v125; // [rsp+D0h] [rbp-1A8h]
  unsigned int v126; // [rsp+D4h] [rbp-1A4h]
  int v127; // [rsp+D8h] [rbp-1A0h]
  int v128; // [rsp+DCh] [rbp-19Ch]
  int v129; // [rsp+E8h] [rbp-190h]
  int v130; // [rsp+ECh] [rbp-18Ch]
  ULONG_PTR v131; // [rsp+100h] [rbp-178h]
  HANDLE Handle; // [rsp+108h] [rbp-170h]
  HANDLE v133; // [rsp+110h] [rbp-168h]
  void *Src[2]; // [rsp+120h] [rbp-158h]
  __int128 v135; // [rsp+130h] [rbp-148h]
  __int128 v136; // [rsp+140h] [rbp-138h] BYREF
  __int64 v137; // [rsp+150h] [rbp-128h]
  __int64 v138; // [rsp+158h] [rbp-120h]
  unsigned __int64 v139; // [rsp+160h] [rbp-118h]
  HANDLE v140; // [rsp+168h] [rbp-110h]
  HANDLE v141; // [rsp+170h] [rbp-108h]
  __int128 v142; // [rsp+178h] [rbp-100h] BYREF
  char v143[160]; // [rsp+190h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = (ULONG_PTR)ThreadHandle;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v106 = v8;
  if ( v8 )
  {
    if ( ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken
      || ThreadInformationClass >= ThreadSelectedCpuSets
      && ThreadInformationClass < ThreadManageWritesToExecutableMemory )
    {
LABEL_4:
      v9 = 3LL;
LABEL_5:
      v10 = 0;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadUmsInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
          v9 = 7LL;
          goto LABEL_5;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v10 = 0;
          v9 = 0LL;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( ThreadInformationLength )
    {
      if ( (v9 & (unsigned __int64)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v10 = 0;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( ThreadInformationLength == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 128,
                 (__int64)PsThreadType,
                 v8,
                 2035381072,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v12 = KeGetCurrentThread();
        if ( Handle )
        {
          v10 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v12->PreviousMode, &Object, 0LL);
          if ( v10 >= 0 )
          {
            v16 = Object;
            if ( *((_DWORD *)Object + 48) == 2 )
            {
              v10 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
              ObfDereferenceObject(v16);
            }
            else
            {
              ObfDereferenceObject(Object);
              v10 = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
        }
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v10;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadWorkOnBehalfTicket )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v58 = *(_DWORD *)ThreadInformation;
        v121 = v58;
        if ( (unsigned int)(v58 - 1) > 0x1E )
          return -1073741811;
        if ( v58 < 16 )
          goto LABEL_131;
        if ( !SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)ThreadHandle, 0x400u, v8) )
          return -1073741727;
        v6 = BugCheckParameter1;
LABEL_131:
        result = ObpReferenceObjectByHandleWithTag(v6, 1024, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread(Thread, v58);
LABEL_47:
        v19 = Thread;
        goto LABEL_48;
      case ThreadBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v41 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v102 = result;
        if ( result < 0 )
          return result;
        v42 = Thread;
        Process = Thread->Process;
        v44 = (unsigned int)(v41 + 16);
        if ( (unsigned int)v44 > 0x20 || (v45 = 0x10007C001LL, !_bittest64(&v45, v44)) )
        {
          v66 = CurrentThread->ApcState.Process;
          if ( v66 != *((_KPROCESS **)PsGetServerSiloGlobals(0LL) + 110)
            && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
          {
            v26 = -1073741811;
LABEL_103:
            ObfDereferenceObjectWithTag(v42, 0x79517350u);
            return v26;
          }
        }
        v46 = (_DWORD *)Process[1].Affinity.Bitmap[16];
        v112 = v46;
        if ( v46 && (v46[212] & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
        {
          v47 = Increment;
          if ( Increment > 0 )
          {
            v42 = Thread;
            goto LABEL_102;
          }
        }
        else
        {
          v47 = Increment;
        }
        v42 = Thread;
        KeSetBasePriorityThread(Thread, v47);
LABEL_102:
        v26 = v102;
        goto LABEL_103;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v48 = *(HANDLE *)ThreadInformation;
        *(_QWORD *)&v142 = v48;
        if ( !v48 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v24 = Thread;
        v49 = Thread->Process;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v49[1].ProfileListHead.Blink) )
        {
          if ( !KeSetLegacyAffinityThread((__int64)v24, (__int64)v48) )
            v10 = -1073741811;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v49[1].ProfileListHead.Blink);
        }
        else
        {
          v10 = -1073741558;
        }
        goto LABEL_112;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v80 = *(_BYTE *)ThreadInformation;
        v107 = *(_BYTE *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v102 = result;
        if ( result < 0 )
          return result;
        if ( v80 )
          _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        goto LABEL_47;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v25 = *(_DWORD *)ThreadInformation;
        v114 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v26 = result;
        v102 = result;
        if ( result < 0 )
          return result;
        v27 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v27 != CurrentThread )
          return -1073741811;
        v28 = v27->Process;
        v113 = (struct _KTHREAD *)v28;
        for ( i = PsGetNextProcessThread(v28, 0LL); ; i = PsGetNextProcessThread(v28, v30) )
        {
          Thread = (PETHREAD)i;
          v30 = (struct _EX_RUNDOWN_REF *)i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(i + 1720)) )
          {
            Count = v30[30].Count;
            if ( Count )
            {
              v32 = v28[1].ActiveProcessors.Bitmap[7];
              v33 = 0;
              if ( v32 )
              {
                v39 = *(_WORD *)(v32 + 8);
                if ( v39 == 332 || v39 == 452 )
                  v33 = 1;
              }
              v105 = v33;
              v34 = Count + 0x2000;
              if ( !v33 )
                v34 = 0LL;
              if ( v25 >= 0x40 )
              {
                if ( v25 < 0x440 )
                {
                  if ( v32 && ((v38 = *(_WORD *)(v32 + 8), v38 == 332) || v38 == 452) )
                  {
                    if ( v34 )
                    {
                      v40 = *(unsigned int *)(v34 + 3988);
                      if ( (_DWORD)v40 )
                        *(_DWORD *)(v40 + 4LL * (v25 - 64)) = 0;
                    }
                  }
                  else
                  {
                    v35 = *(_QWORD *)(Count + 6016);
                    v138 = v35;
                    if ( v35 )
                    {
                      v36 = v35 + 8LL * (v25 - 64);
                      if ( v36 >= 0x7FFFFFFF0000LL )
                        v36 = 0x7FFFFFFF0000LL;
                      *(_QWORD *)v36 = 0LL;
                    }
                  }
                }
              }
              else if ( v32 && ((v37 = *(_WORD *)(v32 + 8), v37 == 332) || v37 == 452) )
              {
                if ( v34 )
                  *(_DWORD *)(v34 + 4LL * v25 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v25 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection_0(v30 + 215);
          }
        }
        return v26;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v50 = *(_DWORD *)ThreadInformation;
        v122 = v50;
        if ( v50 > 0x40 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v51 = v50;
          v52 = Thread;
          v53 = KeSetIdealProcessorThread(Thread, v51);
          if ( (v52->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v52);
          ObfDereferenceObjectWithTag(v52, 0x79517350u);
          return v53;
        }
        return result;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v67 = *(_DWORD *)ThreadInformation;
        v123 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v68 = result;
        if ( result >= 0 )
        {
          if ( v67 )
            v10 = 1;
          KeSetDisableBoostThread(Thread, (unsigned int)v10);
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return v68;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( ThreadInformationLength )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v102 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
        goto LABEL_143;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v65 = *(_DWORD *)ThreadInformation;
        v124 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v102 = result;
        if ( result < 0 )
          return result;
        if ( v65 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
        goto LABEL_47;
      case ThreadSwitchLegacyState:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v19 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_48;
      case ThreadIoPriority:
        if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ThreadInformationLength == 4 )
        {
          LODWORD(v54) = *(_DWORD *)ThreadInformation;
          v125 = *(_DWORD *)ThreadInformation;
          LOBYTE(v55) = 0;
        }
        else
        {
          v54 = *(_QWORD *)ThreadInformation;
          v139 = v54;
          v55 = HIDWORD(v54);
        }
        if ( (unsigned int)v54 >= 4 )
          return -1073741811;
        if ( (unsigned int)v54 < 3 )
          goto LABEL_124;
        if ( !SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)ThreadHandle, 0x20u, v8) )
          return -1073741727;
        v6 = BugCheckParameter1;
LABEL_124:
        result = ObpReferenceObjectByHandleWithTag(v6, 32, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v56 = (_BYTE)v55 == 1;
        v57 = Thread;
        if ( v56 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v54 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v54, 0);
        PsSetIoPriorityThread((__int64)v57, v54);
        v19 = v57;
LABEL_48:
        v20 = 2035381072;
        goto LABEL_49;
      case ThreadPagePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v17 = *(_DWORD *)ThreadInformation;
        v126 = v17;
        if ( v17 > (unsigned int)MmGetDefaultPagePriority() || v17 < (unsigned int)MiCreateSystemWsles() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(v18, 32, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v17);
        goto LABEL_47;
      case ThreadActualBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v21 = *(_DWORD *)ThreadInformation;
        Increment = v21;
        if ( (unsigned int)(v21 - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v10 = result;
        if ( result < 0 )
          return result;
        v24 = Thread;
        if ( v21 < 16
          || HIBYTE(Thread->Process[1].ActiveProcessors.Bitmap[13]) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v24, v21, v22, v23);
        }
        else
        {
          v10 = -1073741727;
        }
LABEL_112:
        ObfDereferenceObjectWithTag(v24, 0x79517350u);
        return v10;
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   16,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v63 = Thread;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            v64 = PspWow64SetContextThread(v63, v5);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v63[1].WaitStatus);
            ObfDereferenceObjectWithTag(v63, 0x79517350u);
            return v64;
          }
          else
          {
            ObfDereferenceObjectWithTag(v63, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v142 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v142, 1) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v59 = Thread->Process;
        --CurrentThread->KernelApcDisable;
        p_Lock = (signed __int64 *)&v59[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v59[1], 0LL);
        v61 = v59[1].Affinity.Bitmap[16];
        v112 = (PVOID)v61;
        v62 = v61;
        if ( !v61
          || (ExAcquireResourceSharedLite((PERESOURCE)(v61 + 56), 1u), (*(_DWORD *)(v62 + 848) & 0x10) == 0)
          || (v81 = *(_QWORD *)(v62 + 8LL * WORD4(v142) + 624)) != 0 && ((unsigned __int64)v142 & v81) == (_QWORD)v142 )
        {
          KeSetAffinityThread((__int64)Thread, (__int64)&v142);
          v102 = 0;
        }
        else
        {
          v102 = -1073741823;
        }
        if ( v62 )
          ExReleaseResourceLite((PERESOURCE)(v62 + 56));
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_143;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v136 = *(_OWORD *)ThreadInformation;
        v137 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v85 = CurrentThread;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     2035381072,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v85 = Thread;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        }
        if ( v85 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v136 == 1 )
          return PspAttachThreadToUmsCompletionList(v85, (__int64)&v136, v8, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v136 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v85);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v119 = *(_OWORD *)ThreadInformation;
        v120 = *((_QWORD *)ThreadInformation + 2);
        v82 = v120;
        if ( (v120 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v120 >= 0x7FFFFFFF0000LL )
          v82 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v82 = *(_BYTE *)v82;
        *(_BYTE *)(v82 + 447) = *(_BYTE *)(v82 + 447);
        result = ObpReferenceObjectByHandleWithTag(v6, 32, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v83 = Thread;
          if ( Thread == KeGetCurrentThread() )
          {
            if ( HIDWORD(v119) )
              v84 = KeEnableProfiling(Thread, DWORD2(v119), v119, v120);
            else
              v84 = KeDisableProfiling((__int64)Thread, v120);
          }
          else
          {
            v84 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v83, 0x79517350u);
          return v84;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v109 = *(_PROCESSOR_NUMBER *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v24 = Thread;
        v10 = KeSetIdealProcessorThreadByNumber(Thread, &v109, &v109);
        if ( v10 >= 0 )
        {
          if ( (v24->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v24);
          *(_PROCESSOR_NUMBER *)v5 = v109;
        }
        goto LABEL_112;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v140 = *(HANDLE *)ThreadInformation;
        if ( v140 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v140,
                     2,
                     (__int64)MmSessionObjectType,
                     v8,
                     2035381072,
                     &v115,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v87 = (struct _LIST_ENTRY *)v115;
          v88 = *((_QWORD *)v115 + 4);
          if ( !v88 )
          {
            ObfDereferenceObjectWithTag(v115, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v88) )
          {
            ObfDereferenceObjectWithTag(v87, 0x79517350u);
            return -1073740714;
          }
          CurrentThread[1].ApcState.ApcListHead[1].Flink = v87;
        }
        else
        {
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
            return -1073740713;
          ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
          CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
        }
        return 0;
      case ThreadHeterogeneousCpuPolicy:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v89 = MEMORY[4];
        v127 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v14 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ThreadHandle,
                1024,
                (__int64)PsThreadType,
                v8,
                2035381072,
                &Thread,
                0LL,
                0LL);
        if ( v14 < 0 )
          return v14;
        KeSetUserHeteroCpuPolicyThread((__int64)Thread, v89);
        goto LABEL_35;
      case ThreadNameInformation:
        v104 = 0;
        v70 = 0LL;
        v110 = 0LL;
        P = 0LL;
        Thread = 0LL;
        v103 = 0;
        if ( ThreadInformationLength == 16 )
        {
          v26 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ThreadHandle,
                  1024,
                  (__int64)PsThreadType,
                  v8,
                  2035381072,
                  &Thread,
                  0LL,
                  0LL);
          v102 = v26;
          if ( v26 < 0 )
            goto LABEL_192;
          v104 = 1;
          if ( v106 )
          {
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v71 = *(_PROCESSOR_NUMBER *)v5;
            LODWORD(v135) = v71;
            v72 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v135 + 1) = v72;
            *(_OWORD *)Src = v135;
            if ( v71.Group )
            {
              if ( (v72 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v73 = v71.Group + v72;
              if ( v73 > 0x7FFFFFFF0000LL || v73 < v72 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v26 = v102;
            v70 = v110;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)v5;
          }
          v74 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v26 = -1073741811;
          }
          else
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
            v70 = PoolWithTag;
            v110 = PoolWithTag;
            if ( PoolWithTag )
            {
              v76 = PoolWithTag + 16;
              v70[1] = v76;
              *(_WORD *)v70 = v74;
              *((_WORD *)v70 + 1) = v74;
              memmove(v76, Src[1], v74);
              --CurrentThread->KernelApcDisable;
              v77 = Thread;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
              v103 = 1;
              P = v77[1].WaitBlock[3].Thread;
              v77[1].WaitBlock[3].Thread = (struct _KTHREAD *)v70;
              v70 = 0LL;
              v110 = 0LL;
              EtwTraceThreadSetName(v77);
              goto LABEL_192;
            }
            v26 = -1073741670;
          }
        }
        else
        {
          v26 = -1073741820;
        }
        v102 = v26;
LABEL_192:
        if ( v103 )
        {
          v78 = Thread;
          v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v79 & 2) != 0 && (v79 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v78[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v78[1].WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v26 = v102;
          v70 = v110;
        }
        if ( v104 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v70 )
          ExFreePoolWithTag(v70, 0x6D4E6854u);
        return v26;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v143, ThreadInformation, ThreadInformationLength);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v90 = KeSetSelectedCpuSetsThread((__int64)Thread, ThreadInformationLength >> 3, v143);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v90;
        }
        return result;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v129 = *(_DWORD *)ThreadInformation;
        if ( v129 == 1 )
        {
          if ( (CurrentThread->Process[2].UserDirectoryTableBase & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v129 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v91 = *(_DWORD *)ThreadInformation;
        v128 = *(_DWORD *)ThreadInformation;
        if ( !v8 )
          goto LABEL_293;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(
                (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].ActiveProcessors.Bitmap[0]),
                (PS_PROTECTION)81) )
          return -1073741790;
        v6 = BugCheckParameter1;
LABEL_293:
        result = ObpReferenceObjectByHandleWithTag(v6, 32, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        v102 = result;
        if ( result >= 0 )
        {
          if ( v91 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_143:
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v102;
        }
        return result;
      case ThreadDbgkWerReportActive:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v92 = *(_DWORD *)ThreadInformation;
        v130 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        v102 = result;
        if ( result < 0 )
          return result;
        if ( v92 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
        goto LABEL_143;
      case ThreadAttachContainer:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v131 = *(_QWORD *)ThreadInformation;
        v93 = KeGetCurrentThread();
        if ( v131 )
        {
          if ( *(_QWORD *)&v93[1].WaitBlockFill11[160] != -3LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(v131, 32, (__int64)PsJobType, v8, 1833530192, &v112, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v95 = v112;
          v96 = v112;
          if ( (*((_DWORD *)v112 + 327) & 2) == 0
            || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v112),
                CurrentServerSilo = PsGetCurrentServerSilo(),
                v96 = v95,
                CurrentServerSilo != EffectiveServerSilo) )
          {
            ObfDereferenceObjectWithTag(v96, 0x6D497350u);
            return -1073741811;
          }
          PsAttachSiloToCurrentThread((__int64)v95);
        }
        else
        {
          if ( *(_QWORD *)&v93[1].WaitBlockFill11[160] == -3LL )
            return -1073741811;
          v94 = PsAttachSiloToCurrentThread(-3LL);
          v20 = 1833530192;
          v19 = (PETHREAD)v94;
LABEL_49:
          ObfDereferenceObjectWithTag(v19, v20);
        }
        return 0;
      case ThreadManageWritesToExecutableMemory:
        return -1073741637;
      case ThreadPowerThrottlingState:
        if ( ThreadInformationLength != 12 )
          return -1073741820;
        v133 = *(HANDLE *)ThreadInformation;
        v99 = *((_DWORD *)ThreadInformation + 2);
        if ( (_DWORD)v133 != 1 || (HIDWORD(v133) & 0xFFFFFFFE) != 0 || (~HIDWORD(v133) & v99) != 0 )
          return -1073741811;
        if ( (BYTE4(v133) & 1) != 0 )
          v100 = 2 * ((v99 & 1) == 0) + 1;
        else
          v100 = 0;
        result = ObpReferenceObjectByHandleWithTag(v6, 32, (__int64)PsThreadType, v8, 2035381072, &Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v100);
        goto LABEL_47;
      default:
        return -1073741821;
    }
  }
  if ( ThreadHandle != (HANDLE)-2LL )
    return -1073741811;
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v13 = *(_QWORD *)ThreadInformation;
  v141 = *(HANDLE *)ThreadInformation;
  v14 = ObpReferenceObjectByHandleWithTag(
          0xFFFFFFFFFFFFFFFEuLL,
          1024,
          (__int64)PsThreadType,
          v8,
          2035381072,
          &Thread,
          0LL,
          0LL);
  if ( v14 >= 0 )
  {
    if ( v13 )
    {
      v115 = (PVOID)(PspWorkOnBehalfEncodingKey ^ v13);
      v14 = PsLookupThreadByThreadId((HANDLE)(int)(PspWorkOnBehalfEncodingKey ^ v13), &v117);
      v15 = v117;
      if ( v14 >= 0 )
      {
        if ( v117[1].Header.LockNV == HIDWORD(v115) )
        {
          v14 = 0;
        }
        else
        {
          ObfDereferenceObject(v117);
          v14 = -1073741275;
        }
      }
      if ( v14 >= 0 )
      {
        PspRevertContainerImpersonation((__int64)CurrentThread);
        PsImpersonateContainerOfThread((__int64)v15);
        ObfDereferenceObject(v15);
      }
    }
    else
    {
      PspRevertContainerImpersonation((__int64)CurrentThread);
    }
LABEL_35:
    ObfDereferenceObjectWithTag(Thread, 0x79517350u);
  }
  return v14;
}
