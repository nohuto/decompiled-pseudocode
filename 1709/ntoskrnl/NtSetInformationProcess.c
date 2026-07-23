/*
 * XREFs of NtSetInformationProcess @ 0x1404D7080
 * Callers:
 *     <none>
 * Callees:
 *     MmSetMemoryPriorityProcess @ 0x14001972C (MmSetMemoryPriorityProcess.c)
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140021850 (PsSetIoPriorityThread.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeQueryGroupMaskProcess @ 0x14008A924 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400A18B0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AC660 (RtlInsertDynamicFunctionTable.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x1400B37AC (KeVerifyGroupAffinity.c)
 *     RtlStringCbCopyA @ 0x1400B9B10 (RtlStringCbCopyA.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     RtlInterlockedSetClearBits @ 0x1400D4814 (RtlInterlockedSetClearBits.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     RtlRemoveDynamicFunctionTable @ 0x140114F8C (RtlRemoveDynamicFunctionTable.c)
 *     ExReleaseExtensionTable @ 0x14011BED8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspLockUnlockProcessExclusive @ 0x1401261EC (PspLockUnlockProcessExclusive.c)
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     KeInitializeGate @ 0x14012C014 (KeInitializeGate.c)
 *     KeSetExecuteOptions @ 0x14012D654 (KeSetExecuteOptions.c)
 *     MmRemoveExecuteGrants @ 0x140130B50 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x14015D6F0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmGetMaximumUserAddress @ 0x1402137D4 (MmGetMaximumUserAddress.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402137F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402139D4 (MmSetCommitReleaseEligibility.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     LpcRequestPort @ 0x1404D6B20 (LpcRequestPort.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404D9270 (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetAutoAlignmentProcess @ 0x1404D932C (KeSetAutoAlignmentProcess.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404D97F8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     PsSetProcessPriorityByClass @ 0x14050B380 (PsSetProcessPriorityByClass.c)
 *     PsSetProcessFaultInformation @ 0x140578FB0 (PsSetProcessFaultInformation.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140579114 (EtwSetProcessTelemetryCoverage.c)
 *     ExEnableHandleExceptions @ 0x140590EC8 (ExEnableHandleExceptions.c)
 *     PspSetProcessPriorityClass @ 0x140595250 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x140595420 (PoSetProcessEnergyTrackingState.c)
 *     SeSetVirtualizationToken @ 0x140598C58 (SeSetVirtualizationToken.c)
 *     KeSetDisableBoostThread @ 0x14059E348 (KeSetDisableBoostThread.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1405D8D74 (PspSetProcessAffinityUpdateMode.c)
 *     KeSetCheckStackExtentsProcess @ 0x1406D794C (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1406EA620 (MmValidateUserCallTarget.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 *     ObSetProcessDeviceMap @ 0x1406F23DC (ObSetProcessDeviceMap.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140716134 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsSetProcessHandleTracingInformation @ 0x140716424 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 *     PspAssignPrimaryToken @ 0x140716E70 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14071AAC4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v9; // r14
  int v10; // eax
  char *v11; // rcx
  unsigned int v12; // ebx
  NTSTATUS result; // eax
  PVOID v14; // rcx
  char *v15; // rsi
  int v16; // edx
  __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int *PoolWithQuotaTag; // r12
  int v20; // r9d
  __int64 v21; // r8
  unsigned int k; // edx
  _KPROCESS *Process; // rcx
  __int64 m; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  char *v27; // rax
  char *v28; // rsi
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  int v38; // r9d
  unsigned __int64 v39; // r8
  __int64 v40; // rdx
  volatile void **v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // rax
  NTSTATUS v47; // ebx
  unsigned int v48; // edi
  NTSTATUS v49; // esi
  struct _EX_RUNDOWN_REF *v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // ebx
  NTSTATUS v53; // r14d
  unsigned __int64 v54; // rdx
  signed __int64 *v55; // roff
  signed __int64 v56; // rbx
  bool v57; // zf
  signed __int64 v58; // rax
  NTSTATUS v59; // r14d
  NTSTATUS v60; // eax
  char v61; // r13
  unsigned __int8 *v62; // rbx
  unsigned int v63; // edi
  int v64; // r14d
  int v65; // r15d
  int v66; // eax
  int v67; // r8d
  NTSTATUS v68; // esi
  __int16 v69; // bx
  struct _EX_RUNDOWN_REF *v70; // rdi
  NTSTATUS v71; // esi
  void *v72; // rbx
  int v73; // eax
  unsigned int DefaultPagePriority; // eax
  unsigned int v75; // ecx
  unsigned int SystemWsles; // eax
  unsigned int v77; // ecx
  int v78; // r13d
  char *v79; // rbx
  struct _EX_RUNDOWN_REF *v80; // r12
  volatile signed __int64 *v81; // r15
  signed __int32 v82; // eax
  int v83; // r8d
  signed __int32 v84; // edx
  char *v85; // r14
  char *v86; // rdi
  int v87; // ebx
  PVOID v88; // rcx
  char v89; // bl
  __int64 v90; // rax
  __int64 v91; // rdx
  char v92; // bl
  PVOID v93; // rbx
  NTSTATUS v94; // edi
  unsigned int v95; // edx
  int v96; // edi
  unsigned __int64 v97; // rax
  __int16 v98; // cx
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned int v101; // eax
  unsigned __int64 v102; // r15
  struct _EX_RUNDOWN_REF *v103; // rdi
  volatile signed __int64 *v104; // r13
  signed __int32 v105; // eax
  signed int v106; // r8d
  signed __int32 v107; // edx
  char *v108; // r14
  char *v109; // rbx
  signed int v110; // r12d
  PACCESS_TOKEN v111; // rbx
  int v112; // edx
  int v113; // ecx
  int v114; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v116; // ebx
  int v117; // ebx
  char v118; // si
  PVOID v119; // rdi
  bool v120; // di
  char *v121; // r9
  char *j; // r8
  char **v123; // r8
  __int128 v124; // xmm2
  unsigned int v125; // edi
  unsigned int v126; // ecx
  int v127; // r10d
  int v128; // edx
  int v129; // r8d
  int v130; // r9d
  int v131; // r11d
  int v132; // ecx
  int v133; // eax
  volatile signed __int64 *v134; // rbx
  _QWORD *PoolWithTag; // rax
  void *v136; // r8
  int v137; // r15d
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v140; // r8
  __int64 v141; // rdi
  unsigned __int8 v142; // r15
  PVOID v143; // rbx
  __int64 v144; // rax
  __int16 v145; // cx
  int v146; // ebx
  NTSTATUS v147; // r13d
  PVOID v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  HANDLE v151; // rbx
  int v152; // ebx
  int v153; // ecx
  int *v154; // rdx
  NTSTATUS v155; // eax
  HANDLE v156; // rcx
  _KPROCESS *v157; // r15
  BOOLEAN v158; // al
  __int64 v159; // rax
  __int16 v160; // cx
  unsigned __int64 v161; // rax
  __int16 v162; // cx
  __int64 v163; // rcx
  __int64 *v164; // rax
  __int16 v165; // dx
  unsigned __int64 v166; // rax
  __int16 v167; // cx
  __int64 v168; // r14
  __int64 v169; // rax
  volatile signed __int64 *v170; // rdi
  volatile signed __int32 **v171; // rbx
  volatile signed __int32 *v172; // rax
  char v173; // bl
  unsigned int v174; // ecx
  int v175; // edx
  int v176; // ecx
  unsigned int v177; // edi
  int NoChildProcessRestrictedPolicy; // eax
  int v179; // r8d
  int v180; // edx
  int v181; // eax
  int v182; // edi
  __int64 v183; // rdx
  unsigned __int8 *v184; // rcx
  __int64 v185; // rcx
  bool IsSandboxedToken; // r15
  int v187; // r8d
  int v188; // edi
  int v189; // edx
  int v190; // r9d
  int v191; // r10d
  int v192; // eax
  int v193; // r8d
  int v194; // edx
  int v195; // r8d
  void *v196; // rbx
  int v197; // eax
  void *v198; // rcx
  unsigned __int64 v199; // rdx
  PVOID v200; // rax
  int v201; // edx
  char v202; // bl
  char v203; // bl
  volatile signed __int32 *v204; // roff
  signed __int32 v205[8]; // [rsp+0h] [rbp-518h] BYREF
  PVOID Object; // [rsp+50h] [rbp-4C8h] BYREF
  NTSTATUS v207; // [rsp+58h] [rbp-4C0h]
  unsigned int v208; // [rsp+5Ch] [rbp-4BCh]
  int v209; // [rsp+60h] [rbp-4B8h]
  HANDLE v210; // [rsp+68h] [rbp-4B0h]
  char v211; // [rsp+70h] [rbp-4A8h]
  unsigned __int8 v212; // [rsp+73h] [rbp-4A5h]
  PVOID P; // [rsp+78h] [rbp-4A0h]
  HANDLE Handle; // [rsp+80h] [rbp-498h]
  unsigned __int64 v215; // [rsp+88h] [rbp-490h]
  unsigned int v216; // [rsp+90h] [rbp-488h]
  ULONG Alignment; // [rsp+98h] [rbp-480h]
  char v218; // [rsp+A0h] [rbp-478h]
  char v219; // [rsp+A1h] [rbp-477h]
  __int16 v220; // [rsp+A4h] [rbp-474h]
  char v221; // [rsp+A8h] [rbp-470h]
  signed int v222; // [rsp+ACh] [rbp-46Ch]
  __int64 v223; // [rsp+B0h] [rbp-468h]
  __int64 v224; // [rsp+B8h] [rbp-460h]
  int v225; // [rsp+C0h] [rbp-458h]
  char *v226; // [rsp+C8h] [rbp-450h]
  __int128 v227; // [rsp+D0h] [rbp-448h]
  __int64 v228; // [rsp+E0h] [rbp-438h]
  __int128 v229; // [rsp+E8h] [rbp-430h] BYREF
  BOOL v230; // [rsp+F8h] [rbp-420h]
  int v231; // [rsp+FCh] [rbp-41Ch] BYREF
  int v232; // [rsp+100h] [rbp-418h]
  PVOID v233; // [rsp+108h] [rbp-410h] BYREF
  int v234; // [rsp+110h] [rbp-408h] BYREF
  int v235; // [rsp+114h] [rbp-404h]
  unsigned int v236; // [rsp+118h] [rbp-400h]
  int v237; // [rsp+140h] [rbp-3D8h] BYREF
  int v238; // [rsp+144h] [rbp-3D4h]
  int v239; // [rsp+148h] [rbp-3D0h]
  int v240; // [rsp+150h] [rbp-3C8h] BYREF
  void *Src; // [rsp+158h] [rbp-3C0h]
  PVOID v242; // [rsp+160h] [rbp-3B8h]
  PVOID v243; // [rsp+168h] [rbp-3B0h] BYREF
  PVOID v244; // [rsp+170h] [rbp-3A8h]
  int v245; // [rsp+178h] [rbp-3A0h]
  int v246; // [rsp+17Ch] [rbp-39Ch]
  int v247; // [rsp+180h] [rbp-398h]
  int v248; // [rsp+184h] [rbp-394h]
  int v249; // [rsp+188h] [rbp-390h]
  HANDLE v250; // [rsp+198h] [rbp-380h]
  __int64 v251; // [rsp+1A0h] [rbp-378h]
  int v252; // [rsp+1A8h] [rbp-370h]
  int v253; // [rsp+1ACh] [rbp-36Ch]
  int v254; // [rsp+1B0h] [rbp-368h]
  int v255; // [rsp+1B4h] [rbp-364h]
  int v256; // [rsp+1B8h] [rbp-360h]
  _QWORD v257[4]; // [rsp+1C0h] [rbp-358h] BYREF
  __int128 v258; // [rsp+1E0h] [rbp-338h]
  int v259; // [rsp+1F0h] [rbp-328h]
  int v260; // [rsp+1F4h] [rbp-324h]
  int v261; // [rsp+1F8h] [rbp-320h]
  __int128 v262; // [rsp+200h] [rbp-318h] BYREF
  __int64 v263; // [rsp+210h] [rbp-308h]
  __m256i v264; // [rsp+218h] [rbp-300h]
  __int128 v265; // [rsp+238h] [rbp-2E0h] BYREF
  __int128 v266; // [rsp+248h] [rbp-2D0h] BYREF
  __int64 v267; // [rsp+258h] [rbp-2C0h]
  HANDLE v268; // [rsp+260h] [rbp-2B8h]
  unsigned __int64 v269; // [rsp+268h] [rbp-2B0h]
  unsigned __int64 v270; // [rsp+270h] [rbp-2A8h]
  HANDLE v271; // [rsp+278h] [rbp-2A0h]
  int *v272; // [rsp+280h] [rbp-298h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+288h] [rbp-290h] BYREF
  __m256i v274; // [rsp+2A8h] [rbp-270h] BYREF
  __int64 v275; // [rsp+2D0h] [rbp-248h]
  HANDLE v276; // [rsp+2D8h] [rbp-240h] BYREF
  int v277; // [rsp+2E0h] [rbp-238h]
  __int128 v278; // [rsp+2E8h] [rbp-230h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v279; // [rsp+2F8h] [rbp-220h] BYREF
  _BYTE v280[40]; // [rsp+328h] [rbp-1F0h] BYREF
  _BYTE v281[144]; // [rsp+350h] [rbp-1C8h] BYREF
  char v282[160]; // [rsp+3E0h] [rbp-138h] BYREF
  char pszDest[80]; // [rsp+480h] [rbp-98h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  P = ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v224 = (__int64)CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( !v9 )
    goto LABEL_31;
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_22;
    case ProcessEnableAlignmentFaultFixup:
      v10 = 1;
      break;
    case ProcessForegroundInformation:
      v10 = 1;
      break;
    case ProcessPriorityClass:
      v10 = 1;
      break;
    case ProcessAffinityMask:
      v10 = 8;
      break;
    case ProcessPagePriority:
    case ProcessIoPriority:
      goto LABEL_22;
    case ProcessTlsInformation:
      v10 = 8;
      break;
    case ProcessExceptionPort:
      v10 = 8;
      break;
    case ProcessInstrumentationCallback:
      v10 = 8;
      break;
    case ProcessThreadStackAllocation:
      v10 = 8;
      break;
    case ProcessAffinityUpdateMode:
    case ProcessMemoryAllocationMode:
      goto LABEL_22;
    case ProcessConsoleHostProcess:
      v10 = 8;
      break;
    case ProcessDynamicFunctionTableInformation:
      v10 = 8;
      break;
    case ProcessRevokeFileHandles:
      v10 = 8;
      break;
    case ProcessMemoryExhaustion:
      v10 = 8;
      break;
    case ProcessCommitReleaseInformation:
      v10 = 8;
      break;
    case ProcessInPrivate:
      v10 = 1;
      break;
    case ProcessHighGraphicsPriorityInformation:
      v10 = 1;
      break;
    default:
LABEL_22:
      v10 = 4;
      break;
  }
  if ( ProcessInformationLength )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (char *)ProcessInformation + ProcessInformationLength;
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < ProcessInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
LABEL_31:
  if ( ProcessInformationClass != ProcessDefaultHardErrorMode )
  {
    if ( ProcessInformationClass == ProcessThreadStackAllocation )
    {
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v15 = 0LL;
        if ( ProcessInformationLength == 40 )
        {
          if ( v9 )
          {
            v265 = *(_OWORD *)ProcessInformation;
            v266 = *((_OWORD *)ProcessInformation + 1);
            v267 = *((_QWORD *)ProcessInformation + 4);
            v15 = (char *)ProcessInformation + 32;
            v5 = (__int64)&v265;
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
            v266 = *(_OWORD *)ProcessInformation;
            v15 = (char *)ProcessInformation + 16;
            v5 = (__int64)&v266;
          }
        }
        if ( *(_QWORD *)v5 )
        {
          v257[3] = *(_QWORD *)v5;
          *(_QWORD *)(v5 + 16) = 0LL;
          result = MiAllocateUserStack(0xFFFFFFFFFFFFFFFFuLL, v16 | 0x2000u, 4, 0, 0x80000000, 0, 0LL);
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
    v17 = ProcessInformationClass - 1;
    v18 = 0x140000000uLL;
    switch ( v17 )
    {
      case 0:
        return PspSetQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ProcessInformation, ProcessInformationLength, v9);
      case 4:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v260 = *(_DWORD *)ProcessInformation;
        v117 = v260;
        if ( v260 < 0 )
        {
          v118 = 2;
          v117 = v260 & 0x7FFFFFFF;
        }
        else
        {
          v118 = 0;
        }
        if ( (unsigned int)(v117 - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v119 = Object;
        if ( v117 <= *((char *)Object + 444)
          || SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)ProcessHandle, 0x200u, v9) )
        {
          KeSetPriorityAndQuantumProcess((__int64)v119, (unsigned int)v117, 0, 0, 0);
          MmSetMemoryPriorityProcess((__int64)v119, v118);
          ObfDereferenceObjectWithTag(v119, 0x79517350u);
          return 0;
        }
        ObfDereferenceObjectWithTag(v119, 0x79517350u);
        return -1073741727;
      case 5:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v137 = *(_DWORD *)ProcessInformation;
        v261 = *(_DWORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v78 = result;
        if ( result < 0 )
          return result;
        v79 = (char *)Object;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
          goto LABEL_409;
        for ( i = 0LL; ; i = v141 )
        {
          NextProcessThread = PsGetNextProcessThread(v79, i);
          v141 = NextProcessThread;
          if ( !NextProcessThread )
            break;
          KeBoostPriorityThread(NextProcessThread, v137, v140);
        }
        goto LABEL_553;
      case 7:
        if ( ProcessInformationLength == 8 )
        {
          v52 = 0;
          v236 = 0;
          Handle = *(HANDLE *)ProcessInformation;
          v250 = Handle;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          Handle = *(HANDLE *)ProcessInformation;
          v250 = Handle;
          v236 = *((_DWORD *)ProcessInformation + 2);
          v52 = v236;
          if ( (v236 & 0xFFFFFFF8) != 0 )
            return -1073741811;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v233, 0LL);
        v244 = v233;
        if ( result < 0 )
          return result;
        v53 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                2048,
                (__int64)PsProcessType,
                v9,
                2035381072,
                &Object,
                0LL,
                0LL);
        if ( v53 >= 0 )
        {
          v54 = (unsigned __int64)v233 | v52;
          v215 = v54;
          v55 = (signed __int64 *)((char *)Object + 848);
          _m_prefetchw((char *)Object + 848);
          v56 = *v55;
          while ( 1 )
          {
            Handle = (HANDLE)v56;
            if ( (_DWORD)v4 == 16 )
            {
              *(_DWORD *)(v5 + 8) = v56 & 7;
            }
            else if ( (v56 & 7) != 0 )
            {
              ObfDereferenceObject(v244);
              v59 = -1073741811;
LABEL_133:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v59;
            }
            v58 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, v54, v56);
            v57 = v56 == v58;
            v56 = v58;
            if ( v57 )
            {
              if ( v58 )
              {
                v72 = (void *)(v58 & 0xFFFFFFFFFFFFFFF8uLL);
                v274.m256i_i64[0] = 0xD00300008LL;
                v275 = *((_QWORD *)Object + 92);
                while ( 1 )
                {
                  v73 = LpcRequestPort((__int64)v72, &v274);
                  if ( v73 != -1073741801 && v73 != -1073741670 )
                    break;
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
                }
                PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
                ObfDereferenceObject(v72);
              }
              v59 = 0;
              goto LABEL_133;
            }
          }
        }
        ObfDereferenceObject(v233);
        return v53;
      case 8:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v271 = *(HANDLE *)ProcessInformation;
        return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
      case 9:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   544,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
          goto LABEL_420;
        return result;
      case 10:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   544,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
          goto LABEL_420;
        return result;
      case 12:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
LABEL_420:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return xKdEnumerateDebuggingDevices();
        }
        return result;
      case 14:
      case 41:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v134 = (volatile signed __int64 *)Object;
        v94 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
        if ( v94 < 0 )
          goto LABEL_804;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
        if ( PoolWithTag )
        {
          PsWatchEnabled = 1;
          *(_DWORD *)PoolWithTag = 0;
          PoolWithTag[1] = 0LL;
          KeInitializeGate((__int64)(PoolWithTag + 2));
          if ( !_InterlockedCompareExchange64(v134 + 122, (signed __int64)v136, 0LL) )
          {
            v94 = 0;
            v134 = (volatile signed __int64 *)Object;
            goto LABEL_804;
          }
          ExFreePoolWithTag(v136, 0);
          v94 = -1073741752;
          v134 = (volatile signed __int64 *)Object;
        }
        else
        {
          v94 = -1073741801;
        }
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)v134, 24616LL);
        goto LABEL_804;
      case 15:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      case 16:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v142 = *(_BYTE *)ProcessInformation;
        v211 = *(_BYTE *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        --CurrentThread->KernelApcDisable;
        v143 = Object;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 728, 0LL);
        if ( v142 )
          *((_DWORD *)v143 + 296) |= 4u;
        else
          *((_DWORD *)v143 + 296) &= ~4u;
        v144 = *((_QWORD *)v143 + 133);
        if ( v144 )
        {
          v145 = *(_WORD *)(v144 + 8);
          if ( v145 == 332 || v145 == 452 )
          {
            v142 = 1;
            v211 = 1;
          }
        }
        KeSetAutoAlignmentProcess(v143, v142);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v143 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v143 + 91);
        KeAbPostRelease((ULONG_PTR)v143 + 728);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_35;
      case 17:
        if ( ProcessInformationLength != 2 )
          return -1073741820;
        v69 = *(_WORD *)ProcessInformation;
        v220 = *(_WORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v70 = (struct _EX_RUNDOWN_REF *)Object;
        v71 = PspSetProcessPriorityClass(Object, HIBYTE(v220), ProcessHandle, v9);
        if ( v71 >= 0 )
          PsSetProcessPriorityByClass(v70, (_BYTE)v69 != 0);
        goto LABEL_755;
      case 18:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v146 = *(_DWORD *)ProcessInformation;
        v245 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        v147 = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 512,
                 (__int64)PsProcessType,
                 v9,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
        if ( v147 >= 0 )
        {
          v148 = Object;
          if ( *((_QWORD *)Object + 226) )
          {
            v147 = -1073741790;
          }
          else
          {
            if ( v146 )
              _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
            else
              _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
            v148 = Object;
          }
          ObfDereferenceObjectWithTag(v148, 0x79517350u);
        }
        return v147;
      case 20:
        if ( ProcessInformationLength == 8 )
        {
          v229 = 0uLL;
          *(_QWORD *)&v229 = *(_QWORD *)ProcessInformation;
          if ( !(_QWORD)v229 )
            return -1073741811;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v229 = *(_OWORD *)ProcessInformation;
          if ( !KeVerifyGroupAffinity((__int64)&v229, 0) )
            return -1073741811;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v79 = (char *)Object;
        LODWORD(v149) = KeQueryGroupMaskProcess((__int64)Object);
        if ( (((_DWORD)v149 - 1) & (unsigned int)v149) != 0 )
          goto LABEL_458;
        if ( (_DWORD)v4 == 8 )
        {
          _BitScanForward((unsigned int *)&v149, v149);
          v232 = v149;
          v150 = v229 & qword_140401408[v149];
          v79 = (char *)Object;
          if ( v150 != (_QWORD)v229 )
          {
LABEL_458:
            v78 = -1073741811;
            goto LABEL_213;
          }
          WORD4(v229) = v232;
          *(_QWORD *)&v229 = v150;
        }
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v79 + 95) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v79 + 728), 0LL);
          v78 = PspSetProcessAffinitySafe((_DWORD)v79, 0, 0, (unsigned int)&v229, (__int64)&v237);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v79 + 91, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v79 + 91);
          KeAbPostRelease((ULONG_PTR)(v79 + 728));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v79 + 95);
          v79 = (char *)Object;
          if ( v78 >= 0 )
          {
            if ( v237 )
              PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)Object);
            _InterlockedOr((volatile signed __int32 *)v79 + 192, 0x200000u);
            v79 = (char *)Object;
          }
        }
        else
        {
          v78 = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_213;
      case 21:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v246 = *(_DWORD *)ProcessInformation;
        v120 = v246 != 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v78 = result;
        if ( result < 0 )
          return result;
        v79 = (char *)Object;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
          goto LABEL_409;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v79 + 728), 0LL);
        if ( v120 )
          _interlockedbittestandset((volatile signed __int32 *)v79 + 110, 1u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)v79 + 110, 1u);
        v121 = (char *)Object + 1160;
        for ( j = (char *)*((_QWORD *)Object + 145); j != v121; j = *v123 )
          KeSetDisableBoostThread(j - 1704, v120);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v79 + 91);
        KeAbPostRelease((ULONG_PTR)(v79 + 728));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v79 + 95);
        v79 = (char *)Object;
        goto LABEL_213;
      case 22:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v151 = *(HANDLE *)ProcessInformation;
        v268 = *(HANDLE *)ProcessInformation;
        if ( RtlIsSandboxedToken(0LL, v9) )
          return -1073741790;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v60 = ObSetProcessDeviceMap(Object, v151, v9);
LABEL_137:
        v47 = v60;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v47;
      case 23:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v152 = *(_DWORD *)ProcessInformation;
        v247 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        v94 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   516,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v152 != (unsigned int)MmGetSessionId((__int64)Object) )
          v94 = -1073741790;
        v14 = Object;
        goto LABEL_231;
      case 24:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v92 = *(_BYTE *)ProcessInformation;
        v221 = *(_BYTE *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0x2000,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PsSetProcessPriorityByClass(Object, v92 != 0);
        goto LABEL_35;
      case 28:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v116 = *(_DWORD *)ProcessInformation;
        v248 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v116 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
        goto LABEL_35;
      case 30:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v78 = result;
        if ( result < 0 )
          return result;
        v238 = *(_DWORD *)v5;
        if ( (v238 & 0xFFFFFFFE) != 0 )
        {
          v78 = -1073741811;
        }
        else if ( (v238 & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
        }
        v88 = Object;
        goto LABEL_214;
      case 31:
        if ( !ProcessInformationLength )
          goto LABEL_489;
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v153 = *(_DWORD *)ProcessInformation;
        v234 = *(_DWORD *)ProcessInformation;
        if ( ProcessInformationLength == 8 )
          v235 = *((_DWORD *)ProcessInformation + 1);
        else
          v235 = 0;
        if ( v153 )
          return -1073741811;
LABEL_489:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v134 = (volatile signed __int64 *)Object;
        if ( (_DWORD)v4 )
          v154 = &v234;
        else
          v154 = 0LL;
        v155 = PsSetProcessHandleTracingInformation(Object, v154);
        goto LABEL_495;
      case 32:
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ProcessInformationLength == 4 )
        {
          v101 = *(_DWORD *)ProcessInformation;
          v222 = *(_DWORD *)ProcessInformation;
          LOBYTE(v102) = 0;
        }
        else
        {
          v269 = *(_QWORD *)ProcessInformation;
          v101 = v269;
          v102 = HIDWORD(v269);
          v222 = v269;
        }
        if ( v101 >= 4 )
          return -1073741811;
        if ( v101 >= 3 && !SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)ProcessHandle, 0x200u, v9) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v207 = result;
        if ( result < 0 )
          return result;
        v79 = (char *)Object;
        v103 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          --CurrentThread->KernelApcDisable;
          v104 = (volatile signed __int64 *)(v79 + 728);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v79 + 728), 0LL);
          v105 = *((_DWORD *)v79 + 193);
          v106 = v222 << 27;
          do
          {
            v107 = v105;
            v105 = _InterlockedCompareExchange((volatile signed __int32 *)v79 + 193, v106 | v105 & 0xC7FFFFFF, v105);
          }
          while ( v105 != v107 );
          v108 = (char *)Object + 1160;
          v109 = (char *)*((_QWORD *)Object + 145);
          v110 = v222;
          while ( v109 != v108 )
          {
            if ( (_BYTE)v102 == 1 && ((*((_DWORD *)v109 + 10) >> 9) & 7) < v110 )
              IoBoostThreadIoPriority((KSPIN_LOCK *)v109 - 213, v110, 0);
            PsSetIoPriorityThread((__int64)(v109 - 1704), v110);
            v109 = *(char **)v109;
          }
          if ( (_InterlockedExchangeAdd64(v104, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v104);
          KeAbPostRelease((ULONG_PTR)v104);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          ExReleaseRundownProtection_0(v103);
          v79 = (char *)Object;
          v78 = v207;
        }
        else
        {
LABEL_409:
          v78 = -1073741558;
        }
        goto LABEL_213;
      case 33:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v239 = *(_DWORD *)ProcessInformation;
        v94 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v239);
        if ( v94 >= 0 && (v239 & 3) == 1 )
          MmRemoveExecuteGrants();
        return v94;
      case 34:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( v9 != 1 )
          return -1073741823;
        if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
          return -1073741820;
        if ( ProcessInformationLength == 40 )
        {
          PoolWithQuotaTag = (int *)v280;
          P = v280;
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
          && (v20 = *PoolWithQuotaTag, (*PoolWithQuotaTag & 0xFFFFFFFE) == 0)
          && (v21 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v21)
          && (unsigned int)(v4 - 16) / 0x18uLL == v21 )
        {
          for ( k = 0; ; ++k )
          {
            v208 = k;
            if ( k >= (unsigned int)v21 )
              break;
            if ( PoolWithQuotaTag[6 * k + 4] )
              goto LABEL_503;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          Object = Process;
          v216 = 0;
          if ( (v20 & 1) != 0 )
          {
            v97 = Process[1].ActiveProcessors.Bitmap[7];
            if ( !v97 || (v98 = *(_WORD *)(v97 + 8), v98 != 332) && v98 != 452 )
            {
LABEL_503:
              v47 = -1073741811;
              goto LABEL_109;
            }
            v216 = 1;
          }
          Alignment = 4 * (v216 ^ 1) + 4;
          v224 = 4 * (v216 ^ 1LL) + 4;
          v215 = v5;
          v208 = 0;
          v207 = 0;
          v209 = 0;
          for ( m = PsGetNextProcessThread(Object, 0LL); ; m = PsGetNextProcessThread(Object, Handle) )
          {
            Handle = (HANDLE)m;
            v25 = m;
            if ( !m || v208 >= PoolWithQuotaTag[2] )
              break;
            if ( (*(_DWORD *)(m + 116) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(m + 1720)) )
            {
              v26 = *(_QWORD *)(v25 + 240);
              if ( v216 )
              {
                v27 = (char *)(v26 + 8236);
                v228 = v26 + 8236;
                v28 = (char *)*(unsigned int *)(v26 + 8236);
              }
              else
              {
                v27 = (char *)(v26 + 88);
                v228 = v26 + 88;
                v28 = *(char **)(v26 + 88);
              }
              v226 = v28;
              if ( v28 )
              {
                if ( PoolWithQuotaTag[1] == 1 )
                {
                  if ( v28 == v27 )
                  {
                    v226 = 0LL;
                  }
                  else
                  {
                    v40 = v224 * (unsigned int)PoolWithQuotaTag[3];
                    if ( v40 )
                    {
                      if ( ((Alignment - 1) & (unsigned int)v28) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( (unsigned __int64)&v28[v40] > 0x7FFFFFFF0000LL || &v28[v40] < v28 )
                        MEMORY[0x7FFFFFFF0000] = 0;
                    }
                    v41 = (volatile void **)&PoolWithQuotaTag[6 * v208 + 6];
                    ProbeForWrite(*v41, v224 * (unsigned int)PoolWithQuotaTag[3], Alignment);
                    memmove((void *)*v41, v28, v224 * (unsigned int)PoolWithQuotaTag[3]);
                    _InterlockedOr(v205, 0);
                  }
                  v251 = v208;
                  v42 = v208;
                  v43 = v208;
                  v44 = v208;
                  v45 = v208;
                  v46 = 6LL * v208;
                  *(_DWORD *)(v46 * 4 + v5 + 16) |= 1u;
                  if ( v216 )
                  {
                    v249 = PoolWithQuotaTag[v46 + 6];
                    *(_DWORD *)(v26 + 8236) = v249;
                  }
                  else
                  {
                    *(_QWORD *)(v26 + 88) = *(_QWORD *)&PoolWithQuotaTag[v46 + 6];
                  }
                  *(_QWORD *)(v5 + 24 * v45 + 32) = *((_QWORD *)Handle + 200);
                  *(_QWORD *)(v5 + 24 * v44 + 24) = v226;
                  *(_DWORD *)(v5 + 24 * v42 + 16) = *(_DWORD *)(v5 + 24 * v43 + 16) ^ 3;
                  ++v208;
                }
                else
                {
                  v223 = v208;
                  v29 = v208;
                  v30 = v208;
                  v31 = v208;
                  v32 = 6LL * v208;
                  *(_DWORD *)(v32 * 4 + v5 + 16) |= 1u;
                  v33 = (unsigned int)PoolWithQuotaTag[3];
                  if ( v216 )
                  {
                    v37 = (unsigned __int64)&v28[4 * v33];
                    if ( v37 >= 0x7FFFFFFF0000LL )
                      v37 = 0x7FFFFFFF0000LL;
                    v35 = *(unsigned int *)v37;
                    v228 = v35;
                    v38 = PoolWithQuotaTag[v32 + 6];
                    v252 = v38;
                    v39 = (unsigned __int64)&v226[4 * PoolWithQuotaTag[3]];
                    if ( v39 >= 0x7FFFFFFF0000LL )
                      v39 = 0x7FFFFFFF0000LL;
                    *(_DWORD *)v39 = v38;
                  }
                  else
                  {
                    v34 = (unsigned __int64)&v28[8 * v33];
                    if ( v34 >= 0x7FFFFFFF0000LL )
                      v34 = 0x7FFFFFFF0000LL;
                    v35 = *(_QWORD *)v34;
                    v228 = *(_QWORD *)v34;
                    v36 = (unsigned __int64)&v226[8 * PoolWithQuotaTag[3]];
                    if ( v36 >= 0x7FFFFFFF0000LL )
                      v36 = 0x7FFFFFFF0000LL;
                    *(_QWORD *)v36 = *(_QWORD *)&PoolWithQuotaTag[v32 + 6];
                  }
                  *(_QWORD *)(v5 + 24 * v31 + 24) = v35;
                  *(_DWORD *)(v5 + 24 * v29 + 16) = *(_DWORD *)(v5 + 24 * v30 + 16) ^ 3;
                  ++v208;
                }
              }
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Handle + 215);
            }
          }
          if ( Handle )
            ObfDereferenceObjectWithTag(Handle, 0x6E457350u);
          v47 = v207;
        }
        else
        {
          v47 = -1073741820;
        }
LABEL_109:
        if ( PoolWithQuotaTag == (int *)v280 )
          return v47;
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
        return v47;
      case 38:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v225 = *(_DWORD *)ProcessInformation;
        DefaultPagePriority = MmGetDefaultPagePriority();
        if ( v75 > DefaultPagePriority )
          return -1073741811;
        SystemWsles = MiCreateSystemWsles();
        if ( v77 < SystemWsles )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v78 = result;
        if ( result < 0 )
          return result;
        v79 = (char *)Object;
        v80 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
          goto LABEL_409;
        --CurrentThread->KernelApcDisable;
        v81 = (volatile signed __int64 *)(v79 + 728);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v79 + 728), 0LL);
        v82 = *((_DWORD *)v79 + 192);
        v83 = v225 << 12;
        do
        {
          v84 = v82;
          v82 = _InterlockedCompareExchange((volatile signed __int32 *)v79 + 192, v83 | v82 & 0xFFFF8FFF, v82);
        }
        while ( v82 != v84 );
        v85 = (char *)Object + 1160;
        v86 = (char *)*((_QWORD *)Object + 145);
        v87 = v225;
        while ( v86 != v85 )
        {
          PsSetPagePriorityThread((__int64)(v86 - 1704), v87);
          v86 = *(char **)v86;
        }
        if ( (_InterlockedExchangeAdd64(v81, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v81);
        KeAbPostRelease((ULONG_PTR)v81);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExReleaseRundownProtection_0(v80);
        v79 = (char *)Object;
        goto LABEL_213;
      case 39:
        if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        v78 = 0;
        if ( ProcessInformationLength == 8 )
        {
          *(_QWORD *)&v227 = 0LL;
          v156 = *(HANDLE *)ProcessInformation;
          *((_QWORD *)&v227 + 1) = *(_QWORD *)ProcessInformation;
        }
        else
        {
          v227 = *(_OWORD *)ProcessInformation;
          v156 = (HANDLE)*((_QWORD *)&v227 + 1);
        }
        if ( DWORD1(v227) )
          return -1073741811;
        if ( (_DWORD)v227 != DWORD1(v227) )
          return -1073741736;
        if ( v156 != (HANDLE)((__int64)((_QWORD)v156 << 16) >> 16) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v157 = KeGetCurrentThread()->ApcState.Process;
        v158 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
        v79 = (char *)Object;
        if ( !v158 && Object != v157 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741727;
        }
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          ObfDereferenceObjectWithTag(v79, 0x79517350u);
          return -1073741558;
        }
        v159 = *((_QWORD *)v79 + 133);
        if ( v159 && ((v160 = *(_WORD *)(v159 + 8), v160 == 332) || v160 == 452) )
        {
          v161 = v157[1].ActiveProcessors.Bitmap[7];
          if ( v161 )
          {
            v162 = *(_WORD *)(v161 + 8);
            if ( v162 == 332 || v162 == 452 )
            {
              KiStackAttachProcess((_KPROCESS *)v79, 0, (__int64)&v279);
              if ( *((_QWORD *)&v227 + 1) < MmGetMaximumUserAddress()
                && (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v227 + 1), 1LL) )
              {
                v163 = 0LL;
                v164 = (__int64 *)*((_QWORD *)v79 + 133);
                if ( v164 )
                {
                  v165 = *((_WORD *)v164 + 4);
                  if ( v165 == 332 || v165 == 452 )
                    v163 = *v164;
                }
                *(_DWORD *)(v163 + 1136) = DWORD2(v227);
              }
              else
              {
                v78 = -1073741811;
              }
              KiUnstackDetachProcess(&v279, 0LL);
LABEL_553:
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v79 + 95);
LABEL_213:
              v88 = v79;
LABEL_214:
              ObfDereferenceObjectWithTag(v88, 0x79517350u);
              return v78;
            }
          }
        }
        else
        {
          v166 = v157[1].ActiveProcessors.Bitmap[7];
          if ( !v166 || (v167 = *(_WORD *)(v166 + 8), v167 != 332) && v167 != 452 )
          {
            KiStackAttachProcess((_KPROCESS *)v79, 0, (__int64)&v279);
            v168 = *((_QWORD *)&v227 + 1);
            v57 = (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v227 + 1), 0LL) == 0;
            v169 = 0LL;
            if ( v57 )
              v169 = 3221225485LL;
            v223 = v169;
            v78 = v169;
            KiUnstackDetachProcess(&v279, 0LL);
            if ( v78 >= 0 )
            {
              --CurrentThread->KernelApcDisable;
              v170 = (volatile signed __int64 *)(v79 + 728);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v79 + 728), 0LL);
              *((_QWORD *)v79 + 89) = v168;
              v171 = (volatile signed __int32 **)(v79 + 1160);
              v172 = *v171;
              while ( v172 != (volatile signed __int32 *)v171 )
              {
                if ( v168 )
                  _interlockedbittestandset(v172 - 426, 0x19u);
                else
                  _interlockedbittestandreset(v172 - 426, 0x19u);
                v172 = *(volatile signed __int32 **)v172;
                v168 = *((_QWORD *)&v227 + 1);
              }
              if ( (_InterlockedExchangeAdd64(v170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v170);
              KeAbPostRelease((ULONG_PTR)v170);
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v79 = (char *)Object;
            }
            goto LABEL_553;
          }
        }
        v78 = -1073741637;
        goto LABEL_553;
      case 44:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v231 = *(_DWORD *)ProcessInformation;
        if ( (v231 & 0xFFFFFFFC) != 0 )
          return -1073741811;
        return PspSetProcessAffinityUpdateMode(CurrentThread, &v231);
      case 45:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v259 = *(_DWORD *)ProcessInformation;
        v173 = v259;
        if ( (v259 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (v173 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
        goto LABEL_35;
      case 47:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v253 = *(_DWORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v111 = PsReferencePrimaryToken((PEPROCESS)Object);
        SeSetVirtualizationToken(v111);
        ObfDereferenceObject(v111);
        goto LABEL_35;
      case 48:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        v270 = *(_QWORD *)ProcessInformation;
        if ( (v270 & 3) != 1 )
          return -1073741811;
        KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] = v270;
        return 0;
      case 51:
        v61 = 0;
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v210 = *(HANDLE *)ProcessInformation;
        if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v210 != 2 )
          return -1073741811;
        v62 = (unsigned __int8 *)KeGetCurrentThread()->ApcState.Process;
        Object = v62;
        if ( (_DWORD)v210 == 6 )
        {
          if ( (HIDWORD(v210) & 0xFFFFFFFE) != 0 )
          {
            v68 = -1073741811;
            goto LABEL_193;
          }
          if ( (BYTE4(v210) & 1) == 0 && (*((_DWORD *)v62 + 522) & 0x80u) != 0 )
          {
            v68 = -1073741790;
            goto LABEL_193;
          }
          v68 = 0;
          if ( (BYTE4(v210) & 1) == 0 )
            goto LABEL_193;
          _InterlockedOr((volatile signed __int32 *)v62 + 522, 0x80u);
        }
        else
        {
          if ( (_DWORD)v210 != 2 )
          {
            if ( (_DWORD)v210 == 8 )
            {
              v63 = HIDWORD(v210);
              if ( (HIDWORD(v210) & 0xFFFFFFE0) != 0 )
              {
                v68 = -1073741811;
              }
              else
              {
                if ( (BYTE4(v210) & 1) != 0 && ((BYTE4(v210) & 8) != 0 || (BYTE4(v210) & 0x10) != 0) )
                  v63 = HIDWORD(v210) & 0xFFFFFFE7;
                if ( (v63 & 2) != 0 && (v63 & 0x10) != 0 )
                  v63 &= ~0x10u;
                v64 = (v63 >> 3) & 1;
                if ( v64 && (v63 & 0x10) != 0 )
                {
                  v68 = -1073741811;
                }
                else
                {
                  v65 = (v63 >> 1) & 1;
                  if ( v65 + (v63 & 1) > 1 )
                  {
                    v68 = -1073741811;
                  }
                  else
                  {
                    if ( (v63 & 1) == 0 )
                    {
                      if ( v62[1736] >= 8u && v62[1737] >= 8u )
                      {
                        v68 = -1073741790;
                        goto LABEL_193;
                      }
                      if ( !v65 )
                      {
                        LOBYTE(v18) = 6;
                        if ( (unsigned int)SeCompareSigningLevels(v62[1736], v18) )
                        {
                          LOBYTE(v18) = 6;
                          if ( (unsigned int)SeCompareSigningLevels(v62[1737], v18) )
                          {
                            v68 = -1073741790;
                            goto LABEL_193;
                          }
                        }
                      }
                    }
                    if ( (*((_DWORD *)v62 + 522) & 0x3000000) == 0 || (v63 & 0x10) != 0 || v65 || v64 || (v63 & 1) != 0 )
                    {
                      v66 = 0;
                      v207 = 0;
                      if ( (v63 & 1) != 0 )
                      {
                        if ( v62[1736] < 8u )
                          v62[1736] = 8;
                        if ( v62[1737] < 8u )
                          v62[1737] = 8;
                      }
                      else if ( v65 )
                      {
                        LOBYTE(v18) = 6;
                        if ( !(unsigned int)SeCompareSigningLevels(v62[1736], v18) )
                        {
                          v68 = -1073741790;
                          goto LABEL_193;
                        }
                        LOBYTE(v185) = 6;
                        if ( (unsigned int)SeCompareSigningLevels(v185, v62[1737]) )
                          v62[1737] = 6;
                        v66 = 0;
                      }
                      v67 = 0;
                      if ( v63 )
                        v66 = 0x800000;
                      if ( v64 )
                        v66 |= 0x1000000u;
                      else
                        v67 = 0x1000000;
                      if ( (v63 & 0x10) != 0 )
                        v66 |= 0x2000000u;
                      else
                        v67 |= 0x2000000u;
                      RtlInterlockedSetClearBits((volatile signed __int32 *)v62 + 522, v66, v67);
                      v68 = v207;
                      goto LABEL_193;
                    }
                    v68 = -1073741790;
                  }
                }
              }
            }
            else
            {
              switch ( (int)v210 )
              {
                case 1:
                  if ( (HIDWORD(v210) & 0xFFFFFFF0) != 0 )
                  {
                    v68 = -1073741811;
                    break;
                  }
                  v112 = (HIDWORD(v210) >> 1) & 1;
                  if ( !v112 && (*((_DWORD *)v62 + 522) & 0x10) != 0 )
                    goto LABEL_566;
                  if ( (BYTE4(v210) & 1) == 0 && (*((_DWORD *)v62 + 522) & 0x40) == 0 )
                    goto LABEL_566;
                  v113 = (HIDWORD(v210) >> 3) & 1;
                  if ( !v113 && (*((_DWORD *)v62 + 522) & 8) != 0 )
                    goto LABEL_566;
                  if ( v113 )
                  {
                    if ( !v112 )
                    {
                      v68 = -1073741776;
                      break;
                    }
                  }
                  else if ( !v112 )
                  {
                    goto LABEL_291;
                  }
                  _InterlockedOr((volatile signed __int32 *)v62 + 522, 0x10u);
                  v62 = (unsigned __int8 *)Object;
LABEL_291:
                  if ( (BYTE4(v210) & 1) != 0 )
                  {
                    _InterlockedAnd((volatile signed __int32 *)v62 + 522, 0xFFFFFFBF);
                    v62 = (unsigned __int8 *)Object;
                  }
                  if ( v113 )
                  {
                    _InterlockedOr((volatile signed __int32 *)v62 + 522, 8u);
                    v62 = (unsigned __int8 *)Object;
                  }
                  goto LABEL_295;
                case 3:
                  if ( (HIDWORD(v210) & 0xFFFFFFFC) != 0 )
                  {
                    v68 = -1073741811;
                  }
                  else if ( ((HIDWORD(v210) >> 1) & 1) != 0 || (BYTE4(v210) & 1) == 0 )
                  {
                    if ( ((HIDWORD(v210) >> 1) & 1) != 0 && (BYTE4(v210) & 1) == 0 )
                    {
                      v68 = -1073741811;
                    }
                    else
                    {
                      v99 = ObReferenceProcessHandleTable(v62);
                      if ( v99 )
                      {
                        if ( (BYTE4(v210) & 1) != 0 )
                          LOBYTE(v100) = 1;
                        else
                          v100 = 0LL;
                        if ( (unsigned __int8)ExEnableHandleExceptions(v99, v100) )
                          v68 = 0;
                        else
                          v68 = -1073741790;
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v62 + 95);
                      }
                      else
                      {
                        v68 = -1073741558;
                      }
                    }
                  }
                  else
                  {
                    v68 = -1073741811;
                  }
                  break;
                case 4:
                  v174 = HIDWORD(v210);
                  if ( (HIDWORD(v210) & 0xFFFFFFFC) != 0 )
                  {
                    v68 = -1073741811;
                    break;
                  }
                  if ( (BYTE4(v210) & 1) != 0 && (BYTE4(v210) & 2) != 0 )
                  {
                    v174 = HIDWORD(v210) & 0xFFFFFFFD;
                    HIDWORD(v210) &= ~2u;
                  }
                  v175 = v174 & 1;
                  if ( (v174 & 1) == 0 && (*((_DWORD *)v62 + 522) & 0x1000) != 0 )
                  {
                    v68 = -1073741790;
                    break;
                  }
                  v176 = (v174 >> 1) & 1;
                  if ( v176 )
                    goto LABEL_588;
                  if ( v175 )
                    goto LABEL_590;
                  if ( (*((_DWORD *)v62 + 522) & 0x2000) != 0 )
                  {
                    v68 = -1073741790;
                    break;
                  }
LABEL_588:
                  if ( !v175 && !v176 )
                    goto LABEL_592;
LABEL_590:
                  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
                  {
                    v68 = -1073741431;
                    break;
                  }
LABEL_592:
                  v68 = 0;
                  if ( v175 )
                  {
                    _InterlockedOr((volatile signed __int32 *)v62 + 522, 0x3000u);
                    goto LABEL_192;
                  }
                  if ( !v176 )
                    break;
                  _InterlockedOr((volatile signed __int32 *)v62 + 522, 0x2000u);
                  goto LABEL_192;
                case 7:
                  if ( (HIDWORD(v210) & 0xFFFFFFF8) != 0 )
                  {
                    v68 = -1073741811;
                    break;
                  }
                  if ( (*((_DWORD *)v62 + 522) & 1) == 0 )
                  {
                    v68 = -1073741790;
                    break;
                  }
                  if ( (BYTE4(v210) & 4) == 0 )
                  {
                    v68 = -1073741790;
                    break;
                  }
                  _InterlockedOr((volatile signed __int32 *)v62 + 522, 4u);
                  v68 = 0;
                  goto LABEL_192;
                case 9:
                  if ( (HIDWORD(v210) & 0xFFFFFFFC) != 0 )
                  {
                    v68 = -1073741811;
                  }
                  else if ( (BYTE4(v210) & 1) != 0 || (*((_DWORD *)v62 + 522) & 0x10000) == 0 )
                  {
                    if ( (BYTE4(v210) & 1) != 0 || (BYTE4(v210) & 2) != 0 || (*((_DWORD *)v62 + 522) & 0x20000) == 0 )
                    {
                      v68 = 0;
                      if ( (BYTE4(v210) & 1) != 0 )
                      {
                        RtlInterlockedSetClearBits((volatile signed __int32 *)v62 + 522, 0x10000, 0x20000);
                      }
                      else if ( (BYTE4(v210) & 2) != 0 )
                      {
                        RtlInterlockedSetClearBits((volatile signed __int32 *)v62 + 522, 0x20000, 0x10000);
                      }
                    }
                    else
                    {
                      v68 = -1073741790;
                    }
                  }
                  else
                  {
                    v68 = -1073741790;
                  }
                  break;
                case 10:
                  v126 = HIDWORD(v210);
                  if ( (HIDWORD(v210) & 0xFFFFFFE0) == 0 )
                  {
                    if ( (BYTE4(v210) & 1) != 0 && (BYTE4(v210) & 8) != 0 )
                      v126 = HIDWORD(v210) & 0xFFFFFFF7;
                    if ( (v126 & 2) != 0 && (v126 & 0x10) != 0 )
                      v126 &= ~0x10u;
                    v127 = v126 & 1;
                    v128 = 0x80000;
                    if ( (v126 & 1) != 0 || (*((_DWORD *)v62 + 522) & 0x80000) == 0 )
                    {
                      v129 = (v126 >> 1) & 1;
                      if ( v129 || (*((_DWORD *)v62 + 522) & 0x200000) == 0 )
                      {
                        v130 = (v126 >> 2) & 1;
                        if ( !v130 && (*((_DWORD *)v62 + 522) & 0x40000) != 0 )
                        {
                          v68 = -1073741790;
                          break;
                        }
                        v131 = (v126 >> 3) & 1;
                        if ( v131 || (v126 & 1) != 0 || (*((_DWORD *)v62 + 522) & 0x100000) == 0 )
                        {
                          v132 = (v126 >> 4) & 1;
                          if ( v132 || v129 || (*((_DWORD *)v62 + 522) & 0x400000) == 0 )
                          {
                            v68 = 0;
                            v133 = 0;
                            if ( v127 )
                            {
                              v133 = 0x100000;
                            }
                            else
                            {
                              v128 = 0;
                              if ( v131 )
                                v128 = 0x100000;
                            }
                            if ( v129 )
                            {
                              v128 |= 0x200000u;
                              v133 |= 0x400000u;
                            }
                            else if ( v132 )
                            {
                              v128 |= 0x400000u;
                            }
                            if ( v130 )
                              v128 |= 0x40000u;
                            RtlInterlockedSetClearBits((volatile signed __int32 *)v62 + 522, v128, v133);
                          }
                          else
                          {
                            v68 = -1073741790;
                          }
                          break;
                        }
                      }
                    }
LABEL_566:
                    v68 = -1073741790;
                    break;
                  }
                  v68 = -1073741811;
                  break;
                case 13:
                  v177 = HIDWORD(v210);
                  if ( (HIDWORD(v210) & 0xFFFFFFF8) != 0 )
                  {
                    v68 = -1073741811;
                    break;
                  }
                  if ( (BYTE4(v210) & 1) == 0 && (BYTE4(v210) & 4) != 0 )
                  {
                    v68 = -1073741811;
                    break;
                  }
                  if ( (BYTE4(v210) & 1) != 0 && (BYTE4(v210) & 2) != 0 )
                    v177 = HIDWORD(v210) & 0xFFFFFFFD;
                  NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v62);
                  v179 = NoChildProcessRestrictedPolicy;
                  v180 = v177 & 1;
                  if ( (v177 & 1) == 0 && (unsigned int)(NoChildProcessRestrictedPolicy - 1) <= 1 )
                  {
                    v68 = -1073741790;
                    break;
                  }
                  v181 = (v177 >> 2) & 1;
                  if ( v181 && v179 == 1 )
                  {
                    v68 = -1073741790;
                    break;
                  }
                  v182 = (v177 >> 1) & 1;
                  if ( v182 )
                    goto LABEL_647;
                  if ( v180 )
                    goto LABEL_650;
                  if ( v179 == 3 )
                  {
                    v68 = -1073741790;
                  }
                  else
                  {
LABEL_647:
                    if ( v180 )
                    {
LABEL_650:
                      v184 = v62;
                      if ( v181 )
                        v183 = 2LL;
                      else
                        v183 = 1LL;
                    }
                    else
                    {
                      if ( !v182 )
                      {
LABEL_295:
                        v68 = 0;
                        break;
                      }
                      v183 = 3LL;
                      v184 = v62;
                    }
                    PspSetNoChildProcessRestrictedPolicy(v184, v183);
                    v68 = 0;
                  }
                  break;
                default:
                  goto LABEL_239;
              }
            }
LABEL_193:
            if ( v61 == 1 )
              ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return v68;
          }
          v95 = HIDWORD(v210);
          if ( (HIDWORD(v210) & 0xFFFFFFF0) != 0 )
          {
            v68 = -1073741811;
            goto LABEL_193;
          }
          if ( (BYTE4(v210) & 1) != 0 && (BYTE4(v210) & 8) != 0 )
          {
            v95 = HIDWORD(v210) & 0xFFFFFFF7;
            HIDWORD(v210) &= ~8u;
          }
          v96 = v95 & 1;
          if ( (v95 & 1) == 0 && ((v95 & 2) != 0 || (v95 & 4) != 0) )
          {
            v68 = -1073741811;
            goto LABEL_193;
          }
          if ( (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6 )
          {
LABEL_239:
            v68 = -1073741637;
            goto LABEL_193;
          }
          if ( ProcessHandle == (HANDLE)-1LL )
            goto LABEL_705;
          v68 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)ProcessHandle,
                  512,
                  (__int64)PsProcessType,
                  v9,
                  2035381072,
                  &Object,
                  0LL,
                  0LL);
          if ( v68 >= 0 )
          {
            v61 = 1;
            v62 = (unsigned __int8 *)Object;
            if ( Object != KeGetCurrentThread()->ApcState.Process )
            {
              if ( (*((_DWORD *)Object + 522) & 0x100) != 0 )
              {
                memset(&SubjectContext, 0, sizeof(SubjectContext));
                SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
                IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
                SeReleaseSubjectContext(&SubjectContext);
                if ( (RtlIsSandboxedToken(0LL, v9) || !IsSandboxedToken || (*((_DWORD *)v62 + 522) & 0x400) == 0)
                  && !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
                {
                  v68 = -1073741790;
                  goto LABEL_193;
                }
              }
              if ( ((HIDWORD(v210) >> 3) & 1) == 0 && !v96 && (*((_DWORD *)v62 + 522) & 0x800) != 0 )
              {
                v68 = -1073741790;
                goto LABEL_193;
              }
              v187 = (v96 ^ 1) << 8;
              v188 = v96 << 8;
              if ( ((HIDWORD(v210) >> 3) & 1) != 0 )
                v188 |= 0x800u;
              else
                v187 |= 0x800u;
              if ( (BYTE4(v210) & 2) != 0 )
                v188 |= 0x200u;
              else
                v187 |= 0x200u;
              if ( (BYTE4(v210) & 4) != 0 )
                v188 |= 0x400u;
              else
                v187 |= 0x400u;
              v189 = v188;
LABEL_731:
              RtlInterlockedSetClearBits((volatile signed __int32 *)v62 + 522, v189, v187);
              v68 = 0;
              goto LABEL_193;
            }
            v95 = HIDWORD(v210);
LABEL_705:
            v190 = 256;
            if ( !v96 && (*((_DWORD *)v62 + 522) & 0x100) != 0 )
            {
              v68 = -1073741790;
              goto LABEL_193;
            }
            v191 = (v95 >> 3) & 1;
            if ( !v191 && !v96 && (*((_DWORD *)v62 + 522) & 0x800) != 0 )
            {
              v68 = -1073741790;
              goto LABEL_193;
            }
            v192 = (v95 >> 1) & 1;
            if ( v192 )
            {
              v193 = *((_DWORD *)v62 + 522);
              if ( (v193 & 0x100) != 0 && (v193 & 0x200) == 0 )
              {
                v68 = -1073741790;
                goto LABEL_193;
              }
            }
            v194 = (v95 >> 2) & 1;
            if ( v194 )
            {
              v195 = *((_DWORD *)v62 + 522);
              if ( (v195 & 0x100) != 0 && (v195 & 0x400) == 0 )
              {
                v68 = -1073741790;
                goto LABEL_193;
              }
            }
            v187 = 0;
            if ( v96 )
            {
              v187 = 2048;
            }
            else
            {
              v190 = 0;
              if ( v191 )
                v190 = 2048;
            }
            if ( v192 )
              v190 |= 0x200u;
            else
              v187 |= 0x200u;
            if ( v194 )
              v190 |= 0x400u;
            else
              v187 |= 0x400u;
            v189 = v190;
            goto LABEL_731;
          }
        }
LABEL_192:
        v62 = (unsigned __int8 *)Object;
        goto LABEL_193;
      case 52:
        if ( ProcessHandle != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v258 = *(_OWORD *)ProcessInformation;
        if ( BYTE8(v258) )
          return RtlRemoveDynamicFunctionTable(v258);
        else
          return RtlInsertDynamicFunctionTable(v258);
      case 53:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v254 = *(_DWORD *)ProcessInformation;
        v89 = v254;
        if ( (v254 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        v71 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v70 = (struct _EX_RUNDOWN_REF *)Object;
        v90 = ObReferenceProcessHandleTable(Object);
        if ( v90 )
        {
          if ( (v89 & 1) != 0 )
            LOBYTE(v91) = 1;
          else
            v91 = 0LL;
          ExEnableHandleExceptions(v90, v91);
          ExReleaseRundownProtection_0(v70 + 95);
        }
        else
        {
          v71 = -1073741558;
        }
        goto LABEL_755;
      case 55:
        v196 = 0LL;
        v242 = 0LL;
        if ( v9 != 1 )
          goto LABEL_750;
        if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
          v5 = 0x7FFFFFFF0000LL;
        v197 = *(_DWORD *)v5;
        v240 = v197;
        v198 = *(void **)(v5 + 8);
        Src = v198;
        if ( !(_WORD)v197 )
          return -1073741811;
        if ( ((unsigned __int8)v198 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v199 = (unsigned __int64)v198 + (unsigned __int16)v197;
        if ( v199 > 0x7FFFFFFF0000LL || v199 < (unsigned __int64)v198 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v200 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v240, 0x6E497350u);
        v196 = v200;
        v242 = v200;
        if ( !v200 )
          return -1073741670;
        memmove(v200, Src, (unsigned __int16)v240);
        Src = v196;
        v5 = (__int64)&v240;
        v272 = &v240;
LABEL_750:
        v94 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                0x2000,
                (__int64)PsProcessType,
                v9,
                2035381072,
                &Object,
                0LL,
                0LL);
        if ( v94 < 0 )
        {
          if ( v196 )
            ExFreePoolWithTag(v196, 0);
          return v94;
        }
        v70 = (struct _EX_RUNDOWN_REF *)Object;
        v71 = IoRevokeHandlesForProcess(v5, (struct _KPROCESS *)Object);
        if ( v196 )
          ExFreePoolWithTag(v196, 0);
LABEL_755:
        ObfDereferenceObjectWithTag(v70, 0x79517350u);
        return v71;
      case 56:
        return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
      case 58:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v230 = *(_DWORD *)v5 != 0;
        v79 = (char *)Object;
        if ( KeGetCurrentThread()->ApcState.Process == Object )
        {
          v78 = -1073741790;
        }
        else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        {
          v78 = 0;
          KeSetCheckStackExtentsProcess(v79, v230);
          if ( !v201 && (*((_DWORD *)v79 + 192) & 0x20000) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v79 + 192, 0xFFFDFFFF);
            v79 = (char *)Object;
          }
        }
        else
        {
          v78 = -1073741727;
        }
        goto LABEL_213;
      case 61:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v278 = *(_OWORD *)ProcessInformation;
        if ( (_WORD)v278 != 1 || DWORD1(v278) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( *((_QWORD *)&v278 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
        goto LABEL_35;
      case 62:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v257[0] = *(_QWORD *)v5;
        v60 = PsSetProcessFaultInformation(Object, v257);
        goto LABEL_137;
      case 64:
        if ( ProcessInformationLength != 32 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   8193,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v264 = *(__m256i *)v5;
        if ( v264.m256i_i32[0] != 3 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741735;
        }
        if ( (v264.m256i_i32[1] & 0xFFFFFFF8) != 0
          || *(_OWORD *)&v264.m256i_u64[1] != 0LL
          || ((((unsigned __int32)v264.m256i_i32[1] >> 1) & 1) != 0 || (v264.m256i_i8[4] & 4) != 0)
          && (v264.m256i_i8[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        if ( (((unsigned __int32)v264.m256i_i32[1] >> 1) & 1) != 0 || (v264.m256i_i8[4] & 4) != 0 )
        {
          v134 = (volatile signed __int64 *)Object;
          v155 = MmReleaseCommitForMemResetPages((_KPROCESS *)Object, ((unsigned __int32)v264.m256i_i32[1] >> 2) & 1);
        }
        else
        {
          v134 = (volatile signed __int64 *)Object;
          v155 = MmSetCommitReleaseEligibility((__int64)Object, v264.m256i_i8[4] & 1);
        }
LABEL_495:
        v94 = v155;
LABEL_804:
        v14 = (PVOID)v134;
LABEL_231:
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        return v94;
      case 65:
      case 66:
        if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
          return -1073741820;
        memmove(v282, ProcessInformation, ProcessInformationLength);
        v125 = (unsigned int)v4 >> 3;
        if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
        {
          result = ExCpuSetResourceManagerAccessCheck(v9);
          if ( result < 0 )
            return result;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0x2000,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v60 = KeSetCpuSetsProcess((__int64)Object, v125, v282);
        goto LABEL_137;
      case 67:
        if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Blink) & 1) == 0 )
          return -1073741727;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v243, 0LL);
        v47 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)v243 + 435, 0x40u);
        ObfDereferenceObject(v243);
        return v47;
      case 69:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 192, 0x80000000);
        goto LABEL_35;
      case 70:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v48 = *(_DWORD *)ProcessInformation;
        v255 = *(_DWORD *)ProcessInformation;
        v49 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v50 = (struct _EX_RUNDOWN_REF *)Object;
          v51 = ObReferenceProcessHandleTable(Object);
          if ( v51 )
          {
            ExEnableRaiseUMExceptionOnInvalidHandleClose(v51, v48);
            ExReleaseRundownProtection_0(v50 + 95);
          }
          else
          {
            v49 = -1073741558;
          }
          ObfDereferenceObjectWithTag(v50, 0x79517350u);
          return v49;
        }
        return result;
      case 71:
        return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
      case 73:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v203 = *(_BYTE *)ProcessInformation;
        v219 = *(_BYTE *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0x2000,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v203 )
          _InterlockedOr((volatile signed __int32 *)Object + 435, 0x200u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFFFFDFF);
        goto LABEL_35;
      case 76:
        if ( ProcessInformationLength != 12 )
          return -1073741820;
        v276 = *(HANDLE *)ProcessInformation;
        v114 = *((_DWORD *)ProcessInformation + 2);
        v277 = v114;
        if ( (_DWORD)v276 != 1 || (HIDWORD(v276) & 0xFFFFFFFC) != 0 || (~HIDWORD(v276) & v114) != 0 )
          return -1073741811;
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        if ( !ExtensionTable )
          return -1073741822;
        v94 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                0x2000,
                (__int64)PsProcessType,
                v9,
                2035381072,
                &Object,
                0LL,
                0LL);
        if ( v94 >= 0 )
        {
          v94 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v276);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v94;
      case 79:
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v202 = *(_BYTE *)v5;
        v218 = *(_BYTE *)v5;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0x2000,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v202 )
          _InterlockedOr((volatile signed __int32 *)Object + 192, 0x8000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xF7FFFFFF);
        KeRecomputeCpuSetAffinityProcess((__int64)Object);
        goto LABEL_35;
      case 81:
        if ( ProcessInformationLength < 8 )
          return -1073741820;
        memset(v281, 0, sizeof(v281));
        if ( (unsigned int)v4 >= 0x90 )
          LODWORD(v4) = 144;
        memmove(v281, (const void *)v5, (unsigned int)v4);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   512,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v93 = Object;
        v94 = PoSetProcessEnergyTrackingState(Object, v281);
        v14 = v93;
        if ( v94 < 0 )
          goto LABEL_231;
        goto LABEL_36;
      case 82:
        return -1073741637;
      case 84:
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        memset(pszDest, 0, 0x41uLL);
        v124 = *(_OWORD *)v5;
        v262 = v124;
        v263 = *(_QWORD *)(v5 + 16);
        if ( (unsigned __int64)(v124 + 65) > 0x7FFFFFFF0000LL || (__int64)v124 + 65 < (unsigned __int64)v124 )
          MEMORY[0x7FFFFFFF0000] = 0;
        RtlStringCbCopyA(pszDest, 0x41uLL, (NTSTRSAFE_PCSTR)v124);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   544,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        *(_QWORD *)&v262 = pszDest;
        pszDest[64] = 0;
        v94 = EtwSetProcessTelemetryCoverage(Object, &v262);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)(v5 + 12) = HIDWORD(v262);
        *(_DWORD *)(v5 + 16) = v263;
        return v94;
      case 86:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0x2000,
                   (__int64)PsProcessType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v212 = *(_BYTE *)v5;
        v204 = (volatile signed __int32 *)((char *)Object + 768);
        _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFCFFFFFF);
        _InterlockedOr(v204, ((v212 & 1) << 24) | (((v212 >> 1) & 1) << 25));
        goto LABEL_35;
      default:
        return -1073741821;
    }
  }
  if ( ProcessInformationLength != 4 )
    return -1073741820;
  v12 = *(_DWORD *)ProcessInformation;
  v256 = *(_DWORD *)ProcessInformation;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             512,
             (__int64)PsProcessType,
             v9,
             2035381072,
             &Object,
             0LL,
             0LL);
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
