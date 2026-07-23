/*
 * XREFs of ExpQuerySystemInformation @ 0x140528170
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1404409A0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x140528020 (NtQuerySystemInformation.c)
 * Callees:
 *     PsQueryActivityModerationUserSettings @ 0x140004C9C (PsQueryActivityModerationUserSettings.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x140005D70 (KeGetRecommendedSharedDataAlignment.c)
 *     PsWow64GetSupportedArchitectures @ 0x14000AEB4 (PsWow64GetSupportedArchitectures.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14001D704 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14001D8A0 (ExpGetSystemBasicInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140031018 (MmQuerySystemWorkingSetInformation.c)
 *     KeQueryGroupAffinity @ 0x140031C80 (KeQueryGroupAffinity.c)
 *     KeQueryBootTimeValues @ 0x140033504 (KeQueryBootTimeValues.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400371F8 (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x14003CC40 (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x14003CC70 (VslIsSecureKernelRunning.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     MmGetSharedCommit @ 0x140084C80 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x140084C90 (MmGetResidentAvailablePages.c)
 *     MmGetPeakCommitment @ 0x140085120 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x14008513C (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x140085158 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x140085174 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x140085190 (MmGetProcessPartitionId.c)
 *     ExpGetSystemProcessorInformation @ 0x1400886A4 (ExpGetSystemProcessorInformation.c)
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetHighestPhysicalPage @ 0x1400DD8FC (MmGetHighestPhysicalPage.c)
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     KeQueryActiveGroupCount @ 0x14012E4F0 (KeQueryActiveGroupCount.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x140168578 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14017FA80 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1401E50B0 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1401E5270 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1401ED2A0 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401ED628 (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402055D0 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x140226910 (MmEnumerateBadPages.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1402333F8 (PpmCapturePerformanceDistribution.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140247BBC (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1402598CC (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x14025ADD0 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeQueryKvaShadowInformation @ 0x14041CDB0 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14041CED8 (KeQuerySpeculationControlInformation.c)
 *     ExGetPoolTagInfo @ 0x14043E8C8 (ExGetPoolTagInfo.c)
 *     ExHandleSPCall2 @ 0x140440AC4 (ExHandleSPCall2.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14044300C (KeBuildLogicalProcessorSystemInformation.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     PfSnQueryPrefetcherInformation @ 0x140449D1C (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x14044ABD8 (ExpGetSystemFlushInformation.c)
 *     SeSecureBootQueryInformation @ 0x140458FE8 (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x14045B238 (IoQueryLowPriorityIoInformation.c)
 *     SmQueryStoreInformation @ 0x14045D83C (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x14045EAB8 (ExpReadComPlusPackage.c)
 *     ExpQueryModuleInformation @ 0x1404C0FD0 (ExpQueryModuleInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x1404C76E4 (ExGetSessionPoolTagInformation.c)
 *     MmGetPageFileInformation @ 0x1404C829C (MmGetPageFileInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1404DA698 (ExpQueryNumaProcessorMap.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     PsQueryFullProcessImageName @ 0x1404ECB24 (PsQueryFullProcessImageName.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14055C888 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     IoQuerySystemDeviceName @ 0x14056938C (IoQuerySystemDeviceName.c)
 *     SeQueryHSTIResults @ 0x140576058 (SeQueryHSTIResults.c)
 *     CmQueryRegistryQuotaInformation @ 0x140595DF0 (CmQueryRegistryQuotaInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140599708 (ExpQueryNumaAvailableMemory.c)
 *     ExQueryBootEntropyInformation @ 0x1405A76B4 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1405BD6A0 (ExpQueryModuleInformationEx.c)
 *     KeQueryCpuSetInformation @ 0x1405CBA44 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1405CE4A8 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1405D2458 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     HvlQueryEnlightenmentInfo @ 0x1405D4E30 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1405D4FD0 (IoQueryVhdBootInformation.c)
 *     HvlQueryDetailInfo @ 0x1406873BC (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x1406874D4 (HvlQueryDmaProtectionInfo.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1406C22F4 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1406DE440 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x140714E94 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x140715094 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140715108 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14071517C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407151F0 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x140715274 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpQueryChannelInformation @ 0x140715400 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14071553C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x140715A04 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaProximityNode @ 0x140715AF0 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140715C44 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x140715E58 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     BgkQueryBootGraphicsInformation @ 0x140757760 (BgkQueryBootGraphicsInformation.c)
 *     VfGetVerifierInformation @ 0x140787F5C (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x140788020 (VfGetVerifierInformationEx.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        int *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r11d
  PVOID v8; // rbx
  unsigned __int8 v9; // r10
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  ULONG ActiveProcessorCount; // r13d
  unsigned __int16 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  USHORT v21; // cx
  NTSTATUS result; // eax
  int SystemBasicInformation; // eax
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // rbx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // cx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // cx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // cx
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v41; // r8
  unsigned int v42; // ecx
  ULONG v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int *v46; // rdx
  unsigned __int64 v47; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v49; // rbx
  __int64 v50; // rsi
  int v51; // ebx
  char v52; // si
  char *v53; // rdx
  struct _KTHREAD *v54; // rsi
  NTSTATUS v55; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v57; // rcx
  int v58; // eax
  struct _KTHREAD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  unsigned int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // edi
  int v66; // ecx
  int v67; // edx
  __int64 *v68; // r12
  __int64 v69; // r8
  __int64 *v70; // r12
  __int64 v71; // rdx
  ULONG v72; // esi
  _DWORD *v73; // rdx
  _OWORD *v74; // rcx
  __int64 v75; // rax
  int SystemFirmwareTableInformation; // eax
  __int64 *v77; // r12
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned __int8 v82; // r12
  int *PoolWithQuotaTag; // rbx
  int v84; // eax
  int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  PVOID v89; // rbx
  unsigned int v90; // ecx
  int v91; // r15d
  PVOID v92; // r12
  void *v93; // rcx
  __int64 v94; // r11
  unsigned int v95; // r10d
  unsigned int v96; // r9d
  unsigned __int8 v97; // bl
  char v98; // bl
  char NestedPageProtectionFlags; // al
  int *v100; // rax
  int SystemProcessorInformation; // [rsp+30h] [rbp-428h]
  unsigned int Size; // [rsp+34h] [rbp-424h] BYREF
  _PROCESSOR_NUMBER Size_4; // [rsp+38h] [rbp-420h] BYREF
  unsigned int i; // [rsp+3Ch] [rbp-41Ch]
  unsigned __int8 v105; // [rsp+40h] [rbp-418h]
  unsigned int v106; // [rsp+44h] [rbp-414h]
  char v107[4]; // [rsp+48h] [rbp-410h] BYREF
  USHORT v108; // [rsp+4Ch] [rbp-40Ch]
  int *v109; // [rsp+50h] [rbp-408h]
  char Data[65]; // [rsp+8Fh] [rbp-3C9h] BYREF
  unsigned __int16 v111; // [rsp+D0h] [rbp-388h]
  _DWORD v112[3]; // [rsp+DCh] [rbp-37Ch] BYREF
  unsigned int *v113; // [rsp+E8h] [rbp-370h]
  unsigned int NumberOfBytes; // [rsp+F0h] [rbp-368h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+F4h] [rbp-364h]
  unsigned int v116; // [rsp+F8h] [rbp-360h]
  unsigned int v117; // [rsp+FCh] [rbp-35Ch] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+100h] [rbp-358h]
  PEPROCESS Process; // [rsp+108h] [rbp-350h] BYREF
  __int128 v120; // [rsp+110h] [rbp-348h]
  __int64 v121; // [rsp+120h] [rbp-338h]
  int v122; // [rsp+128h] [rbp-330h]
  unsigned int v123; // [rsp+12Ch] [rbp-32Ch] BYREF
  int v124; // [rsp+130h] [rbp-328h] BYREF
  unsigned int v125; // [rsp+134h] [rbp-324h]
  unsigned int v126; // [rsp+138h] [rbp-320h]
  HANDLE Handle; // [rsp+140h] [rbp-318h]
  HANDLE ProcessId[2]; // [rsp+148h] [rbp-310h]
  char *v129; // [rsp+158h] [rbp-300h]
  _QWORD *v130; // [rsp+160h] [rbp-2F8h]
  PVOID P; // [rsp+168h] [rbp-2F0h] BYREF
  PVOID v132; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v133; // [rsp+178h] [rbp-2E0h]
  __int64 v134; // [rsp+180h] [rbp-2D8h]
  _QWORD v135[2]; // [rsp+188h] [rbp-2D0h] BYREF
  LARGE_INTEGER Src; // [rsp+198h] [rbp-2C0h] BYREF
  __int64 v137; // [rsp+1A0h] [rbp-2B8h] BYREF
  __int64 v138; // [rsp+1A8h] [rbp-2B0h]
  __int64 v139; // [rsp+1B0h] [rbp-2A8h]
  __int64 v140; // [rsp+1B8h] [rbp-2A0h] BYREF
  __int64 v141; // [rsp+1C0h] [rbp-298h]
  int v142; // [rsp+1CCh] [rbp-28Ch]
  unsigned __int64 v143; // [rsp+1D8h] [rbp-280h] BYREF
  __int64 v144; // [rsp+1E0h] [rbp-278h]
  __int64 v145; // [rsp+1E8h] [rbp-270h]
  PVOID Object; // [rsp+1F0h] [rbp-268h] BYREF
  PVOID v147[2]; // [rsp+1F8h] [rbp-260h] BYREF
  __int64 v148; // [rsp+208h] [rbp-250h] BYREF
  unsigned int v149; // [rsp+210h] [rbp-248h]
  int v150; // [rsp+214h] [rbp-244h]
  unsigned int v151; // [rsp+218h] [rbp-240h]
  int v152; // [rsp+21Ch] [rbp-23Ch]
  __int128 v153; // [rsp+220h] [rbp-238h]
  __int64 v154; // [rsp+230h] [rbp-228h]
  __int128 v155; // [rsp+238h] [rbp-220h]
  __int128 v156; // [rsp+248h] [rbp-210h]
  __int128 v157; // [rsp+258h] [rbp-200h]
  unsigned __int64 v158; // [rsp+268h] [rbp-1F0h]
  __int128 v159; // [rsp+270h] [rbp-1E8h]
  __int128 v160; // [rsp+280h] [rbp-1D8h]
  int v161; // [rsp+290h] [rbp-1C8h] BYREF
  char v162; // [rsp+298h] [rbp-1C0h]
  char v163; // [rsp+29Ch] [rbp-1BCh]
  char v164; // [rsp+2A0h] [rbp-1B8h]
  char v165; // [rsp+2ACh] [rbp-1ACh]
  _QWORD v166[2]; // [rsp+2B0h] [rbp-1A8h] BYREF
  int v167; // [rsp+2C0h] [rbp-198h]
  __int64 v168; // [rsp+2C8h] [rbp-190h]
  __int64 v169; // [rsp+2D0h] [rbp-188h]
  __int64 v170; // [rsp+2D8h] [rbp-180h]
  __int64 v171; // [rsp+2E0h] [rbp-178h]
  int v172; // [rsp+2E8h] [rbp-170h]
  int v173; // [rsp+2ECh] [rbp-16Ch]
  __int64 v174; // [rsp+2F0h] [rbp-168h]
  __int64 v175; // [rsp+2F8h] [rbp-160h]
  __int64 v176; // [rsp+300h] [rbp-158h]
  volatile void *v177; // [rsp+308h] [rbp-150h]
  __int64 v178; // [rsp+310h] [rbp-148h]
  __int64 v179; // [rsp+318h] [rbp-140h]
  __int64 v180; // [rsp+320h] [rbp-138h]
  _DWORD v181[4]; // [rsp+328h] [rbp-130h] BYREF
  _QWORD v182[4]; // [rsp+338h] [rbp-120h] BYREF
  _OWORD v183[3]; // [rsp+358h] [rbp-100h] BYREF
  _BYTE v184[128]; // [rsp+390h] [rbp-C8h] BYREF

  v6 = a4;
  v106 = a3;
  v109 = a2;
  v7 = a1;
  v116 = a1;
  v113 = a6;
  v8 = 0LL;
  Size = 0;
  SystemProcessorInformation = 0;
  v9 = KeGetCurrentThread()->gap0[10];
  v105 = v9;
  if ( !v9 )
    goto LABEL_34;
  v10 = 4;
  if ( a1 == 35 )
  {
LABEL_19:
    v10 = 1;
    goto LABEL_20;
  }
  if ( a1 != 12 )
  {
    if ( a1 == 88
      || a1 == 5
      || a1 == 57
      || a1 == 148
      || a1 == 17
      || a1 == 95
      || a1 == 108
      || a1 == 133
      || a1 == 138
      || a1 == 139
      || a1 == 126
      || a1 == 140
      || a1 != 147 && a1 != 158 )
    {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v10 = 8;
LABEL_20:
  if ( Length )
  {
    v11 = a4;
    if ( ((v10 - 1) & (unsigned int)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a4 + Length - 1LL;
    if ( a4 > v12 || v12 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
  }
  if ( a6 )
  {
    v14 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
LABEL_34:
  Size = 0;
  RelationshipType = RelationAll;
  ActiveProcessorCount = 0;
  v16 = 0;
  v108 = 0;
  v17 = 0LL;
  v111 = 0;
  v121 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v134 = 0LL;
  v19 = 9LL;
  NumberOfBytes_4 = 9;
  v122 = 9;
  v20 = 0x140000000uLL;
  switch ( v7 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v16 = -1;
      v108 = -1;
      v21 = -1;
      goto LABEL_36;
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x22u:
    case 0x23u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Eu:
    case 0x3Fu:
    case 0x40u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x5Eu:
    case 0x5Fu:
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Cu:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
    case 0xACu:
    case 0xADu:
    case 0xAEu:
    case 0xB0u:
    case 0xB1u:
    case 0xB3u:
    case 0xB4u:
      goto LABEL_55;
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
      if ( v106 < 2 )
        return -1073741811;
      v108 = *(_WORD *)v109;
      v16 = v108;
      if ( v108 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v21 = v108;
LABEL_36:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v21);
      v9 = v105;
      v7 = v116;
      v19 = NumberOfBytes_4;
      v17 = v111;
      v18 = 0LL;
      goto LABEL_55;
    case 0x48u:
      if ( v106 != 4 )
        return -1073741811;
      v19 = (unsigned int)*v109;
      v122 = *v109;
      goto LABEL_55;
    case 0x6Bu:
      if ( v106 < 4 )
        return -1073741811;
      RelationshipType = *v109;
      goto LABEL_55;
    case 0x79u:
      if ( v106 < 2 )
        return -1073741811;
      v111 = *(_WORD *)v109;
      v17 = v111;
      if ( v111 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      goto LABEL_55;
    case 0xA5u:
      v121 = 0LL;
      if ( v106 )
      {
        if ( v106 != 8 )
          return -1073741811;
        v121 = *(_QWORD *)v109;
      }
      else
      {
        v121 = 0LL;
      }
LABEL_55:
      v20 = 0x140000000uLL;
      break;
    case 0xAFu:
    case 0xB5u:
      if ( v106 != 8 )
        return -1073741811;
      v18 = *(_QWORD *)v109;
      Handle = *(HANDLE *)v109;
      goto LABEL_55;
    case 0xB2u:
      if ( v106 != 8 )
        return -1073741811;
      v134 = *(_QWORD *)v109;
      goto LABEL_55;
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
        goto LABEL_602;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 1u:
      if ( Length >= 0xC )
      {
        SystemProcessorInformation = ExpGetSystemProcessorInformation(v6);
        goto LABEL_70;
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
      ExpQuerySystemPerformanceInformation(ActiveProcessorCount, (void *)v6, (unsigned int)v8);
      goto LABEL_328;
    case 3u:
      if ( Length <= 0x30 )
      {
        Src.QuadPart = 0LL;
        v137 = 0LL;
        v138 = 0LL;
        v139 = 0LL;
        v140 = 0LL;
        v141 = 0LL;
        KeQueryBootTimeValues(&v137, &Src, &v140);
        v138 = ExpTimeZoneBias;
        LODWORD(v139) = ExpCurrentTimeZoneId;
        v141 = MEMORY[0xFFFFF780000003B0];
        memmove((void *)v6, &Src, Length);
        Size = Length;
        goto LABEL_604;
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
      SystemProcessorInformation = ExpGetProcessInformation(v6, Length, (unsigned int)&Size, 0, v7);
      goto LABEL_604;
    case 6u:
      return -1073741637;
    case 7u:
      if ( Length == 24 )
      {
        *(_DWORD *)v6 = dword_1407AC6B0;
        *(_DWORD *)(v6 + 4) = dword_1407AC6B4;
        *(_DWORD *)(v6 + 8) = dword_1407AC6B8;
        *(_DWORD *)(v6 + 12) = dword_1407AC6BC;
        *(_DWORD *)(v6 + 16) = dword_1407AC6C4;
        *(_DWORD *)(v6 + 20) = dword_1407AC6C8;
        goto LABEL_89;
      }
      if ( a6 )
        *a6 = 24;
      return -1073741820;
    case 8u:
    case 0x8Du:
      v42 = 48;
      if ( v7 != 8 )
        v42 = 72;
      NumberOfBytes_4 = v42;
      if ( !Length || Length % v42 )
      {
        if ( a6 )
          *a6 = ActiveProcessorCount * v42;
        return -1073741820;
      }
      v106 = 0;
      v43 = 0;
      i = 0;
      while ( v43 < ActiveProcessorCount )
      {
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v43;
        v109 = (int *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        LODWORD(v44) = v106;
        if ( Length < v106 + NumberOfBytes_4 )
          goto LABEL_113;
        v106 += NumberOfBytes_4;
        PoGetIdleTimes(&Size_4, 0LL, (__int64)v181);
        v45 = KeMaximumIncrement;
        v46 = v109;
        *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v109[5858];
        *(_QWORD *)(v6 + 8) = v45 * v181[1];
        *(_QWORD *)(v6 + 24) = v45 * (unsigned int)v46[5859];
        *(_QWORD *)(v6 + 32) = v45 * (unsigned int)v46[5860];
        *(_QWORD *)v6 = v45 * v181[0];
        *(_DWORD *)(v6 + 40) = v46[5856];
        if ( v116 == 141 )
        {
          *(_QWORD *)(v6 + 48) = v45 * (unsigned int)v46[5868];
          *(_DWORD *)(v6 + 44) = 0;
          *(_QWORD *)(v6 + 56) = 0LL;
          *(_QWORD *)(v6 + 64) = 0LL;
        }
        v6 += NumberOfBytes_4;
        v43 = ++i;
      }
      LODWORD(v44) = v106;
      goto LABEL_113;
    case 9u:
      if ( Length == 4 )
      {
        *(_DWORD *)v6 = NtGlobalFlag;
        goto LABEL_177;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0xBu:
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
      v58 = ExpQueryModuleInformation(v57, (_DWORD *)v6, Length, &Size);
      goto LABEL_181;
    case 0xCu:
      if ( Length < 0x38 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemProcessorInformation = ExpGetLockInformation(v6, Length, &Size);
      goto LABEL_604;
    case 0xDu:
      if ( Length >= 0x128 )
        goto LABEL_193;
      if ( a6 )
        *a6 = 296;
      return -1073741820;
    case 0xEu:
    case 0xFu:
    case 0x13u:
LABEL_193:
      SystemProcessorInformation = -1073741822;
      goto LABEL_604;
    case 0x10u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( (v6 & 7) != 0 )
        return -2147483646;
      if ( !ExIsRestrictedCaller(v9) )
      {
        SystemProcessorInformation = ExpGetHandleInformation(v6, Length, &Size);
        goto LABEL_604;
      }
      return -1073741790;
    case 0x11u:
      if ( Length < 0x40 )
      {
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      }
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemProcessorInformation = ExpGetObjectInformation(v6, Length, &Size);
      goto LABEL_604;
    case 0x12u:
    case 0x90u:
      v61 = 40LL;
      if ( v7 == 18 )
        v61 = 32LL;
      Size = v61;
      if ( Length >= (unsigned int)v61 )
      {
        Size = 0;
        LOBYTE(v8) = v7 == 144;
        SystemProcessorInformation = MmGetPageFileInformation(v61, v6, Length, (int)v8, &Size);
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = v61;
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
      v62 = 2;
      if ( v7 == 119 )
      {
        v63 = 3;
      }
      else
      {
        if ( v7 == 120 )
          v62 = 4;
        v63 = v62;
      }
      MmQuerySystemWorkingSetInformation(v63, v166);
      *(_QWORD *)v6 = v166[0];
      *(_QWORD *)(v6 + 8) = v166[1];
      *(_DWORD *)(v6 + 16) = v167;
      i = 64;
      *(_QWORD *)(v6 + 24) = v168;
      *(_QWORD *)(v6 + 32) = v169;
      *(_QWORD *)(v6 + 40) = v170;
      *(_QWORD *)(v6 + 48) = v171;
      *(_DWORD *)(v6 + 56) = v172;
      *(_DWORD *)(v6 + 60) = v173;
      goto LABEL_603;
    case 0x16u:
      if ( Length >= 0x30 )
      {
        SystemProcessorInformation = ExGetPoolTagInfo((_DWORD *)v6, Length, (int *)&Size);
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 0x17u:
      Size = 24 * ActiveProcessorCount;
      if ( Length >= 24 * ActiveProcessorCount )
      {
        v72 = 0;
        i = 0;
        while ( v72 < ActiveProcessorCount )
        {
          Size_4.Group = v16;
          *(_WORD *)&Size_4.Number = (unsigned __int8)v72;
          v73 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
          v152 = v73[2895];
          *(_DWORD *)v6 = v152;
          *(_DWORD *)(v6 + 4) = v73[2951];
          *(_DWORD *)(v6 + 8) = v73[2967];
          *(_DWORD *)(v6 + 12) = KeTimeIncrement;
          *(_DWORD *)(v6 + 16) = 0;
          *(_DWORD *)(v6 + 20) = 0;
          v6 += 24LL;
          i = ++v72;
        }
        goto LABEL_301;
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
        goto LABEL_290;
      }
      if ( a6 )
        *a6 = 20;
      return -1073741820;
    case 0x1Cu:
      if ( Length != 12 )
      {
        if ( a6 )
          *a6 = 12;
        return -1073741820;
      }
      LOBYTE(v20) = 1;
      ExAcquireTimeRefreshLock(v20);
      v51 = KeTimeAdjustment;
      v52 = KeTimeSynchronization;
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
      *(_DWORD *)v6 = v51;
      *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
      *(_BYTE *)(v6 + 8) = v52;
LABEL_70:
      Size = 12;
      goto LABEL_604;
    case 0x1Fu:
      SystemFirmwareTableInformation = EtwQueryPerformanceTraceInformation(v6, Length, v9, &Size);
      goto LABEL_318;
    case 0x21u:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      Size = 16;
      v66 = 0;
      v67 = 0;
      i = 0;
      if ( ActiveProcessorCount )
      {
        v68 = KiProcessorBlock;
        v69 = ActiveProcessorCount;
        i = ActiveProcessorCount;
        do
        {
          v66 += *(_DWORD *)(*v68 + 24560);
          v67 += *(_DWORD *)(*v68++ + 23476);
          --v69;
        }
        while ( v69 );
      }
      *(_DWORD *)v6 = v66;
      *(_DWORD *)(v6 + 4) = v67;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      goto LABEL_604;
    case 0x23u:
      if ( Length >= 2 )
      {
        *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
        Size = 2;
        goto LABEL_604;
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
      i = 0;
      if ( ActiveProcessorCount )
      {
        v70 = KiProcessorBlock;
        v71 = ActiveProcessorCount;
        i = ActiveProcessorCount;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v70++ + 11580) + (_DWORD)v8;
          --v71;
        }
        while ( v71 );
      }
      *(_DWORD *)v6 = (_DWORD)v8;
      *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
      *(_DWORD *)(v6 + 8) = dword_1403566A8;
      *(_DWORD *)(v6 + 12) = dword_1403566A4;
      *(_DWORD *)(v6 + 16) = dword_1403566AC;
      *(_DWORD *)(v6 + 20) = dword_1403566B0;
      *(_DWORD *)(v6 + 24) = dword_1403566B8;
      *(_DWORD *)(v6 + 28) = dword_1403566B4;
      *(_DWORD *)(v6 + 32) = dword_1403566BC;
      *(_DWORD *)(v6 + 36) = dword_1403566C0;
      *(_DWORD *)(v6 + 40) = dword_1403566C4;
      *(_DWORD *)(v6 + 44) = dword_1403566C8;
      Size = 48;
      goto LABEL_604;
    case 0x25u:
      if ( Length >= 0x10 )
      {
        SystemProcessorInformation = CmQueryRegistryQuotaInformation(v6, v19, v17, v18);
        Size = 16;
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x2Au:
      Size = 48 * ActiveProcessorCount;
      if ( Length < 48 * ActiveProcessorCount )
        goto LABEL_125;
      while ( 1 )
      {
        i = (unsigned int)v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        PoGetIdleTimes(&Size_4, (__int64)v183, 0LL);
        *(_OWORD *)v6 = v183[0];
        *(_OWORD *)(v6 + 16) = v183[1];
        *(_OWORD *)(v6 + 32) = v183[2];
        v6 += 48LL;
        LODWORD(v8) = (_DWORD)v8 + 1;
      }
      goto LABEL_604;
    case 0x2Bu:
      if ( Length >= 0x18 )
      {
        Size = Length;
        SystemFirmwareTableInformation = ExpQueryLegacyDriverInformation(v6, &Size, v17, v18);
        goto LABEL_318;
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
      LOBYTE(v20) = 1;
      ExAcquireTimeRefreshLock(v20);
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
LABEL_301:
      SystemProcessorInformation = 0;
      goto LABEL_604;
    case 0x2Du:
      SystemProcessorInformation = ExpGetLookasideInformation(v6, Length, &Size);
      goto LABEL_604;
    case 0x32u:
      if ( Length == 8 )
      {
        *(_QWORD *)v6 = 0xFFFF800000000000uLL;
        goto LABEL_313;
      }
      if ( a6 )
        *a6 = 8;
      return -1073741820;
    case 0x33u:
      if ( Length >= 0x80 )
        goto LABEL_317;
      if ( a6 )
        *a6 = 128;
      return -1073741820;
    case 0x35u:
      if ( Length >= 0x10 )
      {
        v112[0] = *(_DWORD *)v6;
        v177 = *(volatile void **)(v6 + 8);
        v149 = *(_DWORD *)(v6 + 4);
        ProbeForWrite(v177, v149, 4u);
        SystemProcessorInformation = ExpGetProcessInformation(
                                       (_DWORD)v177,
                                       v149,
                                       (unsigned int)&Size,
                                       (unsigned int)v112,
                                       5);
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x37u:
      SystemFirmwareTableInformation = ExpQueryNumaProcessorMap((_DWORD *)v6, Length, &Size);
      goto LABEL_318;
    case 0x38u:
      SystemFirmwareTableInformation = PfSnQueryPrefetcherInformation(0x140000000LL, (__int128 *)v6, Length, v9, &Size);
      goto LABEL_318;
    case 0x3Au:
      if ( Length >= 4 )
      {
        *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
        goto LABEL_177;
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
            SystemProcessorInformation = result,
            result >= 0) )
      {
        *(_DWORD *)v6 = MEMORY[0xFFFFF780000002E0];
        goto LABEL_177;
      }
      return result;
    case 0x3Cu:
      SystemFirmwareTableInformation = ExpQueryNumaAvailableMemory(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0x3Du:
      Size = 80 * ActiveProcessorCount;
      if ( Length < 80 * ActiveProcessorCount )
        goto LABEL_125;
      v144 = v6;
      while ( 1 )
      {
        i = (unsigned int)v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v50 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        PoGetPerfStateAndParkingInfo(&Size_4, &v161, 0LL, &v143);
        memset((void *)v6, 0, 0x50uLL);
        *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                             * (unsigned __int64)(unsigned int)(*(_DWORD *)(v50 + 23428) + *(_DWORD *)(v50 + 23432));
        *(_QWORD *)(v6 + 48) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v50 + 24) + 652LL);
        if ( v165 )
        {
          *(_BYTE *)v6 = v162;
          *(_BYTE *)(v6 + 7) = v163;
          *(_BYTE *)(v6 + 8) = v164;
          *(_DWORD *)(v6 + 12) = 1;
        }
        *(_QWORD *)(v6 + 72) = v143;
        v6 += 80LL;
        v144 = v6;
        LODWORD(v8) = (_DWORD)v8 + 1;
      }
      goto LABEL_604;
    case 0x3Eu:
      if ( Length != 64 )
      {
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      }
      SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
LABEL_602:
      SystemProcessorInformation = SystemBasicInformation;
LABEL_603:
      Size = 64;
      goto LABEL_604;
    case 0x3Fu:
      if ( Length >= 0xC )
      {
        SystemProcessorInformation = ExpGetSystemEmulationProcessorInformation(v6);
        Size = 12;
        goto LABEL_604;
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
      if ( !ExIsRestrictedCaller(v9) )
      {
        SystemProcessorInformation = ExpGetHandleInformationEx(v6, Length, &Size);
        goto LABEL_604;
      }
      return -1073741790;
    case 0x41u:
      if ( Length < 4 )
      {
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      }
      i = 0;
      if ( ActiveProcessorCount )
      {
        v77 = KiProcessorBlock;
        v78 = ActiveProcessorCount;
        i = ActiveProcessorCount;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v77++ + 23868) + (_DWORD)v8;
          --v78;
        }
        while ( v78 );
      }
      *(_DWORD *)v6 = (_DWORD)v8;
      Size = 4;
      goto LABEL_604;
    case 0x42u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemProcessorInformation = ExGetBigPoolInfo((_DWORD *)v6, Length, 1, &Size);
      goto LABEL_604;
    case 0x43u:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      v112[0] = *(_DWORD *)v6;
      v178 = *(_QWORD *)(v6 + 8);
      v64 = *(unsigned int *)(v6 + 4);
      v150 = *(_DWORD *)(v6 + 4);
      if ( (v178 & 7) != 0 )
        return -2147483646;
      SystemProcessorInformation = ExGetSessionPoolTagInformation(v178, v64, &Size, v112);
      goto LABEL_604;
    case 0x44u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      v112[0] = *(_DWORD *)(v6 + 8);
      if ( (v6 & 7) != 0 )
        return -2147483646;
      SystemProcessorInformation = MmGetSessionMappedViewInformation(v6, Length, &Size, v112);
      goto LABEL_604;
    case 0x45u:
      goto LABEL_422;
    case 0x46u:
      if ( Length != 4 )
      {
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      }
      *(_DWORD *)v6 = ObpObjectSecurityMode;
LABEL_177:
      Size = 4;
      goto LABEL_604;
    case 0x48u:
      if ( Length != 8 )
        return -1073741811;
      v180 = v6;
      v79 = (unsigned int)(v19 - 7);
      if ( !(_DWORD)v79 )
      {
        *(_DWORD *)v6 = 7;
        LOBYTE(v8) = off_14033B5E8[0] != xKdEnumerateDebuggingDevices;
        *(_DWORD *)(v6 + 4) = (_DWORD)v8;
        goto LABEL_313;
      }
      if ( (_DWORD)v79 == 1 )
      {
        *(_DWORD *)v6 = 8;
        *(_DWORD *)(v6 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))off_14033B5E0[0])(
                                0x140000000uLL,
                                v79,
                                v17,
                                v18);
LABEL_313:
        Size = 8;
        goto LABEL_604;
      }
      return -1073741637;
    case 0x49u:
      SystemProcessorInformation = KeBuildLogicalProcessorSystemInformation(v16, v6, Length, &Size);
      goto LABEL_604;
    case 0x4Cu:
      SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((void *)v6);
      goto LABEL_318;
    case 0x4Du:
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      v59 = KeGetCurrentThread();
      --v59->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
      v58 = ExpQueryModuleInformationEx(v60, v6, Length, &Size);
LABEL_181:
      SystemProcessorInformation = v58;
      ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_604;
    case 0x4Fu:
      SystemFirmwareTableInformation = PfQuerySuperfetchInformation(0x40000000u, v6, Length, v9, (__int64)&Size);
      goto LABEL_318;
    case 0x50u:
      SystemFirmwareTableInformation = MmQueryMemoryListInformation(
                                         (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                         (_OWORD *)v6,
                                         Length,
                                         v18,
                                         &Size);
      goto LABEL_318;
    case 0x53u:
      Size = 8 * ActiveProcessorCount;
      if ( Length < 8 )
        goto LABEL_477;
      if ( Length < 8 * ActiveProcessorCount )
      {
        ActiveProcessorCount = Length >> 3;
        SystemProcessorInformation = -1073741820;
      }
      v130 = (_QWORD *)v6;
      KeFlushProcessWriteBuffers(1);
      while ( 1 )
      {
        i = (unsigned int)v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v80 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 24) + 72LL);
        v81 = v130;
        *v130 = v80;
        v130 = v81 + 1;
        LODWORD(v8) = i + 1;
        v16 = v108;
      }
      goto LABEL_604;
    case 0x56u:
      SystemFirmwareTableInformation = ObQueryRefTraceInformation((void *)v6, Length);
      goto LABEL_318;
    case 0x57u:
      Size = 8;
      if ( Length == 8 )
      {
        *(_DWORD *)v6 = MmSpecialPoolTag;
        LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
        *(_DWORD *)(v6 + 4) = (_DWORD)v8;
      }
      else
      {
        SystemProcessorInformation = -1073741820;
      }
      goto LABEL_604;
    case 0x58u:
      Size = 24;
      if ( Length != 24 )
      {
        SystemProcessorInformation = -1073741820;
        goto LABEL_604;
      }
      *(_OWORD *)ProcessId = *(_OWORD *)v6;
      v129 = *(char **)(v6 + 16);
      if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
        return -1073741811;
      if ( v9 && WORD1(ProcessId[1]) )
      {
        if ( ((unsigned __int8)v129 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v53 = &v129[WORD1(ProcessId[1])];
        if ( (unsigned __int64)v53 > 0x7FFFFFFF0000LL || v53 < v129 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v54 = KeGetCurrentThread();
      v117 = WORD1(ProcessId[1]);
      --v54->KernelApcDisable;
      v55 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v55 < 0 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)v54);
        return v55;
      }
      SystemProcessorInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(v6 + 8), v129, &v117);
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe((__int64)v54);
      if ( SystemProcessorInformation == -1073741820 )
        *(_WORD *)(v6 + 10) = v117;
      goto LABEL_604;
    case 0x5Au:
      Size = 32;
      if ( Length < 0x14 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      *(_OWORD *)v6 = ExpBootEnvironmentInformation;
      *(_DWORD *)(v6 + 16) = dword_140344B30;
      if ( Length < 0x20 )
LABEL_290:
        Size = 20;
      else
        *(_QWORD *)(v6 + 24) = qword_140344B38;
      goto LABEL_604;
    case 0x5Bu:
      SystemFirmwareTableInformation = HvlQueryEnlightenmentInfo(v6, Length, v9, &Size);
      goto LABEL_318;
    case 0x5Cu:
      if ( Length != 40 )
      {
        if ( a6 )
          *a6 = 40;
        return -1073741820;
      }
      SystemProcessorInformation = VfGetVerifierInformationEx(v6, v19, v17, v18);
      if ( SystemProcessorInformation >= 0 )
        LODWORD(v8) = 40;
LABEL_328:
      Size = (unsigned int)v8;
      goto LABEL_604;
    case 0x5Fu:
      if ( !v9 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741790;
      if ( Length >= 0x40 )
      {
        SystemFirmwareTableInformation = ExpCovQueryInformation(v6, Length, &Size);
        goto LABEL_318;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 0x62u:
      SystemFirmwareTableInformation = IoQuerySystemDeviceName(98LL, v6, Length, &Size);
      goto LABEL_318;
    case 0x63u:
      SystemFirmwareTableInformation = IoQuerySystemDeviceName(99LL, v6, Length, &Size);
      goto LABEL_318;
    case 0x64u:
      v135[1] = v16;
      v135[0] = KeQueryGroupAffinity(v16);
      v47 = (0x101010101010101LL
           * ((((v135[0] - ((v135[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v135[0] - ((v135[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
             + ((((v135[0] - ((v135[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v135[0] - ((v135[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      SystemProcessorInformation = PpmCapturePerformanceDistribution(
                                     0LL,
                                     0,
                                     (unsigned int)((0x101010101010101LL
                                                   * ((((v135[0] - ((v135[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v135[0] - ((v135[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v135[0] - ((v135[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v135[0] - ((v135[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                     (__int64)v135,
                                     &NumberOfBytes);
      if ( SystemProcessorInformation == -1073741820 )
      {
        if ( NumberOfBytes <= Length )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
          v49 = PoolWithTag;
          v109 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, NumberOfBytes);
            SystemProcessorInformation = PpmCapturePerformanceDistribution(
                                           v49,
                                           NumberOfBytes,
                                           v47,
                                           (__int64)v135,
                                           &Size);
            if ( SystemProcessorInformation >= 0 )
              memmove((void *)v6, v49, Size);
            ExFreePoolWithTag(v49, 0x744D5050u);
          }
          else
          {
            SystemProcessorInformation = -1073741670;
          }
        }
        else
        {
          SystemProcessorInformation = -1073741820;
          Size = NumberOfBytes;
        }
      }
      goto LABEL_604;
    case 0x65u:
      SystemFirmwareTableInformation = ExpQueryNumaProximityNode(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0x66u:
      if ( Length >= 0x1B0 )
      {
        LOBYTE(v20) = 1;
        ExAcquireTimeRefreshLock(v20);
        v74 = &ExpTimeZoneInformation;
        v75 = 3LL;
        do
        {
          *(_OWORD *)v6 = *v74;
          *(_OWORD *)(v6 + 16) = v74[1];
          *(_OWORD *)(v6 + 32) = v74[2];
          *(_OWORD *)(v6 + 48) = v74[3];
          *(_OWORD *)(v6 + 64) = v74[4];
          *(_OWORD *)(v6 + 80) = v74[5];
          *(_OWORD *)(v6 + 96) = v74[6];
          v6 += 128LL;
          *(_OWORD *)(v6 - 16) = v74[7];
          v74 += 8;
          --v75;
        }
        while ( v75 );
        *(_OWORD *)v6 = *v74;
        *(_OWORD *)(v6 + 16) = v74[1];
        *(_OWORD *)(v6 + 32) = v74[2];
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        Size = 432;
        SystemProcessorInformation = 0;
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 432;
      return -1073741820;
    case 0x67u:
      if ( qword_140348B98 )
      {
        LOBYTE(v17) = SeILSigningPolicy != 0;
        SystemFirmwareTableInformation = qword_140348B98(v6, Length, v17, &Size);
      }
      else
      {
        SystemFirmwareTableInformation = -1073741823;
      }
      goto LABEL_318;
    case 0x69u:
      SystemProcessorInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))off_14033C718[0])(
                                     23LL,
                                     0LL,
                                     0LL,
                                     &NumberOfBytes);
      if ( SystemProcessorInformation != -1073741820 )
      {
LABEL_422:
        SystemProcessorInformation = -1073741637;
        goto LABEL_604;
      }
      v44 = NumberOfBytes;
      if ( Length < NumberOfBytes || !v6 )
      {
LABEL_113:
        Size = v44;
        goto LABEL_604;
      }
      v82 = v105;
      if ( v105 )
      {
        PoolWithQuotaTag = (int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
        v109 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          SystemProcessorInformation = -1073741670;
          goto LABEL_604;
        }
        v44 = NumberOfBytes;
      }
      else
      {
        PoolWithQuotaTag = (int *)v6;
        v109 = (int *)v6;
      }
      v84 = ((__int64 (__fastcall *)(__int64, __int64, int *, unsigned int *))off_14033C718[0])(
              23LL,
              v44,
              PoolWithQuotaTag,
              &Size);
      SystemProcessorInformation = v84;
      if ( !v82 )
        goto LABEL_604;
      if ( v84 >= 0 )
        goto LABEL_432;
      goto LABEL_433;
    case 0x6Au:
      SystemProcessorInformation = -1073741821;
      goto LABEL_604;
    case 0x6Bu:
      Size = Length;
      SystemProcessorInformation = KeQueryLogicalProcessorRelationship(
                                     0LL,
                                     RelationshipType,
                                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                     &Size);
      goto LABEL_604;
    case 0x6Cu:
      Size = 8 * ActiveProcessorCount;
      if ( Length < 8 )
        goto LABEL_477;
      if ( Length < 8 * ActiveProcessorCount )
      {
        ActiveProcessorCount = Length >> 3;
        SystemProcessorInformation = -1073741820;
      }
      v145 = v6;
      while ( 1 )
      {
        i = (unsigned int)v8;
        if ( (unsigned int)v8 >= ActiveProcessorCount )
          break;
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        v174 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 23672);
        *(_QWORD *)v6 = v174;
        v6 += 8LL;
        v145 = v6;
        LODWORD(v8) = (_DWORD)v8 + 1;
      }
      goto LABEL_604;
    case 0x6Du:
      SystemFirmwareTableInformation = SmQueryStoreInformation(0x140000000LL, v6, Length, v9, (__int64)&Size);
      goto LABEL_318;
    case 0x70u:
      SystemFirmwareTableInformation = IoQueryVhdBootInformation(0x140000000uLL, v6, Length, &Size);
      goto LABEL_318;
    case 0x71u:
      SystemFirmwareTableInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, Length, v9, &Size);
      goto LABEL_318;
    case 0x73u:
      if ( v106 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      Size = 8;
      if ( Length < 8 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
      *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
      goto LABEL_604;
    case 0x74u:
      SystemFirmwareTableInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)v6, Length, &Size);
      goto LABEL_318;
    case 0x75u:
      Size = 888;
      if ( Length != 888 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      if ( v9 )
        return -1073741790;
      SystemFirmwareTableInformation = ExQueryBootEntropyInformation(v6, v19, v17, v18);
      goto LABEL_318;
    case 0x76u:
      if ( Length >= 0x108 )
      {
LABEL_317:
        SystemFirmwareTableInformation = VfGetVerifierInformation((void *)v6, Length);
        goto LABEL_318;
      }
      if ( a6 )
        *a6 = 264;
      return -1073741820;
    case 0x79u:
      Size = 4 * (unsigned __int16)KeNumberNodes;
      if ( Length < Size )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      while ( 1 )
      {
        i = (unsigned int)v8;
        if ( (unsigned int)v8 >= (unsigned __int16)KeNumberNodes )
          break;
        *(_DWORD *)(v6 + 4LL * (unsigned int)v8) = *((_DWORD *)KeNodeDistance
                                                   + (unsigned int)v8
                                                   + (unsigned __int16)v17 * (unsigned __int16)KeNumberNodes);
        LODWORD(v8) = (_DWORD)v8 + 1;
      }
      goto LABEL_604;
    case 0x7Au:
      Size = 8;
      if ( Length != 8 || !v6 )
        goto LABEL_125;
      PoolWithQuotaTag = (int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
      v109 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        SystemProcessorInformation = -1073741670;
        goto LABEL_604;
      }
      SystemProcessorInformation = ((__int64 (__fastcall *)(__int64, __int64, int *, unsigned int *))off_14033C718[0])(
                                     26LL,
                                     8LL,
                                     PoolWithQuotaTag,
                                     &Size);
      if ( SystemProcessorInformation >= 0 )
      {
        *(_DWORD *)v6 = *PoolWithQuotaTag;
        *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ PoolWithQuotaTag[1]) & 1;
        v85 = *(_DWORD *)(v6 + 4) ^ (*(_DWORD *)(v6 + 4) ^ PoolWithQuotaTag[1]) & 2;
        *(_DWORD *)(v6 + 4) = v85;
        *(_DWORD *)(v6 + 4) = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)PoolWithQuotaTag[1]) & 4;
      }
      goto LABEL_433;
    case 0x7Bu:
      if ( Length != 32 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      *(_QWORD *)&v159 = MmGetAvailablePages(ProcessPartitionId);
      *((_QWORD *)&v159 + 1) = MmGetTotalCommittedPages(v37);
      *(_QWORD *)&v160 = MmGetTotalCommitLimit(v38);
      PeakCommitment = MmGetPeakCommitment(v39);
      if ( PeakCommitment < v41 )
        PeakCommitment = v41;
      *((_QWORD *)&v160 + 1) = PeakCommitment;
      *(_OWORD *)v6 = v159;
      *(_OWORD *)(v6 + 16) = v160;
      goto LABEL_529;
    case 0x7Cu:
      Size = 12;
      if ( Length < 4 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      v142 = *(_DWORD *)v6;
      if ( v142 == 1 )
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
          SystemProcessorInformation = -1073741820;
        }
      }
      else
      {
        SystemProcessorInformation = -1073741637;
      }
      goto LABEL_604;
    case 0x7Du:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      v112[0] = *(_DWORD *)v6;
      v179 = *(_QWORD *)(v6 + 8);
      v65 = *(_DWORD *)(v6 + 4);
      v151 = v65;
      if ( (v179 & 7) != 0 )
        return -2147483646;
      if ( ExIsRestrictedCaller(v9) )
        return -1073741790;
      SystemProcessorInformation = ExGetSessionBigPoolInformation(v179, v65, &Size, v112);
      goto LABEL_604;
    case 0x7Eu:
      Size = 32;
      if ( Length == 32 )
      {
        SystemProcessorInformation = BgkQueryBootGraphicsInformation(0LL, v182, v17, v18);
        if ( SystemProcessorInformation >= 0 )
        {
          v86 = v182[0];
          if ( v105 )
            v86 = 0LL;
          v182[0] = v86;
          memmove((void *)v6, v182, Size);
        }
      }
      else
      {
        SystemProcessorInformation = -1073741820;
      }
      goto LABEL_604;
    case 0x80u:
      if ( v106 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      v91 = MmEnumerateBadPages(&v132);
      v92 = v132;
      if ( v132 )
        Size = 8 * *(_DWORD *)v132;
      else
        Size = 0;
      if ( Length < Size )
        v91 = -1073741820;
      SystemProcessorInformation = v91;
      if ( v132 )
      {
        if ( v91 >= 0 )
          memmove((void *)v6, (char *)v132 + 8, Size);
        ExFreePoolWithTag(v92, 0);
      }
      goto LABEL_604;
    case 0x85u:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      SystemFirmwareTableInformation = ExpGetSystemPlatformBinary(v6, Length, v105);
      goto LABEL_318;
    case 0x86u:
      Size = 32;
      if ( Length == 32 )
        SystemFirmwareTableInformation = ExHandleSPCall2(0x140000000LL, (__m128i *)v6);
      else
        SystemFirmwareTableInformation = -1073741820;
      goto LABEL_318;
    case 0x87u:
      Size = 8;
      if ( Length < 8 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      if ( (unsigned int)HvlQueryActiveProcessors(&v123, 0LL) )
      {
        SystemProcessorInformation = -1073741637;
      }
      else
      {
        SystemProcessorInformation = HvlQueryProcessorTopologyCount(0LL, &v124);
        if ( SystemProcessorInformation )
        {
          SystemProcessorInformation = -1073741637;
        }
        else
        {
          *(_DWORD *)v6 = v123;
          *(_DWORD *)(v6 + 4) = v124;
        }
      }
      goto LABEL_604;
    case 0x88u:
    case 0x89u:
      if ( Length == 48 )
        return ExpGetDeviceDataInformation(v7, v6, 48LL, v18);
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 0x8Au:
      SystemFirmwareTableInformation = ExpQueryMemoryTopologyInformation((void *)v6);
      goto LABEL_318;
    case 0x8Bu:
      SystemFirmwareTableInformation = ExpQueryChannelInformation((void *)v6);
      goto LABEL_318;
    case 0x8Cu:
      if ( a6 || Length >= 8 )
      {
        SystemProcessorInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v17, v18);
        if ( SystemProcessorInformation >= 0 )
        {
          if ( Size )
          {
            if ( Length >= Size )
            {
              SystemProcessorInformation = BgkQueryBootGraphicsInformation(1LL, &P, v87, v88);
              if ( SystemProcessorInformation >= 0 )
              {
                v89 = P;
                if ( P )
                {
                  memmove((void *)v6, P, Size);
                  ExFreePoolWithTag(v89, 0x4B494742u);
                }
                else
                {
                  SystemProcessorInformation = -1073741670;
                }
              }
            }
            else
            {
LABEL_477:
              SystemProcessorInformation = -1073741789;
            }
          }
          else
          {
            SystemProcessorInformation = -1073741670;
          }
        }
      }
      else
      {
        SystemProcessorInformation = -1073741811;
      }
      goto LABEL_604;
    case 0x8Fu:
    case 0x91u:
    case 0xABu:
    case 0xB3u:
      SystemFirmwareTableInformation = SeSecureBootQueryInformation(v7, v6, Length, &Size);
      goto LABEL_318;
    case 0x93u:
      SystemFirmwareTableInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0x95u:
      if ( Length >= 3 )
      {
        *(_BYTE *)v6 = KdpBootedNodebug == 0;
        *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
        Size = 3;
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 3;
      return -1073741820;
    case 0x96u:
      if ( !ExBootLoaderMetadata )
      {
        Size = 0;
        goto LABEL_604;
      }
      v90 = *(_DWORD *)ExBootLoaderMetadata;
      Size = *(_DWORD *)ExBootLoaderMetadata;
      if ( !v6 )
        goto LABEL_604;
      if ( Length < v90 )
      {
        SystemFirmwareTableInformation = -1073741820;
        goto LABEL_318;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), Size);
      goto LABEL_604;
    case 0x97u:
      Size = 4;
      if ( Length >= 4 )
      {
        *(_DWORD *)v6 = ExSoftRebootFlags;
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0x99u:
      if ( v106 )
      {
        SystemFirmwareTableInformation = -1073741820;
LABEL_318:
        SystemProcessorInformation = SystemFirmwareTableInformation;
      }
      else
      {
        Size = 32;
        if ( Length < 0x20 )
        {
          if ( Length < 0xC )
          {
            SystemProcessorInformation = -1073741820;
          }
          else
          {
            Size = 12;
            v176 = v6;
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
          }
        }
        else
        {
          v175 = v6;
          *(_QWORD *)v6 = PoOffCrashConfigTable;
          *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
          *(_QWORD *)(v6 + 16) = xmmword_14034C950;
          *(_DWORD *)(v6 + 24) = DWORD2(xmmword_14034C950);
        }
      }
      goto LABEL_604;
    case 0x9Au:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      SystemProcessorInformation = ExpGetSystemProcessorFeaturesInformation(v6, v19, v17, v18);
LABEL_529:
      Size = 32;
      goto LABEL_604;
    case 0x9Cu:
      Size = 128;
      if ( Length == 128 )
      {
        SystemProcessorInformation = BgkQueryBootGraphicsInformation(3LL, v184, v17, v18);
        if ( SystemProcessorInformation >= 0 )
          memmove((void *)v6, v184, Size);
      }
      else
      {
        SystemProcessorInformation = -1073741820;
      }
      goto LABEL_604;
    case 0x9Du:
      Size = WORD1(qword_140344B48) + 24;
      if ( Length >= Size )
      {
        v93 = (void *)(v6 + 24);
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_DWORD *)v6 = ExpManufacturingInformation;
        *(_DWORD *)(v6 + 8) = qword_140344B48;
        if ( (_WORD)qword_140344B48 )
        {
          *(_QWORD *)(v6 + 16) = v93;
          memmove(v93, qword_140344B50, WORD1(qword_140344B48));
        }
      }
      else
      {
        SystemProcessorInformation = -1073741820;
      }
      goto LABEL_604;
    case 0x9Eu:
      Size = 1;
      if ( Length )
      {
        *(_BYTE *)v6 = PoEnergyEstimationEnabled();
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 1;
      goto LABEL_125;
    case 0x9Fu:
      SystemFirmwareTableInformation = HvlQueryDetailInfo(v6, Length, v17, &Size);
      goto LABEL_318;
    case 0xA0u:
      Size = ActiveProcessorCount << 6;
      if ( Length < 0x40 )
        goto LABEL_477;
      if ( Length < ActiveProcessorCount << 6 )
      {
        ActiveProcessorCount = Length >> 6;
        SystemProcessorInformation = -1073741820;
      }
      v133 = v6;
      for ( i = 0; i < ActiveProcessorCount; ++i )
      {
        Size_4.Group = v16;
        *(_WORD *)&Size_4.Number = (unsigned __int8)i;
        v94 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
        v95 = 0;
        v126 = 0;
        while ( v95 < 4 )
        {
          v96 = 0;
          v125 = 0;
          while ( v96 < 2 )
          {
            v6 = v133;
            *(_QWORD *)(v133 + 8 * (v96 + 2LL * v95)) = *(_QWORD *)(v94 + 8 * (v96 + 2LL * v95) + 23680);
            v125 = ++v96;
            v16 = v108;
          }
          v126 = ++v95;
        }
        v6 += 64LL;
        v133 = v6;
      }
      goto LABEL_604;
    case 0xA2u:
      SystemFirmwareTableInformation = SeQueryTrustedPlatformModuleInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_318;
    case 0xA3u:
      if ( Length )
      {
        *(_BYTE *)v6 = KdIgnoreUmExceptions;
        Size = 1;
        goto LABEL_604;
      }
      if ( a6 )
        *a6 = 1;
      return -1073741820;
    case 0xA4u:
    case 0xACu:
    case 0xBDu:
    case 0xBEu:
      if ( qword_140348C08 )
        SystemFirmwareTableInformation = qword_140348C08(v7, v6, Length, &Size);
      else
        SystemFirmwareTableInformation = -1073741823;
      goto LABEL_318;
    case 0xA5u:
      Size = 16;
      if ( Length == 16 )
      {
        v97 = (16 * ExpFirmwarePageProtectionSupported) & 0x10;
        v120 = v97;
        if ( VslIsSecureKernelRunning() )
        {
          v107[0] = 0;
          v98 = v97 | 1;
          LOBYTE(v120) = v98;
          NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
          if ( (NestedPageProtectionFlags & 2) != 0 )
          {
            v98 |= 2u;
            LOBYTE(v120) = v98;
          }
          if ( (NestedPageProtectionFlags & 0x20) != 0 )
          {
            v98 |= 4u;
            LOBYTE(v120) = v98;
          }
          if ( (NestedPageProtectionFlags & 0x10) != 0 )
            LOBYTE(v120) = v98 | 8;
          if ( v121 )
          {
            SystemProcessorInformation = VslIsTrustletRunning(v121, v107);
            BYTE1(v120) ^= (v107[0] ^ BYTE1(v120)) & 1;
          }
        }
        *(_OWORD *)v6 = v120;
      }
      else
      {
        if ( a6 )
          *a6 = 16;
LABEL_125:
        SystemProcessorInformation = -1073741820;
      }
      goto LABEL_604;
    case 0xA6u:
      SystemFirmwareTableInformation = SeQueryHSTIResults(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0xA7u:
      SystemProcessorInformation = ExpQuerySingleModuleInformation(v6, Length, v9, &Size);
      goto LABEL_604;
    case 0xA9u:
      SystemFirmwareTableInformation = HvlQueryDmaProtectionInfo(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0xADu:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      Size = 168;
      if ( Length == 168 )
        SystemFirmwareTableInformation = KeGetAffinitizedInterruptsInfo((_WORD *)v6);
      else
        SystemFirmwareTableInformation = -1073741820;
      goto LABEL_318;
    case 0xAEu:
      SystemFirmwareTableInformation = PsRootSiloInformation(v6, Length, &Size, v18);
      goto LABEL_318;
    case 0xAFu:
      if ( v18 )
      {
        result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &Object, 0LL);
        v8 = Object;
        Process = (PEPROCESS)Object;
        if ( result < 0 )
          return result;
      }
      else
      {
        Process = 0LL;
      }
      SystemProcessorInformation = KeQueryCpuSetInformation((void *)v6);
      if ( v8 )
        ObfDereferenceObject(v8);
      goto LABEL_604;
    case 0xB2u:
      if ( Length )
      {
        if ( v9 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v9) )
          return -1073741727;
        v100 = (int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
        PoolWithQuotaTag = v100;
        v109 = v100;
        if ( v100 )
        {
          memset(v100, 0, Length);
          SystemProcessorInformation = VslQuerySecureKernelProfileInformation(
                                         v134,
                                         (__int64)PoolWithQuotaTag,
                                         Length,
                                         &Size);
          if ( SystemProcessorInformation >= 0 )
LABEL_432:
            memmove((void *)v6, PoolWithQuotaTag, Size);
LABEL_433:
          ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
        }
        else
        {
          SystemProcessorInformation = -1073741670;
        }
      }
      else
      {
        SystemProcessorInformation = -1073741789;
      }
      goto LABEL_604;
    case 0xB4u:
      SystemFirmwareTableInformation = ExpQueryInterruptSteeringInformation(
                                         (_DWORD)v109,
                                         v106,
                                         v6,
                                         Length,
                                         (__int64)&Size);
      goto LABEL_318;
    case 0xB5u:
      if ( v18 )
      {
        result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, v147, 0LL);
        v8 = v147[0];
        Process = (PEPROCESS)v147[0];
        if ( result < 0 )
          return result;
      }
      else
      {
        Process = 0LL;
      }
      SystemProcessorInformation = PsWow64GetSupportedArchitectures((_DWORD *)v6, Length);
      if ( v8 )
        ObfDereferenceObject(v8);
      goto LABEL_604;
    case 0xB6u:
      if ( Length != 56 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      v24 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      v25 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v24) + 5584LL) << 12;
      *((_QWORD *)&v155 + 1) = MmGetAvailablePages(v24) << 12;
      *(_QWORD *)&v156 = MmGetResidentAvailablePages(v26) << 12;
      *((_QWORD *)&v156 + 1) = MmGetTotalCommittedPages(v27) << 12;
      MmGetTotalCommitLimit(v28);
      MmGetPeakCommitment(v29);
      *(_QWORD *)&v157 = MmGetSharedCommit() << 12;
      if ( v25 < v33 )
        v25 = v33;
      *(_QWORD *)&v155 = v25;
      if ( v31 < v32 )
        v31 = v32;
      *((_QWORD *)&v157 + 1) = v31;
      if ( v30 < v32 )
        v30 = v32;
      v158 = v30;
      *(_OWORD *)v6 = v155;
      *(_OWORD *)(v6 + 16) = v156;
      *(_OWORD *)(v6 + 32) = v157;
      *(_QWORD *)(v6 + 48) = v158;
      Size = 56;
      goto LABEL_604;
    case 0xB7u:
      if ( Length != 8 )
        return -1073741820;
      v147[1] = 0LL;
      SystemFirmwareTableInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)v6, v19, v17, v18);
      goto LABEL_318;
    case 0xB8u:
      if ( Length != 24 )
      {
        if ( a6 )
          *a6 = 24;
        return -1073741820;
      }
      v34 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      *(_QWORD *)&v153 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v34) + 5584LL) << 12;
      *((_QWORD *)&v153 + 1) = MmGetLowestPhysicalPage(v34) << 12;
      v154 = (MmGetHighestPhysicalPage(v35) << 12) + 4095;
      *(_OWORD *)v6 = v153;
      *(_QWORD *)(v6 + 16) = v154;
LABEL_89:
      Size = 24;
      goto LABEL_604;
    case 0xB9u:
      SystemFirmwareTableInformation = WbDispatchOperation((void *)v6, Length);
      goto LABEL_318;
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
      SystemProcessorInformation = PsQueryActivityModerationUserSettings(&v148);
      if ( SystemProcessorInformation >= 0 )
        *(_QWORD *)v6 = v148;
      goto LABEL_604;
    case 0xC0u:
      if ( Length >= 0x20 )
      {
        SystemProcessorInformation = ExpGetSystemFlushInformation(v6);
        Size = 32;
LABEL_604:
        if ( a6 )
          *a6 = Size;
        return SystemProcessorInformation;
      }
      else
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
    case 0xC4u:
      SystemFirmwareTableInformation = KeQueryKvaShadowInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_318;
    case 0xC9u:
      SystemFirmwareTableInformation = KeQuerySpeculationControlInformation((_DWORD *)v6, Length, &Size);
      goto LABEL_318;
    default:
      return -1073741821;
  }
}
