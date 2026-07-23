/*
 * XREFs of NtSetInformationThread @ 0x14059B270
 * Callers:
 *     <none>
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140004C4C (KeVerifyGroupAffinity.c)
 *     MmGetDefaultPagePriority @ 0x140005EA0 (MmGetDefaultPagePriority.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x14004387C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiCreateSystemWsles @ 0x14006A794 (MiCreateSystemWsles.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 *     KeSetIdealProcessorThread @ 0x1400C1E70 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0 (KeSetIdealProcessorThreadByNumber.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     PsGetProcessSilo @ 0x1400CF620 (PsGetProcessSilo.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14024016C (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140245ED8 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x1402845E0 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x140284734 (PspDetachThreadFromUmsCompletionList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PspWriteTebIdealProcessor @ 0x1404B8A58 (PspWriteTebIdealProcessor.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     RtlTestProtectedAccess @ 0x1405553AC (RtlTestProtectedAccess.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     EtwTraceThreadSetName @ 0x14056DFAC (EtwTraceThreadSetName.c)
 *     KeSetDisableBoostThread @ 0x1405835DC (KeSetDisableBoostThread.c)
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     PspSetThreadPpmPolicy @ 0x1406554D0 (PspSetThreadPpmPolicy.c)
 *     KeEnableProfiling @ 0x140742338 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  ULONG_PTR v6; // r10
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v8; // r13
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rbx
  NTSTATUS v14; // edi
  __int64 v15; // rbx
  struct _KTHREAD *v16; // rdi
  unsigned __int64 *v17; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v19; // r14
  bool v20; // zf
  PVOID v21; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebx
  ULONG_PTR v26; // r10
  PVOID v27; // rcx
  ULONG v28; // edx
  PVOID v29; // rbx
  LONG v30; // ebx
  NTSTATUS v31; // esi
  _DWORD *v32; // rdi
  int v33; // edi
  PVOID v34; // rbx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rax
  LONG v39; // edx
  PVOID v40; // rbx
  unsigned int v41; // r14d
  NTSTATUS v42; // r13d
  struct _KTHREAD *v43; // rdi
  __int64 Process; // rdi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v46; // rbx
  unsigned __int64 Count; // rcx
  __int64 v48; // rdx
  bool v49; // al
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int16 v53; // ax
  __int16 v54; // ax
  __int64 v55; // rdx
  __int16 v56; // ax
  __int64 v57; // rbx
  PVOID v58; // r14
  struct _EX_RUNDOWN_REF *v59; // r15
  unsigned __int64 v60; // rdi
  PVOID v61; // rdi
  unsigned int v62; // ebx
  UCHAR v63; // dl
  KPRIORITY v64; // ebx
  PVOID v65; // rsi
  NTSTATUS v66; // ebx
  __int64 v67; // rbx
  signed __int64 *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // r14
  int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int16 v74; // bx
  char *PoolWithTag; // rax
  void *v76; // rax
  PVOID v77; // rbx
  volatile signed __int64 *v78; // rbx
  char v79; // al
  _QWORD *ServerSiloGlobals; // rax
  __int64 v81; // rdx
  int v82; // edi
  NTSTATUS v83; // ebx
  PVOID v84; // rcx
  int v85; // ebx
  int v86; // edx
  char v87; // bl
  __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  PVOID v90; // rdi
  NTSTATUS v91; // ebx
  struct _KTHREAD *v92; // rbx
  struct _LIST_ENTRY *v94; // rbx
  __int64 v95; // rdx
  unsigned int v96; // ebx
  NTSTATUS v97; // ebx
  int v98; // ebx
  int v99; // ebx
  struct _KTHREAD *v100; // rax
  __int64 v101; // rax
  PVOID v102; // rdi
  PEPROCESS v103; // rsi
  __int64 ProcessSilo; // rax
  _QWORD *v105; // rcx
  __int64 EffectiveServerSilo; // rbx
  signed __int32 v107[8]; // [rsp+0h] [rbp-278h] BYREF
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v109; // [rsp+48h] [rbp-230h]
  char v110; // [rsp+4Ch] [rbp-22Ch]
  char v111; // [rsp+4Dh] [rbp-22Bh]
  bool v112; // [rsp+4Eh] [rbp-22Ah]
  char v113; // [rsp+51h] [rbp-227h]
  LONG Increment; // [rsp+54h] [rbp-224h]
  _PROCESSOR_NUMBER v115; // [rsp+58h] [rbp-220h] BYREF
  _QWORD *v116; // [rsp+60h] [rbp-218h]
  __int64 v117; // [rsp+68h] [rbp-210h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-208h]
  PVOID v119; // [rsp+78h] [rbp-200h] BYREF
  int v120; // [rsp+80h] [rbp-1F8h]
  PVOID P; // [rsp+88h] [rbp-1F0h]
  PVOID Token; // [rsp+90h] [rbp-1E8h] BYREF
  ULONG_PTR v123; // [rsp+98h] [rbp-1E0h]
  __int128 v124; // [rsp+A0h] [rbp-1D8h]
  unsigned __int64 v125; // [rsp+B0h] [rbp-1C8h]
  KPRIORITY v126; // [rsp+B8h] [rbp-1C0h]
  unsigned int v127; // [rsp+BCh] [rbp-1BCh]
  int v128; // [rsp+C0h] [rbp-1B8h]
  int v129; // [rsp+C4h] [rbp-1B4h]
  int v130; // [rsp+C8h] [rbp-1B0h]
  unsigned int v131; // [rsp+CCh] [rbp-1ACh]
  int v132; // [rsp+D0h] [rbp-1A8h]
  int v133; // [rsp+D4h] [rbp-1A4h]
  int v134; // [rsp+DCh] [rbp-19Ch]
  PVOID v135[3]; // [rsp+E8h] [rbp-190h] BYREF
  HANDLE Handle; // [rsp+100h] [rbp-178h]
  int v137; // [rsp+108h] [rbp-170h]
  unsigned __int64 v138; // [rsp+110h] [rbp-168h]
  void *Src[2]; // [rsp+120h] [rbp-158h]
  __int128 v140; // [rsp+130h] [rbp-148h]
  __int128 v141; // [rsp+140h] [rbp-138h] BYREF
  __int64 v142; // [rsp+150h] [rbp-128h]
  __int64 v143; // [rsp+158h] [rbp-120h]
  PVOID v144; // [rsp+160h] [rbp-118h]
  ULONG_PTR v145; // [rsp+168h] [rbp-110h]
  unsigned __int64 v146; // [rsp+170h] [rbp-108h]
  __int64 v147; // [rsp+178h] [rbp-100h]
  __int128 v148; // [rsp+180h] [rbp-F8h] BYREF
  char v149[160]; // [rsp+190h] [rbp-E8h] BYREF

  v6 = (ULONG_PTR)ThreadHandle;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  CurrentThread = KeGetCurrentThread();
  v117 = (__int64)CurrentThread;
  v8 = CurrentThread->gap0[10];
  if ( v8 )
  {
    if ( ThreadInformationClass >= ThreadSelectedCpuSets
      && ThreadInformationClass < ThreadManageWritesToExecutableMemory
      || ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken )
    {
LABEL_4:
      v9 = 0x140000000uLL;
LABEL_5:
      v10 = 3;
      v11 = 3LL;
LABEL_6:
      v12 = 0;
    }
    else
    {
      v9 = 0x140000000uLL;
      switch ( ThreadInformationClass )
      {
        case ThreadPriority:
        case ThreadBasePriority:
        case ThreadImpersonationToken:
        case ThreadDescriptorTableEntry:
        case ThreadEventPair:
        case ThreadQuerySetWin32StartAddress:
        case ThreadZeroTlsCell:
        case ThreadPerformanceCount:
        case ThreadAmILastThread:
        case ThreadIdealProcessor:
        case ThreadPriorityBoost:
        case ThreadSetTlsArrayAddress:
        case ThreadIsIoPending:
        case ThreadHideFromDebugger:
        case ThreadBreakOnTermination:
        case ThreadSwitchLegacyState:
        case ThreadIsTerminated:
        case ThreadLastSystemCall:
        case ThreadIoPriority:
        case ThreadCycleTime:
        case ThreadPagePriority:
        case ThreadActualBasePriority:
        case ThreadTebInformation:
        case ThreadCSwitchMon:
        case ThreadCSwitchPmu:
        case ThreadWow64Context:
        case ThreadIdealProcessorEx:
        case ThreadSuspendCount:
        case ThreadHeterogeneousCpuPolicy:
        case ThreadContainerId:
        case ThreadSelectedCpuSets:
        case ThreadSystemThreadInformation:
        case ThreadActualGroupAffinity:
        case ThreadDynamicCodePolicyInfo:
        case ThreadExplicitCaseSensitivity:
        case ThreadWorkOnBehalfTicket:
        case ThreadSubsystemInformation:
        case ThreadDbgkWerReportActive:
        case ThreadAttachContainer:
        case ThreadManageWritesToExecutableMemory:
        case ThreadPowerThrottlingState:
          goto LABEL_5;
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadUmsInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
          v11 = 7LL;
          v10 = 3;
          goto LABEL_6;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v12 = 0;
          v11 = 0LL;
          v10 = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( ThreadInformationLength )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
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
    v9 = 0x140000000uLL;
    v12 = 0;
    v10 = 3;
  }
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( ThreadInformationLength == 8 )
      {
        v13 = *(_QWORD *)ThreadInformation;
        v146 = v13;
        v14 = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v109 = v14;
        if ( v14 < 0 )
          return v14;
        v147 = 0LL;
        if ( !v13 )
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
LABEL_35:
          v21 = Object;
LABEL_36:
          ObfDereferenceObjectWithTag(v21, 0x79517350u);
          return v14;
        }
        v15 = PspWorkOnBehalfEncodingKey ^ v13;
        v117 = v15;
        v16 = KeGetCurrentThread();
        --v16->SpecialApcDisable;
        v17 = (unsigned __int64 *)PspReferenceCidTableEntry((int)v15, 6);
        if ( v17 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          v19 = CurrentServerSilo;
          if ( (v17[218] & 2) != 0 )
          {
            if ( PsIsThreadInSilo((__int64)v17, CurrentServerSilo) )
              goto LABEL_26;
          }
          else
          {
            _InterlockedOr(v107, 0);
            if ( (v17[216] & 1) != 0 )
              ExfAcquireReleasePushLockExclusive(v17 + 216);
            if ( (v17[218] & 2) != 0 && PsIsThreadInSilo((__int64)v17, v19) )
              goto LABEL_26;
          }
          ObfDereferenceObject(v17);
          v17 = 0LL;
        }
LABEL_26:
        v20 = v16->SpecialApcDisable++ == -1;
        if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery();
        if ( v17 )
        {
          if ( *((_DWORD *)v17 + 380) == HIDWORD(v117) )
          {
            v14 = 0;
          }
          else
          {
            ObfDereferenceObject(v17);
            v14 = -1073741275;
          }
        }
        else
        {
          v14 = -1073741813;
        }
        if ( v14 >= 0 )
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
          PsImpersonateContainerOfThread((__int64)v17);
          ObfDereferenceObject(v17);
        }
        goto LABEL_35;
      }
      return -1073741820;
    }
    return -1073741811;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( ThreadInformationLength != 8 )
      return -1073741820;
    Handle = *(HANDLE *)ThreadInformation;
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( result >= 0 )
    {
      v23 = KeGetCurrentThread();
      if ( Handle )
      {
        v12 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v23->PreviousMode, &Token, 0LL);
        if ( v12 >= 0 )
        {
          v29 = Token;
          if ( *((_DWORD *)Token + 48) == 2 )
          {
            v12 = PsImpersonateClient((PETHREAD)Object, Token, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Token + 49));
            ObfDereferenceObject(v29);
          }
          else
          {
            ObfDereferenceObject(Token);
            v12 = -1073741656;
          }
        }
      }
      else
      {
        PsImpersonateClient((PETHREAD)Object, 0LL, 0, 0, SecurityImpersonation);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v12;
    }
    return result;
  }
  v24 = (unsigned int)(ThreadInformationClass - 2);
  switch ( (int)v24 )
  {
    case 0:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v64 = *(_DWORD *)ThreadInformation;
      v126 = v64;
      if ( (unsigned int)(v64 - 1) > 0x1E )
        return -1073741811;
      if ( v64 < 16 )
        goto LABEL_138;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               1024LL,
                               v8) )
        return -1073741727;
      v6 = BugCheckParameter1;
LABEL_138:
      result = ObpReferenceObjectByHandleWithTag(v6, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      KeSetPriorityThread((PKTHREAD)Object, v64);
LABEL_52:
      v27 = Object;
LABEL_53:
      v28 = 2035381072;
      goto LABEL_54;
    case 1:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v33 = *(_DWORD *)ThreadInformation;
      Increment = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      v34 = Object;
      v35 = *((_QWORD *)Object + 68);
      v36 = (unsigned int)(v33 + 16);
      if ( (unsigned int)v36 > 0x20 || (v37 = 0x10007C001LL, !_bittest64(&v37, v36)) )
      {
        ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
        if ( v81 != ServerSiloGlobals[110] && *(_BYTE *)(v35 + 1119) != 4 )
        {
          v14 = -1073741811;
          v21 = v34;
          goto LABEL_36;
        }
      }
      v38 = *(_DWORD **)(v35 + 944);
      v119 = v38;
      if ( v38 && (v38[212] & 0x20) != 0 && *(_BYTE *)(v35 + 1119) != 4 )
      {
        v39 = Increment;
        if ( Increment > 0 )
        {
          v40 = Object;
LABEL_73:
          v14 = v109;
LABEL_74:
          v21 = v40;
          goto LABEL_36;
        }
      }
      else
      {
        v39 = Increment;
      }
      v40 = Object;
      KeSetBasePriorityThread((PKTHREAD)Object, v39);
      goto LABEL_73;
    case 2:
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v57 = *(_QWORD *)ThreadInformation;
      *(_QWORD *)&v148 = v57;
      if ( !v57 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v58 = Object;
        v59 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
        if ( ExAcquireRundownProtection(v59 + 95) )
        {
          if ( !KeSetLegacyAffinityThread((__int64)v58, v57) )
            v12 = -1073741811;
          ExReleaseRundownProtection(v59 + 95);
        }
        else
        {
          v12 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v58, 0x79517350u);
        return v12;
      }
      return result;
    case 5:
      if ( ThreadInformationLength != 1 )
        return -1073741820;
      v87 = *(_BYTE *)ThreadInformation;
      v113 = v87;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v87 )
        _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
      goto LABEL_52;
    case 7:
      return -1073741811;
    case 8:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v41 = *(_DWORD *)ThreadInformation;
      v120 = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v42 = result;
      v109 = result;
      if ( result < 0 )
        return result;
      v43 = (struct _KTHREAD *)Object;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v43 != CurrentThread )
        return -1073741811;
      Process = (__int64)v43->Process;
      v117 = Process;
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v46) )
      {
        Object = i;
        v46 = i;
        if ( !i )
          break;
        if ( ExAcquireRundownProtection(i + 215) )
        {
          Count = v46[30].Count;
          if ( Count )
          {
            v48 = *(_QWORD *)(Process + 1064);
            v49 = 0;
            if ( v48 )
            {
              v56 = *(_WORD *)(v48 + 8);
              if ( v56 == 332 || v56 == 452 )
                v49 = 1;
            }
            v112 = v49;
            v50 = Count + 0x2000;
            if ( !v49 )
              v50 = 0LL;
            if ( v41 >= 0x40 )
            {
              if ( v41 < 0x440 )
              {
                if ( v48 && ((v54 = *(_WORD *)(v48 + 8), v54 == 332) || v54 == 452) )
                {
                  if ( v50 )
                  {
                    v55 = *(unsigned int *)(v50 + 3988);
                    if ( (_DWORD)v55 )
                      *(_DWORD *)(v55 + 4LL * (v41 - 64)) = 0;
                  }
                }
                else
                {
                  v51 = *(_QWORD *)(Count + 6016);
                  v143 = v51;
                  if ( v51 )
                  {
                    v52 = v51 + 8LL * (v41 - 64);
                    if ( v52 >= 0x7FFFFFFF0000LL )
                      v52 = 0x7FFFFFFF0000LL;
                    *(_QWORD *)v52 = 0LL;
                  }
                }
              }
            }
            else if ( v48 && ((v53 = *(_WORD *)(v48 + 8), v53 == 332) || v53 == 452) )
            {
              if ( v50 )
                *(_DWORD *)(v50 + 4LL * v41 + 3600) = 0;
            }
            else
            {
              *(_QWORD *)(Count + 8LL * v41 + 5248) = 0LL;
            }
          }
          ExReleaseRundownProtection(v46 + 215);
        }
      }
      return v42;
    case 11:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v62 = *(_DWORD *)ThreadInformation;
      v127 = v62;
      if ( v62 > 0x40 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v63 = v62;
      v40 = Object;
      v14 = KeSetIdealProcessorThread((PKTHREAD)Object, v63);
      if ( (*((_DWORD *)v40 + 29) & 0x400) != 0 )
        goto LABEL_74;
      PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v40);
      v21 = v40;
      goto LABEL_36;
    case 12:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v82 = *(_DWORD *)ThreadInformation;
      v128 = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v83 = result;
      if ( result >= 0 )
      {
        KeSetDisableBoostThread((__int64)Object, v82 != 0);
        ObfDereferenceObjectWithTag(v84, 0x79517350u);
        return v83;
      }
      return result;
    case 13:
      return -1073741822;
    case 15:
      if ( ThreadInformationLength )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 436, 4u);
      goto LABEL_153;
    case 16:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v85 = *(_DWORD *)ThreadInformation;
      v129 = v85;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v85 )
        _InterlockedOr((volatile signed __int32 *)Object + 436, 0x20u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 436, 0xFFFFFFDF);
      goto LABEL_52;
    case 17:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v27 = Object;
      *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
      goto LABEL_53;
    case 20:
      if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ThreadInformationLength == 4 )
      {
        LODWORD(ThreadInformation) = *(_DWORD *)ThreadInformation;
        v130 = (int)ThreadInformation;
        LOBYTE(v60) = 0;
      }
      else
      {
        ThreadInformation = *(PVOID *)ThreadInformation;
        v144 = ThreadInformation;
        v60 = (unsigned __int64)ThreadInformation >> 32;
      }
      if ( (unsigned int)ThreadInformation >= 4 )
        return -1073741811;
      if ( (unsigned int)ThreadInformation < 3 )
        goto LABEL_126;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               32LL,
                               v8) )
        return -1073741727;
      v6 = BugCheckParameter1;
LABEL_126:
      result = ObpReferenceObjectByHandleWithTag(v6, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v20 = (_BYTE)v60 == 1;
        v61 = Object;
        if ( v20 && ((*((_DWORD *)Object + 436) >> 9) & 7) < (int)ThreadInformation )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Object, (int)ThreadInformation, 0);
        PsSetIoPriorityThread((__int64)v61, (unsigned int)ThreadInformation);
        ObfDereferenceObjectWithTag(v61, 0x79517350u);
        return 0;
      }
      return result;
    case 22:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v25 = *(_DWORD *)ThreadInformation;
      v131 = v25;
      if ( v25 > (unsigned int)MmGetDefaultPagePriority() || v25 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(v26, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      PsSetPagePriorityThread((__int64)Object, v25);
      goto LABEL_52;
    case 23:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v30 = *(_DWORD *)ThreadInformation;
      Increment = v30;
      if ( (unsigned int)(v30 - 1) > 0x1E )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v31 = result;
      if ( result < 0 )
        return result;
      v32 = Object;
      if ( v30 < 16
        || *(_BYTE *)(*((_QWORD *)Object + 68) + 1119LL) == 4
        || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
      {
        KeSetActualBasePriorityThread((__int64)v32, (unsigned int)v30);
      }
      else
      {
        v31 = -1073741727;
      }
LABEL_64:
      ObfDereferenceObjectWithTag(v32, 0x79517350u);
      return v31;
    case 27:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v65 = Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 215) )
        {
          v66 = PspWow64SetContextThread((PETHREAD)v65, ThreadInformation, ThreadInformationLength, v8);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v65 + 215);
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
          return v66;
        }
        else
        {
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
          return -1073741749;
        }
      }
      return result;
    case 28:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      v148 = *(_OWORD *)ThreadInformation;
      if ( !KeVerifyGroupAffinity((__int64)&v148, 1) )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v67 = *((_QWORD *)Object + 68);
      --CurrentThread->KernelApcDisable;
      v68 = (signed __int64 *)(v67 + 728);
      ExAcquirePushLockSharedEx(v67 + 728, 0LL);
      v69 = *(_QWORD *)(v67 + 944);
      v119 = (PVOID)v69;
      v70 = v69;
      if ( !v69
        || (ExAcquireResourceSharedLite((PERESOURCE)(v69 + 56), 1u), (*(_DWORD *)(v70 + 848) & 0x10) == 0)
        || (v88 = *(_QWORD *)(v70 + 8LL * WORD4(v148) + 624)) != 0 && ((unsigned __int64)v148 & v88) == (_QWORD)v148 )
      {
        KeSetAffinityThread_0((__int64)Object, (__int64)&v148);
        v109 = 0;
      }
      else
      {
        v109 = -1073741823;
      }
      if ( v70 )
        ExReleaseResourceLite((PERESOURCE)(v70 + 56));
      if ( _InterlockedCompareExchange64(v68, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v68);
      KeAbPostRelease((ULONG_PTR)v68);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_153;
    case 29:
      if ( ThreadInformationLength != 24 )
        return -1073741820;
      v141 = *(_OWORD *)ThreadInformation;
      v142 = *((_QWORD *)ThreadInformation + 2);
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        v92 = CurrentThread;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v92 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      if ( v92 != CurrentThread )
        return -1073741811;
      if ( (_DWORD)v141 == 1 )
        return PspAttachThreadToUmsCompletionList(v92, (__int64)&v141, v8, *(__int64 *)&ThreadInformationLength);
      if ( (_DWORD)v141 != 2 )
        return -1073741811;
      return PspDetachThreadFromUmsCompletionList(v92);
    case 30:
      if ( ThreadInformationLength != 24 )
        return -1073741820;
      v124 = *(_OWORD *)ThreadInformation;
      v125 = *((_QWORD *)ThreadInformation + 2);
      v89 = v125;
      if ( (v125 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v125 >= 0x7FFFFFFF0000LL )
        v89 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v89 = *(_BYTE *)v89;
      *(_BYTE *)(v89 + 447) = *(_BYTE *)(v89 + 447);
      result = ObpReferenceObjectByHandleWithTag(v6, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v90 = Object;
        if ( Object == KeGetCurrentThread() )
        {
          if ( HIDWORD(v124) )
            v91 = KeEnableProfiling(Object, DWORD2(v124), v124, v125);
          else
            v91 = KeDisableProfiling((__int64)Object, v125);
        }
        else
        {
          v91 = -1073741637;
        }
        ObfDereferenceObjectWithTag(v90, 0x79517350u);
        return v91;
      }
      return result;
    case 31:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v115 = *(_PROCESSOR_NUMBER *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v32 = Object;
      v31 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v115, &v115);
      if ( v31 >= 0 )
      {
        if ( (v32[29] & 0x400) == 0 )
          PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v32);
        *(_PROCESSOR_NUMBER *)ThreadInformation = v115;
      }
      goto LABEL_64;
    case 32:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v145 = *(_QWORD *)ThreadInformation;
      if ( v145 )
      {
        result = ObpReferenceObjectByHandleWithTag(v145, 0x79517350u, (__int64)v135, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v94 = (struct _LIST_ENTRY *)v135[0];
        v95 = *((_QWORD *)v135[0] + 4);
        if ( !v95 )
        {
          ObfDereferenceObjectWithTag(v135[0], 0x79517350u);
          return -1073740715;
        }
        if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v95) )
        {
          ObfDereferenceObjectWithTag(v94, 0x79517350u);
          return -1073740714;
        }
        CurrentThread[1].ApcState.ApcListHead[1].Flink = v94;
      }
      else
      {
        if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
          return -1073740713;
        ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
        CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      }
      return 0;
    case 34:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v96 = MEMORY[4];
      v132 = MEMORY[4];
      if ( MEMORY[4] > 8u )
        return -1073741811;
      v14 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v14 < 0 )
        return v14;
      KeSetUserHeteroCpuPolicyThread((__int64)Object, v96);
      goto LABEL_35;
    case 36:
      v111 = 0;
      v71 = 0LL;
      v116 = 0LL;
      P = 0LL;
      Object = 0LL;
      v110 = 0;
      if ( ThreadInformationLength == 16 )
      {
        v14 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v109 = v14;
        if ( v14 < 0 )
          goto LABEL_182;
        v111 = 1;
        if ( v8 )
        {
          if ( (unsigned __int64)ThreadInformation >= 0x7FFFFFFF0000LL )
            ThreadInformation = (PVOID)0x7FFFFFFF0000LL;
          v72 = *(_DWORD *)ThreadInformation;
          LODWORD(v140) = v72;
          v73 = *((_QWORD *)ThreadInformation + 1);
          *((_QWORD *)&v140 + 1) = v73;
          *(_OWORD *)Src = v140;
          if ( (_WORD)v72 )
          {
            if ( (v73 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v24 = (unsigned __int16)v72 + v73;
            if ( v24 > 0x7FFFFFFF0000LL || v24 < v73 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v14 = v109;
          v71 = v116;
        }
        else
        {
          *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
        }
        v74 = (unsigned __int16)Src[0];
        if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
        {
          v14 = -1073741811;
        }
        else
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
          v71 = PoolWithTag;
          v116 = PoolWithTag;
          if ( PoolWithTag )
          {
            v76 = PoolWithTag + 16;
            v71[1] = v76;
            *(_WORD *)v71 = v74;
            *((_WORD *)v71 + 1) = v74;
            memmove(v76, Src[1], v74);
            --CurrentThread->KernelApcDisable;
            v77 = Object;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 1728, 0LL);
            v110 = 1;
            P = (PVOID)*((_QWORD *)v77 + 251);
            *((_QWORD *)v77 + 251) = v71;
            v71 = 0LL;
            v116 = 0LL;
            EtwTraceThreadSetName((__int64)v77);
            goto LABEL_182;
          }
          v14 = -1073741670;
        }
      }
      else
      {
        v14 = -1073741820;
      }
      v109 = v14;
LABEL_182:
      if ( v110 )
      {
        v78 = (volatile signed __int64 *)Object;
        v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 216, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v79 & 2) != 0 && (v79 & 4) == 0 )
          ExfTryToWakePushLock(v78 + 216, v24, v9, *(__int64 *)&ThreadInformationLength);
        KeAbPostRelease((ULONG_PTR)(v78 + 216));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v14 = v109;
        v71 = v116;
      }
      if ( v111 )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( P )
        ExFreePoolWithTag(P, 0x6D4E6854u);
      if ( v71 )
        ExFreePoolWithTag(v71, 0x6D4E6854u);
      return v14;
    case 37:
      if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
        return -1073741820;
      memmove(v149, ThreadInformation, ThreadInformationLength);
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v97 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v149);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v97;
      }
      return result;
    case 40:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v134 = *(_DWORD *)ThreadInformation;
      if ( v134 == 1 )
      {
        if ( (CurrentThread->Process[2].UserDirectoryTableBase & 0x200) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
          return 0;
        }
        return -1073741790;
      }
      if ( v134 )
        return -1073741811;
      _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
      return 0;
    case 41:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v98 = *(_DWORD *)ThreadInformation;
      v133 = v98;
      if ( !v8 )
        goto LABEL_307;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      if ( !RtlTestProtectedAccess(
              (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].ActiveProcessors.Bitmap[0]),
              (PS_PROTECTION)81) )
        return -1073741790;
      v6 = BugCheckParameter1;
LABEL_307:
      result = ObpReferenceObjectByHandleWithTag(v6, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result >= 0 )
      {
        if ( v98 )
          _InterlockedOr((volatile signed __int32 *)Object + 436, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 436, 0xFFF7FFFF);
LABEL_153:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v109;
      }
      return result;
    case 44:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v99 = *(_DWORD *)ThreadInformation;
      v137 = v99;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v99 )
        _InterlockedOr((volatile signed __int32 *)Object + 436, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 436, 0xFFDFFFFF);
      goto LABEL_153;
    case 45:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v123 = *(_QWORD *)ThreadInformation;
      v100 = KeGetCurrentThread();
      if ( !v123 )
      {
        if ( *(_QWORD *)&v100[1].WaitBlockFill11[160] == -3LL )
          return -1073741811;
        v101 = PsAttachSiloToCurrentThread(-3LL);
        v28 = 1833530192;
        v27 = (PVOID)v101;
LABEL_54:
        ObfDereferenceObjectWithTag(v27, v28);
        return 0;
      }
      Object = v100;
      if ( *(_QWORD *)&v100[1].WaitBlockFill11[160] != -3LL )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(v123, 0x6D497350u, (__int64)&v119, 0LL, 0LL);
      if ( result >= 0 )
      {
        v102 = v119;
        if ( (*((_DWORD *)v119 + 327) & 2) == 0 )
        {
LABEL_327:
          ObfDereferenceObjectWithTag(v102, 0x6D497350u);
          return -1073741811;
        }
        v103 = IoThreadToProcess((PETHREAD)Object);
        ProcessSilo = PsGetProcessSilo((__int64)v103);
        v105 = v102;
        if ( ProcessSilo )
        {
          while ( v105 != (_QWORD *)ProcessSilo )
          {
            v105 = (_QWORD *)v105[134];
            if ( !v105 )
              goto LABEL_327;
          }
        }
        EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v102);
        if ( PsGetProcessServerSilo((__int64)v103) != EffectiveServerSilo )
        {
          ObfDereferenceObjectWithTag(v102, 0x6D497350u);
          return -1073741811;
        }
        PsAttachSiloToCurrentThread((__int64)v102);
        return 0;
      }
      return result;
    case 46:
      return -1073741637;
    case 47:
      if ( ThreadInformationLength != 12 )
        return -1073741820;
      v138 = *(_QWORD *)ThreadInformation;
      v86 = *((_DWORD *)ThreadInformation + 2);
      if ( (_DWORD)v138 != 1 || (v138 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v138) & v86) != 0 )
        return -1073741811;
      if ( (v138 & 0x100000000LL) != 0 )
      {
        if ( (v86 & 1) != 0 )
          v10 = 1;
      }
      else
      {
        v10 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      PspSetThreadPpmPolicy(Object, v10);
      goto LABEL_52;
    default:
      return -1073741821;
  }
}
