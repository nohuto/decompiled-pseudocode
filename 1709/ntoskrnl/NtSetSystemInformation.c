/*
 * XREFs of NtSetSystemInformation @ 0x140469CA0
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x1408578B4 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     ExpUpdateTimerConfiguration @ 0x140015418 (ExpUpdateTimerConfiguration.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiGetThreadPartition @ 0x1400CFA28 (MiGetThreadPartition.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011F4EC (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     KdUpdateTimeSlipEvent @ 0x14015D590 (KdUpdateTimeSlipEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ZwLoadDriver @ 0x14017F860 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x140180CC0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140181040 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VslProvisionDumpEncryption @ 0x1401F2448 (VslProvisionDumpEncryption.c)
 *     KeProcessorProfileControlArea @ 0x140203814 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140209230 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14020B860 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x14024DB44 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x14024DFD4 (PsSetExeModerationState.c)
 *     ExpCompleteSoftReboot @ 0x140283F8C (ExpCompleteSoftReboot.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     PsLookupProcessThreadByCid @ 0x14046C560 (PsLookupProcessThreadByCid.c)
 *     PfSnSetPrefetcherInformation @ 0x14046CE14 (PfSnSetPrefetcherInformation.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     SmSetStoreInformation @ 0x140571F70 (SmSetStoreInformation.c)
 *     ExHandleSPCall2 @ 0x14057291C (ExHandleSPCall2.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14057D8A8 (KeSynchronizeWithDynamicProcessors.c)
 *     MmUnloadSystemImage @ 0x14059DFC0 (MmUnloadSystemImage.c)
 *     KeInitializeEntropySystem @ 0x1405E67F0 (KeInitializeEntropySystem.c)
 *     PsChangeQuantumTable @ 0x1405E7654 (PsChangeQuantumTable.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405E7FB4 (ExpRegisterFirmwareTableInformationHandler.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     ExpInitializeSessionDriver @ 0x1405EDD4C (ExpInitializeSessionDriver.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405F26E0 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x14068B8B8 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x140693A8C (CmReconcileAndValidateAllHives.c)
 *     VslRelaxQuotas @ 0x1406B4054 (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1406E0670 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1406E10D0 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1406E275C (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x1406EEF04 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1406F1034 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     ExpIsKernelCfgActive @ 0x1407549D0 (ExpIsKernelCfgActive.c)
 *     ExpQueryElamCertInfo @ 0x140754E40 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140755678 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407556D4 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x140755A68 (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140760074 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x1407A6974 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1407A6AF8 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1407A6B30 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1407B7CD8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1407CA4D8 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1407CA500 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1407CA600 (VfSetVerifierInformationEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  SYSTEM_INFORMATION_CLASS v5; // esi
  int v6; // r13d
  __int64 v7; // r8
  char PreviousMode; // r12
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  int updated; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // cl
  unsigned __int64 v16; // r9
  NTSTATUS result; // eax
  __int32 v18; // esi
  __int64 v19; // rcx
  __int32 v20; // esi
  __int32 v22; // esi
  __int32 v23; // esi
  __int64 ThreadPartition; // rax
  __int32 v25; // esi
  __int32 v26; // esi
  int SystemImage; // eax
  char *v28; // rbx
  PVOID v29; // rsi
  PIMAGE_NT_HEADERS v30; // rax
  __int64 AddressOfEntryPoint; // rdx
  _SINGLE_LIST_ENTRY *v32; // r8
  __int64 v33; // r9
  PVOID v34; // rsi
  __int32 v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // ecx
  char *v41; // rdi
  PIMAGE_NT_HEADERS v42; // rax
  __int32 v43; // esi
  int v44; // esi
  int v45; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char v47; // bl
  int v48; // ecx
  int v49; // ecx
  PVOID v50; // rcx
  unsigned __int64 v51; // rax
  __int32 v52; // esi
  int v53; // esi
  ULONG ActiveProcessorCount; // eax
  __int64 *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int32 v62; // esi
  int v63; // eax
  char *v64; // rcx
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // edx
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int16 v72; // ax
  __int64 v73; // rax
  int v74; // edi
  __int32 v75; // esi
  __int32 v76; // esi
  __int32 v77; // esi
  int v78; // esi
  unsigned int v79; // edi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int128 v82; // xmm6
  __m128i v83; // xmm1
  __int128 v84; // xmm7
  unsigned __int16 v85; // di
  char *v86; // rcx
  PVOID PoolWithTag; // rax
  PVOID v88; // r15
  __int32 v89; // esi
  __int32 v90; // esi
  __int32 v91; // esi
  unsigned int v92; // r15d
  __int64 v93; // rsi
  __int64 v94; // rcx
  char v95[24]; // [rsp+30h] [rbp-468h] BYREF
  _BYTE v96[2]; // [rsp+48h] [rbp-450h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-448h]
  unsigned __int64 v98; // [rsp+58h] [rbp-440h] BYREF
  int v99; // [rsp+60h] [rbp-438h]
  void *Buf1[2]; // [rsp+68h] [rbp-430h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-420h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+80h] [rbp-418h] BYREF
  __int128 v103; // [rsp+90h] [rbp-408h] BYREF
  __int64 v104; // [rsp+A0h] [rbp-3F8h]
  ULONG Size[7]; // [rsp+ACh] [rbp-3ECh] BYREF
  PVOID v106; // [rsp+C8h] [rbp-3D0h] BYREF
  PVOID v107[2]; // [rsp+E8h] [rbp-3B0h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp-3A0h] BYREF
  __int64 v109; // [rsp+100h] [rbp-398h] BYREF
  PVOID Object[3]; // [rsp+110h] [rbp-388h] BYREF
  HANDLE v111; // [rsp+140h] [rbp-358h]
  __int64 v112[4]; // [rsp+148h] [rbp-350h] BYREF
  __int64 v113[9]; // [rsp+168h] [rbp-330h] BYREF
  int v114; // [rsp+1B4h] [rbp-2E4h]
  __int128 v115; // [rsp+1C8h] [rbp-2D0h]
  unsigned int v116; // [rsp+1D8h] [rbp-2C0h]
  int v117; // [rsp+1E0h] [rbp-2B8h]
  _WORD v118[8]; // [rsp+1E8h] [rbp-2B0h] BYREF
  __int128 v119; // [rsp+1F8h] [rbp-2A0h] BYREF
  __int128 v120; // [rsp+208h] [rbp-290h] BYREF
  __int64 v121; // [rsp+218h] [rbp-280h]
  _QWORD v122[5]; // [rsp+220h] [rbp-278h] BYREF
  __int128 v123; // [rsp+260h] [rbp-238h] BYREF
  __int128 v124; // [rsp+270h] [rbp-228h] BYREF
  void *Src[2]; // [rsp+280h] [rbp-218h]
  __int128 v126; // [rsp+2A0h] [rbp-1F8h] BYREF
  __int64 v127; // [rsp+2B0h] [rbp-1E8h]
  __int128 v128; // [rsp+2B8h] [rbp-1E0h]
  __int128 v129; // [rsp+2C8h] [rbp-1D0h]
  __int128 v130; // [rsp+2D8h] [rbp-1C0h]
  char v131[160]; // [rsp+2F0h] [rbp-1A8h] BYREF
  char v132[160]; // [rsp+390h] [rbp-108h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v6 = 1;
  v7 = 1LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  v10 = 3LL;
  if ( PreviousMode )
  {
    v11 = 1LL;
    if ( SystemInformationClass != SystemErrorPortInformation )
      v11 = 3LL;
    if ( (_DWORD)v3 )
    {
      if ( ((unsigned __int64)SystemInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + v3;
      if ( (unsigned __int64)SystemInformation + v3 > 0x7FFFFFFF0000LL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemVerifierInformationEx )
  {
    if ( v5 > SystemScrubPhysicalMemoryInformation )
    {
      if ( v5 <= SystemHypervisorDetailInformation )
      {
        if ( v5 != SystemHypervisorDetailInformation )
        {
          if ( v5 <= SystemCriticalProcessErrorLogInformation )
          {
            if ( v5 != SystemCriticalProcessErrorLogInformation )
            {
              v22 = v5 - 129;
              if ( !v22 )
                return KeProcessorProfileControlArea((__int64)SystemInformation, v3, PreviousMode);
              v23 = v22 - 1;
              if ( !v23 )
              {
                if ( (((_DWORD)v3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)v3 != 40 )
                {
                  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                  {
                    memset(v122, 0, 0x20uLL);
                    memmove(v122, (const void *)v4, v3);
                    if ( (_DWORD)v3 == 32 )
                      v9 = v122[3];
                    ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                    updated = MiCombineIdenticalPages(
                                ThreadPartition,
                                v122[0],
                                LODWORD(v122[2]),
                                v9,
                                KeGetCurrentThread()->PreviousMode,
                                v113);
                    PrivilegeValue.LowPart = updated;
                    *(_QWORD *)(v4 + 8) = v113[0];
                    return updated;
                  }
                  return -1073741727;
                }
                return -1073741820;
              }
              v43 = v23 - 1;
              if ( !v43 )
              {
                if ( PreviousMode )
                  return -1073741790;
                if ( (_DWORD)v3 != 24 )
                  return -1073741820;
                return KeInitializeEntropySystem(
                         *(_QWORD *)SystemInformation,
                         *((_QWORD *)SystemInformation + 1),
                         *((_QWORD *)SystemInformation + 2),
                         3LL);
              }
              v44 = v43 - 1;
              if ( !v44 )
              {
                if ( (_DWORD)v3 != 4 )
                  return -1073741820;
                *(_DWORD *)&DriverServiceName.Length = 7733364;
                DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
                v45 = *(_DWORD *)SystemInformation & 1;
                v96[1] = *(_BYTE *)SystemInformation & 1;
                if ( (_BYTE)v45 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                  updated = ZwLoadDriver(&DriverServiceName);
                  v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL);
                  if ( (v47 & 2) != 0 && (v47 & 4) == 0 )
                    ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                  KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  return updated;
                }
                if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                  return -1073741727;
                return ZwUnloadDriver(&DriverServiceName);
              }
              if ( v44 == 2 )
              {
                if ( (_DWORD)v3 != 32 )
                  return -1073741820;
                return ExHandleSPCall2(2LL, SystemInformation, 1LL, 3LL);
              }
              return -1073741821;
            }
            if ( (_DWORD)v3 != 48 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
              return -1073741727;
            if ( (_DWORD)CriticalProcessExceptionData )
              return 0;
            v82 = *(_OWORD *)v4;
            v128 = *(_OWORD *)v4;
            v83 = *(__m128i *)(v4 + 16);
            v129 = (__int128)v83;
            v84 = *(_OWORD *)(v4 + 32);
            v130 = v84;
            *(__m128i *)Src = v83;
            v129 = 0uLL;
            v85 = _mm_cvtsi128_si32(v83);
            if ( v85 && (v85 & 1) == 0 )
            {
              if ( ((__int64)Src[1] & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v86 = (char *)Src[1] + v85;
              if ( (unsigned __int64)v86 > 0x7FFFFFFF0000LL || v86 < Src[1] )
                MEMORY[0x7FFFFFFF0000] = 0;
              PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v85, 0x50535845u);
              v88 = PoolWithTag;
              if ( PoolWithTag )
              {
                memmove(PoolWithTag, Src[1], v85);
                *((_QWORD *)&v129 + 1) = v88;
                LOWORD(v129) = v85;
                WORD1(v129) = v85;
              }
            }
            CriticalProcessExceptionData = v82;
            xmmword_14035E650 = v129;
            xmmword_14035E660 = v84;
            return 0;
          }
          v89 = v5 - 150;
          if ( !v89 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            if ( !(_DWORD)v3 )
            {
              if ( ExBootLoaderMetadata )
                _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
              return updated;
            }
            return -1073741820;
          }
          v90 = v89 - 1;
          if ( !v90 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return -1073741727;
            if ( (_DWORD)v3 != 1 )
              return -1073741820;
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            return ExpCompleteSoftReboot();
          }
          v91 = v90 - 1;
          if ( v91 )
          {
            if ( v91 == 3 )
              return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, SystemInformation, 1LL, 3LL);
            return -1073741821;
          }
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, SystemInformation, 1LL, 3LL);
          return -1073741811;
        }
        return -1073741637;
      }
      if ( v5 > SystemWin32WerStartCallout )
      {
        if ( v5 == SystemActivityModerationExeState )
        {
          if ( (_DWORD)v3 != 24 )
            return -1073741820;
          v103 = *(_OWORD *)SystemInformation;
          v104 = *((_QWORD *)SystemInformation + 2);
          result = VfProbeAndCaptureUnicodeStringBuffer(&v103, 1LL);
          if ( result < 0 )
            return result;
          updated = PsSetExeModerationState((__int64)&v103, v104, HIDWORD(v104));
          v64 = (char *)&v103;
LABEL_299:
          VfFreeCapturedUnicodeString(v64);
          return updated;
        }
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          v94 = (unsigned int)(v5 - 191);
          if ( v5 == SystemIntegrityQuotaInformation )
          {
            if ( !(_DWORD)v3 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741727;
              return VslRelaxQuotas(v94, SystemInformation, v7, v10);
            }
          }
          else
          {
            if ( v5 != SystemSecureDumpEncryptionInformation )
              return -1073741821;
            if ( !(_DWORD)v3 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              return VslProvisionDumpEncryption();
            }
          }
          return -1073741811;
        }
      }
      else
      {
        if ( v5 == SystemWin32WerStartCallout )
        {
          if ( (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) != -1 )
            return PsInvokeWin32Callout(32LL, 0LL, 1LL);
          return 0;
        }
        if ( v5 == SystemVmGenerationCountInformation )
        {
          if ( PreviousMode )
            return -1073741790;
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          return KdInitialize(3LL, SystemInformation, &KdpContext);
        }
        if ( v5 != SystemCodeIntegrityPolicyInformation )
        {
          if ( v5 == SystemAllowedCpuSetsInformation )
          {
            if ( (v3 & 7) != 0 || (unsigned int)v3 > 0xA0 )
              return -1073741820;
            memmove(v132, SystemInformation, v3);
            result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( result < 0 )
              return result;
            return KeSetSystemAllowedCpuSets((unsigned int)v3 >> 3, v132);
          }
          if ( v5 == SystemInterruptCpuSetsInformation )
          {
            if ( (_DWORD)v3 != 16 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return -1073741727;
            return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
          }
          if ( v5 != SystemCpuSetTagInformation )
            return -1073741821;
          if ( (unsigned int)v3 < 8 )
            return -1073741820;
          v92 = v3 - 8;
          if ( (v92 & 7) != 0 || v92 > 0xA0 )
            return -1073741820;
          v93 = *(_QWORD *)SystemInformation;
          v122[4] = *(_QWORD *)SystemInformation;
          memmove(v131, (char *)SystemInformation + 8, v92);
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( updated >= 0 )
            return KeSetTagCpuSets(v92 >> 3, v131, v93);
          return updated;
        }
      }
      if ( qword_1403626C8 )
        return qword_1403626C8((unsigned int)v5, SystemInformation, (unsigned int)v3, 3LL);
      return -1073741637;
    }
    if ( v5 != SystemScrubPhysicalMemoryInformation )
    {
      if ( v5 > SystemProcessorMicrocodeUpdateInformation )
      {
        v25 = v5 - 106;
        if ( !v25 )
          return -1073741821;
        v26 = v25 - 3;
        if ( v26 )
        {
          v52 = v26 - 1;
          if ( !v52 )
            return -1073741822;
          v53 = v52 - 1;
          if ( v53 )
          {
            if ( v53 == 2 )
              return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, v3, PreviousMode);
            return -1073741821;
          }
          if ( (_DWORD)v3 != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        LOBYTE(v10) = PreviousMode;
        return SmSetStoreInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, (unsigned int)v3, v10);
      }
      if ( v5 == SystemProcessorMicrocodeUpdateInformation )
      {
        LOBYTE(v7) = PreviousMode;
        return ExpSetProcessorMicrocodeUpdateInformation(SystemInformation, (unsigned int)v3, v7, 3LL);
      }
      v75 = v5 - 93;
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( !v76 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            v80 = *(_QWORD *)v4;
            _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)v4);
            _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v80));
            return updated;
          }
          return -1073741820;
        }
        v77 = v76 - 1;
        if ( !v77 )
        {
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (unsigned int)v3 < 0x18 )
            return -1073741820;
          return ExpCovResetInformation(v4, (unsigned int)v3);
        }
        v78 = v77 - 2;
        if ( !v78 )
        {
          if ( (_DWORD)v3 != 40 )
            return -1073741820;
          if ( (unsigned int)ExpIsKernelCfgActive(*(_QWORD *)&SystemInformationClass, SystemInformation, 1LL, 3LL) )
            return -1073740641;
          if ( PreviousMode )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741727;
            v119 = *(_OWORD *)v4;
            v120 = *(_OWORD *)(v4 + 16);
            v121 = *(_QWORD *)(v4 + 32);
            result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v119 + 8, 1LL);
            if ( result < 0 )
              return result;
            updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v120 + 8, 1LL);
            if ( updated < 0 )
            {
              v64 = (char *)&v119 + 8;
              goto LABEL_299;
            }
            v4 = (unsigned __int64)&v119;
          }
          updated = VfFaultsSetParameters(v4);
          if ( !PreviousMode )
            return updated;
          VfFreeCapturedUnicodeString(v4 + 8);
          v64 = (char *)(v4 + 24);
          goto LABEL_299;
        }
        if ( v78 != 5 )
          return -1073741821;
        v79 = 432;
      }
      else
      {
        v79 = 172;
      }
      if ( (_DWORD)v3 != v79 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return -1073741727;
      if ( PsIsCurrentThreadInServerSilo() )
        return -1073741790;
      return ExpSetTimeZoneInformation(v4, v79);
    }
    if ( (_DWORD)v3 != 16 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      return -1073741727;
    updated = MmScrubMemory(v81, *(_QWORD *)v4, v112);
    PrivilegeValue.LowPart = updated;
    *(_QWORD *)(v4 + 8) = v112[0];
    return updated;
  }
  if ( v5 == SystemVerifierInformationEx )
  {
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return -1073741790;
    if ( (_DWORD)v3 != 40 )
      return -1073741820;
    return VfSetVerifierInformationEx(v4);
  }
  if ( v5 > SystemVerifierThunkExtend )
  {
    if ( v5 == SystemSuperfetchInformation )
      return PfSetSuperfetchInformation(*(__int64 *)&SystemInformationClass, SystemInformation, v3, PreviousMode);
    if ( v5 <= SystemSuperfetchInformation )
    {
      v18 = v5 - 54;
      if ( !v18 )
      {
        LODWORD(v7) = 0;
        goto LABEL_66;
      }
      v19 = 2LL;
      v20 = v18 - 2;
      if ( !v20 )
      {
        LOBYTE(v10) = PreviousMode;
        return PfSnSetPrefetcherInformation(2LL, SystemInformation, (unsigned int)v3, v10);
      }
      v35 = v20 - 3;
      if ( !v35 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          v71 = *(unsigned int *)SystemInformation;
          updated = ExpUpdateComPlusPackage(v71, SystemInformation, 1LL, 3LL);
          if ( updated >= 0 )
            MEMORY[0xFFFFF780000002E0] = v71;
          return updated;
        }
        return -1073741820;
      }
      v36 = v35 - 10;
      if ( v36 )
      {
        v37 = v36 - 2;
        if ( !v37 )
          return -1073741637;
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 2;
          if ( !v39 )
            return -1073741822;
          if ( v39 != 1 )
            return -1073741821;
          LOBYTE(v7) = PreviousMode;
          return ExpRegisterFirmwareTableInformationHandler(SystemInformation, (unsigned int)v3, v7, 3LL);
        }
        if ( PreviousMode || !SystemInformation || (_DWORD)v3 != 8 )
          return -1073741811;
        v65 = *(_DWORD *)SystemInformation;
        if ( v65 )
        {
          v66 = (unsigned int)(v65 - 1);
          if ( !(_DWORD)v66 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_140353600[0])(2LL, v66, 1LL, 3LL);
            return 0;
          }
          v67 = (unsigned int)(v66 - 1);
          if ( !(_DWORD)v67 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_140353608[0])(2LL, v67, 1LL, 3LL);
            return 0;
          }
          v68 = (unsigned int)(v67 - 1);
          if ( !(_DWORD)v68 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_1403535F8[0])(2LL, v68, 1LL, 3LL);
            return 0;
          }
          v69 = v68 - 1;
          if ( v69 )
          {
            v70 = (unsigned int)(v69 - 2);
            if ( !(_DWORD)v70 )
            {
              LOBYTE(v19) = 1;
              return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))off_140353618[0])(v19, v70, 1LL, 3LL);
            }
            if ( (_DWORD)v70 == 1 )
            {
              updated = 0;
              if ( off_140353618[0] == xKdEnumerateDebuggingDevices )
                return -1073741822;
              return updated;
            }
            return -1073741811;
          }
        }
      }
      return -1073741637;
    }
    switch ( v5 )
    {
      case SystemMemoryListInformation:
        LOBYTE(v7) = PreviousMode;
        return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, v7, 3LL);
      case SystemFileCacheInformationEx:
        goto LABEL_267;
      case SystemThreadPriorityClientIdInformation:
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return -1073741727;
        if ( PreviousMode )
        {
          v126 = *(_OWORD *)v4;
          v127 = *(_QWORD *)(v4 + 16);
          v4 = (unsigned __int64)&v126;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) <= 0x1E )
        {
          v124 = *(_OWORD *)v4;
          updated = PsLookupProcessThreadByCid(&v124, 0LL, Object);
          if ( updated >= 0 )
          {
            v34 = Object[0];
            if ( *((_BYTE *)Object[0] + 4) )
            {
              updated = -1073741749;
            }
            else
            {
              KeSetActualBasePriorityThread((__int64)Object[0], *(_DWORD *)(v4 + 16), v32, v33);
              updated = 259;
            }
            ObfDereferenceObject(v34);
          }
          return updated;
        }
        return -1073741811;
      case SystemRefTraceInformation:
        return ObSetRefTraceInformation(SystemInformation, (unsigned int)v3, 1LL, 3LL);
    }
    if ( v5 != SystemSpecialPoolInformation )
    {
      if ( v5 == SystemErrorPortInformation )
      {
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          v51 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
          if ( !v51 )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          v72 = *(_WORD *)(v51 + 8);
          if ( v72 != 332 && v72 != 452 )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        }
        return -1073741637;
      }
      if ( v5 != SystemHypervisorInformation )
        return -1073741821;
      if ( !PreviousMode )
      {
        if ( (_DWORD)v3 )
          return -1073741584;
        else
          return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
      }
      return -1073741790;
    }
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return -1073741790;
    if ( (_DWORD)v3 == 8 )
    {
      v73 = *(_QWORD *)v4;
      MmSpecialPoolTag = *(_QWORD *)v4;
      MmSpecialPoolCatchOverruns = BYTE4(v73) & 1;
      return updated;
    }
    return -1073741820;
  }
  if ( v5 == SystemVerifierThunkExtend )
  {
    if ( PreviousMode )
      return -1073741727;
    return MmAddVerifierThunks(SystemInformation, v3);
  }
  if ( v5 <= SystemCrashDumpStateInformation )
  {
    if ( v5 != SystemCrashDumpStateInformation )
    {
      if ( v5 == SystemFlagsInformation )
      {
        if ( (_DWORD)v3 != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      if ( v5 != SystemFileCacheInformation )
      {
        v13 = (unsigned int)(v5 - 24);
        if ( v5 == SystemDpcBehaviorInformation )
        {
          if ( (_DWORD)v3 == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v115 = *(_OWORD *)v4;
              v116 = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v115);
              KiMaximumDpcQueueDepth = DWORD1(v115);
              KiAdjustDpcThreshold = HIDWORD(v115);
              KiIdealDpcRate = v116;
              KeSynchronizeWithDynamicProcessors(v116, v13, v7, v10);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v55 = KiProcessorBlock;
                v56 = ActiveProcessorCount;
                do
                {
                  v57 = *v55;
                  *(_DWORD *)(v57 + 11864) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v57 + 11872) = KiMinimumDpcRate;
                  ++v55;
                  --v56;
                }
                while ( v56 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 != SystemLoadGdiDriverInformation )
        {
          if ( v5 != SystemUnloadGdiDriverInformation )
          {
            switch ( v5 )
            {
              case SystemTimeAdjustmentInformation:
                if ( (((_DWORD)v3 - 8) & 0xFFFFFFF7) == 0 )
                {
                  if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                  {
                    if ( !PsIsCurrentThreadInServerSilo() )
                    {
                      if ( (_DWORD)v3 == 16 )
                      {
                        v15 = *(_BYTE *)(v4 + 8);
                        v95[0] = v15;
                        v98 = *(_QWORD *)v4;
                      }
                      else
                      {
                        v15 = *(_BYTE *)(v4 + 4);
                        v95[0] = v15;
                        v16 = *(unsigned int *)v4;
                        v98 = v16;
                        if ( v16 )
                          v98 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v16;
                      }
                      if ( v15 )
                        v98 = MEMORY[0xFFFFF78000000300];
                      LOBYTE(v14) = 1;
                      ExAcquireTimeRefreshLock(v14);
                      updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v98, (__int64)v95);
                      ExReleaseResourceLite(&ExpTimeRefreshLock);
                      KeLeaveCriticalRegion();
                      return updated;
                    }
                    return -1073741790;
                  }
                  return -1073741727;
                }
                return -1073741820;
              case SystemMirrorMemoryInformation:
                return MmCreateMirror();
              case SystemPerformanceTraceInformation:
                LOBYTE(v7) = PreviousMode;
                return EtwSetPerformanceTraceInformation(v4, (unsigned int)v3, v7, 3LL);
            }
            return -1073741821;
          }
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          if ( PreviousMode )
            return -1073741727;
          MmUnloadSystemImage(*(_QWORD *)v4);
          return 0;
        }
LABEL_66:
        if ( (_DWORD)v3 == 56 )
        {
          if ( !PreviousMode )
          {
            v123 = *(_OWORD *)v4;
            SystemImage = MmLoadSystemImageEx((unsigned int)&v123, 0, 0, v7, (__int64)&v109, (__int64)&BaseAddress);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v28 = (char *)BaseAddress;
              v29 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0, Size);
              v30 = RtlImageNtHeader(v28);
              *(_QWORD *)(v4 + 40) = v29;
              AddressOfEntryPoint = v30->OptionalHeader.AddressOfEntryPoint;
              *(_QWORD *)(v4 + 16) = v28;
              *(_QWORD *)(v4 + 24) = v109;
              *(_QWORD *)(v4 + 32) = &v28[AddressOfEntryPoint];
              *(_DWORD *)(v4 + 48) = v30->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_267:
      if ( (unsigned int)v3 >= 0x40 )
      {
        if ( v5 == SystemFileCacheInformation )
        {
          v74 = 0;
          v99 = 0;
        }
        else
        {
          v99 = *((_DWORD *)SystemInformation + 15);
          v74 = v99;
          if ( (v99 & 0xFFFFFFF0) != 0 || (v99 & 0xC) == 0xC || (v99 & 3) == 3 )
            return -1073741584;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v74, v96);
        return -1073741790;
      }
      return -1073741820;
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_194;
    if ( PreviousMode )
    {
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v40 = *(_DWORD *)v4;
      v114 = *(_DWORD *)v4;
    }
    else
    {
      v40 = *(_DWORD *)v4;
    }
    if ( !v40 )
    {
      v49 = 0;
      return IoConfigureCrashDump(v49, 0);
    }
    v48 = v40 - 1;
    if ( !v48 )
    {
LABEL_194:
      v49 = 1;
      return IoConfigureCrashDump(v49, 0);
    }
    if ( v48 == 1 )
      return WheaCrashDumpInitializationComplete();
    return -1073741811;
  }
  if ( v5 != SystemExtendServiceTableInformation )
  {
    if ( v5 == SystemRegistryQuotaInformation )
    {
      if ( (_DWORD)v3 != 16 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
        return -1073741727;
      return CmSetRegistryQuotaInformation(v4, SystemInformation, v7, v10);
    }
    if ( v5 == SystemPrioritySeperation )
    {
      if ( (_DWORD)v3 != 4 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      v117 = *(_DWORD *)v4;
      PsChangeQuantumTable(1LL);
      return 0;
    }
    if ( v5 <= SystemPrioritySeperation )
      return -1073741821;
    if ( v5 > SystemVerifierRemoveDriverInformation )
    {
      if ( v5 == SystemTimeSlipNotification )
      {
        if ( (_DWORD)v3 != 8 )
          return -1073741820;
        if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
          return -1073741727;
        if ( PsIsCurrentThreadInServerSilo() )
          return -1073741790;
        v111 = *(HANDLE *)v4;
        if ( v111 )
        {
          updated = ObReferenceObjectByHandle(v111, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v106, 0LL);
          v50 = v106;
          if ( updated < 0 )
            return updated;
        }
        else
        {
          v50 = 0LL;
          updated = 0;
        }
        KdUpdateTimeSlipEvent(v50);
        return updated;
      }
      if ( v5 != SystemSessionCreate && v5 != SystemSessionDetach )
      {
        if ( v5 != SystemVerifierInformation )
          return -1073741821;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( !(unsigned int)ExpIsKernelCfgActive(v59, v58, v60, v61) )
          return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return -1073740641;
      }
      return -1073741822;
    }
    if ( (_DWORD)v3 != 16 )
      return -1073741820;
    if ( (unsigned int)ExpIsKernelCfgActive(*(_QWORD *)&SystemInformationClass, SystemInformation, 1LL, 3LL) )
      return -1073740641;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      result = VfProbeAndCaptureUnicodeString(v118, v4, 1LL);
      if ( result < 0 )
        return result;
      v4 = (unsigned __int64)v118;
      if ( !v118[0] )
        return -1073741585;
    }
    v62 = v5 - 40;
    if ( v62 )
    {
      if ( v62 != 1 )
      {
        updated = -1073741821;
LABEL_217:
        if ( !PreviousMode )
          return updated;
        v64 = (char *)v4;
        goto LABEL_299;
      }
      v63 = VfRemoveVerifierEntry(v4);
    }
    else
    {
      v63 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
    }
    updated = v63;
    goto LABEL_217;
  }
  if ( (_DWORD)v3 != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Blink) & 1) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    if ( v4 >= 0x7FFFFFFF0000LL )
      v4 = 0x7FFFFFFF0000LL;
    LODWORD(Buf1[0]) = *(_DWORD *)v4;
    Buf1[1] = *(void **)(v4 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10uLL);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v6 = -2147483643;
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v6, (__int64)&BugCheckParameter2, (__int64)v107);
    if ( result >= 0 )
    {
      v41 = (char *)v107[0];
      v42 = RtlImageNtHeader(v107[0]);
      if ( !v42 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver(&v41[v42->OptionalHeader.AddressOfEntryPoint], v41);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
