/*
 * XREFs of ExpQuerySystemInformation @ 0x1404C0DD0
 * Callers:
 *     NtQuerySystemInformation @ 0x1404C0C90 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x140575780 (NtQuerySystemInformationEx.c)
 * Callees:
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1400134B4 (KeQueryCycleTimeStatsProcessor.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryGroupAffinity @ 0x1400AE8F0 (KeQueryGroupAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400E5898 (PsWow64GetSupportedArchitectures.c)
 *     MmGetSharedCommit @ 0x1400F069C (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400F06AC (MmGetResidentAvailablePages.c)
 *     MmGetPeakCommitment @ 0x1400F095C (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400F0978 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400F0994 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400F09B0 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x1400F09CC (MmGetProcessPartitionId.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F4A18 (MmQuerySystemWorkingSetInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400FC794 (ExpGetSystemProcessorInformation.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1400FD110 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryActiveGroupCount @ 0x1400FE430 (KeQueryActiveGroupCount.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400FE760 (ExpGetSystemEmulationProcessorInformation.c)
 *     MmQueryMemoryListInformation @ 0x140103060 (MmQueryMemoryListInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140114A74 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140114C10 (ExpGetSystemBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x1401167C8 (MmGetHighestPhysicalPage.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeQueryBootTimeValues @ 0x140124698 (KeQueryBootTimeValues.c)
 *     MmGetLowestPhysicalPage @ 0x140132524 (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x140132620 (VslIsSecureKernelRunning.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x14015D43C (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14017F420 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1401E9F30 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1401EA110 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1401F20B8 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401F2494 (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14020B770 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x140239094 (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x14024876C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x14024DF70 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14025F2E4 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1402834C0 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x14028451C (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeQueryKvaShadowInformation @ 0x14043C7EC (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14043C914 (KeQuerySpeculationControlInformation.c)
 *     ExGetPoolTagInfo @ 0x140446F2C (ExGetPoolTagInfo.c)
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x140448D5C (PfSnQueryPrefetcherInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x14044DAF4 (IoQueryLowPriorityIoInformation.c)
 *     ExpReadComPlusPackage @ 0x1404516CC (ExpReadComPlusPackage.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     PsQueryFullProcessImageName @ 0x1404CB0E0 (PsQueryFullProcessImageName.c)
 *     ExpQueryModuleInformation @ 0x1404DEF60 (ExpQueryModuleInformation.c)
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1405533C0 (ExpQueryNumaProcessorMap.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140570C40 (ExpGetSystemFirmwareTableInformation.c)
 *     SmQueryStoreInformation @ 0x1405721BC (SmQueryStoreInformation.c)
 *     ExHandleSPCall2 @ 0x14057291C (ExHandleSPCall2.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     MmGetPageFileInformation @ 0x140575550 (MmGetPageFileInformation.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14057969C (KeBuildLogicalProcessorSystemInformation.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     IoQuerySystemDeviceName @ 0x14057D8D8 (IoQuerySystemDeviceName.c)
 *     SeCodeIntegrityQueryInformation @ 0x140586D30 (SeCodeIntegrityQueryInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1405878F8 (ExpGetSystemFlushInformation.c)
 *     SeSecureBootQueryInformation @ 0x14059424C (SeSecureBootQueryInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1405CCC90 (ExpQueryModuleInformationEx.c)
 *     CmQueryRegistryQuotaInformation @ 0x1405DD0B8 (CmQueryRegistryQuotaInformation.c)
 *     KeQueryCpuSetInformation @ 0x1405DEF28 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1405E5DF8 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1405E86B8 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1405ED194 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405ED510 (ExpGetSystemPlatformBinary.c)
 *     HvlQueryEnlightenmentInfo @ 0x1405F113C (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1405F1420 (IoQueryVhdBootInformation.c)
 *     ExQueryBootEntropyInformation @ 0x1405F2088 (ExQueryBootEntropyInformation.c)
 *     SeQueryHSTIResults @ 0x1405F2CEC (SeQueryHSTIResults.c)
 *     HvlQueryDetailInfo @ 0x1406B2DB8 (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x1406B2ED0 (HvlQueryDmaProtectionInfo.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1406F0D74 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1407148F0 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x140754024 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x140754220 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407542B8 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140754350 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407543C4 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x140754448 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407544A4 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryChannelInformation @ 0x140754B00 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140754C3C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x14075512C (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaProximityNode @ 0x140755218 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14075536C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x140755584 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x1407CA3C4 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1407CA488 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1407CFA58 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r10d
  __int64 v8; // rbx
  unsigned __int8 v9; // r15
  unsigned int v10; // r13d
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  ULONG ActiveProcessorCount; // r12d
  unsigned __int16 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rdx
  USHORT v18; // cx
  int v19; // r12d
  NTSTATUS result; // eax
  int SystemBasicInformation; // eax
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rbx
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // cx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // cx
  unsigned __int16 v37; // cx
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v39; // r8
  unsigned int v40; // r13d
  ULONG v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 *v44; // rdx
  unsigned __int64 v45; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v47; // rbx
  __int64 v48; // rsi
  unsigned __int64 v49; // rbx
  char v50; // r15
  unsigned __int64 v51; // rdx
  struct _KTHREAD *v52; // rsi
  NTSTATUS v53; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v55; // rcx
  int v56; // eax
  struct _KTHREAD *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // ecx
  int v60; // ecx
  int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // edi
  int v64; // ecx
  int v65; // edx
  __int64 *v66; // r15
  __int64 v67; // r8
  __int64 *v68; // r15
  __int64 v69; // rdx
  ULONG v70; // esi
  _DWORD *v71; // rdx
  _OWORD *v72; // rcx
  __int64 v73; // rax
  __int64 *v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned __int16 i; // ax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rcx
  unsigned __int8 v81; // si
  unsigned __int16 *PoolWithQuotaTag; // rbx
  int v83; // eax
  int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // r8
  PVOID v87; // rbx
  unsigned int v88; // ecx
  int v89; // r15d
  PVOID v90; // r12
  void *v91; // rcx
  __int64 v92; // rcx
  unsigned __int8 v93; // bl
  char v94; // bl
  char NestedPageProtectionFlags; // al
  unsigned __int16 *v96; // rax
  int BootGraphicsInformation; // [rsp+30h] [rbp-408h]
  unsigned int Size; // [rsp+34h] [rbp-404h] BYREF
  _PROCESSOR_NUMBER Size_4; // [rsp+38h] [rbp-400h] BYREF
  int v100; // [rsp+3Ch] [rbp-3FCh]
  unsigned int v101; // [rsp+40h] [rbp-3F8h]
  unsigned __int8 v102; // [rsp+44h] [rbp-3F4h]
  char v103[3]; // [rsp+45h] [rbp-3F3h] BYREF
  unsigned __int16 v104; // [rsp+48h] [rbp-3F0h]
  int v105; // [rsp+4Ch] [rbp-3ECh]
  unsigned __int16 *v106; // [rsp+50h] [rbp-3E8h]
  char Data[66]; // [rsp+8Eh] [rbp-3AAh] BYREF
  unsigned __int16 v108; // [rsp+D0h] [rbp-368h]
  int v109; // [rsp+DCh] [rbp-35Ch] BYREF
  unsigned int *v110; // [rsp+E0h] [rbp-358h]
  unsigned int NumberOfBytes; // [rsp+ECh] [rbp-34Ch] BYREF
  unsigned int NumberOfBytes_4; // [rsp+F0h] [rbp-348h]
  unsigned int v113; // [rsp+F4h] [rbp-344h]
  int v114; // [rsp+F8h] [rbp-340h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+FCh] [rbp-33Ch]
  PEPROCESS Process; // [rsp+100h] [rbp-338h] BYREF
  __int128 v117; // [rsp+108h] [rbp-330h]
  LOGICAL_PROCESSOR_RELATIONSHIP v118; // [rsp+118h] [rbp-320h]
  unsigned int v119; // [rsp+11Ch] [rbp-31Ch] BYREF
  int v120; // [rsp+120h] [rbp-318h] BYREF
  __int64 v121; // [rsp+128h] [rbp-310h]
  HANDLE Handle; // [rsp+130h] [rbp-308h]
  HANDLE ProcessId[2]; // [rsp+138h] [rbp-300h]
  unsigned __int64 v124; // [rsp+148h] [rbp-2F0h]
  _QWORD *v125; // [rsp+150h] [rbp-2E8h]
  PVOID P; // [rsp+158h] [rbp-2E0h] BYREF
  PVOID v127; // [rsp+160h] [rbp-2D8h] BYREF
  __int64 v128; // [rsp+168h] [rbp-2D0h]
  _QWORD v129[2]; // [rsp+170h] [rbp-2C8h] BYREF
  LARGE_INTEGER Src; // [rsp+180h] [rbp-2B8h] BYREF
  __int64 v131; // [rsp+188h] [rbp-2B0h] BYREF
  __int64 v132; // [rsp+190h] [rbp-2A8h]
  __int64 v133; // [rsp+198h] [rbp-2A0h]
  __int64 v134; // [rsp+1A0h] [rbp-298h] BYREF
  __int64 v135; // [rsp+1A8h] [rbp-290h]
  int v136; // [rsp+1B4h] [rbp-284h]
  unsigned __int64 v137; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v138; // [rsp+1C8h] [rbp-270h]
  __int64 v139; // [rsp+1D0h] [rbp-268h]
  __int64 v140; // [rsp+1D8h] [rbp-260h]
  PVOID Object; // [rsp+1E0h] [rbp-258h] BYREF
  PVOID v142; // [rsp+1E8h] [rbp-250h] BYREF
  __int64 v143; // [rsp+1F0h] [rbp-248h] BYREF
  unsigned int v144; // [rsp+1F8h] [rbp-240h]
  int v145; // [rsp+1FCh] [rbp-23Ch]
  unsigned int v146; // [rsp+200h] [rbp-238h]
  int v147; // [rsp+204h] [rbp-234h]
  __int128 v148; // [rsp+208h] [rbp-230h]
  __int64 v149; // [rsp+218h] [rbp-220h]
  __int128 v150; // [rsp+220h] [rbp-218h]
  __int128 v151; // [rsp+230h] [rbp-208h]
  __int128 v152; // [rsp+240h] [rbp-1F8h]
  unsigned __int64 v153; // [rsp+250h] [rbp-1E8h]
  __int128 v154; // [rsp+258h] [rbp-1E0h]
  __int128 v155; // [rsp+268h] [rbp-1D0h]
  _BYTE v156[40]; // [rsp+278h] [rbp-1C0h] BYREF
  _QWORD v157[2]; // [rsp+2A0h] [rbp-198h] BYREF
  int v158; // [rsp+2B0h] [rbp-188h]
  __int64 v159; // [rsp+2B8h] [rbp-180h]
  __int64 v160; // [rsp+2C0h] [rbp-178h]
  __int64 v161; // [rsp+2C8h] [rbp-170h]
  __int64 v162; // [rsp+2D0h] [rbp-168h]
  int v163; // [rsp+2D8h] [rbp-160h]
  int v164; // [rsp+2DCh] [rbp-15Ch]
  _DWORD *v165; // [rsp+2E8h] [rbp-150h]
  __int64 v166; // [rsp+2F0h] [rbp-148h]
  __int64 v167; // [rsp+2F8h] [rbp-140h]
  __int64 v168; // [rsp+300h] [rbp-138h]
  _DWORD v169[4]; // [rsp+308h] [rbp-130h] BYREF
  _QWORD v170[4]; // [rsp+318h] [rbp-120h] BYREF
  _OWORD v171[3]; // [rsp+338h] [rbp-100h] BYREF
  _BYTE v172[128]; // [rsp+370h] [rbp-C8h] BYREF

  v6 = a4;
  v101 = a3;
  v106 = a2;
  v7 = a1;
  NumberOfBytes_4 = a1;
  v110 = a6;
  v8 = 0LL;
  Size = 0;
  BootGraphicsInformation = 0;
  v9 = KeGetCurrentThread()->gap0[10];
  v102 = v9;
  v10 = 4;
  if ( !v9 )
    goto LABEL_34;
  v11 = 4;
  if ( (_DWORD)a1 == 35 )
  {
LABEL_19:
    v11 = 1;
    goto LABEL_20;
  }
  if ( (_DWORD)a1 != 12 )
  {
    if ( (_DWORD)a1 == 88
      || (_DWORD)a1 == 5
      || (_DWORD)a1 == 57
      || (_DWORD)a1 == 148
      || (_DWORD)a1 == 17
      || (_DWORD)a1 == 95
      || (_DWORD)a1 == 108
      || (_DWORD)a1 == 133
      || (_DWORD)a1 == 138
      || (_DWORD)a1 == 139
      || (_DWORD)a1 == 126
      || (_DWORD)a1 == 140
      || (_DWORD)a1 != 147 && (_DWORD)a1 != 158 )
    {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v11 = 8;
LABEL_20:
  if ( Length )
  {
    v12 = a4;
    if ( ((v11 - 1) & (unsigned int)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a4 + Length - 1LL;
    if ( a4 > v13 || v13 >= 0x7FFFFFFF0000LL )
    {
      a1 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_BYTE *)(a1 + 720) & 1) == 0 )
        ExRaiseAccessViolation();
    }
    else
    {
      a1 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v12 = *(_BYTE *)v12;
        v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v12 != a1 );
    }
  }
  if ( a6 )
  {
    a1 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_DWORD *)a1 = *(_DWORD *)a1;
  }
LABEL_34:
  Size = 0;
  RelationshipType = RelationAll;
  ActiveProcessorCount = 0;
  v15 = 0;
  v105 = 0;
  v104 = 0;
  v16 = 0LL;
  v108 = 0;
  v121 = 0LL;
  Handle = 0LL;
  v128 = 0LL;
  v17 = 9LL;
  v113 = 9;
  v118 = 9;
  switch ( v7 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v105 = 0xFFFF;
      v104 = -1;
      v18 = -1;
      goto LABEL_36;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( v101 < 2 )
        return -1073741811;
      v19 = *v106;
      v105 = v19;
      v104 = v19;
      if ( (unsigned __int16)v19 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v18 = v19;
LABEL_36:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v18);
      v7 = NumberOfBytes_4;
      v15 = v105;
      v17 = v113;
      v16 = v108;
      break;
    case 0x48u:
      if ( v101 != 4 )
        return -1073741811;
      v17 = *(unsigned int *)v106;
      v118 = *(_DWORD *)v106;
      break;
    case 0x6Bu:
      if ( v101 < 4 )
        return -1073741811;
      RelationshipType = *(_DWORD *)v106;
      break;
    case 0x79u:
      if ( v101 < 2 )
        return -1073741811;
      v108 = *v106;
      v16 = v108;
      if ( v108 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      break;
    case 0xA5u:
      if ( v101 )
      {
        if ( v101 != 8 )
          return -1073741811;
        v121 = *(_QWORD *)v106;
      }
      else
      {
        v121 = 0LL;
      }
      break;
    case 0xAFu:
    case 0xB5u:
      if ( v101 != 8 )
        return -1073741811;
      Handle = *(HANDLE *)v106;
      break;
    case 0xB2u:
      if ( v101 != 8 )
        return -1073741811;
      v128 = *(_QWORD *)v106;
      break;
    default:
      break;
  }
  switch ( v7 )
  {
    case 0u:
    case 0x72u:
      if ( Length == 64 )
      {
        SystemBasicInformation = ExpGetSystemBasicInformation(v6);
        Size = 64;
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 1u:
      if ( Length >= 0xC )
      {
        SystemBasicInformation = ExpGetSystemProcessorInformation(v6);
        Size = 12;
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 12;
      return -1073741820;
    case 2u:
      if ( Length < 0x138 )
      {
        if ( a6 )
          *a6 = 344;
        return -1073741820;
      }
      LODWORD(v8) = 344;
      if ( Length <= 0x158 )
        LODWORD(v8) = Length;
      ExpQuerySystemPerformanceInformation(ActiveProcessorCount, v6, (unsigned int)v8);
LABEL_488:
      Size = v8;
      goto LABEL_607;
    case 3u:
      if ( Length <= 0x30 )
      {
        Src.QuadPart = 0LL;
        v131 = 0LL;
        v132 = 0LL;
        v133 = 0LL;
        v134 = 0LL;
        v135 = 0LL;
        KeQueryBootTimeValues(&v131, &Src, &v134);
        v132 = ExpTimeZoneBias;
        LODWORD(v133) = ExpCurrentTimeZoneId;
        v135 = MEMORY[0xFFFFF780000003B0];
        memmove((void *)v6, &Src, Length);
        goto LABEL_136;
      }
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 4u:
    case 0xAu:
    case 0x19u:
    case 0x1Du:
    case 0x60u:
      return -1073741822;
    case 5u:
    case 0x39u:
    case 0x94u:
      SystemBasicInformation = ExpGetProcessInformation((_DWORD *)v6, Length, &Size, 0LL, v7);
      goto LABEL_606;
    case 6u:
      return -1073741637;
    case 7u:
      if ( Length == 24 )
      {
        *(_DWORD *)v6 = dword_1407F3710;
        *(_DWORD *)(v6 + 4) = dword_1407F3714;
        *(_DWORD *)(v6 + 8) = dword_1407F3718;
        *(_DWORD *)(v6 + 12) = dword_1407F371C;
        *(_DWORD *)(v6 + 16) = dword_1407F3724;
        *(_DWORD *)(v6 + 20) = dword_1407F3728;
        goto LABEL_87;
      }
      if ( a6 )
        *a6 = 24;
      return -1073741820;
    case 8u:
    case 0x8Du:
      v40 = 48;
      if ( v7 != 8 )
        v40 = 72;
      if ( !Length || Length % v40 )
      {
        if ( a6 )
          *a6 = ActiveProcessorCount * v40;
        return -1073741820;
      }
      v101 = 0;
      v41 = 0;
      v100 = 0;
      while ( v41 < ActiveProcessorCount )
      {
        Size_4.Group = v15;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v41;
        v106 = (unsigned __int16 *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        LODWORD(v42) = v101;
        if ( Length < v101 + v40 )
          goto LABEL_111;
        v101 += v40;
        PoGetIdleTimes(&Size_4, 0LL, (__int64)v169);
        v43 = KeMaximumIncrement;
        v44 = v106;
        *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v106 + 5858);
        *(_QWORD *)(v6 + 8) = v43 * v169[1];
        *(_QWORD *)(v6 + 24) = v43 * *((unsigned int *)v44 + 5859);
        *(_QWORD *)(v6 + 32) = v43 * *((unsigned int *)v44 + 5860);
        *(_QWORD *)v6 = v43 * v169[0];
        *(_DWORD *)(v6 + 40) = *((_DWORD *)v44 + 5856);
        if ( NumberOfBytes_4 == 141 )
        {
          *(_QWORD *)(v6 + 48) = v43 * *((unsigned int *)v44 + 5867);
          *(_DWORD *)(v6 + 44) = 0;
          *(_QWORD *)(v6 + 56) = 0LL;
          *(_QWORD *)(v6 + 64) = 0LL;
        }
        v6 += v40;
        v41 = ++v100;
        v15 = v105;
      }
      LODWORD(v42) = v101;
      goto LABEL_111;
    case 9u:
      if ( Length == 4 )
      {
        *(_DWORD *)v6 = NtGlobalFlag;
        goto LABEL_283;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0xBu:
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      v56 = ExpQueryModuleInformation(v55, v6, Length, &Size);
      goto LABEL_182;
    case 0xCu:
      if ( Length < 0x38 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemBasicInformation = ExpGetLockInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0xDu:
      if ( Length >= 0x128 )
        goto LABEL_194;
      if ( a6 )
        *a6 = 296;
      return -1073741820;
    case 0xEu:
    case 0xFu:
    case 0x13u:
LABEL_194:
      BootGraphicsInformation = -1073741822;
      goto LABEL_607;
    case 0x10u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( (v6 & 7) != 0 )
        return -2147483646;
      if ( !(unsigned int)ExIsRestrictedCaller(v9) )
      {
        SystemBasicInformation = ExpGetHandleInformation(v6, Length, &Size);
        goto LABEL_606;
      }
      return -1073741790;
    case 0x11u:
      if ( Length < 0x40 )
      {
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemBasicInformation = ExpGetObjectInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0x12u:
    case 0x90u:
      v59 = 40;
      if ( v7 == 18 )
        v59 = 32;
      Size = v59;
      if ( Length >= v59 )
      {
        Size = 0;
        LOBYTE(v8) = v7 == 144;
        SystemBasicInformation = MmGetPageFileInformation(v59, v6, Length, v8, (__int64)&Size);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = v59;
      return -1073741820;
    case 0x15u:
    case 0x51u:
    case 0x77u:
    case 0x78u:
      if ( Length < 0x40 )
      {
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      }
      v60 = 2;
      if ( v7 == 119 )
      {
        v61 = 3;
      }
      else
      {
        if ( v7 == 120 )
          v60 = 4;
        v61 = v60;
      }
      MmQuerySystemWorkingSetInformation(v61, v157);
      *(_QWORD *)v6 = v157[0];
      *(_QWORD *)(v6 + 8) = v157[1];
      *(_DWORD *)(v6 + 16) = v158;
      v100 = 64;
      *(_QWORD *)(v6 + 24) = v159;
      *(_QWORD *)(v6 + 32) = v160;
      *(_QWORD *)(v6 + 40) = v161;
      *(_QWORD *)(v6 + 48) = v162;
      *(_DWORD *)(v6 + 56) = v163;
      *(_DWORD *)(v6 + 60) = v164;
      Size = 64;
      goto LABEL_607;
    case 0x16u:
      if ( Length >= 0x30 )
      {
        SystemBasicInformation = ExGetPoolTagInfo((_DWORD *)v6, Length, (int *)&Size);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 0x17u:
      Size = 24 * ActiveProcessorCount;
      if ( Length >= 24 * ActiveProcessorCount )
      {
        v70 = 0;
        v100 = 0;
        while ( v70 < ActiveProcessorCount )
        {
          Size_4.Group = v15;
          *(_WORD *)&Size_4.Number = (unsigned __int8)v70;
          v71 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
          v147 = v71[2895];
          *(_DWORD *)v6 = v147;
          *(_DWORD *)(v6 + 4) = v71[2951];
          *(_DWORD *)(v6 + 8) = v71[2967];
          *(_DWORD *)(v6 + 12) = KeTimeIncrement;
          *(_DWORD *)(v6 + 16) = 0;
          *(_DWORD *)(v6 + 20) = 0;
          v6 += 24LL;
          v100 = ++v70;
          v15 = v105;
        }
        goto LABEL_303;
      }
      if ( a6 )
        *a6 = 24 * ActiveProcessorCount;
      return -1073741820;
    case 0x18u:
      if ( Length == 20 )
      {
        *(_DWORD *)(v6 + 4) = KiMaximumDpcQueueDepth;
        *(_DWORD *)(v6 + 8) = KiMinimumDpcRate;
        *(_DWORD *)(v6 + 12) = KiAdjustDpcThreshold;
        *(_DWORD *)(v6 + 16) = KiIdealDpcRate;
        goto LABEL_292;
      }
      if ( a6 )
        *a6 = 20;
      return -1073741820;
    case 0x1Cu:
      if ( Length != 12 && Length != 24 )
      {
        if ( a6 )
          *a6 = 12;
        return -1073741820;
      }
      ExAcquireTimeRefreshLock(1u);
      v49 = KeTimeAdjustmentFrequency;
      v50 = KeTimeSynchronization;
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
      if ( Length == 24 )
      {
        *(_QWORD *)v6 = v49;
        *(_QWORD *)(v6 + 8) = MEMORY[0xFFFFF78000000300];
        *(_BYTE *)(v6 + 16) = v50;
      }
      else
      {
        *(_DWORD *)v6 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v49;
        *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
        *(_BYTE *)(v6 + 8) = v50;
      }
LABEL_136:
      Size = Length;
      goto LABEL_607;
    case 0x1Fu:
      SystemBasicInformation = EtwQueryPerformanceTraceInformation(v6, Length, v9, &Size);
      goto LABEL_606;
    case 0x21u:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      Size = 16;
      v64 = 0;
      v65 = 0;
      v100 = 0;
      if ( ActiveProcessorCount )
      {
        v66 = KiProcessorBlock;
        v67 = ActiveProcessorCount;
        v100 = ActiveProcessorCount;
        do
        {
          v64 += *(_DWORD *)(*v66 + 24632);
          v65 += *(_DWORD *)(*v66++ + 23472);
          --v67;
        }
        while ( v67 );
      }
      *(_DWORD *)v6 = v64;
      *(_DWORD *)(v6 + 4) = v65;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      goto LABEL_607;
    case 0x23u:
      if ( Length >= 2 )
      {
        *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
        Size = 2;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 2;
      return -1073741820;
    case 0x24u:
      if ( Length < 0x30 )
      {
        if ( a6 )
          *a6 = 48;
        return -1073741820;
      }
      v100 = 0;
      if ( ActiveProcessorCount )
      {
        v68 = KiProcessorBlock;
        v69 = ActiveProcessorCount;
        v100 = ActiveProcessorCount;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v68++ + 11580) + v8;
          --v69;
        }
        while ( v69 );
      }
      *(_DWORD *)v6 = v8;
      *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
      *(_DWORD *)(v6 + 8) = dword_1403711C8;
      *(_DWORD *)(v6 + 12) = dword_1403711C4;
      *(_DWORD *)(v6 + 16) = dword_1403711CC;
      *(_DWORD *)(v6 + 20) = dword_1403711D0;
      *(_DWORD *)(v6 + 24) = dword_1403711D8;
      *(_DWORD *)(v6 + 28) = dword_1403711D4;
      *(_DWORD *)(v6 + 32) = dword_1403711DC;
      *(_DWORD *)(v6 + 36) = dword_1403711E0;
      *(_DWORD *)(v6 + 40) = dword_1403711E4;
      *(_DWORD *)(v6 + 44) = dword_1403711E8;
      v10 = 48;
      goto LABEL_283;
    case 0x25u:
      if ( Length >= 0x10 )
      {
        SystemBasicInformation = CmQueryRegistryQuotaInformation(v6, v17, v16);
        Size = 16;
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x2Au:
      Size = 48 * ActiveProcessorCount;
      if ( Length < 48 * ActiveProcessorCount )
        goto LABEL_123;
      while ( 1 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v15;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        PoGetIdleTimes(&Size_4, (__int64)v171, 0LL);
        *(_OWORD *)v6 = v171[0];
        *(_OWORD *)(v6 + 16) = v171[1];
        *(_OWORD *)(v6 + 32) = v171[2];
        v6 += 48LL;
        LODWORD(v8) = v8 + 1;
        v15 = v105;
      }
      goto LABEL_607;
    case 0x2Bu:
      if ( Length >= 0x18 )
      {
        Size = Length;
        SystemBasicInformation = ExpQueryLegacyDriverInformation(v6, &Size, v16);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 24;
      return -1073741820;
    case 0x2Cu:
      if ( Length < 0xAC )
      {
        if ( a6 )
          *a6 = 172;
        return -1073741820;
      }
      ExAcquireTimeRefreshLock(1u);
      *(_OWORD *)v6 = ExpTimeZoneInformation;
      *(_OWORD *)(v6 + 16) = *((_OWORD *)&ExpTimeZoneInformation + 1);
      *(_OWORD *)(v6 + 32) = *((_OWORD *)&ExpTimeZoneInformation + 2);
      *(_OWORD *)(v6 + 48) = *((_OWORD *)&ExpTimeZoneInformation + 3);
      *(_OWORD *)(v6 + 64) = *((_OWORD *)&ExpTimeZoneInformation + 4);
      *(_OWORD *)(v6 + 80) = *((_OWORD *)&ExpTimeZoneInformation + 5);
      *(_OWORD *)(v6 + 96) = *((_OWORD *)&ExpTimeZoneInformation + 6);
      *(_OWORD *)(v6 + 112) = *((_OWORD *)&ExpTimeZoneInformation + 7);
      *(_OWORD *)(v6 + 128) = *((_OWORD *)&ExpTimeZoneInformation + 8);
      *(_OWORD *)(v6 + 144) = *((_OWORD *)&ExpTimeZoneInformation + 9);
      *(_QWORD *)(v6 + 160) = *((_QWORD *)&ExpTimeZoneInformation + 20);
      *(_DWORD *)(v6 + 168) = *((_DWORD *)&ExpTimeZoneInformation + 42);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
      Size = 172;
LABEL_303:
      BootGraphicsInformation = 0;
      goto LABEL_607;
    case 0x2Du:
      SystemBasicInformation = ExpGetLookasideInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0x32u:
      if ( Length == 8 )
      {
        *(_QWORD *)v6 = 0xFFFF800000000000uLL;
        goto LABEL_315;
      }
      if ( a6 )
        *a6 = 8;
      return -1073741820;
    case 0x33u:
      if ( Length >= 0x80 )
        goto LABEL_319;
      if ( a6 )
        *a6 = 128;
      return -1073741820;
    case 0x35u:
      if ( Length >= 0x10 )
      {
        v109 = *(_DWORD *)v6;
        v165 = *(_DWORD **)(v6 + 8);
        v144 = *(_DWORD *)(v6 + 4);
        ProbeForWrite(v165, v144, 4u);
        SystemBasicInformation = ExpGetProcessInformation(v165, v144, &Size, &v109, 5);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x37u:
      SystemBasicInformation = ExpQueryNumaProcessorMap(v6, Length, &Size);
      goto LABEL_606;
    case 0x38u:
      SystemBasicInformation = PfSnQueryPrefetcherInformation(a1, (__int128 *)v6, Length, v9, &Size);
      goto LABEL_606;
    case 0x3Au:
      if ( Length >= 4 )
      {
        *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
        goto LABEL_283;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0x3Bu:
      if ( Length != 4 )
      {
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      }
      if ( MEMORY[0xFFFFF780000002E0] != -1
        || (MEMORY[0xFFFFF780000002E0] = 0,
            result = ExpReadComPlusPackage(),
            BootGraphicsInformation = result,
            result >= 0) )
      {
        *(_DWORD *)v6 = MEMORY[0xFFFFF780000002E0];
        goto LABEL_283;
      }
      return result;
    case 0x3Cu:
      SystemBasicInformation = ExpQueryNumaAvailableMemory(v6, Length, &Size);
      goto LABEL_606;
    case 0x3Du:
      Size = 80 * ActiveProcessorCount;
      if ( Length < 80 * ActiveProcessorCount )
        goto LABEL_123;
      v138 = v6;
      while ( 1 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v15;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v48 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        PoGetPerfStateAndParkingInfo(&Size_4, v156, 0LL, &v137);
        memset((void *)v6, 0, 0x50uLL);
        *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                             * (unsigned __int64)(unsigned int)(*(_DWORD *)(v48 + 23428) + *(_DWORD *)(v48 + 23432));
        *(_QWORD *)(v6 + 48) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v48 + 24) + 652LL);
        if ( v156[28] )
        {
          *(_BYTE *)v6 = v156[8];
          *(_BYTE *)(v6 + 7) = v156[12];
          *(_BYTE *)(v6 + 8) = v156[16];
          *(_DWORD *)(v6 + 12) = 1;
        }
        *(_QWORD *)(v6 + 72) = v137;
        v6 += 80LL;
        v138 = v6;
        LODWORD(v8) = v8 + 1;
        v15 = v105;
      }
      goto LABEL_607;
    case 0x3Eu:
      if ( Length == 64 )
      {
        SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
        Size = 64;
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 0x3Fu:
      if ( Length >= 0xC )
      {
        SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(v6);
        Size = 12;
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 12;
      return -1073741820;
    case 0x40u:
      if ( Length < 0x38 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      if ( (v6 & 7) != 0 )
        return -2147483646;
      if ( !(unsigned int)ExIsRestrictedCaller(v9) )
      {
        SystemBasicInformation = ExpGetHandleInformationEx(v6, Length, &Size);
        goto LABEL_606;
      }
      return -1073741790;
    case 0x41u:
      if ( Length < 4 )
      {
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      }
      v100 = 0;
      if ( ActiveProcessorCount )
      {
        v74 = KiProcessorBlock;
        v75 = ActiveProcessorCount;
        v100 = ActiveProcessorCount;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v74++ + 23740) + v8;
          --v75;
        }
        while ( v75 );
      }
      *(_DWORD *)v6 = v8;
      goto LABEL_283;
    case 0x42u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)v6, Length, 1, &Size);
      goto LABEL_606;
    case 0x43u:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      v109 = *(_DWORD *)v6;
      v166 = *(_QWORD *)(v6 + 8);
      v62 = *(unsigned int *)(v6 + 4);
      v145 = *(_DWORD *)(v6 + 4);
      if ( (v166 & 7) != 0 )
        return -2147483646;
      SystemBasicInformation = ExGetSessionPoolTagInformation(v166, v62, &Size, &v109);
      goto LABEL_606;
    case 0x44u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      v109 = *(_DWORD *)(v6 + 8);
      if ( (v6 & 7) != 0 )
        return -2147483646;
      SystemBasicInformation = MmGetSessionMappedViewInformation(v6, Length, &Size, &v109);
      goto LABEL_606;
    case 0x45u:
      goto LABEL_427;
    case 0x46u:
      if ( Length != 4 )
      {
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      }
      *(_DWORD *)v6 = ObpObjectSecurityMode;
LABEL_283:
      Size = v10;
      goto LABEL_607;
    case 0x48u:
      if ( Length != 8 )
        return -1073741811;
      v76 = (unsigned int)(v17 - 7);
      if ( !(_DWORD)v76 )
      {
        *(_DWORD *)v6 = 7;
        LOBYTE(v8) = off_140353618[0] != xKdEnumerateDebuggingDevices;
        *(_DWORD *)(v6 + 4) = v8;
        goto LABEL_315;
      }
      if ( (_DWORD)v76 == 1 )
      {
        *(_DWORD *)v6 = 8;
        *(_DWORD *)(v6 + 4) = ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))off_140353610[0])(
                                a1,
                                v76,
                                v16);
LABEL_315:
        Size = 8;
        goto LABEL_607;
      }
      return -1073741637;
    case 0x49u:
      BootGraphicsInformation = KeBuildLogicalProcessorSystemInformation(v15, v6, Length, &Size);
      goto LABEL_607;
    case 0x4Cu:
      SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)v6);
      goto LABEL_606;
    case 0x4Du:
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      v57 = KeGetCurrentThread();
      --v57->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      v56 = ExpQueryModuleInformationEx(v58, v6, Length, &Size);
LABEL_182:
      BootGraphicsInformation = v56;
      ExReleaseResourceLite(&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_607;
    case 0x4Fu:
      SystemBasicInformation = PfQuerySuperfetchInformation(a1, v6, Length, v9, (__int64)&Size);
      goto LABEL_606;
    case 0x50u:
      SystemBasicInformation = MmQueryMemoryListInformation(
                                 (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                 (_OWORD *)v6,
                                 Length,
                                 0x140000000LL,
                                 &Size);
      goto LABEL_606;
    case 0x53u:
      Size = 8 * ActiveProcessorCount;
      if ( Length < 8 )
        goto LABEL_390;
      if ( Length < 8 * ActiveProcessorCount )
      {
        ActiveProcessorCount = Length >> 3;
        BootGraphicsInformation = -1073741820;
      }
      v125 = (_QWORD *)v6;
      KeFlushProcessWriteBuffers(1);
      for ( i = v105; ; i = v104 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = i;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v78 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 24) + 72LL);
        v79 = v125;
        *v125 = v78;
        v125 = v79 + 1;
        LODWORD(v8) = v100 + 1;
      }
      goto LABEL_607;
    case 0x56u:
      SystemBasicInformation = ObQueryRefTraceInformation((void *)v6, Length);
      goto LABEL_606;
    case 0x57u:
      Size = 8;
      if ( Length == 8 )
      {
        *(_DWORD *)v6 = MmSpecialPoolTag;
        LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
        *(_DWORD *)(v6 + 4) = v8;
      }
      else
      {
        BootGraphicsInformation = -1073741820;
      }
      goto LABEL_607;
    case 0x58u:
      Size = 24;
      if ( Length != 24 )
      {
        BootGraphicsInformation = -1073741820;
        goto LABEL_607;
      }
      *(_OWORD *)ProcessId = *(_OWORD *)v6;
      v124 = *(_QWORD *)(v6 + 16);
      if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
        return -1073741811;
      if ( v9 && WORD1(ProcessId[1]) )
      {
        if ( (v124 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v51 = v124 + WORD1(ProcessId[1]);
        if ( v51 > 0x7FFFFFFF0000LL || v51 < v124 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v52 = KeGetCurrentThread();
      v114 = WORD1(ProcessId[1]);
      --v52->KernelApcDisable;
      v53 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v53 < 0 )
      {
        KeLeaveCriticalRegionThread((__int64)v52);
        return v53;
      }
      BootGraphicsInformation = PsQueryFullProcessImageName(Process, v6 + 8, v124, &v114);
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      KeLeaveCriticalRegionThread((__int64)v52);
      if ( BootGraphicsInformation == -1073741820 )
        *(_WORD *)(v6 + 10) = v114;
      goto LABEL_607;
    case 0x5Au:
      Size = 32;
      if ( Length < 0x14 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      *(_OWORD *)v6 = ExpBootEnvironmentInformation;
      *(_DWORD *)(v6 + 16) = dword_14035E690;
      if ( Length < 0x20 )
LABEL_292:
        Size = 20;
      else
        *(_QWORD *)(v6 + 24) = qword_14035E698;
      goto LABEL_607;
    case 0x5Bu:
      SystemBasicInformation = HvlQueryEnlightenmentInfo(v6, Length, v9, &Size);
      goto LABEL_606;
    case 0x5Cu:
      if ( Length != 40 )
      {
        if ( a6 )
          *a6 = 40;
        return -1073741820;
      }
      SystemBasicInformation = VfGetVerifierInformationEx(v6, v17, v16);
      if ( SystemBasicInformation >= 0 )
        LODWORD(v8) = 40;
      Size = v8;
      goto LABEL_606;
    case 0x5Fu:
      if ( !v9 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741790;
      if ( Length >= 0x40 )
      {
        SystemBasicInformation = ExpCovQueryInformation(v6, Length, &Size);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 0x62u:
      SystemBasicInformation = IoQuerySystemDeviceName(98LL, v6, Length, &Size);
      goto LABEL_606;
    case 0x63u:
      SystemBasicInformation = IoQuerySystemDeviceName(99LL, v6, Length, &Size);
      goto LABEL_606;
    case 0x64u:
      v129[1] = v15;
      v129[0] = KeQueryGroupAffinity(v15);
      v45 = (0x101010101010101LL
           * ((((v129[0] - ((v129[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v129[0] - ((v129[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
             + ((((v129[0] - ((v129[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v129[0] - ((v129[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                  0LL,
                                  0,
                                  (unsigned int)((0x101010101010101LL
                                                * ((((v129[0] - ((v129[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + (((v129[0] - ((v129[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                  + ((((v129[0] - ((v129[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v129[0] - ((v129[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                  (__int64)v129,
                                  &NumberOfBytes);
      SystemBasicInformation = -1073741820;
      if ( BootGraphicsInformation != -1073741820 )
        goto LABEL_607;
      if ( NumberOfBytes > Length )
      {
        Size = NumberOfBytes;
        goto LABEL_606;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
      v47 = PoolWithTag;
      v106 = (unsigned __int16 *)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, NumberOfBytes);
        BootGraphicsInformation = PpmCapturePerformanceDistribution(v47, NumberOfBytes, v45, (__int64)v129, &Size);
        if ( BootGraphicsInformation >= 0 )
          memmove((void *)v6, v47, Size);
        ExFreePoolWithTag(v47, 0x744D5050u);
      }
      else
      {
        BootGraphicsInformation = -1073741670;
      }
      goto LABEL_607;
    case 0x65u:
      SystemBasicInformation = ExpQueryNumaProximityNode(v6, Length, &Size);
      goto LABEL_606;
    case 0x66u:
      if ( Length >= 0x1B0 )
      {
        ExAcquireTimeRefreshLock(1u);
        v72 = &ExpTimeZoneInformation;
        v73 = 3LL;
        do
        {
          *(_OWORD *)v6 = *v72;
          *(_OWORD *)(v6 + 16) = v72[1];
          *(_OWORD *)(v6 + 32) = v72[2];
          *(_OWORD *)(v6 + 48) = v72[3];
          *(_OWORD *)(v6 + 64) = v72[4];
          *(_OWORD *)(v6 + 80) = v72[5];
          *(_OWORD *)(v6 + 96) = v72[6];
          v6 += 128LL;
          *(_OWORD *)(v6 - 16) = v72[7];
          v72 += 8;
          --v73;
        }
        while ( v73 );
        *(_OWORD *)v6 = *v72;
        *(_OWORD *)(v6 + 16) = v72[1];
        *(_OWORD *)(v6 + 32) = v72[2];
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        Size = 432;
        BootGraphicsInformation = 0;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 432;
      return -1073741820;
    case 0x67u:
      SystemBasicInformation = SeCodeIntegrityQueryInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0x69u:
      BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))off_140354F48[0])(
                                  23LL,
                                  0LL,
                                  0LL,
                                  &NumberOfBytes);
      if ( BootGraphicsInformation != -1073741820 )
      {
LABEL_427:
        BootGraphicsInformation = -1073741637;
        goto LABEL_607;
      }
      v42 = NumberOfBytes;
      if ( Length < NumberOfBytes || !v6 )
      {
LABEL_111:
        Size = v42;
        goto LABEL_607;
      }
      v81 = v102;
      if ( v102 )
      {
        PoolWithQuotaTag = (unsigned __int16 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
        v106 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          BootGraphicsInformation = -1073741670;
          goto LABEL_607;
        }
        v42 = NumberOfBytes;
      }
      else
      {
        PoolWithQuotaTag = (unsigned __int16 *)v6;
        v106 = (unsigned __int16 *)v6;
      }
      v83 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned int *))off_140354F48[0])(
              23LL,
              v42,
              PoolWithQuotaTag,
              &Size);
      BootGraphicsInformation = v83;
      if ( !v81 )
        goto LABEL_607;
      if ( v83 >= 0 )
        goto LABEL_437;
      goto LABEL_438;
    case 0x6Au:
      BootGraphicsInformation = -1073741821;
      goto LABEL_607;
    case 0x6Bu:
      Size = Length;
      BootGraphicsInformation = KeQueryLogicalProcessorRelationship(
                                  0LL,
                                  RelationshipType,
                                  (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                  &Size);
      goto LABEL_607;
    case 0x6Cu:
      Size = 8 * ActiveProcessorCount;
      if ( Length < 8 )
        goto LABEL_390;
      if ( Length < 8 * ActiveProcessorCount )
      {
        ActiveProcessorCount = Length >> 3;
        BootGraphicsInformation = -1073741820;
      }
      v139 = v6;
      while ( 1 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v15;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v168 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 23608);
        *(_QWORD *)v6 = v168;
        v6 += 8LL;
        v139 = v6;
        LODWORD(v8) = v8 + 1;
        v15 = v105;
      }
      goto LABEL_607;
    case 0x6Du:
      SystemBasicInformation = SmQueryStoreInformation(a1, v6, Length, v9, &Size);
      goto LABEL_606;
    case 0x70u:
      SystemBasicInformation = IoQueryVhdBootInformation(a1, v6, Length, &Size);
      goto LABEL_606;
    case 0x71u:
      SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, Length, v9, &Size);
      goto LABEL_606;
    case 0x73u:
      if ( v101 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      Size = 8;
      if ( Length < 8 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
      *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
      goto LABEL_607;
    case 0x74u:
      SystemBasicInformation = IoQueryLowPriorityIoInformation(a1, (_DWORD *)v6, Length, &Size);
      goto LABEL_606;
    case 0x75u:
      Size = 888;
      if ( Length != 888 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      if ( v9 )
        return -1073741790;
      SystemBasicInformation = ExQueryBootEntropyInformation(v6, v17, v16);
      goto LABEL_606;
    case 0x76u:
      if ( Length >= 0x108 )
      {
LABEL_319:
        SystemBasicInformation = VfGetVerifierInformation((void *)v6, Length);
        goto LABEL_606;
      }
      if ( a6 )
        *a6 = 264;
      return -1073741820;
    case 0x79u:
      Size = 4 * (unsigned __int16)KeNumberNodes;
      if ( Length < Size )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      while ( 1 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= (unsigned __int16)KeNumberNodes )
          break;
        *(_DWORD *)(v6 + 4LL * (unsigned int)v8) = *((_DWORD *)KeNodeDistance
                                                   + (unsigned int)v8
                                                   + (unsigned __int16)v16 * (unsigned __int16)KeNumberNodes);
        LODWORD(v8) = v8 + 1;
      }
      goto LABEL_607;
    case 0x7Au:
      Size = 8;
      if ( Length != 8 || !v6 )
        goto LABEL_123;
      PoolWithQuotaTag = (unsigned __int16 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
      v106 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        BootGraphicsInformation = -1073741670;
        goto LABEL_607;
      }
      BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned int *))off_140354F48[0])(
                                  26LL,
                                  8LL,
                                  PoolWithQuotaTag,
                                  &Size);
      if ( BootGraphicsInformation >= 0 )
      {
        *(_DWORD *)v6 = *(_DWORD *)PoolWithQuotaTag;
        *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ *((_DWORD *)PoolWithQuotaTag + 1)) & 1;
        v84 = *(_DWORD *)(v6 + 4) ^ ((unsigned __int8)*(_DWORD *)(v6 + 4) ^ (unsigned __int8)*((_DWORD *)PoolWithQuotaTag
                                                                                             + 1)) & 2;
        *(_DWORD *)(v6 + 4) = v84;
        *(_DWORD *)(v6 + 4) = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)*((_DWORD *)PoolWithQuotaTag + 1)) & 4;
      }
      goto LABEL_438;
    case 0x7Bu:
      if ( Length != 32 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      *(_QWORD *)&v154 = MmGetAvailablePages(ProcessPartitionId);
      *((_QWORD *)&v154 + 1) = MmGetTotalCommittedPages(v35);
      *(_QWORD *)&v155 = MmGetTotalCommitLimit(v36);
      PeakCommitment = MmGetPeakCommitment(v37);
      if ( PeakCommitment < v39 )
        PeakCommitment = v39;
      *((_QWORD *)&v155 + 1) = PeakCommitment;
      *(_OWORD *)v6 = v154;
      *(_OWORD *)(v6 + 16) = v155;
      goto LABEL_534;
    case 0x7Cu:
      Size = 12;
      if ( Length < 4 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      v136 = *(_DWORD *)v6;
      if ( v136 == 1 )
      {
        Size = 12;
        if ( Length >= 0xC )
        {
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 4) = 0;
          *(_DWORD *)(v6 + 8) = 1;
          *(_DWORD *)(v6 + 4) = 1;
          if ( MEMORY[0xFFFFF780000003C6] )
            *(_DWORD *)(v6 + 4) &= ~1u;
        }
        else
        {
          BootGraphicsInformation = -1073741820;
        }
      }
      else
      {
        BootGraphicsInformation = -1073741637;
      }
      goto LABEL_607;
    case 0x7Du:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      v109 = *(_DWORD *)v6;
      v167 = *(_QWORD *)(v6 + 8);
      v63 = *(_DWORD *)(v6 + 4);
      v146 = v63;
      if ( (v167 & 7) != 0 )
        return -2147483646;
      if ( (unsigned int)ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemBasicInformation = ExGetSessionBigPoolInformation(v167, v63, &Size, &v109);
      goto LABEL_606;
    case 0x7Eu:
      Size = 32;
      if ( Length == 32 )
      {
        BootGraphicsInformation = BgkQueryBootGraphicsInformation(0LL, v170, v16);
        if ( BootGraphicsInformation >= 0 )
        {
          v85 = v170[0];
          if ( v102 )
            v85 = 0LL;
          v170[0] = v85;
          memmove((void *)v6, v170, Size);
        }
      }
      else
      {
        BootGraphicsInformation = -1073741820;
      }
      goto LABEL_607;
    case 0x80u:
      if ( v101 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      v89 = MmEnumerateBadPages(&v127);
      v90 = v127;
      if ( v127 )
        Size = 8 * *(_DWORD *)v127;
      else
        Size = 0;
      if ( Length < Size )
        v89 = -1073741820;
      BootGraphicsInformation = v89;
      if ( v127 )
      {
        if ( v89 >= 0 )
          memmove((void *)v6, (char *)v127 + 8, Size);
        ExFreePoolWithTag(v90, 0);
      }
      goto LABEL_607;
    case 0x85u:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      SystemBasicInformation = ExpGetSystemPlatformBinary(v6, Length, v9);
      goto LABEL_606;
    case 0x86u:
      Size = 32;
      if ( Length == 32 )
        SystemBasicInformation = ExHandleSPCall2(a1, v6, v16, 0x140000000uLL);
      else
        SystemBasicInformation = -1073741820;
      goto LABEL_606;
    case 0x87u:
      Size = 8;
      if ( Length < 8 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      if ( (unsigned int)HvlQueryActiveProcessors(&v119, 0LL) )
      {
        BootGraphicsInformation = -1073741637;
      }
      else
      {
        BootGraphicsInformation = HvlQueryProcessorTopologyCount(0LL, &v120);
        if ( BootGraphicsInformation )
        {
          BootGraphicsInformation = -1073741637;
        }
        else
        {
          *(_DWORD *)v6 = v119;
          *(_DWORD *)(v6 + 4) = v120;
        }
      }
      goto LABEL_607;
    case 0x88u:
    case 0x89u:
      if ( Length == 48 )
        return ExpGetDeviceDataInformation(v7, v6, 48LL);
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 0x8Au:
      SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)v6);
      goto LABEL_606;
    case 0x8Bu:
      SystemBasicInformation = ExpQueryChannelInformation((void *)v6);
      goto LABEL_606;
    case 0x8Cu:
      if ( a6 || Length >= 8 )
      {
        BootGraphicsInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v16);
        if ( BootGraphicsInformation >= 0 )
        {
          if ( Size )
          {
            if ( Length >= Size )
            {
              BootGraphicsInformation = BgkQueryBootGraphicsInformation(1LL, &P, v86);
              if ( BootGraphicsInformation >= 0 )
              {
                v87 = P;
                if ( P )
                {
                  memmove((void *)v6, P, Size);
                  ExFreePoolWithTag(v87, 0x4B494742u);
                }
                else
                {
                  BootGraphicsInformation = -1073741670;
                }
              }
            }
            else
            {
              BootGraphicsInformation = -1073741789;
            }
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
        }
      }
      else
      {
        BootGraphicsInformation = -1073741811;
      }
      goto LABEL_607;
    case 0x8Fu:
    case 0x91u:
    case 0xABu:
    case 0xB3u:
      SystemBasicInformation = SeSecureBootQueryInformation(v7, v6, Length, &Size);
      goto LABEL_606;
    case 0x93u:
      SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0x95u:
      if ( Length >= 3 )
      {
        *(_BYTE *)v6 = KdpBootedNodebug == 0;
        *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
        Size = 3;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 3;
      return -1073741820;
    case 0x96u:
      if ( !ExBootLoaderMetadata )
        goto LABEL_488;
      v88 = *(_DWORD *)ExBootLoaderMetadata;
      Size = *(_DWORD *)ExBootLoaderMetadata;
      if ( !v6 )
        goto LABEL_607;
      if ( Length < v88 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), Size);
      goto LABEL_607;
    case 0x97u:
      Size = 4;
      if ( Length >= 4 )
      {
        *(_DWORD *)v6 = ExSoftRebootFlags;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0x99u:
      if ( v101 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_606;
      }
      Size = 32;
      if ( Length < 0x20 )
      {
        if ( Length < 0xC )
        {
          BootGraphicsInformation = -1073741820;
        }
        else
        {
          Size = 12;
          *(_QWORD *)v6 = PoOffCrashConfigTable;
          *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
        }
      }
      else
      {
        *(_QWORD *)v6 = PoOffCrashConfigTable;
        *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
        *(_QWORD *)(v6 + 16) = xmmword_1403674D0;
        *(_DWORD *)(v6 + 24) = DWORD2(xmmword_1403674D0);
      }
      goto LABEL_607;
    case 0x9Au:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      BootGraphicsInformation = ExpGetSystemProcessorFeaturesInformation(v6, v17, v16);
LABEL_534:
      Size = 32;
      goto LABEL_607;
    case 0x9Cu:
      Size = 128;
      if ( Length == 128 )
      {
        BootGraphicsInformation = BgkQueryBootGraphicsInformation(3LL, v172, v16);
        if ( BootGraphicsInformation >= 0 )
          memmove((void *)v6, v172, Size);
      }
      else
      {
        BootGraphicsInformation = -1073741820;
      }
      goto LABEL_607;
    case 0x9Du:
      Size = WORD1(qword_14035E6A8) + 24;
      if ( Length >= Size )
      {
        v91 = (void *)(v6 + 24);
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_DWORD *)v6 = ExpManufacturingInformation;
        *(_DWORD *)(v6 + 8) = qword_14035E6A8;
        if ( (_WORD)qword_14035E6A8 )
        {
          *(_QWORD *)(v6 + 16) = v91;
          memmove(v91, qword_14035E6B0, WORD1(qword_14035E6A8));
        }
      }
      else
      {
        BootGraphicsInformation = -1073741820;
      }
      goto LABEL_607;
    case 0x9Eu:
      Size = 1;
      if ( Length )
      {
        *(_BYTE *)v6 = PoEnergyEstimationEnabled();
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 1;
      goto LABEL_123;
    case 0x9Fu:
      SystemBasicInformation = HvlQueryDetailInfo(v6, Length, v16, &Size);
      goto LABEL_606;
    case 0xA0u:
      Size = ActiveProcessorCount << 6;
      if ( Length < 0x40 )
        goto LABEL_390;
      if ( Length < ActiveProcessorCount << 6 )
      {
        ActiveProcessorCount = Length >> 6;
        BootGraphicsInformation = -1073741820;
      }
      v140 = v6;
      while ( 1 )
      {
        v100 = v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v15;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v92 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        KeQueryCycleTimeStatsProcessor(v92, (_QWORD *)v6);
        v6 += 64LL;
        v140 = v6;
        LODWORD(v8) = v8 + 1;
        v15 = v105;
      }
      goto LABEL_607;
    case 0xA2u:
      SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_606;
    case 0xA3u:
      if ( Length )
      {
        *(_BYTE *)v6 = KdIgnoreUmExceptions;
        Size = 1;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 1;
      return -1073741820;
    case 0xA4u:
    case 0xACu:
    case 0xBDu:
    case 0xBEu:
      if ( qword_1403626A8 )
        SystemBasicInformation = qword_1403626A8(v7, v6, Length, &Size);
      else
        SystemBasicInformation = -1073741823;
      goto LABEL_606;
    case 0xA5u:
      Size = 16;
      if ( Length == 16 )
      {
        v93 = (16 * ExpFirmwarePageProtectionSupported) & 0x10;
        v117 = v93;
        if ( VslIsSecureKernelRunning() )
        {
          v103[0] = 0;
          v94 = v93 | 1;
          LOBYTE(v117) = v94;
          NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
          if ( (NestedPageProtectionFlags & 2) != 0 )
          {
            v94 |= 2u;
            LOBYTE(v117) = v94;
          }
          if ( (NestedPageProtectionFlags & 0x20) != 0 )
          {
            v94 |= 4u;
            LOBYTE(v117) = v94;
          }
          if ( (NestedPageProtectionFlags & 0x10) != 0 )
            LOBYTE(v117) = v94 | 8;
          if ( v121 )
          {
            BootGraphicsInformation = VslIsTrustletRunning(v121, v103);
            BYTE1(v117) ^= (v103[0] ^ BYTE1(v117)) & 1;
          }
        }
        *(_OWORD *)v6 = v117;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 16;
LABEL_123:
      SystemBasicInformation = -1073741820;
      goto LABEL_606;
    case 0xA6u:
      SystemBasicInformation = SeQueryHSTIResults(v6, Length, &Size);
      goto LABEL_606;
    case 0xA7u:
      SystemBasicInformation = ExpQuerySingleModuleInformation(v6, Length, v9, &Size);
      goto LABEL_606;
    case 0xA9u:
      SystemBasicInformation = HvlQueryDmaProtectionInfo(v6, Length, &Size);
      goto LABEL_606;
    case 0xADu:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      Size = 168;
      if ( Length == 168 )
        SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)v6);
      else
        SystemBasicInformation = -1073741820;
      goto LABEL_606;
    case 0xAEu:
      SystemBasicInformation = PsRootSiloInformation(v6, Length, &Size);
      goto LABEL_606;
    case 0xAFu:
      if ( Handle )
      {
        result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &Object, 0LL);
        v8 = (__int64)Object;
        Process = (PEPROCESS)Object;
        if ( result < 0 )
          return result;
      }
      else
      {
        Process = 0LL;
      }
      BootGraphicsInformation = KeQueryCpuSetInformation((void *)v6);
      if ( v8 )
        ObfDereferenceObject((PVOID)v8);
      goto LABEL_607;
    case 0xB2u:
      if ( Length )
      {
        if ( v9 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v9) )
          return -1073741727;
        v96 = (unsigned __int16 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
        PoolWithQuotaTag = v96;
        v106 = v96;
        if ( v96 )
        {
          memset(v96, 0, Length);
          BootGraphicsInformation = VslQuerySecureKernelProfileInformation(
                                      v128,
                                      (__int64)PoolWithQuotaTag,
                                      Length,
                                      &Size);
          if ( BootGraphicsInformation >= 0 )
LABEL_437:
            memmove((void *)v6, PoolWithQuotaTag, Size);
LABEL_438:
          ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
        }
        else
        {
          BootGraphicsInformation = -1073741670;
        }
      }
      else
      {
        BootGraphicsInformation = -1073741789;
      }
      goto LABEL_607;
    case 0xB4u:
      SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)v106, v101, v6, Length, (__int64)&Size);
      goto LABEL_606;
    case 0xB5u:
      if ( Handle )
      {
        result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &v142, 0LL);
        v8 = (__int64)v142;
        Process = (PEPROCESS)v142;
        if ( result < 0 )
          return result;
      }
      else
      {
        Process = 0LL;
      }
      BootGraphicsInformation = PsWow64GetSupportedArchitectures((_DWORD *)v6, Length, &Size, v8);
      if ( v8 )
        ObfDereferenceObject((PVOID)v8);
      goto LABEL_607;
    case 0xB6u:
      if ( Length != 56 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      v22 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      v23 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v22) + 5776LL) << 12;
      *((_QWORD *)&v150 + 1) = MmGetAvailablePages(v22) << 12;
      *(_QWORD *)&v151 = MmGetResidentAvailablePages(v24) << 12;
      *((_QWORD *)&v151 + 1) = MmGetTotalCommittedPages(v25) << 12;
      MmGetTotalCommitLimit(v26);
      MmGetPeakCommitment(v27);
      *(_QWORD *)&v152 = MmGetSharedCommit() << 12;
      if ( v23 < v31 )
        v23 = v31;
      *(_QWORD *)&v150 = v23;
      if ( v29 < v30 )
        v29 = v30;
      *((_QWORD *)&v152 + 1) = v29;
      if ( v28 < v30 )
        v28 = v30;
      v153 = v28;
      *(_OWORD *)v6 = v150;
      *(_OWORD *)(v6 + 16) = v151;
      *(_OWORD *)(v6 + 32) = v152;
      *(_QWORD *)(v6 + 48) = v153;
      Size = 56;
      goto LABEL_607;
    case 0xB7u:
      if ( Length != 16 )
        return -1073741820;
      SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)v6, *(unsigned int *)(v6 + 8), v16);
      goto LABEL_606;
    case 0xB8u:
      if ( Length != 24 )
      {
        if ( a6 )
          *a6 = 24;
        return -1073741820;
      }
      v32 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      *(_QWORD *)&v148 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v32) + 5776LL) << 12;
      *((_QWORD *)&v148 + 1) = MmGetLowestPhysicalPage(v32) << 12;
      v149 = (MmGetHighestPhysicalPage(v33) << 12) + 4095;
      *(_OWORD *)v6 = v148;
      *(_QWORD *)(v6 + 16) = v149;
LABEL_87:
      Size = 24;
      goto LABEL_607;
    case 0xB9u:
      SystemBasicInformation = WbDispatchOperation((void *)v6, Length);
      goto LABEL_606;
    case 0xBAu:
      if ( !Length )
      {
        Data[0] = 1;
        return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
      }
      if ( a6 )
        *a6 = 0;
      return -1073741820;
    case 0xBCu:
      if ( Length != 8 )
        return -1073741820;
      BootGraphicsInformation = PsQueryActivityModerationUserSettings(&v143);
      if ( BootGraphicsInformation >= 0 )
        *(_QWORD *)v6 = v143;
      goto LABEL_607;
    case 0xC0u:
      if ( Length >= 0x20 )
      {
        BootGraphicsInformation = ExpGetSystemFlushInformation(v6, v17, v16);
        Size = 32;
        goto LABEL_607;
      }
      if ( a6 )
        *a6 = 32;
      return -1073741820;
    case 0xC1u:
      Size = 8 * KeQueryActiveGroupCount();
      if ( Length >= Size )
      {
        memset((void *)v6, 0, Size);
        while ( 1 )
        {
          v100 = v8;
          if ( (unsigned int)v8 >= (unsigned __int16)KeNumberNodes )
            break;
          v80 = KeNodeBlock[(unsigned int)v8];
          v104 = *(_WORD *)(v80 + 144);
          *(_QWORD *)(v6 + 8LL * v104) |= *(_QWORD *)(v80 + 16);
          LODWORD(v8) = v100 + 1;
        }
      }
      else
      {
LABEL_390:
        BootGraphicsInformation = -1073741789;
      }
      goto LABEL_607;
    case 0xC3u:
      if ( Length >= 8 )
      {
        SystemBasicInformation = ExpGetSystemWriteConstraintInformation(v6, v17, v16);
        Size = 8;
LABEL_606:
        BootGraphicsInformation = SystemBasicInformation;
LABEL_607:
        if ( a6 )
          *a6 = Size;
        return BootGraphicsInformation;
      }
      else
      {
        if ( a6 )
          *a6 = 8;
        return -1073741820;
      }
    case 0xC4u:
      SystemBasicInformation = KeQueryKvaShadowInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_606;
    case 0xC9u:
      SystemBasicInformation = KeQuerySpeculationControlInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_606;
    default:
      return -1073741821;
  }
}
