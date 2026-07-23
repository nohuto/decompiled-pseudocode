/*
 * XREFs of NtSetInformationThread @ 0x14047D650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetIdealProcessorThread @ 0x14002D490 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14002D4E0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeVerifyGroupAffinity @ 0x140036394 (KeVerifyGroupAffinity.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140044420 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400669C4 (PsSetIoPriorityThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     MiCreateSystemWsles @ 0x14014358C (MiCreateSystemWsles.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401FCD58 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140201CD8 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x14023926C (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x1402393C0 (PspDetachThreadFromUmsCompletionList.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     KeSetDisableBoostThread @ 0x14045E014 (KeSetDisableBoostThread.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PspWriteTebIdealProcessor @ 0x1404F87BC (PspWriteTebIdealProcessor.c)
 *     PsLookupThreadByThreadId @ 0x14050EEE0 (PsLookupThreadByThreadId.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlTestProtectedAccess @ 0x1405463A0 (RtlTestProtectedAccess.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x1406AD1B8 (KeEnableProfiling.c)
 *     EtwTraceThreadSetName @ 0x14070B2E8 (EtwTraceThreadSetName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  NTSTATUS v10; // esi
  int v11; // r15d
  NTSTATUS result; // eax
  struct _KTHREAD *v13; // rax
  unsigned int v14; // ebx
  ULONG_PTR v15; // r10
  PETHREAD v16; // rcx
  ULONG v17; // edx
  unsigned __int64 v18; // rbx
  int v19; // edi
  PETHREAD v20; // rbx
  PVOID v21; // rbx
  LONG v22; // ebx
  _SINGLE_LIST_ENTRY *v23; // r8
  __int64 v24; // r9
  PETHREAD v25; // rdi
  unsigned int v26; // r15d
  NTSTATUS v27; // r12d
  PETHREAD v28; // rdi
  _KPROCESS *v29; // rdi
  __int64 i; // rax
  struct _EX_RUNDOWN_REF *v31; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v33; // rdx
  bool v34; // al
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  __int16 v37; // ax
  unsigned __int64 v38; // rax
  __int16 v39; // ax
  __int16 v40; // ax
  HANDLE v41; // rbx
  _KPROCESS *v42; // r14
  int v43; // ebx
  PETHREAD v44; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  LONG v49; // edx
  NTSTATUS v50; // r15d
  unsigned int v51; // ebx
  UCHAR v52; // dl
  PETHREAD v53; // rbx
  NTSTATUS v54; // edi
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rdi
  bool v57; // zf
  PETHREAD v58; // rdi
  PETHREAD v59; // rsi
  NTSTATUS v60; // ebx
  KPRIORITY v61; // ebx
  ULONG_PTR v62; // r10
  _KPROCESS *v63; // rbx
  signed __int64 *p_Lock; // rdi
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rbx
  _KPROCESS *v67; // rbx
  int v68; // ebx
  int v69; // edi
  NTSTATUS v70; // ebx
  PVOID v71; // rcx
  char v72; // bl
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  struct _KTHREAD *v75; // rbx
  PVOID v77; // rbx
  __int64 v78; // rdx
  unsigned int v79; // ebx
  NTSTATUS v80; // ebx
  _QWORD *v81; // r12
  unsigned __int8 v82; // di
  int v83; // eax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  unsigned __int16 v86; // bx
  char *PoolWithTag; // rax
  void *v88; // rax
  PETHREAD v89; // rbx
  PETHREAD v90; // rbx
  int v91; // ebx
  int v92; // ebx
  struct _KTHREAD *v93; // rax
  __int64 v94; // rax
  PVOID v95; // rdi
  PVOID v96; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 CurrentServerSilo; // rax
  PETHREAD Thread; // [rsp+40h] [rbp-248h] BYREF
  NTSTATUS v100; // [rsp+48h] [rbp-240h]
  char v101; // [rsp+4Ch] [rbp-23Ch]
  char v102; // [rsp+4Dh] [rbp-23Bh]
  int v103; // [rsp+50h] [rbp-238h]
  bool v104; // [rsp+54h] [rbp-234h]
  char v105; // [rsp+55h] [rbp-233h]
  char v106; // [rsp+56h] [rbp-232h]
  unsigned __int8 v107; // [rsp+58h] [rbp-230h]
  char v108; // [rsp+5Ah] [rbp-22Eh]
  LONG Increment; // [rsp+5Ch] [rbp-22Ch]
  _PROCESSOR_NUMBER v110; // [rsp+60h] [rbp-228h] BYREF
  _QWORD *v111; // [rsp+68h] [rbp-220h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-218h]
  PVOID v113; // [rsp+78h] [rbp-210h] BYREF
  struct _KTHREAD *v114; // [rsp+80h] [rbp-208h]
  int v115; // [rsp+88h] [rbp-200h]
  PVOID P; // [rsp+90h] [rbp-1F8h]
  PVOID v117; // [rsp+98h] [rbp-1F0h] BYREF
  PETHREAD v118; // [rsp+A0h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-1E0h] BYREF
  __int128 v120; // [rsp+B0h] [rbp-1D8h]
  unsigned __int64 v121; // [rsp+C0h] [rbp-1C8h]
  int v122; // [rsp+C8h] [rbp-1C0h]
  int v123; // [rsp+CCh] [rbp-1BCh]
  KPRIORITY v124; // [rsp+D0h] [rbp-1B8h]
  unsigned int v125; // [rsp+D4h] [rbp-1B4h]
  int v126; // [rsp+D8h] [rbp-1B0h]
  int v127; // [rsp+DCh] [rbp-1ACh]
  int v128; // [rsp+E0h] [rbp-1A8h]
  unsigned int v129; // [rsp+E4h] [rbp-1A4h]
  int v130; // [rsp+E8h] [rbp-1A0h]
  ULONG_PTR v131; // [rsp+100h] [rbp-188h]
  HANDLE Handle; // [rsp+108h] [rbp-180h]
  void *Src[2]; // [rsp+120h] [rbp-168h]
  int v134; // [rsp+130h] [rbp-158h]
  __int128 v135; // [rsp+140h] [rbp-148h]
  __int128 v136; // [rsp+150h] [rbp-138h] BYREF
  __int64 v137; // [rsp+160h] [rbp-128h]
  HANDLE v138; // [rsp+168h] [rbp-120h]
  unsigned __int64 v139; // [rsp+170h] [rbp-118h]
  HANDLE v140; // [rsp+178h] [rbp-110h]
  __int64 v141; // [rsp+180h] [rbp-108h]
  unsigned __int64 v142; // [rsp+188h] [rbp-100h]
  __int128 v143; // [rsp+190h] [rbp-F8h] BYREF
  char v144[160]; // [rsp+1A0h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = (ULONG_PTR)ThreadHandle;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  CurrentThread = KeGetCurrentThread();
  v114 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v107 = v8;
  if ( v8 )
  {
    if ( ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken
      || ThreadInformationClass > ThreadNameInformation )
    {
LABEL_4:
      v9 = 3LL;
      v103 = 4;
LABEL_5:
      v10 = 0;
      v11 = 1;
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
          v103 = 8;
          v9 = 7LL;
          goto LABEL_5;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v11 = 1;
          v103 = 1;
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
    v11 = 1;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( ThreadInformationLength == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
      if ( result >= 0 )
      {
        v13 = KeGetCurrentThread();
        if ( Handle )
        {
          v10 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v13->PreviousMode, &Object, 0LL);
          if ( v10 >= 0 )
          {
            v21 = Object;
            if ( *((_DWORD *)Object + 48) == 2 )
            {
              v10 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
              ObfDereferenceObject(v21);
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
    if ( ThreadInformationClass == ThreadPagePriority )
    {
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v14 = *(_DWORD *)ThreadInformation;
      v129 = v14;
      if ( v14 <= (unsigned int)MmGetDefaultPagePriority() && v14 >= (unsigned int)MiCreateSystemWsles() )
      {
        result = ObpReferenceObjectByHandleWithTag(v15, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          PsSetPagePriorityThread((__int64)Thread, v14);
LABEL_31:
          v16 = Thread;
LABEL_32:
          v17 = 2035381072;
LABEL_33:
          ObfDereferenceObjectWithTag(v16, v17);
          return 0;
        }
        return result;
      }
      return -1073741811;
    }
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v61 = *(_DWORD *)ThreadInformation;
        v124 = v61;
        if ( (unsigned int)(v61 - 1) > 0x1E )
          return -1073741811;
        if ( v61 < 16 )
          goto LABEL_136;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 1024LL,
                                 v8) )
          return -1073741727;
        v6 = BugCheckParameter1;
LABEL_136:
        result = ObpReferenceObjectByHandleWithTag(v6, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread(Thread, v61);
        goto LABEL_31;
      case ThreadBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v43 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        v44 = Thread;
        Process = Thread->Process;
        v46 = (unsigned int)(v43 + 16);
        if ( (unsigned int)v46 > 0x20 || (v47 = 0x10007C001LL, !_bittest64(&v47, v46)) )
        {
          v67 = CurrentThread->ApcState.Process;
          if ( v67 != *((_KPROCESS **)PsGetServerSiloGlobals(0LL) + 110)
            && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
          {
            v50 = -1073741811;
LABEL_113:
            ObfDereferenceObjectWithTag(v44, 0x79517350u);
            return v50;
          }
        }
        v48 = (_DWORD *)Process[1].Affinity.Bitmap[16];
        v113 = v48;
        if ( v48 && (v48[212] & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
        {
          v49 = Increment;
          if ( Increment > 0 )
          {
            v44 = Thread;
            goto LABEL_112;
          }
        }
        else
        {
          v49 = Increment;
        }
        v44 = Thread;
        KeSetBasePriorityThread(Thread, v49);
LABEL_112:
        v50 = v100;
        goto LABEL_113;
      case ThreadAffinityMask:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v41 = *(HANDLE *)ThreadInformation;
        *(_QWORD *)&v143 = v41;
        if ( !v41 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v25 = Thread;
        v42 = Thread->Process;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v42[1].ProfileListHead.Blink) )
        {
          if ( !KeSetLegacyAffinityThread((__int64)v25, (__int64)v41) )
            v10 = -1073741811;
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v42[1].ProfileListHead.Blink);
        }
        else
        {
          v10 = -1073741558;
        }
        goto LABEL_103;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v72 = *(_BYTE *)ThreadInformation;
        v108 = *(_BYTE *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        if ( v72 )
          _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 0);
        else
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0);
        goto LABEL_31;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v26 = *(_DWORD *)ThreadInformation;
        v115 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v27 = result;
        v100 = result;
        if ( result < 0 )
          return result;
        v28 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v28 != CurrentThread )
          return -1073741811;
        v29 = v28->Process;
        v114 = (struct _KTHREAD *)v29;
        for ( i = PsGetNextProcessThread(v29, 0LL); ; i = PsGetNextProcessThread(v29, v31) )
        {
          Thread = (PETHREAD)i;
          v31 = (struct _EX_RUNDOWN_REF *)i;
          if ( !i )
            break;
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(i + 1712)) )
          {
            Count = v31[30].Count;
            if ( Count )
            {
              v33 = v29[1].ActiveProcessors.Bitmap[7];
              v34 = 0;
              if ( v33 )
              {
                v40 = *(_WORD *)(v33 + 8);
                if ( v40 == 332 || v40 == 452 )
                  v34 = 1;
              }
              v104 = v34;
              v35 = Count + 0x2000;
              if ( !v34 )
                v35 = 0LL;
              if ( v26 >= 0x40 )
              {
                if ( v26 < 0x440 )
                {
                  if ( v33 && ((v39 = *(_WORD *)(v33 + 8), v39 == 332) || v39 == 452) )
                  {
                    v105 = 1;
                    if ( v35 && *(_DWORD *)(v35 + 3988) )
                      *(_DWORD *)(*(unsigned int *)(v35 + 3988) + 4LL * (v26 - 64)) = 0;
                  }
                  else
                  {
                    v105 = 0;
                    v36 = *(_QWORD *)(Count + 6016);
                    v141 = v36;
                    if ( v36 )
                    {
                      v38 = v36 + 8LL * (v26 - 64);
                      if ( v38 >= 0x7FFFFFFF0000LL )
                        v38 = 0x7FFFFFFF0000LL;
                      *(_QWORD *)v38 = 0LL;
                    }
                  }
                }
              }
              else if ( v33 && ((v37 = *(_WORD *)(v33 + 8), v37 == 332) || v37 == 452) )
              {
                v106 = 1;
                if ( v35 )
                  *(_DWORD *)(v35 + 4LL * v26 + 3600) = 0;
              }
              else
              {
                v106 = 0;
                *(_QWORD *)(Count + 8LL * v26 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection(v31 + 214);
          }
        }
        return v27;
      case ThreadIdealProcessor:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v51 = *(_DWORD *)ThreadInformation;
        v125 = v51;
        if ( v51 > 0x40 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v52 = v51;
        v53 = Thread;
        v54 = KeSetIdealProcessorThread(Thread, v52);
        if ( (v53->MiscFlags & 0x400) == 0 )
          PspWriteTebIdealProcessor(CurrentThread, v53);
LABEL_120:
        ObfDereferenceObjectWithTag(v53, 0x79517350u);
        return v54;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v69 = *(_DWORD *)ThreadInformation;
        v126 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v70 = result;
        if ( result >= 0 )
        {
          if ( !v69 )
            v11 = 0;
          KeSetDisableBoostThread((__int64)Thread, v11);
          ObfDereferenceObjectWithTag(v71, 0x79517350u);
          return v70;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( ThreadInformationLength )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
        goto LABEL_148;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v68 = *(_DWORD *)ThreadInformation;
        v127 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        if ( v68 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
        goto LABEL_31;
      case ThreadSwitchLegacyState:
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v16 = Thread;
        Thread->NpxState = MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_32;
      case ThreadIoPriority:
        if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ThreadInformationLength == 4 )
        {
          LODWORD(v55) = *(_DWORD *)ThreadInformation;
          v128 = *(_DWORD *)ThreadInformation;
          LOBYTE(v56) = 0;
        }
        else
        {
          v55 = *(_QWORD *)ThreadInformation;
          v142 = v55;
          v56 = HIDWORD(v55);
        }
        if ( (unsigned int)v55 >= 4 )
          return -1073741811;
        if ( (unsigned int)v55 < 3 )
          goto LABEL_126;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 32LL,
                                 v8) )
          return -1073741727;
        v6 = BugCheckParameter1;
LABEL_126:
        result = ObpReferenceObjectByHandleWithTag(v6, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v57 = (_BYTE)v56 == 1;
        v58 = Thread;
        if ( v57 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v55 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v55, 0);
        PsSetIoPriorityThread((__int64)v58, v55);
        v16 = v58;
        goto LABEL_32;
      case ThreadActualBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v22 = *(_DWORD *)ThreadInformation;
        Increment = v22;
        if ( (unsigned int)(v22 - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v10 = result;
        if ( result < 0 )
          return result;
        v25 = Thread;
        if ( v22 < 16
          || HIBYTE(Thread->Process[1].ActiveProcessors.Bitmap[13]) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v25, v22, v23, v24);
        }
        else
        {
          v10 = -1073741727;
        }
LABEL_103:
        ObfDereferenceObjectWithTag(v25, 0x79517350u);
        return v10;
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v59 = Thread;
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            v60 = PspWow64SetContextThread(v59, (_DWORD *)v5, ThreadInformationLength, v8);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v59[1].WaitStatus);
            ObfDereferenceObjectWithTag(v59, 0x79517350u);
            return v60;
          }
          else
          {
            ObfDereferenceObjectWithTag(v59, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v143 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v143, 1) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(v62, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v100 = 0;
        v63 = Thread->Process;
        --CurrentThread->KernelApcDisable;
        p_Lock = (signed __int64 *)&v63[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v63[1], 0LL);
        v65 = v63[1].Affinity.Bitmap[16];
        v113 = (PVOID)v65;
        v66 = v65;
        if ( !v65 )
          goto LABEL_142;
        ExAcquireResourceSharedLite((PERESOURCE)(v65 + 56), 1u);
        if ( (*(_DWORD *)(v66 + 848) & 0x10) == 0
          || (v73 = *(_QWORD *)(v66 + 8LL * WORD4(v143) + 624)) != 0 && ((unsigned __int64)v143 & v73) == (_QWORD)v143 )
        {
          v100 = 0;
LABEL_142:
          KeSetAffinityThread_0((__int64)Thread, (__int64)&v143);
        }
        else
        {
          v100 = -1073741823;
        }
        if ( v66 )
          ExReleaseResourceLite((PERESOURCE)(v66 + 56));
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_148;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v136 = *(_OWORD *)ThreadInformation;
        v137 = *((_QWORD *)ThreadInformation + 2);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v75 = CurrentThread;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v75 = Thread;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        }
        if ( v75 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v136 == 1 )
          return PspAttachThreadToUmsCompletionList(v75, (__int64)&v136, v8, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v136 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v75);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v120 = *(_OWORD *)ThreadInformation;
        v121 = *((_QWORD *)ThreadInformation + 2);
        v74 = v121;
        if ( (v121 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v121 >= 0x7FFFFFFF0000LL )
          v74 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v74 = *(_BYTE *)v74;
        *(_BYTE *)(v74 + 447) = *(_BYTE *)(v74 + 447);
        result = ObpReferenceObjectByHandleWithTag(v6, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v53 = Thread;
        if ( Thread == KeGetCurrentThread() )
        {
          if ( HIDWORD(v120) )
            v54 = KeEnableProfiling(Thread, DWORD2(v120), v120, v121);
          else
            v54 = KeDisableProfiling((__int64)Thread, v121);
        }
        else
        {
          v54 = -1073741637;
        }
        goto LABEL_120;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v110 = *(_PROCESSOR_NUMBER *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v25 = Thread;
        v10 = KeSetIdealProcessorThreadByNumber(Thread, &v110, &v110);
        if ( v10 >= 0 )
        {
          if ( (v25->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v25);
          *(_PROCESSOR_NUMBER *)v5 = v110;
        }
        goto LABEL_103;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v138 = *(HANDLE *)ThreadInformation;
        if ( v138 )
        {
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v138, 2035381072, (__int64)&v117, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v77 = v117;
          v78 = *((_QWORD *)v117 + 4);
          if ( !v78 )
          {
            ObfDereferenceObjectWithTag(v117, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v78) )
          {
            ObfDereferenceObjectWithTag(v77, 0x79517350u);
            return -1073740714;
          }
          CurrentThread[1].SListFaultAddress = v77;
        }
        else
        {
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
            return -1073740713;
          ObfDereferenceObject(CurrentThread[1].SListFaultAddress);
          CurrentThread[1].SListFaultAddress = 0LL;
        }
        return 0;
      case ThreadHeterogeneousCpuPolicy:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v79 = MEMORY[4];
        v123 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v19 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( v19 < 0 )
          return v19;
        KeSetUserHeteroCpuPolicyThread((__int64)Thread, v79);
        goto LABEL_44;
      case ThreadNameInformation:
        v102 = 0;
        v81 = 0LL;
        v111 = 0LL;
        P = 0LL;
        Thread = 0LL;
        v101 = 0;
        if ( ThreadInformationLength == 16 )
        {
          v82 = v107;
          v50 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v100 = v50;
          if ( v50 < 0 )
            goto LABEL_275;
          v102 = 1;
          v139 = v5;
          if ( v82 )
          {
            if ( v5 >= 0x7FFFFFFF0000LL )
              v5 = 0x7FFFFFFF0000LL;
            v83 = *(_DWORD *)v5;
            LODWORD(v135) = v83;
            v84 = *(_QWORD *)(v5 + 8);
            *((_QWORD *)&v135 + 1) = v84;
            *(_OWORD *)Src = v135;
            if ( (_WORD)v83 )
            {
              if ( (v84 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v85 = (unsigned __int16)v83 + v84;
              if ( v85 > 0x7FFFFFFF0000LL || v85 < v84 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v50 = v100;
            v81 = v111;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)v5;
          }
          v86 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v50 = -1073741811;
          }
          else
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
            v81 = PoolWithTag;
            v111 = PoolWithTag;
            if ( PoolWithTag )
            {
              v88 = PoolWithTag + 16;
              v81[1] = v88;
              *(_WORD *)v81 = v86;
              *((_WORD *)v81 + 1) = v86;
              memmove(v88, Src[1], v86);
              --CurrentThread->KernelApcDisable;
              v89 = Thread;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
              v101 = 1;
              P = v89[1].WaitBlock[3].Thread;
              v89[1].WaitBlock[3].Thread = (struct _KTHREAD *)v81;
              v81 = 0LL;
              v111 = 0LL;
              EtwTraceThreadSetName(v89);
              goto LABEL_275;
            }
            v50 = -1073741670;
          }
        }
        else
        {
          v50 = -1073741820;
        }
        v100 = v50;
LABEL_275:
        if ( v101 )
        {
          v90 = Thread;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v90[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v90[1].WaitBlockList);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v50 = v100;
          v81 = v111;
        }
        if ( v102 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v81 )
          ExFreePoolWithTag(v81, 0x6D4E6854u);
        return v50;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v144, ThreadInformation, ThreadInformationLength);
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v80 = KeSetSelectedCpuSetsThread((__int64)Thread, ThreadInformationLength >> 3, v144);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v80;
        }
        return result;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v130 = *(_DWORD *)ThreadInformation;
        if ( v130 == 1 )
        {
          if ( (CurrentThread->Process[2].ActiveProcessors.Bitmap[0] & 0x400000000000LL) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v130 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v91 = *(_DWORD *)ThreadInformation;
        v134 = *(_DWORD *)ThreadInformation;
        if ( !v8 )
          goto LABEL_290;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(
                (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].ActiveProcessors.Bitmap[0]),
                (PS_PROTECTION)81) )
          return -1073741790;
        v6 = BugCheckParameter1;
LABEL_290:
        result = ObpReferenceObjectByHandleWithTag(v6, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        if ( v91 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_148:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v100;
      case ThreadDbgkWerReportActive:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v92 = *(_DWORD *)ThreadInformation;
        v122 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        v100 = result;
        if ( result < 0 )
          return result;
        if ( v92 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
        goto LABEL_148;
      case ThreadAttachContainer:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v131 = *(_QWORD *)ThreadInformation;
        v93 = KeGetCurrentThread();
        if ( !v131 )
        {
          if ( *(_QWORD *)&v93[1].WaitBlockFill11[160] == -3LL )
            return -1073741811;
          v94 = PsAttachSiloToCurrentThread(-3LL);
          v17 = 1833530192;
          v16 = (PETHREAD)v94;
          goto LABEL_33;
        }
        if ( *(_QWORD *)&v93[1].WaitBlockFill11[160] != -3LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(v131, 1833530192, (__int64)&v113, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v95 = v113;
        v96 = v113;
        if ( (*((_DWORD *)v113 + 327) & 2) != 0 )
        {
          EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v113);
          CurrentServerSilo = PsGetCurrentServerSilo();
          v96 = v95;
          if ( CurrentServerSilo == EffectiveServerSilo )
          {
            PsAttachSiloToCurrentThread((__int64)v95);
            return 0;
          }
        }
        ObfDereferenceObjectWithTag(v96, 0x6D497350u);
        return -1073741811;
      default:
        return -1073741821;
    }
  }
  if ( ThreadHandle != (HANDLE)-2LL )
    return -1073741811;
  if ( ThreadInformationLength != 8 )
    return -1073741820;
  v18 = *(_QWORD *)ThreadInformation;
  v140 = *(HANDLE *)ThreadInformation;
  v19 = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 2035381072, (__int64)&Thread, 0LL, 0LL);
  if ( v19 >= 0 )
  {
    if ( v18 )
    {
      v117 = (PVOID)(PspWorkOnBehalfEncodingKey ^ v18);
      v19 = PsLookupThreadByThreadId((HANDLE)(int)(PspWorkOnBehalfEncodingKey ^ v18), &v118);
      v20 = v118;
      if ( v19 >= 0 )
      {
        if ( v118[1].Header.LockNV == HIDWORD(v117) )
        {
          v19 = 0;
        }
        else
        {
          ObfDereferenceObject(v118);
          v19 = -1073741275;
        }
      }
      if ( v19 >= 0 )
      {
        PspRevertContainerImpersonation((__int64)CurrentThread);
        PsImpersonateContainerOfThread(v20);
        ObfDereferenceObject(v20);
      }
    }
    else
    {
      PspRevertContainerImpersonation((__int64)CurrentThread);
    }
LABEL_44:
    ObfDereferenceObjectWithTag(Thread, 0x79517350u);
  }
  return v19;
}
