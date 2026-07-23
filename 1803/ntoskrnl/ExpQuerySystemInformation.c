/*
 * XREFs of ExpQuerySystemInformation @ 0x1405AE850
 * Callers:
 *     NtQuerySystemInformationEx @ 0x140567DC0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x1405AE710 (NtQuerySystemInformation.c)
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140004224 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x140006AC0 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     PoGetIdleTimes @ 0x14003837C (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14007FE08 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetSharedCommit @ 0x140080498 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1400804A8 (MmGetResidentAvailablePages.c)
 *     MmGetPeakCommitment @ 0x140081390 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400813AC (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x1400813C8 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1400813E4 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x140081400 (MmGetProcessPartitionId.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400B2608 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400B27A8 (ExpGetSystemBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400B9EB0 (PsWow64GetSupportedArchitectures.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1400C1B98 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x1400C2B80 (KeQueryBootTimeValues.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1400C6718 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryGroupAffinity @ 0x1400C6900 (KeQueryGroupAffinity.c)
 *     MmGetLowestPhysicalPage @ 0x1400D2CE4 (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x1400D2E2C (VslIsSecureKernelRunning.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400D2F44 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400D2FA0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400D3890 (ExpGetSystemProcessorInformation.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetHighestPhysicalPage @ 0x1401063D0 (MmGetHighestPhysicalPage.c)
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     PsQueryCpuQuotaInformation @ 0x14016E7DC (PsQueryCpuQuotaInformation.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401A9040 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlQueryActiveProcessors @ 0x140226FD0 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1402271C0 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x14022FBD8 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14022FFB4 (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140249D74 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x140270B74 (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x14027E7EC (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402842E0 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1402A0D84 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1402B73E0 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x1402B8B38 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExIsRestrictedCaller @ 0x14048C09C (ExIsRestrictedCaller.c)
 *     ExGetPoolTagInfo @ 0x14048C5A4 (ExGetPoolTagInfo.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsQueryFullProcessImageName @ 0x1404F93F4 (PsQueryFullProcessImageName.c)
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 *     ExpQueryModuleInformation @ 0x1405182D0 (ExpQueryModuleInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x14052C2C8 (ExpQueryNumaProcessorMap.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     MmGetPageFileInformation @ 0x1405587D4 (MmGetPageFileInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x14055F754 (ExGetSessionPoolTagInformation.c)
 *     ExHandleSPCall2 @ 0x140568664 (ExHandleSPCall2.c)
 *     IoQuerySystemDeviceName @ 0x140569404 (IoQuerySystemDeviceName.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14056A6C8 (KeBuildLogicalProcessorSystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140572C3C (ExpGetSystemFlushInformation.c)
 *     SmQueryStoreInformation @ 0x140572E0C (SmQueryStoreInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x140573844 (PfSnQueryPrefetcherInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x140573D5C (SeCodeIntegrityQueryInformation.c)
 *     SeSecureBootQueryInformation @ 0x14057CD3C (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x140580AB0 (IoQueryLowPriorityIoInformation.c)
 *     ExpReadComPlusPackage @ 0x140584704 (ExpReadComPlusPackage.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 *     SeQueryHSTIResults @ 0x1405E97F0 (SeQueryHSTIResults.c)
 *     CmQueryRegistryQuotaInformation @ 0x1405F3F60 (CmQueryRegistryQuotaInformation.c)
 *     ExpQueryModuleInformationEx @ 0x140638C80 (ExpQueryModuleInformationEx.c)
 *     ExpQueryMemoryTopologyInformation @ 0x14064BEE4 (ExpQueryMemoryTopologyInformation.c)
 *     KeQueryCpuSetInformation @ 0x14064D9F0 (KeQueryCpuSetInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14065179C (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140653C70 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x140654510 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1406546E0 (IoQueryVhdBootInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140655288 (ExQueryBootEntropyInformation.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x1407179A4 (HvlQueryVsmProtectionInfo.c)
 *     KeQueryKvaShadowInformation @ 0x1407426C4 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407427EC (KeQuerySpeculationControlInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x140749FEC (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x14075A144 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x140778AF0 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1407BADD0 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x1407BAFCC (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407BB064 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1407BB0FC (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407BB170 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407BB1F4 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x1407BB250 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryChannelInformation @ 0x1407BB420 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1407BB55C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407BBA58 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407BBB44 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1407BBCE8 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407BBE3C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1407BC050 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x1407C6ADC (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x140837924 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1408379E8 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x14083B524 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        __int64 a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        ULONG *a6)
{
  __int64 v6; // rdi
  int v7; // r14d
  ULONG v8; // r11d
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  LOGICAL_PROCESSOR_RELATIONSHIP v13; // r13d
  __int64 v14; // r9
  unsigned __int16 v15; // r12
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  int SystemBasicInformation; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // eax
  USHORT v24; // cx
  ULONG ActiveProcessorCount; // eax
  unsigned __int16 v26; // ax
  unsigned __int64 v27; // rbx
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // cx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  unsigned int v37; // r15d
  _DWORD *v38; // r13
  ULONG v39; // ecx
  __int64 v40; // rcx
  _OWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  char v45; // r14
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // cx
  unsigned __int16 v49; // cx
  unsigned __int64 v50; // r8
  unsigned int v51; // eax
  __int64 v52; // r14
  unsigned int v53; // r14d
  _DWORD *v54; // rdx
  ULONG v55; // eax
  __int64 v56; // rdx
  struct _KTHREAD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int8 v60; // r12
  _DWORD *PoolWithQuotaTag; // rbx
  int v62; // eax
  void *v63; // rcx
  char v64; // cl
  unsigned __int16 v65; // ax
  unsigned __int16 v66; // cx
  int v67; // edx
  int v68; // r8d
  unsigned int v69; // ecx
  __int64 v70; // rax
  unsigned int i; // r9d
  unsigned __int64 v72; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v74; // rbx
  char *v75; // rdx
  struct _KTHREAD *v76; // r15
  NTSTATUS v77; // ebx
  unsigned int v78; // edi
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  __int64 v81; // rdx
  ULONG v82; // r9d
  unsigned int v83; // r14d
  unsigned int v84; // r15d
  __int64 v85; // rcx
  _QWORD *v86; // rax
  ULONG v87; // eax
  __int64 v88; // rcx
  int v89; // ecx
  __int64 v90; // r8
  __int64 v91; // r9
  PVOID v92; // rbx
  ULONG v93; // ecx
  int v94; // r14d
  PVOID v95; // r15
  ULONG v96; // eax
  bool v97; // cf
  unsigned int v98; // r14d
  __int64 v99; // rcx
  char v100; // bl
  char NestedPageProtectionFlags; // al
  char v102; // dl
  char v103; // r9
  char v104; // dl
  char v105; // bl
  size_t v106; // r14
  _DWORD *v107; // rax
  unsigned __int8 v108; // r12
  int v109; // eax
  int BootGraphicsInformation; // [rsp+30h] [rbp-828h]
  ULONG Length; // [rsp+34h] [rbp-824h] BYREF
  unsigned __int8 v112; // [rsp+38h] [rbp-820h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-81Ch] BYREF
  ULONG Size; // [rsp+40h] [rbp-818h]
  int Size_4; // [rsp+44h] [rbp-814h]
  unsigned __int16 v116; // [rsp+48h] [rbp-810h]
  _DWORD *v117; // [rsp+50h] [rbp-808h]
  char v118[4]; // [rsp+58h] [rbp-800h] BYREF
  USHORT v119; // [rsp+5Ch] [rbp-7FCh]
  ULONG v120; // [rsp+60h] [rbp-7F8h]
  unsigned int v121; // [rsp+64h] [rbp-7F4h]
  SIZE_T NumberOfBytes[8]; // [rsp+68h] [rbp-7F0h] BYREF
  char Data[65]; // [rsp+AAh] [rbp-7AEh] BYREF
  char v124[17]; // [rsp+EBh] [rbp-76Dh] BYREF
  _DWORD v125[3]; // [rsp+FCh] [rbp-75Ch] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP *v126; // [rsp+108h] [rbp-750h]
  unsigned int v127; // [rsp+110h] [rbp-748h] BYREF
  PEPROCESS Process; // [rsp+118h] [rbp-740h] BYREF
  int v129; // [rsp+120h] [rbp-738h]
  int v130; // [rsp+124h] [rbp-734h]
  unsigned int v131; // [rsp+128h] [rbp-730h] BYREF
  int v132; // [rsp+12Ch] [rbp-72Ch] BYREF
  int v133; // [rsp+130h] [rbp-728h] BYREF
  __int64 v134; // [rsp+138h] [rbp-720h]
  __int128 v135; // [rsp+140h] [rbp-718h]
  HANDLE ProcessId[2]; // [rsp+150h] [rbp-708h]
  char *v137; // [rsp+160h] [rbp-6F8h]
  _QWORD *v138; // [rsp+168h] [rbp-6F0h]
  PVOID P; // [rsp+170h] [rbp-6E8h] BYREF
  PVOID v140; // [rsp+178h] [rbp-6E0h] BYREF
  __int64 v141; // [rsp+180h] [rbp-6D8h]
  _QWORD v142[2]; // [rsp+188h] [rbp-6D0h] BYREF
  int v143; // [rsp+198h] [rbp-6C0h]
  int v144; // [rsp+1A0h] [rbp-6B8h]
  __int64 v145; // [rsp+1D0h] [rbp-688h]
  unsigned __int64 v146; // [rsp+268h] [rbp-5F0h] BYREF
  __int64 v147; // [rsp+270h] [rbp-5E8h]
  __int64 v148; // [rsp+4B0h] [rbp-3A8h]
  __int64 v149; // [rsp+578h] [rbp-2E0h]
  PVOID v150; // [rsp+598h] [rbp-2C0h] BYREF
  PVOID Object; // [rsp+5A8h] [rbp-2B0h] BYREF
  __int64 v152[7]; // [rsp+5B8h] [rbp-2A0h] BYREF
  unsigned int v153; // [rsp+5F0h] [rbp-268h]
  int v154; // [rsp+5F4h] [rbp-264h]
  unsigned int v155; // [rsp+5F8h] [rbp-260h]
  __int128 v156; // [rsp+600h] [rbp-258h]
  __int128 v157; // [rsp+610h] [rbp-248h]
  __int128 v158; // [rsp+620h] [rbp-238h]
  __int64 v159; // [rsp+630h] [rbp-228h]
  __int128 v160; // [rsp+638h] [rbp-220h]
  __int128 v161; // [rsp+648h] [rbp-210h]
  __int128 v162; // [rsp+658h] [rbp-200h]
  __int64 v163; // [rsp+668h] [rbp-1F0h]
  LARGE_INTEGER Src[6]; // [rsp+670h] [rbp-1E8h] BYREF
  _BYTE v165[32]; // [rsp+6A0h] [rbp-1B8h] BYREF
  _QWORD v166[2]; // [rsp+6C0h] [rbp-198h] BYREF
  int v167; // [rsp+6D0h] [rbp-188h]
  __int64 v168; // [rsp+6D8h] [rbp-180h]
  __int64 v169; // [rsp+6E0h] [rbp-178h]
  __int64 v170; // [rsp+6E8h] [rbp-170h]
  __int64 v171; // [rsp+6F0h] [rbp-168h]
  int v172; // [rsp+6F8h] [rbp-160h]
  int v173; // [rsp+6FCh] [rbp-15Ch]
  int *v174; // [rsp+708h] [rbp-150h]
  __int64 v175; // [rsp+710h] [rbp-148h]
  __int64 v176; // [rsp+718h] [rbp-140h]
  __int64 v177; // [rsp+720h] [rbp-138h]
  _DWORD v178[4]; // [rsp+728h] [rbp-130h] BYREF
  _QWORD v179[4]; // [rsp+738h] [rbp-120h] BYREF
  _OWORD v180[3]; // [rsp+758h] [rbp-100h] BYREF
  _BYTE v181[128]; // [rsp+790h] [rbp-C8h] BYREF

  v6 = a4;
  v121 = a3;
  v126 = a2;
  v7 = a1;
  v8 = a5;
  Size = a5;
  NumberOfBytes[1] = (SIZE_T)a6;
  v9 = 0LL;
  Length = 0;
  BootGraphicsInformation = 0;
  v112 = KeGetCurrentThread()->gap0[10];
  if ( v112 )
  {
    if ( (int)a1 < 73 || (int)a1 >= 88 )
    {
      switch ( (int)a1 )
      {
        case 12:
          LODWORD(a1) = 8;
          break;
        case 35:
        case 147:
        case 149:
        case 158:
        case 163:
          LODWORD(a1) = 1;
          break;
        default:
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      LODWORD(a1) = 4;
    }
    if ( a5 )
    {
      v10 = a4;
      if ( (((_DWORD)a1 - 1) & (unsigned int)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a4 + a5 - 1LL;
      if ( a4 > v11 || v11 >= 0x7FFFFFFF0000LL )
      {
        a1 = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_BYTE *)(a1 + 720) & 1) == 0 )
          ExRaiseAccessViolation();
        a2 = v126;
      }
      else
      {
        v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          LODWORD(a1) = *(unsigned __int8 *)v10;
          *(_BYTE *)v10 = a1;
          v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v10 != v12 );
        a2 = v126;
      }
    }
    if ( a6 )
    {
      a1 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_DWORD *)a1 = *(_DWORD *)a1;
    }
  }
  Length = 0;
  v13 = RelationAll;
  v129 = 0xFFFF;
  v14 = 0LL;
  v120 = 0;
  v15 = 0;
  v119 = 0;
  v116 = 0;
  v134 = 0LL;
  v16 = 0LL;
  v145 = 0LL;
  v141 = 0LL;
  LODWORD(v117) = 9;
  v130 = 9;
  if ( v7 < 74 || v7 >= 83 )
  {
    switch ( v7 )
    {
      case 2:
      case 33:
      case 36:
      case 65:
        v15 = -1;
        v119 = -1;
        v24 = -1;
        goto LABEL_55;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 34:
      case 35:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 62:
      case 63:
      case 64:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
      case 96:
      case 97:
      case 98:
      case 99:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 135:
      case 136:
      case 137:
      case 138:
      case 139:
      case 140:
      case 142:
      case 143:
      case 144:
      case 145:
      case 146:
      case 147:
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
      case 154:
      case 155:
      case 156:
      case 157:
      case 158:
      case 159:
      case 161:
      case 162:
      case 163:
      case 164:
      case 166:
      case 167:
      case 168:
      case 169:
      case 170:
      case 171:
      case 172:
      case 173:
      case 174:
      case 176:
      case 177:
      case 179:
      case 180:
        v18 = v116;
        goto LABEL_38;
      case 8:
      case 23:
      case 42:
      case 61:
      case 73:
      case 83:
      case 100:
      case 108:
      case 141:
      case 160:
        if ( v121 < 2 )
          return -1073741811;
        v119 = *(_WORD *)a2;
        v15 = v119;
        if ( v119 >= KeQueryActiveGroupCount() )
          return -1073741811;
        v24 = v119;
LABEL_55:
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v24);
        v14 = ActiveProcessorCount;
        v120 = ActiveProcessorCount;
        v8 = Size;
        break;
      case 72:
        if ( v121 != 4 )
          return -1073741811;
        v17 = *(unsigned int *)a2;
        v130 = v17;
        goto LABEL_24;
      case 107:
        if ( v121 < 4 )
          return -1073741811;
        v13 = *a2;
        v129 = *a2;
        break;
      case 121:
        if ( v121 < 2 )
          return -1073741811;
        v116 = *(_WORD *)a2;
        v18 = v116;
        if ( v116 >= (unsigned __int16)KeNumberNodes )
          return -1073741811;
LABEL_38:
        v17 = (unsigned int)v117;
        goto LABEL_25;
      case 165:
        if ( v121 )
        {
          if ( v121 != 8 )
            return -1073741811;
          v134 = *(_QWORD *)a2;
        }
        else
        {
          v134 = 0LL;
        }
        break;
      case 175:
      case 181:
        if ( v121 != 8 )
          return -1073741811;
        v16 = *(void **)a2;
        v145 = *(_QWORD *)a2;
        break;
      case 178:
        if ( v121 != 8 )
          return -1073741811;
        v141 = *(_QWORD *)a2;
        break;
      default:
        break;
    }
  }
  v17 = (unsigned int)v117;
LABEL_24:
  v18 = v116;
LABEL_25:
  if ( v7 != 79 )
  {
    switch ( v7 )
    {
      case 0:
      case 114:
        if ( v8 == 64 )
        {
          SystemBasicInformation = ExpGetSystemBasicInformation(v6);
          Length = 64;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      case 1:
        if ( v8 >= 0xC )
        {
          SystemBasicInformation = ExpGetSystemProcessorInformation(v6);
          Length = 12;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 12;
        return -1073741820;
      case 2:
        if ( v8 >= 0x138 )
        {
          if ( v8 > 0x158 )
          {
            v8 = 344;
            Size = 344;
          }
          ExpQuerySystemPerformanceInformation(v14, (void *)v6, v8);
          Length = Size;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 344;
        return -1073741820;
      case 3:
        if ( v8 > 0x30 )
        {
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        }
        memset(Src, 0, sizeof(Src));
        KeQueryBootTimeValues((LARGE_INTEGER *)&Src[1].QuadPart, Src, (LARGE_INTEGER *)&Src[4].QuadPart);
        Src[2].QuadPart = ExpTimeZoneBias;
        Src[3].LowPart = ExpCurrentTimeZoneId;
        Src[5].QuadPart = MEMORY[0xFFFFF780000003B0];
        LODWORD(v9) = Size;
        memmove((void *)v6, Src, Size);
LABEL_53:
        Length = v9;
        goto LABEL_28;
      case 4:
      case 10:
      case 25:
      case 29:
      case 96:
        return -1073741822;
      case 5:
      case 57:
      case 148:
        SystemBasicInformation = ExpGetProcessInformation((int *)v6, v8, &Length, 0LL, v7);
        goto LABEL_27;
      case 6:
        return -1073741637;
      case 7:
        if ( v8 == 24 )
        {
          *(_DWORD *)v6 = dword_1408617B0;
          *(_DWORD *)(v6 + 4) = dword_1408617B4;
          *(_DWORD *)(v6 + 8) = dword_1408617B8;
          *(_DWORD *)(v6 + 12) = dword_1408617BC;
          *(_DWORD *)(v6 + 16) = dword_1408617C4;
          *(_DWORD *)(v6 + 20) = dword_1408617C8;
          goto LABEL_211;
        }
        if ( a6 )
          *a6 = 24;
        return -1073741820;
      case 8:
      case 141:
        v36 = 48LL;
        if ( v7 != 8 )
          v36 = 72LL;
        v126 = (LOGICAL_PROCESSOR_RELATIONSHIP *)v36;
        if ( !v8 || v8 % (unsigned int)v36 )
        {
          if ( a6 )
            *a6 = v14 * v36;
          return -1073741820;
        }
        LODWORD(v117) = 0;
        v37 = 0;
        Size_4 = 0;
        while ( v37 < (unsigned int)v14 )
        {
          ProcNumber.Group = v15;
          ProcNumber.Number = v37;
          ProcNumber.Reserved = 0;
          v38 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          v39 = (unsigned int)v117;
          if ( Size < (int)v117 + (int)v126 )
            goto LABEL_86;
          LODWORD(v117) = (_DWORD)v117 + (_DWORD)v126;
          PoGetIdleTimes(&ProcNumber, 0LL, (__int64)v178);
          v40 = KeMaximumIncrement;
          *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v38[5858];
          *(_QWORD *)(v6 + 8) = v40 * v178[1];
          *(_QWORD *)(v6 + 24) = v40 * (unsigned int)v38[5859];
          *(_QWORD *)(v6 + 32) = v40 * (unsigned int)v38[5860];
          *(_QWORD *)v6 = v40 * v178[0];
          *(_DWORD *)(v6 + 40) = v38[5856];
          if ( v7 == 141 )
          {
            *(_QWORD *)(v6 + 48) = v40 * (unsigned int)v38[5867];
            *(_DWORD *)(v6 + 44) = 0;
            *(_QWORD *)(v6 + 56) = 0LL;
            *(_QWORD *)(v6 + 64) = 0LL;
          }
          v6 += (unsigned int)v126;
          Size_4 = ++v37;
          LODWORD(v14) = v120;
        }
        v39 = (unsigned int)v117;
        goto LABEL_86;
      case 9:
        if ( v8 == 4 )
        {
          *(_DWORD *)v6 = NtGlobalFlag;
          goto LABEL_145;
        }
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      case 11:
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        v23 = ExpQueryModuleInformation(v22, (_DWORD *)v6, Size, &Length);
        goto LABEL_44;
      case 12:
        if ( v8 < 0x38 )
        {
          if ( a6 )
            *a6 = 56;
          return -1073741820;
        }
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        SystemBasicInformation = ExpGetLockInformation(v6, Size, &Length);
        goto LABEL_27;
      case 13:
        if ( v8 >= 0x128 )
          goto LABEL_339;
        if ( a6 )
          *a6 = 296;
        return -1073741820;
      case 14:
      case 15:
      case 19:
LABEL_339:
        BootGraphicsInformation = -1073741822;
        goto LABEL_28;
      case 16:
        if ( v8 < 0x20 )
        {
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        }
        if ( (v6 & 7) != 0 )
          return -2147483646;
        if ( !ExIsRestrictedCaller(v112) )
        {
          SystemBasicInformation = ExpGetHandleInformation(v6, Size, &Length);
          goto LABEL_27;
        }
        return -1073741790;
      case 17:
        if ( v8 < 0x40 )
        {
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        }
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        SystemBasicInformation = ExpGetObjectInformation(v6, Size, &Length);
        goto LABEL_27;
      case 18:
      case 144:
        v55 = 32;
        if ( v7 != 18 )
          v55 = 40;
        Length = v55;
        if ( v8 >= v55 )
        {
          Length = 0;
          LOBYTE(v9) = v7 == 144;
          SystemBasicInformation = MmGetPageFileInformation(40LL, v6, v8, v9, &Length);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = v55;
        return -1073741820;
      case 21:
      case 81:
      case 119:
      case 120:
        if ( v8 >= 0x40 )
        {
          v51 = 2;
          if ( v7 == 119 )
          {
            v51 = 3;
          }
          else if ( v7 == 120 )
          {
            v51 = 4;
          }
          MmQuerySystemWorkingSetInformation(v51, v166);
          *(_QWORD *)v6 = v166[0];
          *(_QWORD *)(v6 + 8) = v166[1];
          *(_DWORD *)(v6 + 16) = v167;
          Size_4 = 64;
          *(_QWORD *)(v6 + 24) = v168;
          *(_QWORD *)(v6 + 32) = v169;
          *(_QWORD *)(v6 + 40) = v170;
          *(_QWORD *)(v6 + 48) = v171;
          *(_DWORD *)(v6 + 56) = v172;
          *(_DWORD *)(v6 + 60) = v173;
          Length = 64;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      case 22:
        if ( v8 >= 0x30 )
        {
          SystemBasicInformation = ExGetPoolTagInfo((_DWORD *)v6, v8, (int *)&Length);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 48;
        return -1073741820;
      case 23:
        Length = 24 * v14;
        if ( v8 >= 24 * (int)v14 )
        {
          v53 = 0;
          Size_4 = 0;
          while ( v53 < (unsigned int)v14 )
          {
            ProcNumber.Group = v15;
            ProcNumber.Number = v53;
            ProcNumber.Reserved = 0;
            v54 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            v143 = v54[2895];
            *(_DWORD *)v6 = v143;
            *(_DWORD *)(v6 + 4) = v54[2951];
            *(_DWORD *)(v6 + 8) = v54[2967];
            *(_DWORD *)(v6 + 12) = KeTimeIncrement;
            *(_DWORD *)(v6 + 16) = 0;
            *(_DWORD *)(v6 + 20) = 0;
            v6 += 24LL;
            Size_4 = ++v53;
            LODWORD(v14) = v120;
          }
          goto LABEL_127;
        }
        if ( a6 )
          *a6 = 24 * v14;
        return -1073741820;
      case 24:
        if ( v8 == 20 )
        {
          *(_DWORD *)(v6 + 4) = KiMaximumDpcQueueDepth;
          *(_DWORD *)(v6 + 8) = KiMinimumDpcRate;
          *(_DWORD *)(v6 + 12) = KiAdjustDpcThreshold;
          *(_DWORD *)(v6 + 16) = KiIdealDpcRate;
          goto LABEL_409;
        }
        if ( a6 )
          *a6 = 20;
        return -1073741820;
      case 28:
        if ( v8 == 24 || v8 == 12 )
        {
          ExAcquireTimeRefreshLock(1u);
          v44 = KeTimeAdjustmentFrequency;
          v45 = KeTimeSynchronization;
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          v39 = Size;
          if ( Size == 24 )
          {
            *(_QWORD *)v6 = v44;
            *(_QWORD *)(v6 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(v6 + 16) = v45;
          }
          else
          {
            *(_DWORD *)v6 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v44;
            *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
            *(_BYTE *)(v6 + 8) = v45;
          }
          goto LABEL_86;
        }
        if ( a6 )
          *a6 = 12;
        return -1073741820;
      case 31:
        SystemBasicInformation = EtwQueryPerformanceTraceInformation(v6, v8, v112, &Length);
        goto LABEL_27;
      case 33:
        if ( v8 >= 0x10 )
        {
          Length = 16;
          v67 = 0;
          v68 = 0;
          v69 = 0;
          Size_4 = 0;
          while ( v69 < (unsigned int)v14 )
          {
            v70 = KiProcessorBlock[v69];
            v67 += *(_DWORD *)(v70 + 24632);
            v68 += *(_DWORD *)(v70 + 23472);
            ++v69;
          }
          Size_4 = v69;
          *(_DWORD *)v6 = v67;
          *(_DWORD *)(v6 + 4) = v68;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      case 35:
        if ( v8 >= 2 )
        {
          *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
          *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
          Length = 2;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 2;
        return -1073741820;
      case 36:
        if ( v8 >= 0x30 )
        {
          v79 = 0;
          Size_4 = 0;
          while ( v79 < (unsigned int)v14 )
            LODWORD(v9) = *(_DWORD *)(KiProcessorBlock[v79++] + 11580) + v9;
          Size_4 = v79;
          *(_DWORD *)v6 = v9;
          *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(v6 + 8) = dword_1403B4428;
          *(_DWORD *)(v6 + 12) = dword_1403B4424;
          *(_DWORD *)(v6 + 16) = dword_1403B442C;
          *(_DWORD *)(v6 + 20) = dword_1403B4430;
          *(_DWORD *)(v6 + 24) = dword_1403B4438;
          *(_DWORD *)(v6 + 28) = dword_1403B4434;
          *(_DWORD *)(v6 + 32) = dword_1403B443C;
          *(_DWORD *)(v6 + 36) = dword_1403B4440;
          *(_DWORD *)(v6 + 40) = dword_1403B4444;
          *(_DWORD *)(v6 + 44) = dword_1403B4448;
          Length = 48;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 48;
        return -1073741820;
      case 37:
        if ( v8 >= 0x10 )
        {
          SystemBasicInformation = CmQueryRegistryQuotaInformation(v6, v17, v18, v14);
          Length = 16;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      case 42:
        Length = 48 * v14;
        if ( v8 < 48 * (int)v14 )
          goto LABEL_295;
        while ( 1 )
        {
          Size_4 = v9;
          if ( (unsigned int)v9 >= (unsigned int)v14 )
            break;
          ProcNumber.Group = v15;
          ProcNumber.Number = v9;
          ProcNumber.Reserved = 0;
          PoGetIdleTimes(&ProcNumber, (__int64)v180, 0LL);
          *(_OWORD *)v6 = v180[0];
          *(_OWORD *)(v6 + 16) = v180[1];
          *(_OWORD *)(v6 + 32) = v180[2];
          v6 += 48LL;
          LODWORD(v9) = v9 + 1;
          LODWORD(v14) = v120;
        }
        goto LABEL_28;
      case 43:
        if ( v8 >= 0x18 )
        {
          Length = v8;
          SystemBasicInformation = ExpQueryLegacyDriverInformation(v6, &Length, v18, v14);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 24;
        return -1073741820;
      case 44:
        if ( v8 < 0xAC )
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
        Length = 172;
LABEL_127:
        BootGraphicsInformation = 0;
        goto LABEL_28;
      case 45:
        SystemBasicInformation = ExpGetLookasideInformation(v6, v8, &Length);
        goto LABEL_27;
      case 50:
        if ( v8 == 8 )
        {
          *(_QWORD *)v6 = 0xFFFF800000000000uLL;
          goto LABEL_109;
        }
        if ( a6 )
          *a6 = 8;
        return -1073741820;
      case 51:
        if ( v8 >= 0x80 )
          goto LABEL_422;
        if ( a6 )
          *a6 = 128;
        return -1073741820;
      case 53:
        if ( v8 >= 0x10 )
        {
          v125[0] = *(_DWORD *)v6;
          v174 = *(int **)(v6 + 8);
          v153 = *(_DWORD *)(v6 + 4);
          ProbeForWrite(v174, v153, 4u);
          SystemBasicInformation = ExpGetProcessInformation(v174, v153, &Length, v125, 5);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      case 55:
        SystemBasicInformation = ExpQueryNumaProcessorMap((_DWORD *)v6, v8, &Length);
        goto LABEL_27;
      case 56:
        SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000LL, (__int128 *)v6, v8, v112, &Length);
        goto LABEL_27;
      case 58:
        if ( v8 >= 4 )
        {
          *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
          goto LABEL_145;
        }
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      case 59:
        if ( v8 != 4 )
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
          goto LABEL_145;
        }
        return result;
      case 60:
        SystemBasicInformation = ExpQueryNumaAvailableMemory(v6, v8, &Length, v14);
        goto LABEL_27;
      case 61:
        Length = 80 * v14;
        if ( v8 < 80 * (int)v14 )
          goto LABEL_295;
        v147 = v6;
        while ( 1 )
        {
          Size_4 = v9;
          if ( (unsigned int)v9 >= (unsigned int)v14 )
            break;
          ProcNumber.Group = v15;
          ProcNumber.Number = v9;
          ProcNumber.Reserved = 0;
          v52 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          PoGetPerfStateAndParkingInfo(&ProcNumber, v165, 0LL, &v146);
          memset((void *)v6, 0, 0x50uLL);
          *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                               * (unsigned __int64)(unsigned int)(*(_DWORD *)(v52 + 23428) + *(_DWORD *)(v52 + 23432));
          *(_QWORD *)(v6 + 48) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v52 + 24) + 652LL);
          if ( v165[28] )
          {
            *(_BYTE *)v6 = v165[8];
            *(_BYTE *)(v6 + 7) = v165[12];
            *(_BYTE *)(v6 + 8) = v165[16];
            *(_DWORD *)(v6 + 12) = 1;
          }
          *(_QWORD *)(v6 + 72) = v146;
          v6 += 80LL;
          v147 = v6;
          LODWORD(v9) = v9 + 1;
          LODWORD(v14) = v120;
        }
        goto LABEL_28;
      case 62:
        if ( v8 == 64 )
        {
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
          Length = 64;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      case 63:
        if ( v8 >= 0xC )
        {
          SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(v6);
          Length = 12;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 12;
        return -1073741820;
      case 64:
        if ( v8 < 0x38 )
        {
          if ( a6 )
            *a6 = 56;
          return -1073741820;
        }
        if ( (v6 & 7) != 0 )
          return -2147483646;
        if ( !ExIsRestrictedCaller(v112) )
        {
          SystemBasicInformation = ExpGetHandleInformationEx(v6, Size, &Length);
          goto LABEL_27;
        }
        return -1073741790;
      case 65:
        if ( v8 >= 4 )
        {
          v80 = 0;
          Size_4 = 0;
          while ( v80 < (unsigned int)v14 )
            LODWORD(v9) = *(_DWORD *)(KiProcessorBlock[v80++] + 23740) + v9;
          Size_4 = v80;
          *(_DWORD *)v6 = v9;
          goto LABEL_145;
        }
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      case 66:
        if ( v8 < 0x20 )
        {
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        }
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)v6, Size, 1, &Length);
        goto LABEL_27;
      case 67:
        if ( v8 < 0x10 )
        {
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        }
        v125[0] = *(_DWORD *)v6;
        v175 = *(_QWORD *)(v6 + 8);
        v56 = *(unsigned int *)(v6 + 4);
        v154 = *(_DWORD *)(v6 + 4);
        if ( (v175 & 7) != 0 )
          return -2147483646;
        SystemBasicInformation = ExGetSessionPoolTagInformation(v175, v56, &Length, v125);
        goto LABEL_27;
      case 68:
        if ( v8 < 0x20 )
        {
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        }
        v125[0] = *(_DWORD *)(v6 + 8);
        if ( (v6 & 7) != 0 )
          return -2147483646;
        SystemBasicInformation = MmGetSessionMappedViewInformation(v6, v8, &Length, v125);
        goto LABEL_27;
      case 69:
        goto LABEL_90;
      case 70:
        if ( v8 != 4 )
        {
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        }
        *(_DWORD *)v6 = ObpObjectSecurityMode;
LABEL_145:
        Length = 4;
        goto LABEL_28;
      case 72:
        if ( v8 != 8 )
          return -1073741811;
        v81 = (unsigned int)(v17 - 7);
        if ( (_DWORD)v81 )
        {
          if ( (_DWORD)v81 != 1 )
            return -1073741637;
          *(_DWORD *)v6 = 8;
          *(_DWORD *)(v6 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))off_1403989B0[0])(
                                  0x140000000uLL,
                                  v81,
                                  v18,
                                  v14);
        }
        else
        {
          *(_DWORD *)v6 = 7;
          LOBYTE(v9) = off_1403989B8[0] != xKdEnumerateDebuggingDevices;
          *(_DWORD *)(v6 + 4) = v9;
        }
LABEL_109:
        Length = 8;
        goto LABEL_28;
      case 73:
        BootGraphicsInformation = KeBuildLogicalProcessorSystemInformation(v15, v6, v8, &Length);
        goto LABEL_28;
      case 76:
        SystemBasicInformation = ExpGetSystemFirmwareTableInformation((char *)v6, v112, v8, &Length);
        goto LABEL_27;
      case 77:
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        v23 = ExpQueryModuleInformationEx(v58, v6, Size, &Length);
LABEL_44:
        BootGraphicsInformation = v23;
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_28;
      case 80:
        SystemBasicInformation = MmQueryMemoryListInformation(
                                   (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                   (_OWORD *)v6,
                                   v8,
                                   v14,
                                   &Length);
        goto LABEL_27;
      case 83:
        v82 = 8 * v14;
        Length = v82;
        if ( v8 < 8 )
          goto LABEL_477;
        if ( v8 >= v82 )
          v83 = v120;
        else
          v83 = v8 >> 3;
        v84 = v8 < v82 ? 0xC0000004 : 0;
        v138 = (_QWORD *)v6;
        KeFlushProcessWriteBuffers(1);
        while ( 1 )
        {
          Size_4 = v9;
          if ( (unsigned int)v9 >= v83 )
            break;
          ProcNumber.Group = v15;
          ProcNumber.Number = v9;
          ProcNumber.Reserved = 0;
          v85 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
          v86 = v138;
          *v138 = v85;
          v138 = v86 + 1;
          LODWORD(v9) = Size_4 + 1;
          v15 = v119;
        }
        BootGraphicsInformation = v84;
        goto LABEL_28;
      case 86:
        SystemBasicInformation = ObQueryRefTraceInformation((void *)v6, v8);
        goto LABEL_27;
      case 87:
        Length = 8;
        if ( v8 != 8 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        *(_DWORD *)v6 = MmSpecialPoolTag;
        LOBYTE(v9) = MmSpecialPoolCatchOverruns != 0;
        *(_DWORD *)(v6 + 4) = v9;
        goto LABEL_28;
      case 88:
        Length = 24;
        if ( v8 != 24 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        *(_OWORD *)ProcessId = *(_OWORD *)v6;
        v137 = *(char **)(v6 + 16);
        if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
          return -1073741811;
        if ( v112 && WORD1(ProcessId[1]) )
        {
          if ( ((unsigned __int8)v137 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v75 = &v137[WORD1(ProcessId[1])];
          if ( (unsigned __int64)v75 > 0x7FFFFFFF0000LL || v75 < v137 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v76 = KeGetCurrentThread();
        v127 = WORD1(ProcessId[1]);
        --v76->KernelApcDisable;
        v77 = PsLookupProcessByProcessId(ProcessId[0], &Process);
        if ( v77 < 0 )
        {
          KeLeaveCriticalRegionThread((__int64)v76);
          return v77;
        }
        BootGraphicsInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(v6 + 8), v137, &v127);
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        KeLeaveCriticalRegionThread((__int64)v76);
        if ( BootGraphicsInformation == -1073741820 )
          *(_WORD *)(v6 + 10) = v127;
        goto LABEL_28;
      case 90:
        Length = 32;
        if ( v8 < 0x14 )
        {
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        }
        *(_OWORD *)v6 = ExpBootEnvironmentInformation;
        *(_DWORD *)(v6 + 16) = dword_1403A1C50;
        if ( v8 < 0x20 )
LABEL_409:
          Length = 20;
        else
          *(_QWORD *)(v6 + 24) = qword_1403A1C58;
        goto LABEL_28;
      case 91:
        SystemBasicInformation = HvlQueryEnlightenmentInfo(v6, v8, v112, &Length);
        goto LABEL_27;
      case 92:
        if ( v8 != 40 )
        {
          if ( a6 )
            *a6 = 40;
          return -1073741820;
        }
        SystemBasicInformation = VfGetVerifierInformationEx(v6, v17, v18, v14);
        if ( SystemBasicInformation >= 0 )
          LODWORD(v9) = 40;
        Length = v9;
        goto LABEL_27;
      case 95:
        if ( !v112 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v112) )
          return -1073741790;
        if ( Size >= 0x40 )
        {
          SystemBasicInformation = ExpCovQueryInformation(v6, Size, &Length);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      case 98:
        SystemBasicInformation = IoQuerySystemDeviceName(98);
        goto LABEL_27;
      case 99:
        SystemBasicInformation = IoQuerySystemDeviceName(99);
        goto LABEL_27;
      case 100:
        v142[1] = v15;
        v142[0] = KeQueryGroupAffinity(v15);
        v72 = (0x101010101010101LL
             * ((((v142[0] - ((v142[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v142[0] - ((v142[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
               + ((((v142[0] - ((v142[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v142[0] - ((v142[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                    0LL,
                                    0,
                                    (unsigned int)((0x101010101010101LL
                                                  * ((((v142[0] - ((v142[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v142[0] - ((v142[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v142[0] - ((v142[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v142[0] - ((v142[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                    (__int64)v142,
                                    NumberOfBytes);
        SystemBasicInformation = -1073741820;
        if ( BootGraphicsInformation != -1073741820 )
          goto LABEL_28;
        if ( LODWORD(NumberOfBytes[0]) > Size )
        {
          Length = NumberOfBytes[0];
          goto LABEL_27;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(NumberOfBytes[0]), 0x744D5050u);
        v74 = PoolWithTag;
        v117 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, LODWORD(NumberOfBytes[0]));
          BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                      v74,
                                      NumberOfBytes[0],
                                      v72,
                                      (__int64)v142,
                                      &Length);
          if ( BootGraphicsInformation >= 0 )
            memmove((void *)v6, v74, Length);
          ExFreePoolWithTag(v74, 0x744D5050u);
        }
        else
        {
          BootGraphicsInformation = -1073741670;
        }
        goto LABEL_28;
      case 101:
        SystemBasicInformation = ExpQueryNumaProximityNode(v6, v8, &Length, v14);
        goto LABEL_27;
      case 102:
        if ( v8 >= 0x1B0 )
        {
          ExAcquireTimeRefreshLock(1u);
          v41 = &ExpTimeZoneInformation;
          v42 = 3LL;
          do
          {
            *(_OWORD *)v6 = *v41;
            *(_OWORD *)(v6 + 16) = v41[1];
            *(_OWORD *)(v6 + 32) = v41[2];
            *(_OWORD *)(v6 + 48) = v41[3];
            *(_OWORD *)(v6 + 64) = v41[4];
            *(_OWORD *)(v6 + 80) = v41[5];
            *(_OWORD *)(v6 + 96) = v41[6];
            v6 += 128LL;
            *(_OWORD *)(v6 - 16) = v41[7];
            v41 += 8;
            --v42;
          }
          while ( v42 );
          *(_OWORD *)v6 = *v41;
          *(_OWORD *)(v6 + 16) = v41[1];
          *(_OWORD *)(v6 + 32) = v41[2];
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          Length = 432;
          BootGraphicsInformation = 0;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 432;
        return -1073741820;
      case 103:
        SystemBasicInformation = SeCodeIntegrityQueryInformation(v6, v8, (__int64)&Length);
        goto LABEL_27;
      case 105:
        BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140397D98[0])(
                                    23LL,
                                    0LL,
                                    0LL,
                                    NumberOfBytes);
        if ( BootGraphicsInformation != -1073741820 )
          goto LABEL_90;
        v59 = LODWORD(NumberOfBytes[0]);
        if ( Size < LODWORD(NumberOfBytes[0]) || !v6 )
        {
          Length = NumberOfBytes[0];
          goto LABEL_28;
        }
        v60 = v112;
        if ( v112 )
        {
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LODWORD(NumberOfBytes[0]), 0x6F666E49u);
          v117 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            BootGraphicsInformation = -1073741670;
            goto LABEL_28;
          }
          v59 = LODWORD(NumberOfBytes[0]);
        }
        else
        {
          PoolWithQuotaTag = (_DWORD *)v6;
          v117 = (_DWORD *)v6;
        }
        v62 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, ULONG *))off_140397D98[0])(
                23LL,
                v59,
                PoolWithQuotaTag,
                &Length);
        BootGraphicsInformation = v62;
        if ( !v60 )
          goto LABEL_28;
        if ( v62 >= 0 )
          goto LABEL_495;
        goto LABEL_496;
      case 106:
        BootGraphicsInformation = -1073741821;
        goto LABEL_28;
      case 107:
        Length = v8;
        BootGraphicsInformation = KeQueryLogicalProcessorRelationship(
                                    0LL,
                                    v13,
                                    (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                    &Length);
        goto LABEL_28;
      case 108:
        Length = 8 * v14;
        if ( v8 < 8 )
          goto LABEL_477;
        if ( v8 < 8 * (int)v14 )
        {
          LODWORD(v14) = v8 >> 3;
          v120 = v8 >> 3;
          BootGraphicsInformation = -1073741820;
        }
        v148 = v6;
        while ( 1 )
        {
          Size_4 = v9;
          if ( (unsigned int)v9 >= (unsigned int)v14 )
            break;
          ProcNumber.Group = v15;
          ProcNumber.Number = v9;
          ProcNumber.Reserved = 0;
          v177 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 23608);
          *(_QWORD *)v6 = v177;
          v6 += 8LL;
          v148 = v6;
          LODWORD(v9) = v9 + 1;
          LODWORD(v14) = v120;
        }
        goto LABEL_28;
      case 109:
        SystemBasicInformation = SmQueryStoreInformation(0x140000000LL, v6, v8, v112, (__int64)&Length);
        goto LABEL_27;
      case 112:
        SystemBasicInformation = IoQueryVhdBootInformation(0x140000000uLL, v6, v8, &Length);
        goto LABEL_27;
      case 113:
        SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, v8, v112, &Length);
        goto LABEL_27;
      case 115:
        if ( v121 )
        {
          SystemBasicInformation = -1073741820;
        }
        else
        {
          Length = 8;
          if ( v8 >= 8 )
          {
            *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
            *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
            goto LABEL_28;
          }
          SystemBasicInformation = -1073741820;
        }
        goto LABEL_27;
      case 116:
        SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)v6, v8, &Length);
        goto LABEL_27;
      case 117:
        Length = 888;
        if ( v8 == 888 )
        {
          if ( v112 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(v6, v17, v18, v14);
        }
        else
        {
          SystemBasicInformation = -1073741820;
        }
        goto LABEL_27;
      case 118:
        if ( v8 >= 0x100 )
        {
LABEL_422:
          SystemBasicInformation = VfGetVerifierInformation((void *)v6, v8);
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 256;
        return -1073741820;
      case 121:
        Length = 4 * (unsigned __int16)KeNumberNodes;
        if ( v8 < Length )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        for ( i = 0; ; LODWORD(v9) = i )
        {
          Size_4 = v9;
          if ( i >= (unsigned __int16)KeNumberNodes )
            break;
          *(_DWORD *)(v6 + 4LL * i++) = *((_DWORD *)KeNodeDistance
                                        + (unsigned int)v9
                                        + (unsigned __int16)v18 * (unsigned __int16)KeNumberNodes);
        }
        goto LABEL_28;
      case 122:
        Length = 8;
        if ( v8 != 8 || !v6 )
          goto LABEL_295;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
        v126 = (LOGICAL_PROCESSOR_RELATIONSHIP *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          BootGraphicsInformation = -1073741670;
          goto LABEL_28;
        }
        BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, ULONG *))off_140397D98[0])(
                                    26LL,
                                    8LL,
                                    PoolWithQuotaTag,
                                    &Length);
        if ( BootGraphicsInformation >= 0 )
        {
          *(_DWORD *)v6 = *PoolWithQuotaTag;
          *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ PoolWithQuotaTag[1]) & 1;
          v89 = *(_DWORD *)(v6 + 4) ^ ((unsigned __int8)*(_DWORD *)(v6 + 4) ^ (unsigned __int8)PoolWithQuotaTag[1]) & 2;
          *(_DWORD *)(v6 + 4) = v89;
          *(_DWORD *)(v6 + 4) = v89 ^ ((unsigned __int8)v89 ^ (unsigned __int8)PoolWithQuotaTag[1]) & 4;
        }
        goto LABEL_496;
      case 123:
        if ( v8 == 32 )
        {
          ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          *(_QWORD *)&v160 = MmGetAvailablePages(ProcessPartitionId);
          *((_QWORD *)&v160 + 1) = MmGetTotalCommittedPages(v47);
          *(_QWORD *)&v161 = MmGetTotalCommitLimit(v48);
          *((_QWORD *)&v161 + 1) = MmGetPeakCommitment(v49);
          if ( *((_QWORD *)&v161 + 1) < v50 )
            *((_QWORD *)&v161 + 1) = v50;
          *(_OWORD *)v6 = v160;
          *(_OWORD *)(v6 + 16) = v161;
          goto LABEL_117;
        }
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      case 124:
        Length = 12;
        if ( v8 < 4 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        v144 = *(_DWORD *)v6;
        if ( v144 != 1 )
        {
          BootGraphicsInformation = -1073741637;
          goto LABEL_28;
        }
        Length = 12;
        if ( v8 < 0xC )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v6 + 8) = 1;
        *(_DWORD *)(v6 + 4) = 1;
        if ( MEMORY[0xFFFFF780000003C6] )
          *(_DWORD *)(v6 + 4) &= ~1u;
        goto LABEL_28;
      case 125:
        if ( v8 < 0x10 )
        {
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        }
        v125[0] = *(_DWORD *)v6;
        v176 = *(_QWORD *)(v6 + 8);
        v78 = *(_DWORD *)(v6 + 4);
        v155 = v78;
        if ( (v176 & 7) != 0 )
          return -2147483646;
        if ( ExIsRestrictedCaller(v112) )
          return -1073741790;
        SystemBasicInformation = ExGetSessionBigPoolInformation(v176, v78, &Length, v125);
        goto LABEL_27;
      case 126:
        Length = 32;
        if ( v8 != 32 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        BootGraphicsInformation = BgkQueryBootGraphicsInformation(0LL, v179, v18, v14);
        if ( BootGraphicsInformation >= 0 )
        {
          if ( v112 )
            v179[0] = 0LL;
          memmove((void *)v6, v179, Length);
        }
        goto LABEL_28;
      case 128:
        if ( v121 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        v94 = MmEnumerateBadPages(&v140);
        v95 = v140;
        if ( v140 )
          LODWORD(v9) = 8 * *(_DWORD *)v140;
        Length = v9;
        if ( Size < (unsigned int)v9 )
          v94 = -1073741820;
        BootGraphicsInformation = v94;
        if ( v140 )
        {
          if ( v94 >= 0 )
            memmove((void *)v6, (char *)v140 + 8, (unsigned int)v9);
          ExFreePoolWithTag(v95, 0);
        }
        goto LABEL_28;
      case 133:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v112) )
          return -1073741727;
        SystemBasicInformation = ExpGetSystemPlatformBinary(v6, Size, v112);
        goto LABEL_27;
      case 134:
        Length = 32;
        if ( v8 == 32 )
          SystemBasicInformation = ExHandleSPCall2(0x140000000LL, (__m128i *)v6);
        else
          SystemBasicInformation = -1073741820;
        goto LABEL_27;
      case 135:
        Length = 8;
        if ( v8 < 8 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        if ( (unsigned int)HvlQueryActiveProcessors(&v131, 0LL) )
        {
          BootGraphicsInformation = -1073741637;
        }
        else
        {
          BootGraphicsInformation = HvlQueryProcessorTopologyCount(0LL, &v132);
          if ( BootGraphicsInformation )
          {
            BootGraphicsInformation = -1073741637;
          }
          else
          {
            *(_DWORD *)v6 = v131;
            *(_DWORD *)(v6 + 4) = v132;
          }
        }
        goto LABEL_28;
      case 136:
      case 137:
        if ( v8 == 48 )
          return ExpGetDeviceDataInformation((unsigned int)v7, v6, 48LL, v14);
        if ( a6 )
          *a6 = 48;
        return -1073741820;
      case 138:
        SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)v6);
        goto LABEL_27;
      case 139:
        SystemBasicInformation = ExpQueryChannelInformation((void *)v6);
        goto LABEL_27;
      case 140:
        if ( a6 || v8 >= 8 )
        {
          BootGraphicsInformation = BgkQueryBootGraphicsInformation(2LL, &Length, v18, v14);
          if ( BootGraphicsInformation >= 0 )
          {
            if ( Length )
            {
              if ( Size >= Length )
              {
                BootGraphicsInformation = BgkQueryBootGraphicsInformation(1LL, &P, v90, v91);
                if ( BootGraphicsInformation >= 0 )
                {
                  v92 = P;
                  if ( P )
                  {
                    memmove((void *)v6, P, Length);
                    ExFreePoolWithTag(v92, 0x4B494742u);
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
        goto LABEL_28;
      case 143:
      case 145:
      case 171:
      case 179:
        SystemBasicInformation = SeSecureBootQueryInformation(v7, v6, v8, &Length);
        goto LABEL_27;
      case 147:
        SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, v8, &Length, v14);
        goto LABEL_27;
      case 149:
        if ( v8 >= 3 )
        {
          *(_BYTE *)v6 = KdpBootedNodebug == 0;
          *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
          *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
          Length = 3;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 3;
        return -1073741820;
      case 150:
        if ( !ExBootLoaderMetadata )
          goto LABEL_53;
        v93 = *(_DWORD *)ExBootLoaderMetadata;
        Length = *(_DWORD *)ExBootLoaderMetadata;
        if ( !v6 )
          goto LABEL_28;
        if ( v8 < v93 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v112) )
          return -1073741727;
        memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), Length);
        goto LABEL_28;
      case 151:
        Length = 4;
        if ( v8 >= 4 )
        {
          *(_DWORD *)v6 = ExSoftRebootFlags;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 4;
        return -1073741820;
      case 153:
        if ( v121 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        Length = 32;
        if ( v8 < 0x20 )
        {
          if ( v8 < 0xC )
          {
            BootGraphicsInformation = -1073741820;
          }
          else
          {
            Length = 12;
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
          }
        }
        else
        {
          *(_QWORD *)v6 = PoOffCrashConfigTable;
          *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
          *(_QWORD *)(v6 + 16) = xmmword_1403ABD70;
          *(_DWORD *)(v6 + 24) = DWORD2(xmmword_1403ABD70);
        }
        goto LABEL_28;
      case 154:
        if ( v8 < 0x20 )
        {
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        }
        BootGraphicsInformation = ExpGetSystemProcessorFeaturesInformation(v6, v17, v18, v14);
LABEL_117:
        Length = 32;
        goto LABEL_28;
      case 156:
        Length = 128;
        if ( v8 != 128 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        BootGraphicsInformation = BgkQueryBootGraphicsInformation(3LL, v181, v18, v14);
        if ( BootGraphicsInformation >= 0 )
          memmove((void *)v6, v181, Length);
        goto LABEL_28;
      case 157:
        Length = WORD1(qword_1403A1C68) + 24;
        if ( v8 < Length )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_27;
        }
        v63 = (void *)(v6 + 24);
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_DWORD *)v6 = ExpManufacturingInformation;
        *(_DWORD *)(v6 + 8) = qword_1403A1C68;
        if ( (_WORD)qword_1403A1C68 )
        {
          *(_QWORD *)(v6 + 16) = v63;
          memmove(v63, qword_1403A1C70, WORD1(qword_1403A1C68));
        }
        goto LABEL_28;
      case 158:
        Length = 1;
        if ( v8 )
        {
          *(_BYTE *)v6 = PoEnergyEstimationEnabled();
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 1;
        goto LABEL_295;
      case 159:
        SystemBasicInformation = HvlQueryDetailInfo(v6, v8, v18, &Length);
        goto LABEL_27;
      case 160:
        v96 = (_DWORD)v14 << 6;
        Length = (_DWORD)v14 << 6;
        if ( v8 < 0x40 )
          goto LABEL_477;
        v97 = v8 < v96;
        if ( v8 < v96 )
        {
          LODWORD(v14) = v8 >> 6;
          v120 = v8 >> 6;
          v97 = v8 < v96;
        }
        v98 = v97 ? 0xC0000004 : 0;
        v149 = v6;
        while ( 1 )
        {
          Size_4 = v9;
          if ( (unsigned int)v9 >= (unsigned int)v14 )
            break;
          ProcNumber.Group = v15;
          ProcNumber.Number = v9;
          ProcNumber.Reserved = 0;
          v99 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          KeQueryCycleTimeStatsProcessor(v99, (_QWORD *)v6);
          v6 += 64LL;
          v149 = v6;
          LODWORD(v9) = v9 + 1;
          LODWORD(v14) = v120;
        }
        BootGraphicsInformation = v98;
        goto LABEL_28;
      case 162:
        SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)v6, v8, &Length);
        goto LABEL_27;
      case 163:
        if ( v8 )
        {
          *(_BYTE *)v6 = KdIgnoreUmExceptions;
          Length = 1;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 1;
        return -1073741820;
      case 164:
      case 172:
      case 189:
      case 190:
      case 199:
        if ( qword_1403A5D08 )
          SystemBasicInformation = qword_1403A5D08((unsigned int)v7, v6, v8, &Length);
        else
          SystemBasicInformation = -1073741823;
        goto LABEL_27;
      case 165:
        Length = 16;
        if ( v8 == 16 )
        {
          v135 = (unsigned __int8)(16 * (ExpFirmwarePageProtectionSupported & 1));
          if ( VslIsSecureKernelRunning() )
          {
            v118[0] = 0;
            v100 = v64 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v102 = v100 | 2;
            if ( (NestedPageProtectionFlags & 2) == 0 )
              v102 = v100;
            v103 = v102;
            v104 = v102 | 4;
            if ( (NestedPageProtectionFlags & 0x20) == 0 )
              v104 = v103;
            v105 = v104 | 8;
            if ( (NestedPageProtectionFlags & 0x10) == 0 )
              v105 = v104;
            if ( v134 )
            {
              BootGraphicsInformation = VslIsTrustletRunning(v134, v118);
              BYTE1(v135) ^= (v118[0] ^ BYTE1(v135)) & 1;
            }
            LOBYTE(v135) = v105 | (32 * (ExpIsIumEncryptionKeyAvailable() & 1));
          }
          *(_OWORD *)v6 = v135;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 16;
        goto LABEL_295;
      case 166:
        SystemBasicInformation = SeQueryHSTIResults(v6, v8, &Length, v14);
        goto LABEL_27;
      case 167:
        SystemBasicInformation = ExpQuerySingleModuleInformation(v6, v8, v112, &Length);
        goto LABEL_27;
      case 169:
        SystemBasicInformation = HvlQueryVsmProtectionInfo(v6, v8, &Length, v14);
        goto LABEL_27;
      case 173:
        result = ExCpuSetResourceManagerAccessCheck(v112);
        if ( result < 0 )
          return result;
        Length = 168;
        if ( Size == 168 )
          SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)v6);
        else
          SystemBasicInformation = -1073741820;
        goto LABEL_27;
      case 174:
        SystemBasicInformation = PsRootSiloInformation(v6, v8, &Length, v14);
        goto LABEL_27;
      case 175:
        if ( v16 )
        {
          result = ObReferenceObjectByHandle(v16, 0x1000u, (POBJECT_TYPE)PsProcessType, v112, &v150, 0LL);
          v9 = (__int64)v150;
          Process = (PEPROCESS)v150;
          if ( result < 0 )
            return result;
        }
        else
        {
          Process = 0LL;
        }
        BootGraphicsInformation = KeQueryCpuSetInformation((void *)v6);
        if ( v9 )
          ObfDereferenceObject((PVOID)v9);
        goto LABEL_28;
      case 178:
        if ( !v8 )
        {
          BootGraphicsInformation = -1073741789;
          goto LABEL_28;
        }
        if ( v112 )
        {
          if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v112) )
            return -1073741727;
          v8 = Size;
        }
        v106 = v8;
        v107 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v8, 0x6F666E49u);
        PoolWithQuotaTag = v107;
        v117 = v107;
        if ( !v107 )
        {
          BootGraphicsInformation = -1073741670;
          goto LABEL_28;
        }
        memset(v107, 0, v106);
        BootGraphicsInformation = VslQuerySecureKernelProfileInformation(v141, (__int64)PoolWithQuotaTag, Size, &Length);
        if ( BootGraphicsInformation >= 0 )
          goto LABEL_495;
        goto LABEL_496;
      case 180:
        SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)v126, v121, v6, v8, (__int64)&Length);
        goto LABEL_27;
      case 181:
        if ( v16 )
        {
          result = ObReferenceObjectByHandle(v16, 0x1000u, (POBJECT_TYPE)PsProcessType, v112, &Object, 0LL);
          v9 = (__int64)Object;
          Process = (PEPROCESS)Object;
          if ( result < 0 )
            return result;
          v8 = Size;
        }
        else
        {
          Process = 0LL;
        }
        BootGraphicsInformation = PsWow64GetSupportedArchitectures((_DWORD *)v6, v8, &Length, v9);
        if ( v9 )
          ObfDereferenceObject((PVOID)v9);
        goto LABEL_28;
      case 182:
        if ( v8 == 56 )
        {
          v26 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          *(_QWORD *)&v156 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * v26) + 6864LL) << 12;
          v27 = MmGetAvailablePages(v26) << 12;
          *((_QWORD *)&v156 + 1) = v27;
          *(_QWORD *)&v157 = MmGetResidentAvailablePages(v28) << 12;
          *((_QWORD *)&v157 + 1) = MmGetTotalCommittedPages(v29) << 12;
          *((_QWORD *)&v158 + 1) = MmGetTotalCommitLimit(v30) << 12;
          v159 = MmGetPeakCommitment(v31) << 12;
          *(_QWORD *)&v158 = MmGetSharedCommit() << 12;
          if ( v35 < v27 )
            *(_QWORD *)&v156 = v27;
          if ( v34 < v33 )
            *((_QWORD *)&v158 + 1) = v33;
          if ( v32 < v33 )
            v159 = v33;
          *(_OWORD *)v6 = v156;
          *(_OWORD *)(v6 + 16) = v157;
          *(_OWORD *)(v6 + 32) = v158;
          *(_QWORD *)(v6 + 48) = v159;
          Length = 56;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      case 183:
        if ( v8 != 16 )
          return -1073741820;
        SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(
                                   *(_QWORD *)v6,
                                   *(unsigned int *)(v6 + 8),
                                   v18,
                                   v14);
        goto LABEL_27;
      case 184:
        if ( v8 != 24 )
        {
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        }
        v65 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
        *(_QWORD *)&v162 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * v65) + 6864LL) << 12;
        *((_QWORD *)&v162 + 1) = MmGetLowestPhysicalPage(v65) << 12;
        v163 = (MmGetHighestPhysicalPage(v66) << 12) + 4095;
        *(_OWORD *)v6 = v162;
        *(_QWORD *)(v6 + 16) = v163;
LABEL_211:
        Length = 24;
        goto LABEL_28;
      case 185:
        SystemBasicInformation = WbDispatchOperation((char *)v6, v8);
        goto LABEL_27;
      case 186:
        if ( !v8 )
        {
          Data[0] = 1;
          return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
        }
        if ( a6 )
          *a6 = 0;
        return -1073741820;
      case 188:
        if ( v8 != 8 )
          return -1073741820;
        BootGraphicsInformation = PsQueryActivityModerationUserSettings(v152);
        if ( BootGraphicsInformation >= 0 )
          *(_QWORD *)v6 = v152[0];
        goto LABEL_28;
      case 192:
        if ( v8 >= 0x20 )
        {
          BootGraphicsInformation = ExpGetSystemFlushInformation(v6);
          Length = 32;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      case 193:
        v87 = 8 * KeQueryActiveGroupCount();
        Length = v87;
        if ( Size < v87 )
        {
LABEL_477:
          BootGraphicsInformation = -1073741789;
        }
        else
        {
          memset((void *)v6, 0, v87);
          Size_4 = 0;
          while ( (unsigned int)v9 < (unsigned __int16)KeNumberNodes )
          {
            v88 = KeNodeBlock[(unsigned int)v9];
            v119 = *(_WORD *)(v88 + 144);
            *(_QWORD *)(v6 + 8LL * v119) |= *(_QWORD *)(v88 + 16);
            LODWORD(v9) = ++Size_4;
          }
        }
        goto LABEL_28;
      case 195:
        if ( v8 >= 8 )
        {
          SystemBasicInformation = ExpGetSystemWriteConstraintInformation(v6, v17, v18, v14);
          Length = 8;
          goto LABEL_27;
        }
        if ( a6 )
          *a6 = 8;
        return -1073741820;
      case 196:
        SystemBasicInformation = KeQueryKvaShadowInformation(v6, v8, &Length, v14);
        goto LABEL_27;
      case 197:
        Length = 8;
        if ( v8 >= 8 )
        {
          v43 = qword_1403CB680;
          *(_QWORD *)v6 = 0LL;
          *(_QWORD *)v6 = v43;
          goto LABEL_28;
        }
        SystemBasicInformation = -1073741820;
        goto LABEL_27;
      case 198:
        BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140397D98[0])(
                                    34LL,
                                    0LL,
                                    0LL,
                                    NumberOfBytes);
        if ( BootGraphicsInformation != -1073741820 )
          return -1073741637;
        v39 = NumberOfBytes[0];
        if ( Size < LODWORD(NumberOfBytes[0]) || !v6 )
        {
LABEL_86:
          Length = v39;
          goto LABEL_28;
        }
        v108 = v112;
        if ( v112 )
        {
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LODWORD(NumberOfBytes[0]), 0x6F666E49u);
          v117 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            BootGraphicsInformation = -1073741670;
            goto LABEL_28;
          }
          v39 = NumberOfBytes[0];
        }
        else
        {
          PoolWithQuotaTag = (_DWORD *)v6;
          v117 = (_DWORD *)v6;
        }
        v109 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, ULONG *))off_140397D98[0])(
                 34LL,
                 v39,
                 PoolWithQuotaTag,
                 &Length);
        BootGraphicsInformation = v109;
        if ( v108 )
        {
          if ( v109 >= 0 )
LABEL_495:
            memmove((void *)v6, PoolWithQuotaTag, Length);
LABEL_496:
          ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
        }
        goto LABEL_28;
      case 200:
        SystemBasicInformation = IoQuerySystemDeviceName(200);
        goto LABEL_27;
      case 201:
        SystemBasicInformation = KeQuerySpeculationControlInformation(v6, v8, &Length, v14);
        goto LABEL_27;
      case 202:
        Length = 1;
        if ( v8 == 1 )
        {
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, char *, int *))off_140397D98[0])(
                                      47LL,
                                      1LL,
                                      v124,
                                      &v133);
          if ( BootGraphicsInformation >= 0 && v133 == 1 )
            *(_BYTE *)v6 = v124[0];
          else
LABEL_90:
            BootGraphicsInformation = -1073741637;
          goto LABEL_28;
        }
        if ( a6 )
          *a6 = 1;
LABEL_295:
        SystemBasicInformation = -1073741820;
        goto LABEL_27;
      default:
        return -1073741821;
    }
  }
  SystemBasicInformation = PfQuerySuperfetchInformation(a1, v6, v8, v112, (__int64)&Length);
LABEL_27:
  BootGraphicsInformation = SystemBasicInformation;
LABEL_28:
  if ( a6 )
    *a6 = Length;
  return BootGraphicsInformation;
}
