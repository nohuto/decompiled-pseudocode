/*
 * XREFs of NtSetInformationProcess @ 0x1404E4550
 * Callers:
 *     <none>
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140004224 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeVerifyGroupAffinity @ 0x140004C4C (KeVerifyGroupAffinity.c)
 *     MmGetDefaultPagePriority @ 0x140005EA0 (MmGetDefaultPagePriority.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     PsSetIoPriorityThread @ 0x14004387C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiCreateSystemWsles @ 0x14006A794 (MiCreateSystemWsles.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x14006B70C (MmSetMemoryPriorityProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14006CFCC (KeQueryGroupMaskProcess.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     RtlInterlockedSetClearBits @ 0x14008ABB8 (RtlInterlockedSetClearBits.c)
 *     RtlStringCbCopyA @ 0x14008BC44 (RtlStringCbCopyA.c)
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AF690 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1400B22EC (RtlRemoveDynamicFunctionTable.c)
 *     PspLockUnlockProcessExclusive @ 0x1400C5D40 (PspLockUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1400CDB2C (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x1400D0BF4 (KeInitializeGate.c)
 *     MmRemoveExecuteGrants @ 0x1400D10BC (MmRemoveExecuteGrants.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1401873E0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmGetMaximumUserAddress @ 0x140251BD0 (MmGetMaximumUserAddress.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140251DD0 (MmSetCommitReleaseEligibility.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     LpcRequestPort @ 0x1404B9C80 (LpcRequestPort.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404E8250 (PspSetProcessDefaultHardErrorMode.c)
 *     MmAllocateUserStack @ 0x1404E830C (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x1404E89D4 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x1404EFF70 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1404EFFA0 (PspSetProcessForegroundBackgroundRequest.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     PspWritePebAffinityInfo @ 0x1404F8C88 (PspWritePebAffinityInfo.c)
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140572D74 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PoSetProcessEnergyTrackingState @ 0x14057B25C (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x14057B6C4 (ExEnableHandleExceptions.c)
 *     PspSetProcessPriorityClass @ 0x14057EB98 (PspSetProcessPriorityClass.c)
 *     SeSetVirtualizationToken @ 0x140581960 (SeSetVirtualizationToken.c)
 *     KeSetDisableBoostThread @ 0x1405835DC (KeSetDisableBoostThread.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     PsSetProcessFaultInformation @ 0x1405C3C50 (PsSetProcessFaultInformation.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1405F33FC (PspSetProcessAffinityUpdateMode.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1406408AC (PspAssignPrimaryToken.c)
 *     KeSetCheckStackExtentsProcess @ 0x140741844 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1407546D0 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x14075B740 (ObSetProcessDeviceMap.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14077A2D4 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14077A340 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077A4B8 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x14077ACB8 (PspSetProcessAffinitySafe.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077E5E4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078C274 (SeCodeIntegritySetInformationProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rbx
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v9; // r15
  int v10; // eax
  __int32 v11; // eax
  unsigned __int64 v12; // rdx
  NTSTATUS result; // eax
  volatile signed __int64 *v14; // rdi
  NTSTATUS v15; // ebx
  _QWORD *PoolWithTag; // rax
  void *v17; // r8
  PVOID v18; // rcx
  int v19; // ebx
  char v20; // r12
  PVOID v21; // rsi
  __int16 v22; // bx
  unsigned int v23; // r14d
  HANDLE v24; // r8
  PVOID v25; // rdi
  NTSTATUS v26; // esi
  char v27; // bl
  unsigned int v28; // r14d
  unsigned int v29; // r12d
  NTSTATUS v30; // edi
  struct _EX_RUNDOWN_REF *v31; // rsi
  __int64 i; // rbx
  NTSTATUS v33; // edi
  unsigned int v34; // ebx
  unsigned int v35; // r12d
  NTSTATUS v36; // edi
  unsigned __int64 v37; // rdx
  signed __int64 *v38; // roff
  signed __int64 v39; // r15
  bool v40; // zf
  signed __int64 v41; // rax
  void *v42; // r15
  int v43; // eax
  unsigned __int8 v44; // r12
  __int64 v45; // rsi
  PVOID v46; // rbx
  __int64 v47; // rax
  __int16 v48; // cx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ebx
  struct _EX_RUNDOWN_REF *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  NTSTATUS v57; // edi
  volatile signed __int32 *v58; // rbx
  PVOID v59; // r15
  bool v60; // r12
  NTSTATUS v61; // edi
  char *v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // r9
  char *v66; // r8
  void **v67; // r8
  HANDLE v68; // rbx
  NTSTATUS v69; // eax
  NTSTATUS v70; // ebx
  int v71; // ebx
  NTSTATUS v72; // r14d
  int v73; // ebx
  int v74; // ecx
  unsigned __int8 *v75; // rbx
  unsigned int v76; // eax
  unsigned __int64 v77; // r12
  struct _EX_RUNDOWN_REF *v78; // r15
  __int64 v79; // rsi
  volatile signed __int64 *v80; // r14
  __int64 v81; // r9
  unsigned __int32 v82; // eax
  __int64 v83; // r8
  __int64 v84; // rdx
  KSPIN_LOCK *v85; // r13
  KSPIN_LOCK *v86; // rbx
  signed int v87; // r15d
  struct _EX_RUNDOWN_REF *v88; // rcx
  unsigned int DefaultPagePriority; // eax
  unsigned int v90; // ecx
  unsigned int SystemWsles; // eax
  unsigned int v92; // ecx
  struct _EX_RUNDOWN_REF *v93; // r13
  __int64 v94; // rsi
  volatile signed __int64 *v95; // r12
  __int64 v96; // r9
  unsigned __int32 v97; // eax
  __int64 v98; // r8
  __int64 v99; // rdx
  char *v100; // r15
  char *v101; // r14
  int v102; // ebx
  struct _KTHREAD *PoolWithQuotaTag; // r15
  LONG LockNV; // r9d
  __int64 Flink_low; // r8
  unsigned int v106; // edx
  _KPROCESS *Process; // rax
  unsigned __int64 v108; // rax
  __int16 v109; // cx
  __int64 v110; // rcx
  HANDLE j; // rdx
  _QWORD *v112; // rbx
  __int64 v113; // rdx
  char *v114; // rax
  char *v115; // r13
  __int64 Flink_high; // rdx
  __int64 v117; // r8
  volatile void **v118; // rsi
  __int64 v119; // r8
  int *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // r9
  int v127; // r8d
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  NTSTATUS v133; // r14d
  HANDLE v134; // rcx
  _KPROCESS *v135; // rsi
  BOOLEAN v136; // al
  __int64 v137; // rax
  __int16 v138; // cx
  bool v139; // cl
  unsigned __int64 v140; // rax
  __int16 v141; // cx
  __int64 v142; // r15
  __int64 v143; // rsi
  volatile signed __int64 *v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  volatile signed __int32 **v148; // rbx
  volatile signed __int32 *v149; // rax
  __int16 v150; // cx
  __int64 v151; // rcx
  __int64 *v152; // rax
  __int16 v153; // dx
  char *v154; // rdi
  __int64 v155; // r9
  char v156; // bl
  unsigned int v157; // esi
  PACCESS_TOKEN v158; // rbx
  int v159; // edx
  int v160; // ecx
  unsigned __int64 v161; // rax
  unsigned int v162; // ecx
  int v163; // edx
  int v164; // ecx
  unsigned int v165; // ecx
  int v166; // esi
  char v167; // r13
  _DWORD *v168; // rdi
  bool IsSandboxedToken; // r12
  int v170; // ecx
  int v171; // r8d
  int v172; // esi
  int v173; // edx
  int v174; // eax
  int v175; // edx
  int v176; // edx
  int v177; // r11d
  int v178; // r9d
  int v179; // eax
  int v180; // ecx
  int v181; // eax
  int v182; // eax
  unsigned int v183; // esi
  int v184; // r13d
  int v185; // r15d
  int v186; // r14d
  __int64 v187; // rcx
  int v188; // r8d
  int v189; // r9d
  int v190; // esi
  int v191; // edx
  unsigned int v192; // ecx
  int v193; // r11d
  int v194; // r8d
  int v195; // edx
  int v196; // r10d
  int v197; // r9d
  int v198; // ecx
  int v199; // eax
  int v200; // edx
  unsigned int v201; // edi
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v203; // r8
  int v204; // edx
  int v205; // eax
  int v206; // edi
  int v207; // ecx
  char v208; // bl
  NTSTATUS v209; // r14d
  struct _EX_RUNDOWN_REF *v210; // rsi
  unsigned __int64 v211; // rax
  void *v212; // rbx
  int v213; // eax
  void *v214; // rcx
  unsigned __int64 v215; // rdx
  PVOID v216; // rax
  int v217; // edx
  PVOID v218; // rbx
  NTSTATUS v219; // edi
  PVOID v220; // rbx
  NTSTATUS v221; // edi
  unsigned int v222; // ebx
  char v223; // bl
  NTSTATUS v224; // ebx
  unsigned int v225; // esi
  unsigned __int64 v226; // rax
  char v227; // bl
  int v228; // ecx
  unsigned __int64 ExtensionTable; // rbx
  NTSTATUS v230; // edi
  unsigned int v231; // r14d
  __int128 v232; // xmm2
  volatile signed __int32 *v233; // roff
  char v234; // bl
  __int64 v235; // r8
  signed __int32 v236[8]; // [rsp+0h] [rbp-4C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-488h] BYREF
  unsigned int v238; // [rsp+48h] [rbp-480h]
  int v239; // [rsp+4Ch] [rbp-47Ch]
  struct _KTHREAD *v240; // [rsp+50h] [rbp-478h]
  HANDLE v241; // [rsp+58h] [rbp-470h]
  char v242; // [rsp+60h] [rbp-468h]
  unsigned __int8 v243; // [rsp+63h] [rbp-465h]
  PROCESSINFOCLASS v244; // [rsp+68h] [rbp-460h]
  HANDLE Handle; // [rsp+70h] [rbp-458h]
  ULONG Alignment; // [rsp+78h] [rbp-450h]
  char v247; // [rsp+80h] [rbp-448h]
  char v248; // [rsp+81h] [rbp-447h]
  char v249; // [rsp+82h] [rbp-446h]
  __int16 v250; // [rsp+84h] [rbp-444h]
  signed int v251; // [rsp+88h] [rbp-440h]
  __int64 v252; // [rsp+90h] [rbp-438h]
  __int64 v253; // [rsp+98h] [rbp-430h]
  _DWORD *v254; // [rsp+A0h] [rbp-428h]
  int v255; // [rsp+A8h] [rbp-420h]
  char *v256; // [rsp+B0h] [rbp-418h]
  __int128 v257; // [rsp+B8h] [rbp-410h]
  __int64 v258; // [rsp+C8h] [rbp-400h]
  __int128 v259; // [rsp+D0h] [rbp-3F8h] BYREF
  unsigned int v260; // [rsp+E0h] [rbp-3E8h]
  int v261; // [rsp+E4h] [rbp-3E4h]
  int v262; // [rsp+E8h] [rbp-3E0h] BYREF
  int v263; // [rsp+ECh] [rbp-3DCh]
  int v264; // [rsp+F0h] [rbp-3D8h]
  int v265; // [rsp+F4h] [rbp-3D4h] BYREF
  BOOL v266; // [rsp+F8h] [rbp-3D0h]
  __int64 v267; // [rsp+100h] [rbp-3C8h]
  PVOID v268; // [rsp+108h] [rbp-3C0h] BYREF
  int v269; // [rsp+110h] [rbp-3B8h] BYREF
  int v270; // [rsp+114h] [rbp-3B4h]
  int v271; // [rsp+118h] [rbp-3B0h] BYREF
  void *Src; // [rsp+120h] [rbp-3A8h]
  PVOID v273; // [rsp+128h] [rbp-3A0h] BYREF
  PVOID v274; // [rsp+130h] [rbp-398h]
  PVOID v275; // [rsp+138h] [rbp-390h]
  int v276; // [rsp+140h] [rbp-388h]
  int v277; // [rsp+144h] [rbp-384h]
  int v278; // [rsp+148h] [rbp-380h]
  int v279; // [rsp+14Ch] [rbp-37Ch]
  int v280; // [rsp+150h] [rbp-378h]
  int v281; // [rsp+154h] [rbp-374h]
  int v282; // [rsp+158h] [rbp-370h]
  int v283; // [rsp+15Ch] [rbp-36Ch]
  int v284; // [rsp+160h] [rbp-368h]
  int v285; // [rsp+164h] [rbp-364h]
  HANDLE v286; // [rsp+168h] [rbp-360h]
  LONG *p_LockNV; // [rsp+170h] [rbp-358h]
  int v288; // [rsp+178h] [rbp-350h]
  __int64 v289; // [rsp+180h] [rbp-348h] BYREF
  __int64 v290; // [rsp+188h] [rbp-340h] BYREF
  __int128 v291; // [rsp+190h] [rbp-338h] BYREF
  __int64 v292; // [rsp+1A0h] [rbp-328h]
  int v293; // [rsp+1A8h] [rbp-320h]
  int v294; // [rsp+1ACh] [rbp-31Ch]
  int v295; // [rsp+1B0h] [rbp-318h]
  __int128 v296; // [rsp+1B8h] [rbp-310h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1C8h] [rbp-300h] BYREF
  __m256i v298; // [rsp+1E8h] [rbp-2E0h]
  __int128 v299; // [rsp+208h] [rbp-2C0h] BYREF
  __int128 v300; // [rsp+218h] [rbp-2B0h] BYREF
  __int64 v301; // [rsp+228h] [rbp-2A0h]
  int *v302; // [rsp+230h] [rbp-298h]
  unsigned __int64 v303; // [rsp+238h] [rbp-290h]
  HANDLE v304; // [rsp+240h] [rbp-288h]
  HANDLE v305; // [rsp+248h] [rbp-280h]
  unsigned __int64 v306; // [rsp+250h] [rbp-278h]
  _DWORD v307[10]; // [rsp+258h] [rbp-270h] BYREF
  __int64 v308; // [rsp+280h] [rbp-248h]
  HANDLE v309; // [rsp+288h] [rbp-240h] BYREF
  int v310; // [rsp+290h] [rbp-238h]
  __int128 v311; // [rsp+298h] [rbp-230h]
  _BYTE v312[48]; // [rsp+2A8h] [rbp-220h] BYREF
  _BYTE P[40]; // [rsp+2D8h] [rbp-1F0h] BYREF
  _BYTE v314[144]; // [rsp+300h] [rbp-1C8h] BYREF
  char v315[160]; // [rsp+390h] [rbp-138h] BYREF
  char pszDest[8]; // [rsp+430h] [rbp-98h] BYREF
  __int64 v317; // [rsp+438h] [rbp-90h]
  __int64 v318; // [rsp+440h] [rbp-88h]
  __int64 v319; // [rsp+448h] [rbp-80h]
  __int64 v320; // [rsp+450h] [rbp-78h]
  __int64 v321; // [rsp+458h] [rbp-70h]
  __int64 v322; // [rsp+460h] [rbp-68h]
  __int64 v323; // [rsp+468h] [rbp-60h]
  char v324; // [rsp+470h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  v244 = ProcessInformationClass;
  v253 = (__int64)ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v240 = CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( !v9 )
    goto LABEL_45;
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_39;
    case ProcessEnableAlignmentFaultFixup:
      v10 = 1;
      goto LABEL_40;
    case ProcessForegroundInformation:
      v10 = 1;
      goto LABEL_40;
    case ProcessPriorityClass:
      v10 = 1;
      goto LABEL_40;
    case ProcessAffinityMask:
      v10 = 8;
      goto LABEL_40;
    case ProcessIoPriority:
    case ProcessPagePriority:
      goto LABEL_39;
    case ProcessTlsInformation:
      v10 = 8;
      goto LABEL_40;
    case ProcessExceptionPort:
      v10 = 8;
      goto LABEL_40;
    case ProcessInstrumentationCallback:
      v10 = 8;
      goto LABEL_40;
    case ProcessThreadStackAllocation:
      v10 = 8;
      goto LABEL_40;
    case ProcessAffinityUpdateMode:
    case ProcessMemoryAllocationMode:
      goto LABEL_39;
    case ProcessConsoleHostProcess:
      v10 = 8;
      goto LABEL_40;
    case ProcessDynamicFunctionTableInformation:
      v10 = 8;
      goto LABEL_40;
    case ProcessRevokeFileHandles:
      v10 = 8;
      goto LABEL_40;
    case ProcessMemoryExhaustion:
      v10 = 8;
      goto LABEL_40;
    case ProcessCommitReleaseInformation:
      v10 = 8;
      goto LABEL_40;
    case ProcessInPrivate:
      v10 = 1;
      goto LABEL_40;
    case ProcessHighGraphicsPriorityInformation:
      v10 = 1;
      goto LABEL_40;
  }
  if ( ProcessInformationClass == ProcessManageWritesToExecutableMemory
    || (v10 = 1, ProcessInformationClass != ProcessDebugAuthInformation) )
  {
LABEL_39:
    v10 = 4;
  }
LABEL_40:
  if ( ProcessInformationLength )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
      || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
LABEL_45:
  v11 = ProcessInformationClass - 1;
  v12 = 0x140000000uLL;
  switch ( v11 )
  {
    case 0:
      return PspSetQuotaLimits((ULONG_PTR)ProcessHandle);
    case 4:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v276 = *(_DWORD *)ProcessInformation;
      v19 = v276;
      if ( v276 < 0 )
        v19 = v276 & 0x7FFFFFFF;
      v20 = v276 < 0 ? 2 : 0;
      if ( (unsigned int)(v19 - 1) > 0x1E )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v21 = Object;
      if ( v19 > *((char *)Object + 444)
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        ObfDereferenceObjectWithTag(v21, 0x79517350u);
        return -1073741727;
      }
      KeSetPriorityAndQuantumProcess((__int64)v21, (unsigned int)v19, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)v21, v20);
      ObfDereferenceObjectWithTag(v21, 0x79517350u);
      return 0;
    case 5:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v29 = *(_DWORD *)ProcessInformation;
      v277 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v30 = result;
      if ( result < 0 )
        return result;
      v31 = (struct _EX_RUNDOWN_REF *)Object;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        v33 = -1073741558;
        ObfDereferenceObjectWithTag(v31, 0x79517350u);
        return v33;
      }
      for ( i = PsGetNextProcessThread(v31, 0LL); i; i = PsGetNextProcessThread(v31, i) )
        KeBoostPriorityThread(i, v29);
      ExReleaseRundownProtection(v31 + 95);
      ObfDereferenceObjectWithTag(v31, 0x79517350u);
      return v30;
    case 7:
      if ( ProcessInformationLength == 8 )
      {
        v35 = 0;
        v260 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v286 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v286 = Handle;
        v260 = *((_DWORD *)ProcessInformation + 2);
        v35 = v260;
        if ( (v260 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v268, 0LL);
      v274 = v268;
      if ( result >= 0 )
      {
        v36 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( v36 < 0 )
        {
          ObfDereferenceObject(v268);
          return v36;
        }
        v37 = (unsigned __int64)v268 | v35;
        v254 = (_DWORD *)v37;
        v38 = (signed __int64 *)((char *)Object + 848);
        _m_prefetchw((char *)Object + 848);
        v39 = *v38;
        while ( 1 )
        {
          Handle = (HANDLE)v39;
          if ( (_DWORD)v4 == 16 )
          {
            *(_DWORD *)(v5 + 8) = v39 & 7;
          }
          else if ( (v39 & 7) != 0 )
          {
            ObfDereferenceObject(v274);
LABEL_108:
            v33 = -1073741811;
            goto LABEL_117;
          }
          v41 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, v37, v39);
          v40 = v39 == v41;
          v39 = v41;
          if ( v40 )
          {
            if ( v41 )
            {
              v42 = (void *)(v41 & 0xFFFFFFFFFFFFFFF8uLL);
              v307[0] = 3145736;
              v307[1] = 13;
              v308 = *((_QWORD *)Object + 92);
              while ( 1 )
              {
                v43 = LpcRequestPort((__int64)v42, (__int64)v307);
                if ( v43 != -1073741801 && v43 != -1073741670 )
                  break;
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
              }
              PspLockUnlockProcessExclusive((__int64)Object, (__int64)v240);
              ObfDereferenceObject(v42);
            }
            v33 = 0;
            goto LABEL_117;
          }
        }
      }
      return result;
    case 8:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v304 = *(HANDLE *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
    case 9:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
        goto LABEL_125;
      return result;
    case 10:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
        goto LABEL_125;
      return result;
    case 11:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v34 = *(_DWORD *)ProcessInformation;
      v278 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessDefaultHardErrorMode(Object, v240, v34);
      goto LABEL_63;
    case 12:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
LABEL_125:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return xKdEnumerateDebuggingDevices();
      }
      return result;
    case 14:
    case 41:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v14 = (volatile signed __int64 *)Object;
      v15 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v15 < 0 )
        goto LABEL_54;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64(v14 + 122, (signed __int64)v17, 0LL) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 0;
        }
        ExFreePoolWithTag(v17, 0);
        v15 = -1073741752;
        v14 = (volatile signed __int64 *)Object;
      }
      else
      {
        v15 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)v14, 24616LL);
LABEL_54:
      ObfDereferenceObjectWithTag((PVOID)v14, 0x79517350u);
      return v15;
    case 15:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case 16:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v44 = *(_BYTE *)ProcessInformation;
      v242 = *(_BYTE *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v45 = (__int64)v240;
      --v240->KernelApcDisable;
      v46 = Object;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 728, 0LL);
      if ( v44 )
        *((_DWORD *)v46 + 296) |= 4u;
      else
        *((_DWORD *)v46 + 296) &= ~4u;
      v47 = *((_QWORD *)v46 + 133);
      if ( v47 )
      {
        v48 = *(_WORD *)(v47 + 8);
        if ( v48 == 332 || v48 == 452 )
        {
          v44 = 1;
          v242 = 1;
        }
      }
      KeSetAutoAlignmentProcess(v46, v44);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v46 + 91, v49, v50, v51);
      KeAbPostRelease((ULONG_PTR)v46 + 728);
      KeLeaveCriticalRegionThread(v45);
      goto LABEL_63;
    case 17:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v22 = *(_WORD *)ProcessInformation;
      v250 = *(_WORD *)ProcessInformation;
      v23 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v24 = ProcessHandle;
      v25 = Object;
      v26 = PspSetProcessPriorityClass(Object, HIBYTE(v250), v24, v9);
      if ( v26 >= 0 )
      {
        LOBYTE(v23) = (_BYTE)v22 != 0;
        PsSetProcessPriorityByClass(v25, v23);
      }
      goto LABEL_79;
    case 18:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v52 = *(_DWORD *)ProcessInformation;
      v279 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v33 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v33 < 0 )
        return v33;
      if ( *((_QWORD *)Object + 226) )
      {
LABEL_146:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      else
      {
        if ( v52 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
LABEL_117:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v33;
      }
    case 20:
      if ( ProcessInformationLength == 8 )
      {
        v259 = 0uLL;
        *(_QWORD *)&v259 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v259 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v259 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v259, 0) )
          return -1073741811;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v53 = (struct _EX_RUNDOWN_REF *)Object;
      LODWORD(v54) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v54 - 1) & (unsigned int)v54) != 0 )
        goto LABEL_157;
      if ( (_DWORD)v4 == 8 )
      {
        _BitScanForward((unsigned int *)&v54, v54);
        v261 = v54;
        v55 = v259 & qword_14044C5D8[v54];
        v53 = (struct _EX_RUNDOWN_REF *)Object;
        if ( v55 != (_QWORD)v259 )
        {
LABEL_157:
          ObfDereferenceObjectWithTag(v53, 0x79517350u);
          return -1073741811;
        }
        WORD4(v259) = v261;
        *(_QWORD *)&v259 = v55;
      }
      v56 = (__int64)v240;
      --v240->KernelApcDisable;
      if ( ExAcquireRundownProtection(v53 + 95) )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)&v53[91], 0LL);
        v57 = PspSetProcessAffinitySafe((_DWORD)v53, 0, 0, (unsigned int)&v259, (__int64)&v262);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v53[91], 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v53[91]);
        KeAbPostRelease((ULONG_PTR)&v53[91]);
        ExReleaseRundownProtection(v53 + 95);
        if ( v57 >= 0 )
        {
          v58 = (volatile signed __int32 *)Object;
          if ( v262 )
            PspWritePebAffinityInfo(v56, Object);
          _InterlockedOr(v58 + 192, 0x200000u);
        }
        v59 = Object;
        KeLeaveCriticalRegionThread(v56);
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return v57;
      }
      else
      {
        KeLeaveCriticalRegionThread(v56);
        ObfDereferenceObjectWithTag(v53, 0x79517350u);
        return -1073741558;
      }
    case 21:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v280 = *(_DWORD *)ProcessInformation;
      v60 = v280 != 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v61 = result;
      if ( result < 0 )
        return result;
      v62 = (char *)Object;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_336;
      v63 = (__int64)v240;
      --v240->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v62 + 728), 0LL);
      if ( v60 )
        _interlockedbittestandset((volatile signed __int32 *)v62 + 110, 1u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)v62 + 110, 1u);
      v65 = (char *)Object + 1160;
      v66 = (char *)*((_QWORD *)Object + 145);
      if ( v66 != (char *)Object + 1160 )
      {
        v64 = v60;
        do
        {
          KeSetDisableBoostThread(v66 - 1704, v64);
          v66 = (char *)*v67;
        }
        while ( v66 != v65 );
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v62 + 91, v64, (__int64)v66, (__int64)v65);
      KeAbPostRelease((ULONG_PTR)(v62 + 728));
      KeLeaveCriticalRegionThread(v63);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v62 + 95);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v61;
    case 22:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v68 = *(HANDLE *)ProcessInformation;
      v305 = *(HANDLE *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v69 = ObSetProcessDeviceMap(Object, v68, v9);
LABEL_193:
        v70 = v69;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v70;
      }
      return result;
    case 23:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v71 = *(_DWORD *)ProcessInformation;
      v281 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v72 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        if ( v71 != (unsigned int)MmGetSessionId((__int64)Object) )
          v72 = -1073741790;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v72;
      }
      return result;
    case 24:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v27 = *(_BYTE *)ProcessInformation;
      v247 = *(_BYTE *)ProcessInformation;
      v28 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v28) = v27 != 0;
      PsSetProcessPriorityByClass(Object, v28);
      goto LABEL_63;
    case 28:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v73 = *(_DWORD *)ProcessInformation;
      v282 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v73 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_63;
    case 30:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v33 = result;
      if ( result < 0 )
        return result;
      v263 = *(_DWORD *)v5;
      if ( (v263 & 0xFFFFFFFE) != 0 )
        goto LABEL_108;
      if ( (v263 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      goto LABEL_117;
    case 31:
      if ( !ProcessInformationLength )
        goto LABEL_213;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v74 = *(_DWORD *)ProcessInformation;
      v269 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v270 = *((_DWORD *)ProcessInformation + 1);
      else
        v270 = 0;
      if ( v74 )
        return -1073741811;
LABEL_213:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v40 = (_DWORD)v4 == 0;
      v75 = (unsigned __int8 *)Object;
      if ( v40 )
        v33 = PsSetProcessHandleTracingInformation(Object, 0LL);
      else
        v33 = PsSetProcessHandleTracingInformation(Object, &v269);
      goto LABEL_666;
    case 32:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v76 = *(_DWORD *)ProcessInformation;
        v251 = *(_DWORD *)ProcessInformation;
        LOBYTE(v77) = 0;
      }
      else
      {
        v303 = *(_QWORD *)ProcessInformation;
        v76 = v303;
        v77 = HIDWORD(v303);
        v251 = v303;
      }
      if ( v76 >= 4 )
        return -1073741811;
      if ( v76 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        return -1073741727;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v33 = result;
      if ( result < 0 )
        return result;
      v62 = (char *)Object;
      v78 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
      v253 = (__int64)Object + 760;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_336;
      v79 = (__int64)v240;
      --v240->KernelApcDisable;
      v80 = (volatile signed __int64 *)(v62 + 728);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v62 + 728), 0LL);
      v82 = *((_DWORD *)v62 + 193);
      v83 = (unsigned int)(v251 << 27);
      do
      {
        v84 = v82;
        v82 = _InterlockedCompareExchange((volatile signed __int32 *)v62 + 193, v83 | v82 & 0xC7FFFFFF, v82);
      }
      while ( v82 != (_DWORD)v84 );
      v85 = (KSPIN_LOCK *)((char *)Object + 1160);
      v86 = (KSPIN_LOCK *)*((_QWORD *)Object + 145);
      if ( v86 != (KSPIN_LOCK *)((char *)Object + 1160) )
      {
        v87 = v251;
        do
        {
          if ( (_BYTE)v77 == 1 && ((*((_DWORD *)v86 + 10) >> 9) & 7) < v87 )
            IoBoostThreadIoPriority(v86 - 213, v87, 0);
          PsSetIoPriorityThread((__int64)(v86 - 213), v87);
          v86 = (KSPIN_LOCK *)*v86;
        }
        while ( v86 != v85 );
        v78 = (struct _EX_RUNDOWN_REF *)v253;
      }
      if ( (_InterlockedExchangeAdd64(v80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v80, v84, v83, v81);
      KeAbPostRelease((ULONG_PTR)v80);
      KeLeaveCriticalRegionThread(v79);
      v88 = v78;
LABEL_239:
      ExReleaseRundownProtection(v88);
      goto LABEL_240;
    case 33:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v264 = *(_DWORD *)ProcessInformation;
      v33 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v264);
      if ( v33 < 0 || (v264 & 3) != 1 )
        return v33;
      MmRemoveExecuteGrants();
      return v33;
    case 34:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (struct _KTHREAD *)P;
        v240 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = (struct _KTHREAD *)ExAllocatePoolWithQuotaTag(
                                                (POOL_TYPE)9,
                                                ProcessInformationLength,
                                                0x736C5450u);
        v240 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      p_LockNV = &PoolWithQuotaTag->Header.LockNV;
      v254 = &PoolWithQuotaTag->Header.LockNV;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag->Header.SignalState < 2u
        && (LockNV = PoolWithQuotaTag->Header.LockNV, (PoolWithQuotaTag->Header.LockNV & 0xFFFFFFFE) == 0)
        && (Flink_low = LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink), (_DWORD)Flink_low)
        && (unsigned int)(v4 - 16) / 0x18uLL == Flink_low )
      {
        v106 = 0;
        v238 = 0;
        do
        {
          if ( *((_DWORD *)&PoolWithQuotaTag->Header.WaitListHead.Blink + 6 * v106) )
            goto LABEL_288;
          v238 = ++v106;
        }
        while ( v106 < (unsigned int)Flink_low );
        Process = KeGetCurrentThread()->ApcState.Process;
        Object = Process;
        v244 = ProcessBasicInformation;
        if ( (LockNV & 1) != 0 )
        {
          v108 = Process[1].ActiveProcessors.Bitmap[7];
          if ( !v108 || (v109 = *(_WORD *)(v108 + 8), v109 != 332) && v109 != 452 )
          {
LABEL_288:
            v33 = -1073741811;
            goto LABEL_321;
          }
          v244 = ProcessQuotaLimits;
        }
        v110 = v244 ^ 1u;
        Alignment = 4 * v110 + 4;
        v253 = 4 * v110 + 4;
        v252 = v5;
        v238 = 0;
        v33 = 0;
        v239 = 0;
        for ( j = 0LL; ; j = Handle )
        {
          Handle = (HANDLE)PsGetNextProcessThread(Object, j);
          v112 = Handle;
          if ( !Handle || v238 >= LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink) )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)Handle + 215) )
          {
            v113 = v112[30];
            v267 = v113;
            if ( v244 )
            {
              v114 = (char *)(v113 + 8236);
              v258 = v113 + 8236;
              v115 = (char *)*(unsigned int *)(v113 + 8236);
            }
            else
            {
              v114 = (char *)(v113 + 88);
              v258 = v113 + 88;
              v115 = *(char **)(v113 + 88);
            }
            v256 = v115;
            if ( v115 )
            {
              if ( PoolWithQuotaTag->Header.SignalState == 1 )
              {
                if ( v115 == v114 )
                {
                  v256 = 0LL;
                }
                else
                {
                  Flink_high = HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink);
                  v117 = v253 * Flink_high;
                  if ( v253 * Flink_high )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v115) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v115[v117] > 0x7FFFFFFF0000LL || &v115[v117] < v115 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      Flink_high = (unsigned int)p_LockNV[3];
                    }
                  }
                  v118 = (volatile void **)(&PoolWithQuotaTag->SListFaultAddress + 3 * v238);
                  ProbeForWrite(*v118, v253 * Flink_high, Alignment);
                  memmove((void *)*v118, v115, v253 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink));
                  _InterlockedOr(v236, 0);
                  v113 = v267;
                }
                v119 = v238;
                *(_DWORD *)(v252 + 24LL * v238 + 16) |= 1u;
                v120 = &v254[6 * v119 + 6];
                if ( v244 )
                {
                  v288 = *v120;
                  *(_DWORD *)(v113 + 8236) = v288;
                }
                else
                {
                  *(_QWORD *)(v113 + 88) = *(_QWORD *)v120;
                }
                v121 = v252 + 24LL * v238;
                *(_QWORD *)(v121 + 32) = *((_QWORD *)Handle + 200);
                *(_QWORD *)(v121 + 24) = v256;
                *(_DWORD *)(v121 + 16) ^= 3u;
                ++v238;
              }
              else
              {
                v122 = 24LL * v238;
                *(_DWORD *)(v252 + v122 + 16) |= 1u;
                v123 = (unsigned int)v254[3];
                if ( v244 )
                {
                  v124 = (unsigned __int64)&v115[4 * v123];
                  if ( v124 >= 0x7FFFFFFF0000LL )
                    v124 = 0x7FFFFFFF0000LL;
                  v125 = *(unsigned int *)v124;
                  v126 = (unsigned int)v125;
                  v258 = v125;
                  v127 = *(_DWORD *)((char *)&PoolWithQuotaTag->SListFaultAddress + v122);
                  v283 = v127;
                  v128 = (unsigned __int64)&v256[4 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v128 >= 0x7FFFFFFF0000LL )
                    v128 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v128 = v127;
                }
                else
                {
                  v129 = (unsigned __int64)&v115[8 * v123];
                  if ( v129 >= 0x7FFFFFFF0000LL )
                    v129 = 0x7FFFFFFF0000LL;
                  v126 = *(_QWORD *)v129;
                  v258 = *(_QWORD *)v129;
                  v130 = (unsigned __int64)&v256[8 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v130 >= 0x7FFFFFFF0000LL )
                    v130 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v130 = *(void **)((char *)&PoolWithQuotaTag->SListFaultAddress + v122);
                }
                v131 = 3LL * v238;
                v132 = v252;
                *(_QWORD *)(v252 + 8 * v131 + 24) = v126;
                *(_DWORD *)(v132 + 8 * v131 + 16) ^= 3u;
                ++v238;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Handle + 215);
          }
        }
        if ( Handle )
          ObfDereferenceObjectWithTag(Handle, 0x6E457350u);
      }
      else
      {
        v33 = -1073741820;
      }
LABEL_321:
      if ( PoolWithQuotaTag == (struct _KTHREAD *)P )
        return v33;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v33;
    case 38:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v255 = *(_DWORD *)ProcessInformation;
      DefaultPagePriority = MmGetDefaultPagePriority();
      if ( v90 > DefaultPagePriority )
        return -1073741811;
      SystemWsles = MiCreateSystemWsles();
      if ( v92 < SystemWsles )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v33 = result;
      if ( result < 0 )
        return result;
      v62 = (char *)Object;
      v93 = (struct _EX_RUNDOWN_REF *)((char *)Object + 760);
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        goto LABEL_336;
      v94 = (__int64)v240;
      --v240->KernelApcDisable;
      v95 = (volatile signed __int64 *)(v62 + 728);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v62 + 728), 0LL);
      v97 = *((_DWORD *)v62 + 192);
      v98 = (unsigned int)(v255 << 12);
      do
      {
        v99 = v97;
        v97 = _InterlockedCompareExchange((volatile signed __int32 *)v62 + 192, v98 | v97 & 0xFFFF8FFF, v97);
      }
      while ( v97 != (_DWORD)v99 );
      v100 = (char *)Object + 1160;
      v101 = (char *)*((_QWORD *)Object + 145);
      if ( v101 != (char *)Object + 1160 )
      {
        v102 = v255;
        do
        {
          PsSetPagePriorityThread((__int64)(v101 - 1704), v102);
          v101 = *(char **)v101;
        }
        while ( v101 != v100 );
      }
      if ( (_InterlockedExchangeAdd64(v95, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v95, v99, v98, v96);
      KeAbPostRelease((ULONG_PTR)v95);
      KeLeaveCriticalRegionThread(v94);
      v88 = v93;
      goto LABEL_239;
    case 39:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v133 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v257 = 0LL;
        v134 = *(HANDLE *)ProcessInformation;
        *((_QWORD *)&v257 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v257 = *(_OWORD *)ProcessInformation;
        v134 = (HANDLE)*((_QWORD *)&v257 + 1);
      }
      if ( DWORD1(v257) )
        return -1073741811;
      if ( (_DWORD)v257 != DWORD1(v257) )
        return -1073741736;
      if ( v134 != (HANDLE)((__int64)((_QWORD)v134 << 16) >> 16) )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v135 = KeGetCurrentThread()->ApcState.Process;
      v136 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v62 = (char *)Object;
      if ( !v136 && Object != v135 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
LABEL_336:
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
        return -1073741558;
      }
      v137 = *((_QWORD *)v62 + 133);
      v139 = 0;
      if ( v137 )
      {
        v138 = *(_WORD *)(v137 + 8);
        if ( v138 == 332 || v138 == 452 )
          v139 = 1;
      }
      v140 = v135[1].ActiveProcessors.Bitmap[7];
      if ( v139 )
      {
        if ( v140 )
        {
          v150 = *(_WORD *)(v140 + 8);
          if ( v150 == 332 || v150 == 452 )
          {
            KiStackAttachProcess((_KPROCESS *)v62, 0, (__int64)v312);
            if ( *((_QWORD *)&v257 + 1) < MmGetMaximumUserAddress()
              && (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v257 + 1), 1LL) )
            {
              v151 = 0LL;
              v152 = (__int64 *)*((_QWORD *)v62 + 133);
              if ( v152 )
              {
                v153 = *((_WORD *)v152 + 4);
                if ( v153 == 332 || v153 == 452 )
                  v151 = *v152;
              }
              *(_DWORD *)(v151 + 1144) = DWORD2(v257);
              KiUnstackDetachProcess((__int64)v312, 0LL);
            }
            else
            {
              v133 = -1073741811;
              KiUnstackDetachProcess((__int64)v312, 0LL);
            }
LABEL_370:
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v62 + 95);
LABEL_371:
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return v133;
          }
        }
      }
      else if ( !v140 || (v141 = *(_WORD *)(v140 + 8), v141 != 332) && v141 != 452 )
      {
        KiStackAttachProcess((_KPROCESS *)v62, 0, (__int64)v312);
        v142 = *((_QWORD *)&v257 + 1);
        if ( !(unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v257 + 1), 0LL) )
          v133 = -1073741811;
        KiUnstackDetachProcess((__int64)v312, 0LL);
        if ( v133 >= 0 )
        {
          v143 = (__int64)v240;
          --v240->KernelApcDisable;
          v144 = (volatile signed __int64 *)(v62 + 728);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v62 + 728), 0LL);
          *((_QWORD *)v62 + 89) = v142;
          v148 = (volatile signed __int32 **)(v62 + 1160);
          v149 = *v148;
          if ( *v148 != (volatile signed __int32 *)v148 )
          {
            while ( 1 )
            {
              if ( v142 )
                _interlockedbittestandset(v149 - 426, 0x19u);
              else
                _interlockedbittestandreset(v149 - 426, 0x19u);
              v149 = *(volatile signed __int32 **)v149;
              if ( v149 == (volatile signed __int32 *)v148 )
                break;
              v142 = *((_QWORD *)&v257 + 1);
            }
          }
          if ( (_InterlockedExchangeAdd64(v144, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v144, v145, v146, v147);
          KeAbPostRelease((ULONG_PTR)v144);
          KeLeaveCriticalRegionThread(v143);
          v62 = (char *)Object;
        }
        goto LABEL_370;
      }
      v133 = -1073741637;
      goto LABEL_370;
    case 40:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v154 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v299 = *(_OWORD *)ProcessInformation;
          v300 = *((_OWORD *)ProcessInformation + 1);
          v301 = *((_QWORD *)ProcessInformation + 4);
          v154 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v299;
        }
        v155 = *(unsigned int *)v5;
        if ( (unsigned int)v155 > 0x40 || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v155 = 0LL;
        if ( v9 )
        {
          v300 = *(_OWORD *)ProcessInformation;
          v154 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v300;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v289 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack(v5 + 16, *(_QWORD *)(v5 + 8), &v289, v155);
      if ( result >= 0 && v9 )
        *(_QWORD *)v154 = *(_QWORD *)(v5 + 16);
      return result;
    case 44:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v265 = *(_DWORD *)ProcessInformation;
      if ( (v265 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v265);
    case 45:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v284 = *(_DWORD *)ProcessInformation;
      v156 = v284;
      if ( (v284 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( (v156 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_63;
    case 47:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v157 = *(_DWORD *)ProcessInformation;
      v285 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v158 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v158, v157);
      ObfDereferenceObject(v158);
      goto LABEL_63;
    case 48:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v306 = *(_QWORD *)ProcessInformation;
      if ( (v306 & 3) != 1 )
        return -1073741811;
      KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] = v306;
      return 0;
    case 51:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v241 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v241 != 2 )
        return -1073741811;
      break;
    case 52:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v296 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v296) )
        return RtlRemoveDynamicFunctionTable(v296);
      else
        return RtlInsertDynamicFunctionTable(v296);
    case 53:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v295 = *(_DWORD *)ProcessInformation;
      v208 = v295;
      if ( (v295 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v209 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v210 = (struct _EX_RUNDOWN_REF *)Object;
        v211 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v211 )
        {
          ExEnableHandleExceptions(v211, v208 & 1);
          ExReleaseRundownProtection(v210 + 95);
        }
        else
        {
          v209 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v210, 0x79517350u);
        return v209;
      }
      return result;
    case 55:
      v212 = 0LL;
      v275 = 0LL;
      if ( v9 != 1 )
        goto LABEL_691;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v213 = *(_DWORD *)v5;
      v271 = v213;
      v214 = *(void **)(v5 + 8);
      Src = v214;
      if ( !(_WORD)v213 )
        return -1073741811;
      if ( ((unsigned __int8)v214 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v215 = (unsigned __int64)v214 + (unsigned __int16)v213;
      if ( v215 > 0x7FFFFFFF0000LL || v215 < (unsigned __int64)v214 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v216 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v271, 0x6E497350u);
      v212 = v216;
      v275 = v216;
      if ( !v216 )
        return -1073741670;
      memmove(v216, Src, (unsigned __int16)v271);
      Src = v212;
      v5 = (__int64)&v271;
      v302 = &v271;
LABEL_691:
      v33 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v33 >= 0 )
      {
        v25 = Object;
        v26 = IoRevokeHandlesForProcess(v5, Object);
        if ( v212 )
          ExFreePoolWithTag(v212, 0);
LABEL_79:
        ObfDereferenceObjectWithTag(v25, 0x79517350u);
        return v26;
      }
      else
      {
        if ( !v212 )
          return v33;
        ExFreePoolWithTag(v212, 0);
        return v33;
      }
    case 56:
      return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
    case 58:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v266 = *(_DWORD *)v5 != 0;
      v75 = (unsigned __int8 *)Object;
      if ( KeGetCurrentThread()->ApcState.Process == Object )
        goto LABEL_146;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        ObfDereferenceObjectWithTag(v75, 0x79517350u);
        return -1073741727;
      }
      v33 = 0;
      KeSetCheckStackExtentsProcess(v75, v266);
      if ( !v217 && (*((_DWORD *)v75 + 192) & 0x20000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v75 + 192, 0xFFFDFFFF);
LABEL_240:
        v75 = (unsigned __int8 *)Object;
      }
      goto LABEL_666;
    case 61:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v311 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v311 != 1 || DWORD1(v311) )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v311 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
      goto LABEL_63;
    case 62:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v290 = *(_QWORD *)v5;
      v69 = PsSetProcessFaultInformation(Object, &v290);
      goto LABEL_193;
    case 64:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v298 = *(__m256i *)v5;
        if ( v298.m256i_i32[0] == 3 )
        {
          if ( (v298.m256i_i32[1] & 0xFFFFFFF8) != 0
            || *(_OWORD *)&v298.m256i_u64[1] != 0LL
            || ((((unsigned __int32)v298.m256i_i32[1] >> 1) & 1) != 0 || (v298.m256i_i8[4] & 4) != 0)
            && (v298.m256i_i8[4] & 1) == 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741811;
          }
          else if ( (((unsigned __int32)v298.m256i_i32[1] >> 1) & 1) != 0 || (v298.m256i_i8[4] & 4) != 0 )
          {
            v220 = Object;
            v221 = MmReleaseCommitForMemResetPages((_KPROCESS *)Object, ((unsigned __int32)v298.m256i_i32[1] >> 2) & 1);
            ObfDereferenceObjectWithTag(v220, 0x79517350u);
            return v221;
          }
          else
          {
            v218 = Object;
            v219 = MmSetCommitReleaseEligibility((__int64)Object, v298.m256i_i8[4] & 1);
            ObfDereferenceObjectWithTag(v218, 0x79517350u);
            return v219;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741735;
        }
      }
      return result;
    case 65:
    case 66:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v315, ProcessInformation, ProcessInformationLength);
      v222 = (unsigned int)v4 >> 3;
      if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v69 = KeSetCpuSetsProcess((__int64)Object, v222, v315);
      goto LABEL_193;
    case 67:
      if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        return -1073741727;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v273, 0LL);
      v224 = result;
      if ( result >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)v273 + 435, 0x40u);
        ObfDereferenceObject(v273);
        return v224;
      }
      return result;
    case 69:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 192, 0x80000000);
      goto LABEL_63;
    case 70:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v225 = *(_DWORD *)ProcessInformation;
      v294 = *(_DWORD *)ProcessInformation;
      v133 = 0;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v62 = (char *)Object;
      v226 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v226 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v226, v225);
        goto LABEL_370;
      }
      v133 = -1073741558;
      goto LABEL_371;
    case 71:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case 73:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v227 = *(_BYTE *)ProcessInformation;
      v249 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v227 )
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFFFFDFF);
      goto LABEL_63;
    case 76:
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v309 = *(HANDLE *)ProcessInformation;
      v228 = *((_DWORD *)ProcessInformation + 2);
      v310 = v228;
      if ( (_DWORD)v309 != 1 || (HIDWORD(v309) & 0xFFFFFFFC) != 0 || (~HIDWORD(v309) & v228) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v230 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v230 >= 0 )
      {
        v230 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v309);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v230;
    case 79:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v223 = *(_BYTE *)v5;
      v248 = *(_BYTE *)v5;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( v223 )
        _InterlockedOr((volatile signed __int32 *)Object + 192, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_63;
    case 81:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      v231 = 144;
      memset(v314, 0, sizeof(v314));
      if ( (unsigned int)v4 < 0x90 )
        v231 = v4;
      memmove(v314, (const void *)v5, v231);
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v75 = (unsigned __int8 *)Object;
      v33 = PoSetProcessEnergyTrackingState(Object, v314);
      v18 = v75;
      if ( v33 < 0 )
        goto LABEL_666;
      goto LABEL_64;
    case 82:
      return -1073741637;
    case 84:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_QWORD *)pszDest = 0LL;
      v317 = 0LL;
      v318 = 0LL;
      v319 = 0LL;
      v320 = 0LL;
      v321 = 0LL;
      v322 = 0LL;
      v323 = 0LL;
      v324 = 0;
      v232 = *(_OWORD *)ProcessInformation;
      v291 = v232;
      v292 = *((_QWORD *)ProcessInformation + 2);
      if ( (unsigned __int64)(v232 + 65) > 0x7FFFFFFF0000LL || (__int64)v232 + 65 < (unsigned __int64)v232 )
        MEMORY[0x7FFFFFFF0000] = 0;
      RtlStringCbCopyA(pszDest, 0x41uLL, (NTSTRSAFE_PCSTR)v232);
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)&v291 = pszDest;
      v324 = 0;
      v33 = EtwSetProcessTelemetryCoverage(Object, &v291);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(v291);
      *(_DWORD *)(v5 + 16) = v292;
      return v33;
    case 86:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v243 = *(_BYTE *)v5;
      v233 = (volatile signed __int32 *)((char *)Object + 768);
      _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFCFFFFFF);
      _InterlockedOr(v233, ((v243 & 1) << 24) | (((v243 >> 1) & 1) << 25));
      goto LABEL_63;
    case 89:
      return SeCodeIntegritySetInformationProcess(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case 90:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v293 = *(_DWORD *)ProcessInformation;
      v234 = v293;
      if ( (v293 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v235) = 1;
      PspSetProcessForegroundBackgroundRequest(Object, v234 & 1, v235);
LABEL_63:
      v18 = Object;
LABEL_64:
      ObfDereferenceObjectWithTag(v18, 0x79517350u);
      return 0;
    default:
      return -1073741821;
  }
  v75 = (unsigned __int8 *)KeGetCurrentThread()->ApcState.Process;
  Object = v75;
  switch ( (int)v241 )
  {
    case 1:
      if ( (HIDWORD(v241) & 0xFFFFFFF0) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      v159 = (HIDWORD(v241) >> 1) & 1;
      if ( !v159 && (*((_DWORD *)v75 + 522) & 0x10) != 0 )
        goto LABEL_416;
      if ( (BYTE4(v241) & 1) == 0 && (*((_DWORD *)v75 + 522) & 0x40) == 0 )
        goto LABEL_416;
      v160 = (HIDWORD(v241) >> 3) & 1;
      if ( !v160 && (*((_DWORD *)v75 + 522) & 8) != 0 )
        goto LABEL_416;
      if ( v160 )
      {
        if ( !v159 )
        {
          v33 = -1073741776;
          goto LABEL_664;
        }
      }
      else if ( !v159 )
      {
LABEL_422:
        if ( (BYTE4(v241) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v75 + 522, 0xFFFFFFBF);
          v75 = (unsigned __int8 *)Object;
        }
        if ( v160 )
        {
          _InterlockedOr((volatile signed __int32 *)v75 + 522, 8u);
          v75 = (unsigned __int8 *)Object;
        }
        goto LABEL_426;
      }
      _InterlockedOr((volatile signed __int32 *)v75 + 522, 0x10u);
      v75 = (unsigned __int8 *)Object;
      goto LABEL_422;
    case 2:
      v165 = HIDWORD(v241);
      if ( (HIDWORD(v241) & 0xFFFFFFF0) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (BYTE4(v241) & 1) != 0 && (BYTE4(v241) & 8) != 0 )
      {
        v165 = HIDWORD(v241) & 0xFFFFFFF7;
        HIDWORD(v241) &= ~8u;
      }
      v166 = v165 & 1;
      if ( (v165 & 1) == 0 && ((v165 & 2) != 0 || (v165 & 4) != 0) )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6 )
      {
LABEL_663:
        v33 = -1073741637;
        goto LABEL_664;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v167 = 0;
      }
      else
      {
        v33 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( v33 < 0 )
          goto LABEL_458;
        v167 = 1;
        v75 = (unsigned __int8 *)Object;
        if ( Object != KeGetCurrentThread()->ApcState.Process )
        {
          v168 = (char *)Object + 2088;
          if ( (*((_DWORD *)Object + 522) & 0x100) != 0 )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
            SeReleaseSubjectContext(&SubjectContext);
            if ( (RtlIsSandboxedToken(0LL, v9) || !IsSandboxedToken || (*v168 & 0x400) == 0)
              && !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            {
              v33 = -1073741790;
              goto LABEL_665;
            }
          }
          v170 = (HIDWORD(v241) >> 3) & 1;
          if ( !v170 && !v166 && (*v168 & 0x800) != 0 )
          {
            v33 = -1073741790;
            goto LABEL_665;
          }
          v171 = (v166 ^ 1) << 8;
          v172 = v166 << 8;
          if ( !v170 )
            v171 |= 0x800u;
          v173 = v172 | 0x800;
          if ( !v170 )
            v173 = v172;
          if ( ((HIDWORD(v241) >> 1) & 1) == 0 )
            v171 |= 0x200u;
          v174 = v173 | 0x200;
          if ( ((HIDWORD(v241) >> 1) & 1) == 0 )
            v174 = v173;
          v175 = v174 | 0x400;
          if ( ((HIDWORD(v241) >> 2) & 1) == 0 )
          {
            v175 = v174;
            v171 |= 0x400u;
          }
          goto LABEL_494;
        }
        v165 = HIDWORD(v241);
      }
      v176 = 256;
      if ( v166 || (*((_DWORD *)v75 + 522) & 0x100) == 0 )
      {
        v177 = (v165 >> 3) & 1;
        if ( v177 || v166 || (*((_DWORD *)v75 + 522) & 0x800) == 0 )
        {
          v178 = (v165 >> 1) & 1;
          if ( v178 && (v179 = *((_DWORD *)v75 + 522), (v179 & 0x100) != 0) && (v179 & 0x200) == 0 )
          {
            v33 = -1073741790;
          }
          else
          {
            v180 = (v165 >> 2) & 1;
            if ( !v180 || (v181 = *((_DWORD *)v75 + 522), (v181 & 0x100) == 0) || (v181 & 0x400) != 0 )
            {
              v171 = 0;
              if ( v166 )
              {
                v171 = 2048;
              }
              else
              {
                v176 = 0;
                if ( v177 )
                  v176 = 2048;
              }
              if ( !v178 )
                v171 |= 0x200u;
              v182 = v176 | 0x200;
              if ( !v178 )
                v182 = v176;
              v175 = v182 | 0x400;
              if ( !v180 )
              {
                v175 = v182;
                v171 |= 0x400u;
              }
LABEL_494:
              RtlInterlockedSetClearBits((volatile signed __int32 *)v75 + 522, v175, v171);
              v33 = 0;
              goto LABEL_665;
            }
            v33 = -1073741790;
          }
        }
        else
        {
          v33 = -1073741790;
        }
      }
      else
      {
        v33 = -1073741790;
      }
      goto LABEL_665;
    case 3:
      if ( (HIDWORD(v241) & 0xFFFFFFFC) != 0 )
      {
        v33 = -1073741811;
      }
      else if ( ((HIDWORD(v241) >> 1) & 1) != 0 || (BYTE4(v241) & 1) == 0 )
      {
        if ( ((HIDWORD(v241) >> 1) & 1) == 0 || (BYTE4(v241) & 1) != 0 )
        {
          v161 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v75);
          if ( v161 )
          {
            v33 = -1073741790;
            if ( (unsigned __int8)ExEnableHandleExceptions(v161, BYTE4(v241) & 1) )
              v33 = 0;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v75 + 95);
          }
          else
          {
            v33 = -1073741558;
          }
        }
        else
        {
          v33 = -1073741811;
        }
      }
      else
      {
        v33 = -1073741811;
      }
      goto LABEL_664;
    case 4:
      v162 = HIDWORD(v241);
      if ( (HIDWORD(v241) & 0xFFFFFFFC) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (BYTE4(v241) & 1) != 0 && (BYTE4(v241) & 2) != 0 )
      {
        v162 = HIDWORD(v241) & 0xFFFFFFFD;
        HIDWORD(v241) &= ~2u;
      }
      v163 = v162 & 1;
      if ( (v162 & 1) == 0 && (*((_DWORD *)v75 + 522) & 0x1000) != 0 )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
      v164 = (v162 >> 1) & 1;
      if ( v164 )
        goto LABEL_452;
      if ( v163 )
        goto LABEL_454;
      if ( (*((_DWORD *)v75 + 522) & 0x2000) != 0 )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
LABEL_452:
      if ( !v163 && !v164 )
        goto LABEL_456;
LABEL_454:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) == 0 )
      {
LABEL_456:
        v33 = 0;
        if ( v163 )
        {
          _InterlockedOr((volatile signed __int32 *)v75 + 522, 0x3000u);
LABEL_458:
          v75 = (unsigned __int8 *)Object;
        }
        else if ( v164 )
        {
          _InterlockedOr((volatile signed __int32 *)v75 + 522, 0x2000u);
          v75 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v33 = -1073741431;
      }
      goto LABEL_664;
    case 6:
      if ( (HIDWORD(v241) & 0xFFFFFFFE) != 0 )
      {
        v33 = -1073741811;
      }
      else if ( (BYTE4(v241) & 1) != 0 || (*((_DWORD *)v75 + 522) & 0x80u) == 0 )
      {
        v33 = 0;
        if ( (BYTE4(v241) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v75 + 522, 0x80u);
          v75 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v33 = -1073741790;
      }
      goto LABEL_664;
    case 7:
      if ( (HIDWORD(v241) & 0xFFFFFFF8) != 0 )
      {
        v33 = -1073741811;
      }
      else if ( (*((_DWORD *)v75 + 522) & 1) != 0 )
      {
        if ( (BYTE4(v241) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v75 + 522, 4u);
          v33 = 0;
          v75 = (unsigned __int8 *)Object;
        }
        else
        {
          v33 = -1073741790;
        }
      }
      else
      {
        v33 = -1073741790;
      }
      goto LABEL_664;
    case 8:
      v183 = HIDWORD(v241);
      if ( (HIDWORD(v241) & 0xFFFFFFE0) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (BYTE4(v241) & 1) != 0 && ((BYTE4(v241) & 8) != 0 || (BYTE4(v241) & 0x10) != 0) )
        v183 = HIDWORD(v241) & 0xFFFFFFE7;
      if ( (v183 & 2) != 0 && (v183 & 0x10) != 0 )
        v183 &= ~0x10u;
      v184 = (v183 >> 3) & 1;
      if ( v184 && (v183 & 0x10) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      v185 = (v183 >> 1) & 1;
      if ( v185 + (v183 & 1) > 1 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (v183 & 1) != 0 )
        goto LABEL_559;
      if ( v75[1736] >= 8u && v75[1737] >= 8u )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
      if ( !v185 )
      {
        LOBYTE(v12) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v75[1736], v12) )
        {
          LOBYTE(v12) = 6;
          if ( (unsigned int)SeCompareSigningLevels(v75[1737], v12) )
          {
            v33 = -1073741790;
            goto LABEL_664;
          }
        }
      }
LABEL_559:
      if ( (*((_DWORD *)v75 + 522) & 0x3000000) != 0 && (v183 & 0x10) == 0 && !v185 && !v184 && (v183 & 1) == 0 )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
      v186 = 0;
      v33 = 0;
      if ( (v183 & 1) != 0 )
      {
        if ( v75[1736] < 8u )
          v75[1736] = 8;
        if ( v75[1737] < 8u )
          v75[1737] = 8;
      }
      else if ( v185 )
      {
        LOBYTE(v12) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(v75[1736], v12) )
        {
          v33 = -1073741790;
          goto LABEL_664;
        }
        LOBYTE(v187) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v187, v75[1737]) )
          v75[1737] = 6;
      }
      if ( v183 )
        v186 = 0x800000;
      v188 = ((v183 & 8) == 0) << 24;
      v189 = v186 | 0x1000000;
      if ( !v184 )
        v189 = v186;
      v190 = (v183 >> 4) & 1;
      if ( !v190 )
        v188 |= 0x2000000u;
      v191 = v189 | 0x2000000;
      if ( !v190 )
        v191 = v189;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v75 + 522, v191, v188);
      goto LABEL_664;
    case 9:
      if ( (HIDWORD(v241) & 0xFFFFFFFC) != 0 )
      {
        v33 = -1073741811;
      }
      else if ( (BYTE4(v241) & 1) != 0 || (*((_DWORD *)v75 + 522) & 0x10000) == 0 )
      {
        if ( (BYTE4(v241) & 1) != 0 || (BYTE4(v241) & 2) != 0 || (*((_DWORD *)v75 + 522) & 0x20000) == 0 )
        {
          v33 = 0;
          if ( (BYTE4(v241) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v75 + 522, 0x10000, 0x20000);
          }
          else if ( (BYTE4(v241) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v75 + 522, 0x20000, 0x10000);
          }
        }
        else
        {
          v33 = -1073741790;
        }
      }
      else
      {
        v33 = -1073741790;
      }
      goto LABEL_664;
    case 10:
      v192 = HIDWORD(v241);
      if ( (HIDWORD(v241) & 0xFFFFFFE0) == 0 )
      {
        if ( (BYTE4(v241) & 1) != 0 && (BYTE4(v241) & 8) != 0 )
          v192 = HIDWORD(v241) & 0xFFFFFFF7;
        if ( (v192 & 2) != 0 && (v192 & 0x10) != 0 )
          v192 &= ~0x10u;
        v193 = v192 & 1;
        v194 = 0x80000;
        if ( (v192 & 1) != 0 || (*((_DWORD *)v75 + 522) & 0x80000) == 0 )
        {
          v195 = (v192 >> 1) & 1;
          if ( v195 || (*((_DWORD *)v75 + 522) & 0x200000) == 0 )
          {
            v196 = (v192 >> 2) & 1;
            if ( !v196 && (*((_DWORD *)v75 + 522) & 0x40000) != 0 )
            {
              v33 = -1073741790;
              goto LABEL_664;
            }
            v197 = (v192 >> 3) & 1;
            if ( v197 || (v192 & 1) != 0 || (*((_DWORD *)v75 + 522) & 0x100000) == 0 )
            {
              v198 = (v192 >> 4) & 1;
              if ( v198 || v195 || (*((_DWORD *)v75 + 522) & 0x400000) == 0 )
              {
                v199 = 0;
                if ( v193 )
                {
                  v199 = 0x100000;
                }
                else
                {
                  v194 = 0;
                  if ( v197 )
                    v194 = 0x100000;
                }
                if ( v195 )
                {
                  v194 |= 0x200000u;
                  v199 |= 0x400000u;
                }
                else if ( v198 )
                {
                  v194 |= 0x400000u;
                }
                v200 = v194 | 0x40000;
                if ( !v196 )
                  v200 = v194;
                RtlInterlockedSetClearBits((volatile signed __int32 *)v75 + 522, v200, v199);
                v33 = 0;
              }
              else
              {
                v33 = -1073741790;
              }
              goto LABEL_664;
            }
          }
        }
LABEL_416:
        v33 = -1073741790;
        goto LABEL_664;
      }
      v33 = -1073741811;
LABEL_664:
      v167 = 0;
LABEL_665:
      if ( v167 != 1 )
        return v33;
LABEL_666:
      ObfDereferenceObjectWithTag(v75, 0x79517350u);
      return v33;
    case 13:
      v201 = HIDWORD(v241);
      if ( (HIDWORD(v241) & 0xFFFFFFF8) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (BYTE4(v241) & 1) == 0 && (BYTE4(v241) & 4) != 0 )
      {
        v33 = -1073741811;
        goto LABEL_664;
      }
      if ( (BYTE4(v241) & 1) != 0 && (BYTE4(v241) & 2) != 0 )
        v201 = HIDWORD(v241) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v75);
      v203 = NoChildProcessRestrictedPolicy;
      v204 = v201 & 1;
      if ( (v201 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
      v205 = (v201 >> 2) & 1;
      if ( v205 && (_DWORD)v203 == 1 )
      {
        v33 = -1073741790;
        goto LABEL_664;
      }
      v206 = (v201 >> 1) & 1;
      if ( v206 )
        goto LABEL_648;
      if ( v204 )
        goto LABEL_649;
      if ( (_DWORD)v203 == 3 )
      {
        v33 = -1073741790;
      }
      else
      {
LABEL_648:
        if ( v204 )
        {
LABEL_649:
          if ( v205 )
            PspSetNoChildProcessRestrictedPolicy(v75, 2LL, v203);
          else
            PspSetNoChildProcessRestrictedPolicy(v75, 1LL, v203);
          v33 = 0;
        }
        else if ( v206 )
        {
          PspSetNoChildProcessRestrictedPolicy(v75, 3LL, v203);
          v33 = 0;
        }
        else
        {
LABEL_426:
          v33 = 0;
        }
      }
      goto LABEL_664;
    case 14:
      if ( (HIDWORD(v241) & 0xFFFFFFF0) != 0 )
      {
        v33 = -1073741811;
      }
      else
      {
        v207 = (HIDWORD(v241) >> 3) & 1;
        if ( v207 || (*((_DWORD *)v75 + 523) & 0x2000) == 0 )
        {
          if ( v207 )
          {
            _InterlockedOr((volatile signed __int32 *)v75 + 523, 0x2000u);
            v75 = (unsigned __int8 *)Object;
          }
          v33 = 0;
        }
        else
        {
          v33 = -1073741790;
        }
      }
      goto LABEL_664;
    default:
      goto LABEL_663;
  }
}
