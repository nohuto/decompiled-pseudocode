/*
 * XREFs of NtSetInformationProcess @ 0x1404A2550
 * Callers:
 *     <none>
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     PspLockUnlockProcessExclusive @ 0x14002F5E0 (PspLockUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1400356A8 (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x140035EB4 (KeInitializeGate.c)
 *     KeVerifyGroupAffinity @ 0x140036394 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x140039478 (MmRemoveExecuteGrants.c)
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x140065368 (MmSetMemoryPriorityProcess.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x1400665B0 (SeTokenIsNoChildProcessRestricted.c)
 *     PsSetIoPriorityThread @ 0x1400669C4 (PsSetIoPriorityThread.c)
 *     RtlInsertDynamicFunctionTable @ 0x140066B00 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x140066DD4 (RtlRemoveDynamicFunctionTable.c)
 *     KeQueryGroupMaskProcess @ 0x140085004 (KeQueryGroupMaskProcess.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     MiCreateSystemWsles @ 0x14014358C (MiCreateSystemWsles.c)
 *     xKdEnumerateDebuggingDevices @ 0x140168720 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     MmGetMaximumUserAddress @ 0x14020C828 (MmGetMaximumUserAddress.c)
 *     MmReleaseCommitForMemResetPages @ 0x14020C848 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14020CA28 (MmSetCommitReleaseEligibility.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsSetProcessFaultInformation @ 0x14041FC34 (PsSetProcessFaultInformation.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     ExEnableHandleExceptions @ 0x140455EF0 (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x140458B80 (SeSetVirtualizationToken.c)
 *     PoSetProcessEnergyTrackingState @ 0x14045BDE8 (PoSetProcessEnergyTrackingState.c)
 *     KeSetDisableBoostThread @ 0x14045E014 (KeSetDisableBoostThread.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     PsSetProcessPriorityByClass @ 0x1404A0ED0 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404A420C (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetAutoAlignmentProcess @ 0x1404A42C0 (KeSetAutoAlignmentProcess.c)
 *     MmAllocateVirtualMemory @ 0x1404A42E8 (MmAllocateVirtualMemory.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404A4400 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x1404A5834 (PspSetProcessPriorityClass.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 *     PspWritePebAffinityInfo @ 0x1404ED074 (PspWritePebAffinityInfo.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     LpcRequestPort @ 0x14053F060 (LpcRequestPort.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140595E2C (PspSetProcessAffinityUpdateMode.c)
 *     KeSetCheckStackExtentsProcess @ 0x1406AC660 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1406BD808 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1406C3970 (ObSetProcessDeviceMap.c)
 *     PsSetProcessHandleTracingInformation @ 0x1406DFE10 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x1406E0848 (PspSetProcessAffinitySafe.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406E42E4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rsi
  __int64 v5; // rdi
  PROCESSINFOCLASS v6; // ebx
  ULONG_PTR v7; // r10
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v9; // r12
  __int64 v10; // r13
  int v11; // eax
  unsigned int v12; // ebx
  NTSTATUS result; // eax
  PVOID v14; // rcx
  char *v15; // r14
  int v16; // edx
  int *PoolWithQuotaTag; // r14
  int v18; // r9d
  __int64 v19; // r8
  unsigned int k; // edx
  _KPROCESS *Process; // rcx
  ULONG v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rax
  int v24; // edi
  struct _EX_RUNDOWN_REF *v25; // rbx
  unsigned __int64 Count; // r13
  char *v27; // rax
  char *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  int v35; // r10d
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  signed __int64 v38; // rax
  NTSTATUS v39; // ebx
  __int64 v40; // rdx
  volatile void **v41; // rdi
  __int64 v42; // rcx
  signed __int64 v43; // rdx
  unsigned int v44; // edi
  NTSTATUS v45; // r13d
  char *v46; // rbx
  __int64 v47; // rax
  unsigned int v48; // ebx
  void *v49; // r13
  unsigned __int64 v50; // r13
  NTSTATUS v51; // r12d
  signed __int64 v52; // rdx
  signed __int64 *v53; // roff
  signed __int64 v54; // rbx
  bool v55; // zf
  signed __int64 v56; // rax
  NTSTATUS v57; // r12d
  __int16 v58; // bx
  PVOID v59; // rdi
  NTSTATUS v60; // esi
  unsigned __int64 v61; // rax
  __int16 v62; // cx
  unsigned int DefaultPagePriority; // eax
  unsigned int v64; // ecx
  unsigned int SystemWsles; // eax
  ULONG_PTR v66; // r10
  unsigned int v67; // ecx
  struct _EX_RUNDOWN_REF *v68; // r12
  volatile signed __int64 *v69; // r15
  signed __int32 v70; // eax
  int v71; // r8d
  signed __int32 v72; // edx
  char *v73; // rsi
  char *v74; // rdi
  int v75; // ebx
  unsigned int v76; // eax
  unsigned __int64 v77; // r15
  char *v78; // rbx
  struct _EX_RUNDOWN_REF *v79; // rdi
  volatile signed __int64 *v80; // r13
  signed __int32 v81; // eax
  int v82; // r8d
  signed __int32 v83; // edx
  char *v84; // rsi
  char *v85; // rbx
  int v86; // r12d
  NTSTATUS v87; // edi
  void *v88; // rbx
  int v89; // eax
  char v90; // bl
  NTSTATUS v91; // r13d
  char *v92; // rdi
  __int64 v93; // rax
  char v94; // bl
  int v95; // r13d
  PVOID v96; // rbx
  int v97; // esi
  PACCESS_TOKEN v98; // rbx
  unsigned int v99; // ebx
  char v100; // r15
  __int64 v101; // rax
  unsigned __int8 *v102; // rbx
  unsigned int v103; // ecx
  int v104; // edi
  NTSTATUS v105; // esi
  int v106; // ebx
  char v107; // si
  bool v108; // di
  NTSTATUS v109; // r12d
  PVOID v110; // rbx
  char *v111; // r9
  char *j; // r8
  char **v113; // r8
  void *v114; // rbx
  PACCESS_TOKEN v115; // rsi
  unsigned __int64 m; // rdi
  int v117; // edx
  int v118; // eax
  __int64 v119; // rax
  _QWORD *PoolWithTag; // rax
  void *v121; // r8
  int v122; // r14d
  int v123; // r15d
  PVOID v124; // rbx
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  __int64 v127; // r8
  __int64 v128; // r9
  _QWORD *v129; // rdi
  unsigned __int8 v130; // r15
  PVOID v131; // rdi
  __int64 v132; // rax
  __int16 v133; // cx
  unsigned int v134; // ebx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rbx
  unsigned int v138; // ebx
  NTSTATUS v139; // r13d
  unsigned int v140; // ecx
  unsigned int *v141; // rdx
  NTSTATUS v142; // eax
  __int64 v143; // rcx
  _KPROCESS *v144; // r15
  BOOLEAN v145; // al
  __int64 v146; // rax
  __int16 v147; // cx
  unsigned __int64 v148; // rax
  __int16 v149; // cx
  __int64 v150; // rcx
  __int64 *v151; // rax
  __int16 v152; // dx
  unsigned __int64 v153; // rax
  __int16 v154; // cx
  __int64 v155; // rsi
  volatile signed __int64 *v156; // rbx
  volatile signed __int32 **v157; // rdi
  volatile signed __int32 *v158; // rax
  char v159; // bl
  int v160; // r14d
  int v161; // edi
  __int64 v162; // rcx
  int v163; // ecx
  bool IsSandboxedToken; // si
  volatile signed __int32 *v165; // rax
  int v166; // edx
  int v167; // ecx
  void *v168; // rbx
  int v169; // eax
  void *v170; // rcx
  unsigned __int64 v171; // rdx
  PVOID v172; // rax
  PVOID v173; // rsi
  volatile signed __int32 *v174; // rbx
  int v175; // edx
  unsigned int v176; // esi
  char v177; // bl
  char v178; // bl
  signed __int32 v179[8]; // [rsp+0h] [rbp-4C8h] BYREF
  __int64 v180; // [rsp+38h] [rbp-490h]
  PVOID Object; // [rsp+40h] [rbp-488h] BYREF
  int UserSidToken; // [rsp+48h] [rbp-480h]
  unsigned int v183; // [rsp+4Ch] [rbp-47Ch]
  int v184; // [rsp+50h] [rbp-478h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-470h]
  char v186; // [rsp+60h] [rbp-468h]
  PVOID P; // [rsp+68h] [rbp-460h]
  __int64 v188; // [rsp+70h] [rbp-458h]
  ULONG Alignment; // [rsp+78h] [rbp-450h]
  PVOID v190; // [rsp+80h] [rbp-448h]
  signed __int64 v191; // [rsp+88h] [rbp-440h]
  __int64 v192; // [rsp+90h] [rbp-438h]
  char v193; // [rsp+98h] [rbp-430h]
  char v194; // [rsp+99h] [rbp-42Fh]
  char v195; // [rsp+9Ah] [rbp-42Eh]
  __int16 v196; // [rsp+9Ch] [rbp-42Ch]
  __int16 v197; // [rsp+A0h] [rbp-428h]
  int v198; // [rsp+A4h] [rbp-424h]
  int v199; // [rsp+A8h] [rbp-420h]
  char *v200; // [rsp+B0h] [rbp-418h]
  __int128 v201; // [rsp+B8h] [rbp-410h]
  unsigned __int64 v202; // [rsp+C8h] [rbp-400h]
  __int128 v203; // [rsp+D0h] [rbp-3F8h] BYREF
  int v204; // [rsp+E0h] [rbp-3E8h]
  int v205; // [rsp+E4h] [rbp-3E4h]
  unsigned int v206; // [rsp+E8h] [rbp-3E0h] BYREF
  BOOL v207; // [rsp+ECh] [rbp-3DCh]
  int v208; // [rsp+F0h] [rbp-3D8h]
  unsigned int v209; // [rsp+F4h] [rbp-3D4h]
  unsigned int v210; // [rsp+F8h] [rbp-3D0h] BYREF
  int v211; // [rsp+FCh] [rbp-3CCh]
  int v212; // [rsp+100h] [rbp-3C8h] BYREF
  int v213; // [rsp+108h] [rbp-3C0h] BYREF
  void *Src; // [rsp+110h] [rbp-3B8h]
  PVOID v215; // [rsp+118h] [rbp-3B0h] BYREF
  PVOID v216; // [rsp+120h] [rbp-3A8h]
  PVOID v217; // [rsp+128h] [rbp-3A0h]
  int v218; // [rsp+130h] [rbp-398h]
  unsigned int v219; // [rsp+134h] [rbp-394h]
  unsigned int v220; // [rsp+138h] [rbp-390h]
  unsigned int v221; // [rsp+13Ch] [rbp-38Ch]
  unsigned int v222; // [rsp+140h] [rbp-388h]
  unsigned int v223; // [rsp+144h] [rbp-384h]
  unsigned int v224; // [rsp+148h] [rbp-380h]
  int v225; // [rsp+14Ch] [rbp-37Ch]
  unsigned int v226; // [rsp+150h] [rbp-378h]
  int v227; // [rsp+154h] [rbp-374h]
  __int64 v228; // [rsp+160h] [rbp-368h]
  PVOID v229; // [rsp+168h] [rbp-360h] BYREF
  unsigned __int64 v230; // [rsp+170h] [rbp-358h]
  __int64 v231; // [rsp+178h] [rbp-350h] BYREF
  __int64 v232; // [rsp+188h] [rbp-340h] BYREF
  unsigned int v233; // [rsp+190h] [rbp-338h]
  unsigned int v234; // [rsp+194h] [rbp-334h]
  unsigned int v235; // [rsp+198h] [rbp-330h]
  __int128 v236; // [rsp+1A0h] [rbp-328h]
  PSID Sid2[2]; // [rsp+1B0h] [rbp-318h]
  __m256i v238; // [rsp+1C0h] [rbp-308h]
  __int128 v239; // [rsp+1E0h] [rbp-2E8h] BYREF
  __int128 v240; // [rsp+1F0h] [rbp-2D8h] BYREF
  __int64 v241; // [rsp+200h] [rbp-2C8h]
  unsigned __int64 v242; // [rsp+208h] [rbp-2C0h]
  unsigned __int64 v243; // [rsp+210h] [rbp-2B8h]
  int *v244; // [rsp+218h] [rbp-2B0h]
  __int64 v245; // [rsp+220h] [rbp-2A8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+228h] [rbp-2A0h] BYREF
  __int64 v247; // [rsp+248h] [rbp-280h]
  _DWORD v248[10]; // [rsp+250h] [rbp-278h] BYREF
  __int64 v249; // [rsp+278h] [rbp-250h]
  __int128 v250; // [rsp+280h] [rbp-248h]
  __int128 v251; // [rsp+290h] [rbp-238h]
  $5BC46E0569261879018906DEC3127961 v252; // [rsp+2A0h] [rbp-228h] BYREF
  _BYTE v253[48]; // [rsp+2D0h] [rbp-1F8h] BYREF
  _BYTE Sid1[80]; // [rsp+300h] [rbp-1C8h] BYREF
  _DWORD v255[36]; // [rsp+350h] [rbp-178h] BYREF
  char v256[160]; // [rsp+3E0h] [rbp-E8h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  v6 = ProcessInformationClass;
  v7 = (ULONG_PTR)ProcessHandle;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  P = ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v192 = (__int64)CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( !v9 )
  {
    v10 = 4LL;
    goto LABEL_31;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_22;
    case ProcessEnableAlignmentFaultFixup:
      v11 = 1;
      v10 = 4LL;
      break;
    case ProcessForegroundInformation:
      v11 = 1;
      v10 = 4LL;
      break;
    case ProcessPriorityClass:
      v11 = 1;
      v10 = 4LL;
      break;
    case ProcessAffinityMask:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessPagePriority:
    case ProcessIoPriority:
      goto LABEL_22;
    case ProcessTlsInformation:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessExceptionPort:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessInstrumentationCallback:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessThreadStackAllocation:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessAffinityUpdateMode:
    case ProcessMemoryAllocationMode:
      goto LABEL_22;
    case ProcessConsoleHostProcess:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessDynamicFunctionTableInformation:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessRevokeFileHandles:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessMemoryExhaustion:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessCommitReleaseInformation:
      v11 = 8;
      v10 = 4LL;
      break;
    case ProcessInPrivate:
      v11 = 1;
      v10 = 4LL;
      break;
    case ProcessHighGraphicsPriorityInformation:
      v11 = 1;
      v10 = 4LL;
      break;
    default:
LABEL_22:
      v10 = 4LL;
      v11 = 4;
      break;
  }
  if ( ProcessInformationLength )
  {
    if ( ((v11 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
      || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
LABEL_31:
  if ( ProcessInformationClass == ProcessDefaultHardErrorMode )
  {
    if ( ProcessInformationLength == 4 )
    {
      v12 = *(_DWORD *)ProcessInformation;
      v224 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode(Object, CurrentThread, v12);
LABEL_35:
        v14 = Object;
LABEL_36:
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ProcessInformationClass == ProcessThreadStackAllocation )
  {
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      v15 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v239 = *(_OWORD *)ProcessInformation;
          v240 = *((_OWORD *)ProcessInformation + 1);
          v241 = *((_QWORD *)ProcessInformation + 4);
          v15 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v239;
        }
        v16 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v16 = 0;
        if ( v9 )
        {
          v240 = *(_OWORD *)ProcessInformation;
          v15 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v240;
        }
      }
      if ( *(_QWORD *)v5 )
      {
        v232 = *(_QWORD *)v5;
        *(_QWORD *)(v5 + 16) = 0LL;
        LODWORD(v180) = 0x80000000;
        result = MmAllocateVirtualMemory(0, (int)v5 + 16, *(_QWORD *)(v5 + 8), (unsigned int)&v232, v16 | 0x2000u, 4);
        if ( result >= 0 )
        {
          if ( v9 )
            *(_QWORD *)v15 = *(_QWORD *)(v5 + 16);
        }
        return result;
      }
    }
    return -1073741811;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ProcessInformation, ProcessInformationLength, v9);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v218 = *(_DWORD *)ProcessInformation;
      v106 = v218;
      if ( v218 < 0 )
      {
        v107 = 2;
        v106 = v218 & 0x7FFFFFFF;
      }
      else
      {
        v107 = 0;
      }
      if ( (unsigned int)(v106 - 1) > 0x1E )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v92 = (char *)Object;
      if ( v106 > *((char *)Object + 444)
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               BugCheckParameter1,
                               512LL,
                               v9) )
      {
        goto LABEL_348;
      }
      KeSetPriorityAndQuantumProcess((__int64)v92, (unsigned int)v106, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)v92, v107);
      ObfDereferenceObjectWithTag(v92, 0x79517350u);
      return 0;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v122 = *(_DWORD *)ProcessInformation;
      v219 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      v123 = result;
      if ( result < 0 )
        return result;
      v124 = Object;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        for ( i = 0LL; ; i = v129 )
        {
          NextProcessThread = PsGetNextProcessThread((__int64)v124, i);
          v129 = NextProcessThread;
          if ( !NextProcessThread )
            break;
          KeBoostPriorityThread((__int64)NextProcessThread, v122, v127, v128);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v124 + 95);
      }
      else
      {
        v123 = -1073741558;
      }
      goto LABEL_360;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v48 = 0;
        v209 = 0;
        v49 = *(void **)ProcessInformation;
        v228 = *(_QWORD *)ProcessInformation;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v49 = *(void **)ProcessInformation;
        v228 = *(_QWORD *)ProcessInformation;
        v209 = *((_DWORD *)ProcessInformation + 2);
        v48 = v209;
        if ( (v209 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandle(v49, 0, LpcPortObjectType, v9, &v229, 0LL);
      v50 = (unsigned __int64)v229;
      v216 = v229;
      if ( result >= 0 )
      {
        v51 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
        if ( v51 >= 0 )
        {
          v52 = v50 | v48;
          v191 = v52;
          v53 = (signed __int64 *)((char *)Object + 848);
          _m_prefetchw((char *)Object + 848);
          v54 = *v53;
          while ( 1 )
          {
            v190 = (PVOID)v54;
            if ( (_DWORD)v4 == 16 )
            {
              *(_DWORD *)(v5 + 8) = v54 & 7;
            }
            else if ( (v54 & 7) != 0 )
            {
              ObfDereferenceObject(v216);
              v57 = -1073741811;
LABEL_138:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v57;
            }
            v56 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, v52, v54);
            v55 = v54 == v56;
            v54 = v56;
            if ( v55 )
            {
              if ( v56 )
              {
                v88 = (void *)(v56 & 0xFFFFFFFFFFFFFFF8uLL);
                v248[0] = 3145736;
                v248[1] = 13;
                v249 = *((_QWORD *)Object + 92);
                while ( 1 )
                {
                  v89 = LpcRequestPort(v88, v248);
                  if ( v89 != -1073741801 && v89 != -1073741670 )
                    break;
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
                }
                PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
                ObfDereferenceObject(v88);
              }
              v57 = 0;
              goto LABEL_138;
            }
          }
        }
        ObfDereferenceObject((PVOID)v50);
        return v51;
      }
      return result;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v245 = *(_QWORD *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
    case ProcessLdtInformation:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
        goto LABEL_371;
      return result;
    case ProcessLdtSize:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
        goto LABEL_371;
      return result;
    case ProcessIoPortHandlers:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
LABEL_371:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return xKdEnumerateDebuggingDevices();
      }
      return result;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v78 = (char *)Object;
      v87 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v87 < 0 )
        goto LABEL_194;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v78 + 122, (signed __int64)v121, 0LL) )
        {
          v87 = 0;
          v78 = (char *)Object;
          goto LABEL_194;
        }
        ExFreePoolWithTag(v121, 0);
        v87 = -1073741752;
        v78 = (char *)Object;
      }
      else
      {
        v87 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)v78, 24616LL);
      goto LABEL_194;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v130 = *(_BYTE *)ProcessInformation;
      v186 = *(_BYTE *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      --CurrentThread->KernelApcDisable;
      v131 = Object;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 728, 0LL);
      if ( v130 )
        *((_DWORD *)v131 + 296) |= 4u;
      else
        *((_DWORD *)v131 + 296) &= ~4u;
      v132 = *((_QWORD *)v131 + 133);
      if ( v132 )
      {
        v133 = *(_WORD *)(v132 + 8);
        if ( v133 == 332 || v133 == 452 )
        {
          v130 = 1;
          v186 = 1;
        }
      }
      KeSetAutoAlignmentProcess(v131, v130);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v131 + 91);
      KeAbPostRelease((ULONG_PTR)v131 + 728);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_35;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v58 = *(_WORD *)ProcessInformation;
      v196 = *(_WORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v59 = Object;
        v60 = PspSetProcessPriorityClass(Object, HIBYTE(v196), BugCheckParameter1, v9);
        if ( v60 >= 0 )
          PsSetProcessPriorityByClass((__int64)v59, (_BYTE)v58 != 0);
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return v60;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v134 = *(_DWORD *)ProcessInformation;
      v220 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v87 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( v87 < 0 )
        return v87;
      v14 = Object;
      if ( *((_QWORD *)Object + 226) )
      {
        v87 = -1073741790;
      }
      else
      {
        if ( v134 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
        v14 = Object;
      }
      goto LABEL_195;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        v203 = 0uLL;
        *(_QWORD *)&v203 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v203 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v203 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v203, 0) )
          return -1073741811;
      }
      result = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v124 = Object;
      LODWORD(v135) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v135 - 1) & (unsigned int)v135) != 0 )
        goto LABEL_406;
      if ( (_DWORD)v4 != 8 )
        goto LABEL_407;
      _BitScanForward((unsigned int *)&v135, v135);
      v208 = v135;
      v136 = v203 & qword_1403E42B8[v135];
      v124 = Object;
      if ( v136 == (_QWORD)v203 )
      {
        WORD4(v203) = v208;
        *(_QWORD *)&v203 = v136;
LABEL_407:
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v124 + 95) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)v124 + 728, 0LL);
          v123 = PspSetProcessAffinitySafe((_DWORD)v124, 0, 0, (unsigned int)&v203, (__int64)&v212);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v124 + 91, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v124 + 91);
          KeAbPostRelease((ULONG_PTR)v124 + 728);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v124 + 95);
          v124 = Object;
          if ( v123 >= 0 )
          {
            if ( v212 )
              PspWritePebAffinityInfo(CurrentThread, Object);
            _InterlockedOr((volatile signed __int32 *)v124 + 192, 0x200000u);
            v124 = Object;
          }
        }
        else
        {
          v123 = -1073741558;
        }
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
LABEL_406:
        v123 = -1073741811;
      }
LABEL_360:
      ObfDereferenceObjectWithTag(v124, 0x79517350u);
      return v123;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v235 = *(_DWORD *)ProcessInformation;
      v108 = v235 != 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      v109 = result;
      if ( result >= 0 )
      {
        v110 = Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        {
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v110 + 728, 0LL);
          if ( v108 )
            _interlockedbittestandset((volatile signed __int32 *)v110 + 110, 1u);
          else
            _interlockedbittestandreset((volatile signed __int32 *)v110 + 110, 1u);
          v111 = (char *)Object + 1160;
          for ( j = (char *)*((_QWORD *)Object + 145); j != v111; j = *v113 )
            KeSetDisableBoostThread((__int64)(j - 1696), v108);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v110 + 91);
          KeAbPostRelease((ULONG_PTR)v110 + 728);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v110 + 95);
          v110 = Object;
        }
        else
        {
          v109 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v110, 0x79517350u);
        return v109;
      }
      return result;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v137 = *(_QWORD *)ProcessInformation;
      v247 = *(_QWORD *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v39 = ObSetProcessDeviceMap(Object, v137, v9);
LABEL_327:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v39;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v138 = *(_DWORD *)ProcessInformation;
      v234 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v139 = 0;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        if ( v138 != (unsigned int)MmGetSessionId((struct _KPROCESS *)Object) )
          v139 = -1073741790;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v139;
      }
      return result;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v94 = *(_BYTE *)ProcessInformation;
      v193 = *(_BYTE *)ProcessInformation;
      v95 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v95) = v94 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v95);
      goto LABEL_35;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v99 = *(_DWORD *)ProcessInformation;
      v233 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v99 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_35;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      v39 = result;
      if ( result < 0 )
        return result;
      v204 = *(_DWORD *)v5;
      if ( (v204 & 0xFFFFFFFE) != 0 )
      {
        v39 = -1073741811;
      }
      else if ( (v204 & 1) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      }
      goto LABEL_327;
    case ProcessHandleTracing:
      if ( !ProcessInformationLength )
        goto LABEL_435;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v140 = *(_DWORD *)ProcessInformation;
      v210 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v211 = *((_DWORD *)ProcessInformation + 1);
      else
        v211 = 0;
      if ( v140 )
        return -1073741811;
LABEL_435:
      result = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v78 = (char *)Object;
      if ( (_DWORD)v4 )
        v141 = &v210;
      else
        v141 = 0LL;
      v142 = PsSetProcessHandleTracingInformation(Object, v141);
      goto LABEL_441;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v76 = *(_DWORD *)ProcessInformation;
        v198 = *(_DWORD *)ProcessInformation;
        LOBYTE(v77) = 0;
      }
      else
      {
        v242 = *(_QWORD *)ProcessInformation;
        v76 = v242;
        v77 = HIDWORD(v242);
        v198 = v242;
      }
      if ( v76 >= 4 )
        return -1073741811;
      if ( v76 < 3 )
        goto LABEL_183;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
        return -1073741727;
      v7 = BugCheckParameter1;
LABEL_183:
      result = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
      UserSidToken = result;
      if ( result < 0 )
        return result;
      v78 = (char *)Object;
      v79 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        --CurrentThread->KernelApcDisable;
        v80 = (volatile signed __int64 *)(v78 + 728);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v78 + 728), 0LL);
        v81 = *((_DWORD *)v78 + 193);
        v82 = v198 << 27;
        do
        {
          v83 = v81;
          v81 = _InterlockedCompareExchange((volatile signed __int32 *)v78 + 193, v82 | v81 & 0xC7FFFFFF, v81);
        }
        while ( v81 != v83 );
        v84 = (char *)Object + 1160;
        v85 = (char *)*((_QWORD *)Object + 145);
        v86 = v198;
        while ( v85 != v84 )
        {
          if ( (_BYTE)v77 == 1 && ((*((_DWORD *)v85 + 10) >> 9) & 7) < v86 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)v85 - 212, v86, 0);
          PsSetIoPriorityThread((__int64)(v85 - 1696), v86);
          v85 = *(char **)v85;
        }
        if ( (_InterlockedExchangeAdd64(v80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v80);
        KeAbPostRelease((ULONG_PTR)v80);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExReleaseRundownProtection(v79);
        v78 = (char *)Object;
        v87 = UserSidToken;
      }
      else
      {
        v87 = -1073741558;
      }
      goto LABEL_194;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v205 = *(_DWORD *)ProcessInformation;
      v87 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v205);
      if ( v87 >= 0 && (v205 & 3) == 1 )
        MmRemoveExecuteGrants();
      return v87;
    case ProcessTlsInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (int *)v253;
        P = v253;
      }
      else
      {
        PoolWithQuotaTag = (int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( (unsigned int)PoolWithQuotaTag[1] < 2
        && (v18 = *PoolWithQuotaTag, (*PoolWithQuotaTag & 0xFFFFFFFE) == 0)
        && (v19 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v19)
        && (unsigned int)(v4 - 16) / 0x18uLL == v19 )
      {
        for ( k = 0; ; ++k )
        {
          v183 = k;
          if ( k >= (unsigned int)v19 )
            break;
          if ( PoolWithQuotaTag[6 * k + 4] )
            goto LABEL_451;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        Object = Process;
        LODWORD(BugCheckParameter1) = 0;
        if ( (v18 & 1) != 0 )
        {
          v61 = Process[1].ActiveProcessors.Bitmap[7];
          if ( !v61 || (v62 = *(_WORD *)(v61 + 8), v62 != 332) && v62 != 452 )
          {
LABEL_451:
            v39 = -1073741811;
            goto LABEL_102;
          }
          LODWORD(BugCheckParameter1) = 1;
        }
        v22 = 4;
        if ( !(_DWORD)BugCheckParameter1 )
          v22 = 8;
        Alignment = v22;
        if ( !(_DWORD)BugCheckParameter1 )
          v10 = 8LL;
        v192 = v10;
        v191 = v5;
        v183 = 0;
        UserSidToken = 0;
        v184 = 0;
        v23 = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)Object, 0LL);
        v24 = 0;
        while ( 1 )
        {
          v190 = v23;
          v25 = v23;
          if ( !v23 || v183 >= PoolWithQuotaTag[2] )
            break;
          if ( (HIDWORD(v23[14].Ptr) & 0x400) == 0 && ExAcquireRundownProtection(v23 + 214) )
          {
            Count = v25[30].Count;
            if ( (_DWORD)BugCheckParameter1 )
            {
              v230 = Count + 0x2000;
              v27 = (char *)(Count + 8236);
              v202 = Count + 8236;
              v28 = (char *)*(unsigned int *)(Count + 8236);
            }
            else
            {
              v27 = (char *)(Count + 88);
              v202 = Count + 88;
              v28 = *(char **)(Count + 88);
            }
            v200 = v28;
            if ( v28 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v28 == v27 )
                {
                  v200 = 0LL;
                }
                else
                {
                  v40 = v192 * (unsigned int)PoolWithQuotaTag[3];
                  if ( v40 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v28) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v28[v40] > 0x7FFFFFFF0000LL || &v28[v40] < v28 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                  }
                  v41 = (volatile void **)&PoolWithQuotaTag[6 * v183 + 6];
                  ProbeForWrite(*v41, v192 * (unsigned int)PoolWithQuotaTag[3], Alignment);
                  memmove((void *)*v41, v28, v192 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v179, 0);
                }
                v42 = 3LL * v183;
                *(_DWORD *)(v191 + 24LL * v183 + 16) |= 1u;
                if ( (_DWORD)BugCheckParameter1 )
                {
                  v230 = Count + 0x2000;
                  v227 = PoolWithQuotaTag[2 * v42 + 6];
                  *(_DWORD *)(Count + 8236) = v227;
                }
                else
                {
                  *(_QWORD *)(Count + 88) = *(_QWORD *)&PoolWithQuotaTag[2 * v42 + 6];
                }
                if ( UserSidToken < 0 )
                {
                  *(_DWORD *)(v191 + 24LL * v183 + 16) &= ~1u;
                }
                else
                {
                  v43 = v191 + 24LL * v183;
                  *(_QWORD *)(v43 + 32) = *((_QWORD *)v190 + 200);
                  *(_QWORD *)(v43 + 24) = v200;
                  *(_DWORD *)(v43 + 16) ^= 3u;
                  ++v183;
                }
                v24 = UserSidToken;
              }
              else
              {
                v29 = 6LL * v183;
                *(_DWORD *)(v29 * 4 + v191 + 16) |= 1u;
                v30 = (unsigned int)PoolWithQuotaTag[3];
                if ( (_DWORD)BugCheckParameter1 )
                {
                  v34 = (unsigned __int64)&v28[4 * v30];
                  if ( v34 >= 0x7FFFFFFF0000LL )
                    v34 = 0x7FFFFFFF0000LL;
                  v32 = *(unsigned int *)v34;
                  v202 = v32;
                  v35 = PoolWithQuotaTag[v29 + 6];
                  v225 = v35;
                  v36 = (unsigned __int64)&v200[4 * PoolWithQuotaTag[3]];
                  if ( v36 >= 0x7FFFFFFF0000LL )
                    v36 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v36 = v35;
                }
                else
                {
                  v31 = (unsigned __int64)&v28[8 * v30];
                  if ( v31 >= 0x7FFFFFFF0000LL )
                    v31 = 0x7FFFFFFF0000LL;
                  v32 = *(_QWORD *)v31;
                  v202 = *(_QWORD *)v31;
                  v33 = (unsigned __int64)&v200[8 * PoolWithQuotaTag[3]];
                  if ( v33 >= 0x7FFFFFFF0000LL )
                    v33 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v33 = *(_QWORD *)&PoolWithQuotaTag[v29 + 6];
                }
                if ( UserSidToken < 0 )
                {
                  *(_DWORD *)(v191 + 24LL * v183 + 16) &= ~1u;
                }
                else
                {
                  v37 = 3LL * v183;
                  v38 = v191;
                  *(_QWORD *)(v191 + 8 * v37 + 24) = v32;
                  *(_DWORD *)(v38 + 8 * v37 + 16) ^= 3u;
                  ++v183;
                }
                v24 = UserSidToken;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v190 + 214);
            if ( v24 < 0 )
              break;
          }
          v23 = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)Object, v190);
        }
        if ( v190 )
          ObfDereferenceObjectWithTag(v190, 0x6E457350u);
        v39 = UserSidToken;
      }
      else
      {
        v39 = -1073741820;
      }
LABEL_102:
      if ( PoolWithQuotaTag != (int *)v253 )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v39;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v199 = *(_DWORD *)ProcessInformation;
      DefaultPagePriority = MmGetDefaultPagePriority();
      if ( v64 > DefaultPagePriority )
        return -1073741811;
      SystemWsles = MiCreateSystemWsles();
      if ( v67 < SystemWsles )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(v66, 2035381072, (__int64)&Object, 0LL, 0LL);
      v45 = result;
      if ( result < 0 )
        return result;
      v46 = (char *)Object;
      v68 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_448;
      --CurrentThread->KernelApcDisable;
      v69 = (volatile signed __int64 *)(v46 + 728);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v46 + 728), 0LL);
      v70 = *((_DWORD *)v46 + 192);
      v71 = v199 << 12;
      do
      {
        v72 = v70;
        v70 = _InterlockedCompareExchange((volatile signed __int32 *)v46 + 192, v71 | v70 & 0xFFFF8FFF, v70);
      }
      while ( v70 != v72 );
      v73 = (char *)Object + 1160;
      v74 = (char *)*((_QWORD *)Object + 145);
      v75 = v199;
      while ( v74 != v73 )
      {
        PsSetPagePriorityThread((__int64)(v74 - 1696), v75);
        v74 = *(char **)v74;
      }
      if ( (_InterlockedExchangeAdd64(v69, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v69);
      KeAbPostRelease((ULONG_PTR)v69);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExReleaseRundownProtection(v68);
      v46 = (char *)Object;
      goto LABEL_125;
    case ProcessInstrumentationCallback:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v91 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v201 = 0LL;
        v143 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v201 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v201 = *(_OWORD *)ProcessInformation;
        v143 = *((_QWORD *)&v201 + 1);
      }
      if ( DWORD1(v201) )
        return -1073741811;
      if ( (_DWORD)v201 != DWORD1(v201) )
        return -1073741736;
      if ( v143 != v143 << 16 >> 16 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v144 = KeGetCurrentThread()->ApcState.Process;
      v145 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v92 = (char *)Object;
      if ( !v145 && Object != v144 )
      {
LABEL_348:
        ObfDereferenceObjectWithTag(v92, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        ObfDereferenceObjectWithTag(v92, 0x79517350u);
        return -1073741558;
      }
      v146 = *((_QWORD *)v92 + 133);
      if ( v146 && ((v147 = *(_WORD *)(v146 + 8), v147 == 332) || v147 == 452) )
      {
        v148 = v144[1].ActiveProcessors.Bitmap[7];
        if ( v148 )
        {
          v149 = *(_WORD *)(v148 + 8);
          if ( v149 == 332 || v149 == 452 )
          {
            KiStackAttachProcess((_KPROCESS *)v92, 0, (__int64)&v252);
            if ( *((_QWORD *)&v201 + 1) < MmGetMaximumUserAddress()
              && (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v201 + 1), 1LL) )
            {
              v150 = 0LL;
              v151 = (__int64 *)*((_QWORD *)v92 + 133);
              if ( v151 )
              {
                v152 = *((_WORD *)v151 + 4);
                if ( v152 == 332 || v152 == 452 )
                  v150 = *v151;
              }
              *(_DWORD *)(v150 + 1128) = DWORD2(v201);
            }
            else
            {
              v91 = -1073741811;
            }
            KiUnstackDetachProcess(&v252, 0LL);
            goto LABEL_213;
          }
        }
      }
      else
      {
        v153 = v144[1].ActiveProcessors.Bitmap[7];
        if ( !v153 || (v154 = *(_WORD *)(v153 + 8), v154 != 332) && v154 != 452 )
        {
          KiStackAttachProcess((_KPROCESS *)v92, 0, (__int64)&v252);
          v155 = *((_QWORD *)&v201 + 1);
          if ( !(unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v201 + 1), 0LL) )
            v91 = -1073741811;
          KiUnstackDetachProcess(&v252, 0LL);
          if ( v91 >= 0 )
          {
            --CurrentThread->KernelApcDisable;
            v156 = (volatile signed __int64 *)(v92 + 728);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v92 + 728), 0LL);
            *((_QWORD *)v92 + 89) = v155;
            v157 = (volatile signed __int32 **)(v92 + 1160);
            v158 = *v157;
            while ( v158 != (volatile signed __int32 *)v157 )
            {
              if ( v155 )
                _interlockedbittestandset(v158 - 424, 0x19u);
              else
                _interlockedbittestandreset(v158 - 424, 0x19u);
              v158 = *(volatile signed __int32 **)v158;
              v155 = *((_QWORD *)&v201 + 1);
            }
            if ( (_InterlockedExchangeAdd64(v156, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v156);
            KeAbPostRelease((ULONG_PTR)v156);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            v92 = (char *)Object;
          }
LABEL_213:
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v92 + 95);
LABEL_214:
          ObfDereferenceObjectWithTag(v92, 0x79517350u);
          return v91;
        }
      }
      v91 = -1073741637;
      goto LABEL_213;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v206 = *(_DWORD *)ProcessInformation;
      if ( (v206 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v206);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v223 = *(_DWORD *)ProcessInformation;
      v159 = v223;
      if ( (v223 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( (v159 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_35;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v97 = *(_DWORD *)ProcessInformation;
      v222 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v98 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken((__int64)v98, v97);
      ObfDereferenceObject(v98);
      goto LABEL_35;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v243 = *(_QWORD *)ProcessInformation;
      if ( (v243 & 3) != 1 )
        return -1073741811;
      KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] = v243;
      return 0;
    case ProcessMitigationPolicy:
      v100 = 0;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v101 = *(_QWORD *)ProcessInformation;
      v188 = *(_QWORD *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v101 != 2 )
        return -1073741811;
      v102 = (unsigned __int8 *)KeGetCurrentThread()->ApcState.Process;
      Object = v102;
      if ( (_DWORD)v188 != 2 )
      {
        switch ( (int)v188 )
        {
          case 1:
            if ( (v188 & 0xFFFFFFF000000000uLL) != 0 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            v117 = (HIDWORD(v188) >> 1) & 1;
            if ( !v117 && (*((_DWORD *)v102 + 192) & 0x8000000) != 0 )
              goto LABEL_514;
            if ( (v188 & 0x100000000LL) == 0 && (*((_DWORD *)v102 + 192) & 0x20000) == 0 )
              goto LABEL_514;
            v118 = (HIDWORD(v188) >> 3) & 1;
            if ( !v118 && (*((_DWORD *)v102 + 192) & 0x1000000) != 0 )
              goto LABEL_514;
            if ( v118 )
            {
              if ( !v117 )
              {
                v105 = -1073741776;
                goto LABEL_244;
              }
            }
            else if ( !v117 )
            {
              goto LABEL_306;
            }
            _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x8000000u);
            v102 = (unsigned __int8 *)Object;
LABEL_306:
            if ( (v188 & 0x100000000LL) != 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)v102 + 192, 0xFFFDFFFF);
              v102 = (unsigned __int8 *)Object;
            }
            if ( v118 )
            {
              _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x1000000u);
              v102 = (unsigned __int8 *)Object;
            }
            goto LABEL_310;
          case 3:
            if ( (v188 & 0xFFFFFFFC00000000uLL) != 0 )
            {
              v105 = -1073741811;
            }
            else if ( ((HIDWORD(v188) >> 1) & 1) != 0 || (v188 & 0x100000000LL) == 0 )
            {
              if ( ((HIDWORD(v188) >> 1) & 1) != 0 && (v188 & 0x100000000LL) == 0 )
              {
                v105 = -1073741811;
              }
              else
              {
                v119 = ObReferenceProcessHandleTable(v102);
                if ( v119 )
                {
                  if ( ExEnableHandleExceptions(v119, (v188 & 0x100000000LL) != 0) )
                    v105 = 0;
                  else
                    v105 = -1073741790;
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v102 + 95);
                }
                else
                {
                  v105 = -1073741558;
                }
              }
            }
            else
            {
              v105 = -1073741811;
            }
            goto LABEL_244;
          case 4:
            if ( (v188 & 0xFFFFFFFE00000000uLL) != 0 )
            {
              v105 = -1073741811;
            }
            else if ( (v188 & 0x100000000LL) != 0 || *((int *)v102 + 192) >= 0 )
            {
              v105 = 0;
              if ( (v188 & 0x100000000LL) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x80000000);
                v102 = (unsigned __int8 *)Object;
                if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
                  v105 = -1073741431;
              }
            }
            else
            {
              v105 = -1073741790;
            }
            goto LABEL_244;
          case 6:
            if ( (v188 & 0xFFFFFFFE00000000uLL) != 0 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            if ( (v188 & 0x100000000LL) == 0 && (*((_DWORD *)v102 + 192) & 0x4000000) != 0 )
            {
              v105 = -1073741790;
              goto LABEL_244;
            }
            v105 = 0;
            if ( (v188 & 0x100000000LL) == 0 )
              goto LABEL_244;
            _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x4000000u);
            goto LABEL_260;
          case 7:
            if ( (v188 & 0xFFFFFFF800000000uLL) != 0 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            if ( (*((_DWORD *)v102 + 193) & 0x10) == 0 )
            {
              v105 = -1073741790;
              goto LABEL_244;
            }
            if ( (v188 & 0x400000000LL) == 0 )
            {
              v105 = -1073741790;
              goto LABEL_244;
            }
            _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x20000000u);
            goto LABEL_636;
          case 8:
            v160 = HIDWORD(v188);
            if ( (v188 & 0xFFFFFFF800000000uLL) != 0 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            v161 = (HIDWORD(v188) >> 1) & 1;
            if ( v161 + (BYTE4(v188) & 1u) > 1 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            if ( (v188 & 0x100000000LL) != 0 )
              goto LABEL_553;
            if ( v102[1736] >= 8u && v102[1737] >= 8u )
            {
              v105 = -1073741790;
              goto LABEL_244;
            }
            if ( !v161 )
            {
              LOBYTE(ProcessInformationClass) = 6;
              if ( (unsigned int)SeCompareSigningLevels(v102[1736], ProcessInformationClass) )
              {
                LOBYTE(ProcessInformationClass) = 6;
                if ( (unsigned int)SeCompareSigningLevels(v102[1737], *(_QWORD *)&ProcessInformationClass) )
                {
                  v105 = -1073741790;
                  goto LABEL_244;
                }
              }
            }
LABEL_553:
            if ( (v188 & 0x100000000LL) != 0 )
            {
              if ( v102[1736] < 8u )
                v102[1736] = 8;
              if ( v102[1737] < 8u )
                v102[1737] = 8;
            }
            else if ( v161 )
            {
              LOBYTE(ProcessInformationClass) = 6;
              if ( !(unsigned int)SeCompareSigningLevels(v102[1736], *(_QWORD *)&ProcessInformationClass) )
              {
                v105 = -1073741790;
                goto LABEL_244;
              }
              LOBYTE(v162) = 6;
              if ( (unsigned int)SeCompareSigningLevels(v162, v102[1737]) )
                v102[1737] = 6;
            }
            v105 = 0;
            if ( v160 )
            {
              _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x2000u);
              v102 = (unsigned __int8 *)Object;
            }
            goto LABEL_244;
          case 9:
            if ( (v188 & 0xFFFFFFFC00000000uLL) != 0 )
            {
              v105 = -1073741811;
            }
            else if ( (v188 & 0x100000000LL) != 0 || (*((_DWORD *)v102 + 435) & 4) == 0 )
            {
              if ( (v188 & 0x100000000LL) != 0 || (v188 & 0x200000000LL) != 0 || (*((_DWORD *)v102 + 435) & 8) == 0 )
              {
                v105 = 0;
                if ( (v188 & 0x100000000LL) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v102 + 435, 4u);
                  _InterlockedAnd((volatile signed __int32 *)v102 + 435, 0xFFFFFFF7);
                  v102 = (unsigned __int8 *)Object;
                }
                else if ( (v188 & 0x200000000LL) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v102 + 435, 8u);
                  _InterlockedAnd((volatile signed __int32 *)v102 + 435, 0xFFFFFFFB);
                  v102 = (unsigned __int8 *)Object;
                }
              }
              else
              {
                v105 = -1073741790;
              }
            }
            else
            {
              v105 = -1073741790;
            }
            goto LABEL_244;
          case 10:
            if ( (v188 & 0xFFFFFFF800000000uLL) != 0 )
            {
              v105 = -1073741811;
              goto LABEL_244;
            }
            if ( (v188 & 0x100000000LL) == 0 && (*((_DWORD *)v102 + 435) & 0x800) != 0
              || ((HIDWORD(v188) >> 1) & 1) == 0 && (*((_DWORD *)v102 + 435) & 0x1000) != 0 )
            {
LABEL_514:
              v105 = -1073741790;
              goto LABEL_244;
            }
            v163 = (HIDWORD(v188) >> 2) & 1;
            if ( !v163 && (*((_DWORD *)v102 + 435) & 0x20000) != 0 )
            {
              v105 = -1073741790;
              goto LABEL_244;
            }
            if ( (v188 & 0x100000000LL) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x800u);
              v102 = (unsigned __int8 *)Object;
            }
            if ( ((HIDWORD(v188) >> 1) & 1) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x1000u);
              v102 = (unsigned __int8 *)Object;
            }
            if ( v163 )
            {
              _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x20000u);
              v102 = (unsigned __int8 *)Object;
            }
            break;
          default:
            goto LABEL_243;
        }
        goto LABEL_310;
      }
      v103 = HIDWORD(v188);
      if ( (v188 & 0xFFFFFFF800000000uLL) == 0 )
      {
        v104 = BYTE4(v188) & 1;
        if ( (v188 & 0x100000000LL) == 0 && ((v188 & 0x200000000LL) != 0 || (v188 & 0x400000000LL) != 0) )
        {
          v105 = -1073741811;
          goto LABEL_244;
        }
        v250 = PspSystemMitigationOptions;
        if ( (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6 )
        {
LABEL_243:
          v105 = -1073741637;
          goto LABEL_244;
        }
        if ( v7 != -1LL )
        {
          v105 = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( v105 < 0 )
          {
LABEL_260:
            v102 = (unsigned __int8 *)Object;
            goto LABEL_244;
          }
          v100 = 1;
          v102 = (unsigned __int8 *)Object;
          if ( Object != KeGetCurrentThread()->ApcState.Process )
          {
            if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
            {
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
              IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
              SeReleaseSubjectContext(&SubjectContext);
              if ( (RtlIsSandboxedToken(0LL, v9) || !IsSandboxedToken || (*((_DWORD *)v102 + 435) & 0x800000) == 0)
                && !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
              {
                v105 = -1073741790;
                goto LABEL_244;
              }
            }
            if ( v104 )
              _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x400u);
            else
              _InterlockedAnd((volatile signed __int32 *)v102 + 192, 0xFFFFFBFF);
            v165 = (volatile signed __int32 *)((char *)Object + 1740);
            if ( (v188 & 0x200000000LL) != 0 )
              _InterlockedOr(v165, 0x4000u);
            else
              _InterlockedAnd(v165, 0xFFFFBFFF);
            if ( (v188 & 0x400000000LL) != 0 )
              _InterlockedOr(v165, 0x800000u);
            else
              _InterlockedAnd(v165, 0xFF7FFFFF);
            goto LABEL_636;
          }
          v103 = HIDWORD(v188);
        }
        if ( !v104 && (*((_DWORD *)v102 + 192) & 0x400) != 0 )
        {
          v105 = -1073741790;
          goto LABEL_244;
        }
        v166 = (v103 >> 1) & 1;
        if ( v166 && (*((_DWORD *)v102 + 192) & 0x400) != 0 && (*((_DWORD *)v102 + 435) & 0x4000) == 0 )
        {
          v105 = -1073741790;
          goto LABEL_244;
        }
        v167 = (v103 >> 2) & 1;
        if ( v167 && (*((_DWORD *)v102 + 192) & 0x400) != 0 && (*((_DWORD *)v102 + 435) & 0x800000) == 0 )
        {
          v105 = -1073741790;
          goto LABEL_244;
        }
        if ( v104 )
        {
          _InterlockedOr((volatile signed __int32 *)v102 + 192, 0x400u);
          v102 = (unsigned __int8 *)Object;
        }
        if ( v166 )
          _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x4000u);
        else
          _InterlockedAnd((volatile signed __int32 *)v102 + 435, 0xFFFFBFFF);
        if ( v167 )
          _InterlockedOr((volatile signed __int32 *)v102 + 435, 0x800000u);
        else
          _InterlockedAnd((volatile signed __int32 *)v102 + 435, 0xFF7FFFFF);
LABEL_636:
        v102 = (unsigned __int8 *)Object;
LABEL_310:
        v105 = 0;
        goto LABEL_244;
      }
      v105 = -1073741811;
LABEL_244:
      if ( v100 == 1 )
        ObfDereferenceObjectWithTag(v102, 0x79517350u);
      return v105;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v236 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v236) )
        return RtlRemoveDynamicFunctionTable(v236);
      else
        return RtlInsertDynamicFunctionTable(v236);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v221 = *(_DWORD *)ProcessInformation;
      v90 = v221;
      if ( (v221 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v91 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v92 = (char *)Object;
      v93 = ObReferenceProcessHandleTable(Object);
      if ( v93 )
      {
        ExEnableHandleExceptions(v93, (v90 & 1) != 0);
        goto LABEL_213;
      }
      v91 = -1073741558;
      goto LABEL_214;
    case ProcessRevokeFileHandles:
      v168 = 0LL;
      v217 = 0LL;
      if ( v9 != 1 )
        goto LABEL_651;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v169 = *(_DWORD *)v5;
      v213 = v169;
      v170 = *(void **)(v5 + 8);
      Src = v170;
      if ( !(_WORD)v169 )
        return -1073741811;
      if ( ((unsigned __int8)v170 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v171 = (unsigned __int64)v170 + (unsigned __int16)v169;
      if ( v171 > 0x7FFFFFFF0000LL || v171 < (unsigned __int64)v170 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v172 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v213, 0x6E497350u);
      v168 = v172;
      v217 = v172;
      if ( !v172 )
        return -1073741670;
      memmove(v172, Src, (unsigned __int16)v213);
      Src = v168;
      v5 = (__int64)&v213;
      v244 = &v213;
      v7 = BugCheckParameter1;
LABEL_651:
      v105 = ObpReferenceObjectByHandleWithTag(v7, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( v105 >= 0 )
      {
        v173 = Object;
        v87 = IoRevokeHandlesForProcess(v5, (struct _KPROCESS *)Object);
        if ( v168 )
          ExFreePoolWithTag(v168, 0);
        v14 = v173;
        goto LABEL_195;
      }
      if ( !v168 )
        return v105;
      ExFreePoolWithTag(v168, 0);
      return v105;
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v207 = *(_DWORD *)v5 != 0;
        v174 = (volatile signed __int32 *)Object;
        if ( KeGetCurrentThread()->ApcState.Process == Object )
        {
          UserSidToken = -1073741790;
        }
        else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        {
          UserSidToken = 0;
          KeSetCheckStackExtentsProcess(v174, v207);
          if ( !v175 && (v174[516] & 2) != 0 )
          {
            _InterlockedAnd(v174 + 516, 0xFFFFFFFD);
            v174 = (volatile signed __int32 *)Object;
          }
        }
        else
        {
          UserSidToken = -1073741727;
        }
        ObfDereferenceObjectWithTag((PVOID)v174, 0x79517350u);
        return UserSidToken;
      }
      return result;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v251 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v251 != 1 || DWORD1(v251) )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v251 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
      goto LABEL_35;
    case ProcessFaultInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v231 = *(_QWORD *)v5;
      v39 = PsSetProcessFaultInformation((ULONG_PTR)Object, &v231);
      goto LABEL_327;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v238 = *(__m256i *)v5;
      if ( v238.m256i_i32[0] == 3 )
      {
        if ( (v238.m256i_i32[1] & 0xFFFFFFF8) != 0
          || *(_OWORD *)&v238.m256i_u64[1] != 0LL
          || ((((unsigned __int32)v238.m256i_i32[1] >> 1) & 1) != 0 || (v238.m256i_i8[4] & 4) != 0)
          && (v238.m256i_i8[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        else
        {
          if ( (((unsigned __int32)v238.m256i_i32[1] >> 1) & 1) != 0 || (v238.m256i_i8[4] & 4) != 0 )
          {
            v78 = (char *)Object;
            v142 = MmReleaseCommitForMemResetPages((_KPROCESS *)Object, ((unsigned __int32)v238.m256i_i32[1] >> 2) & 1);
          }
          else
          {
            v78 = (char *)Object;
            v142 = MmSetCommitReleaseEligibility((__int64)Object, v238.m256i_i8[4] & 1);
          }
LABEL_441:
          v87 = v142;
LABEL_194:
          v14 = v78;
LABEL_195:
          ObfDereferenceObjectWithTag(v14, 0x79517350u);
          return v87;
        }
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v256, ProcessInformation, ProcessInformationLength);
      v176 = (unsigned int)v4 >> 3;
      if ( v6 == ProcessAllowedCpuSetsInformation )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v39 = KeSetCpuSetsProcess((__int64)Object, v176, v256);
      goto LABEL_327;
    case ProcessSubsystemProcess:
      if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Blink) & 1) == 0 )
        return -1073741727;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v215, 0LL);
      v39 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)v215 + 435, 0x100u);
      ObfDereferenceObject(v215);
      return v39;
    case ProcessInPrivate:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 435, 0x400u);
      goto LABEL_35;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v44 = *(_DWORD *)ProcessInformation;
      v226 = *(_DWORD *)ProcessInformation;
      v45 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v46 = (char *)Object;
      v47 = ObReferenceProcessHandleTable(Object);
      if ( v47 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v47, v44);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v46 + 95);
      }
      else
      {
LABEL_448:
        v45 = -1073741558;
      }
LABEL_125:
      ObfDereferenceObjectWithTag(v46, 0x79517350u);
      return v45;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessChildProcessInformation:
      Sid2[0] = SeExports->SeLocalSystemSid;
      Sid2[1] = SeExports->SeLocalServiceSid;
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v114 = KeGetCurrentThread()->ApcState.Process;
        Object = v114;
        v197 = *(_WORD *)ProcessInformation;
        v115 = PsReferencePrimaryToken((PEPROCESS)v114);
        UserSidToken = SeQueryUserSidToken(v115, Sid1, 68LL);
        if ( !UserSidToken )
        {
          UserSidToken = -1073741790;
          for ( m = 0LL; ; ++m )
          {
            if ( m >= 2 )
              goto LABEL_290;
            if ( RtlEqualSid(Sid1, Sid2[m]) == 1 )
              break;
          }
          UserSidToken = 0;
          if ( !SeTokenIsNoChildProcessRestricted((__int64)v115) )
          {
            if ( HIBYTE(v197) )
              _InterlockedOr((volatile signed __int32 *)v114 + 435, 0x80000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v114 + 435, 0xFFF7FFFF);
            v114 = Object;
          }
        }
LABEL_290:
        ObFastDereferenceObject((signed __int64 *)v114 + 107, (unsigned __int64)v115);
        return UserSidToken;
      }
      return -1073741790;
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v178 = *(_BYTE *)ProcessInformation;
      v195 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v178 )
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x100000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFEFFFFF);
      goto LABEL_35;
    case ProcessPowerThrottlingState:
    case ProcessReserved3Information:
      return -1073741822;
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v177 = *(_BYTE *)v5;
      v194 = *(_BYTE *)v5;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v177 )
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x10000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xEFFFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_35;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v255, 0, sizeof(v255));
      if ( (unsigned int)v4 >= 0x90 )
        LODWORD(v4) = 144;
      memmove(v255, (const void *)v5, (unsigned int)v4);
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v96 = Object;
      v87 = PoSetProcessEnergyTrackingState((__int64)Object, v255);
      v14 = v96;
      if ( v87 >= 0 )
        goto LABEL_36;
      goto LABEL_195;
    default:
      return -1073741821;
  }
}
