/*
 * XREFs of NtSetSystemInformation @ 0x14048D108
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x1408C9868 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140004224 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExpUpdateTimerConfiguration @ 0x140004E90 (ExpUpdateTimerConfiguration.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     MiGetThreadPartition @ 0x140073B6C (MiGetThreadPartition.c)
 *     KeSetSystemAllowedCpuSets @ 0x1400A69AC (KeSetSystemAllowedCpuSets.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwLoadDriver @ 0x1401A9480 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1401AA900 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1401AAC80 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VslProvisionDumpEncryption @ 0x14022FF68 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14023E9E8 (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x140240BF4 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140246DA8 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x140249E64 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x140283F24 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x140284344 (PsSetExeModerationState.c)
 *     ExpCompleteSoftReboot @ 0x1402B8248 (ExpCompleteSoftReboot.c)
 *     ExpSetSoftRebootFlags @ 0x1402B82C0 (ExpSetSoftRebootFlags.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SmSetStoreInformation @ 0x14048C880 (SmSetStoreInformation.c)
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x14048E1F0 (PfSnSetPrefetcherInformation.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsLookupProcessThreadByCid @ 0x1404D9260 (PsLookupProcessThreadByCid.c)
 *     ExHandleSPCall2 @ 0x140568664 (ExHandleSPCall2.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1405709B4 (KeSynchronizeWithDynamicProcessors.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140605910 (MmUnloadSystemImage.c)
 *     PsChangeQuantumTable @ 0x1406116A8 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x140612AB4 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x140613BD8 (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14064DF70 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x14065326C (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1406557F0 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1406EFD3C (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x1406F6D7C (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     VslRelaxQuotas @ 0x140718C84 (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x14074B5B0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x14074BE90 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1407583E4 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x14075A420 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     ExpIsKernelCfgActive @ 0x1407BB2F0 (ExpIsKernelCfgActive.c)
 *     ExpQueryElamCertInfo @ 0x1407BB76C (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1407BC144 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407BC1A0 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1407BC534 (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x1407C7374 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140813AF8 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140813C78 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140813CB0 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140824F38 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140837A38 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140837A60 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140837B68 (VfSetVerifierInformationEx.c)
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
  void *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  int updated; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // cl
  unsigned __int64 v16; // r9
  NTSTATUS result; // eax
  __int32 v19; // esi
  __int64 v20; // rcx
  __int32 v21; // esi
  __int32 v22; // esi
  __int32 v23; // esi
  ULONG_PTR *ThreadPartition; // rax
  __int32 v25; // esi
  __int32 v26; // esi
  PVOID v27; // rsi
  void *v28; // rcx
  char *v29; // rbx
  PIMAGE_NT_HEADERS v30; // rax
  int SystemImage; // eax
  char *v32; // rdi
  PVOID v33; // rsi
  PIMAGE_NT_HEADERS v34; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int32 v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // ecx
  __int32 v42; // esi
  int v43; // esi
  int v44; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // di
  int v50; // ecx
  __int32 v51; // esi
  int v52; // esi
  PVOID v53; // rdi
  ULONG ActiveProcessorCount; // eax
  __int64 *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  PVOID v62; // rcx
  __int32 v63; // esi
  int v64; // eax
  char *v65; // rcx
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  int v70; // edx
  __int64 v71; // rdx
  __int64 v72; // rsi
  unsigned __int64 v73; // rax
  __int16 v74; // ax
  __int64 v75; // rax
  int v76; // ebx
  __int32 v77; // esi
  __int32 v78; // esi
  __int32 v79; // esi
  int v80; // esi
  unsigned int v81; // ebx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int128 v84; // xmm6
  __m128i v85; // xmm1
  __int128 v86; // xmm7
  unsigned __int16 v87; // bx
  char *v88; // rcx
  PVOID PoolWithTag; // rax
  PVOID v90; // r15
  __int32 v91; // esi
  __int32 v92; // esi
  __int32 v93; // esi
  int v94; // esi
  int v95; // r15d
  _KPROCESS *Process; // rdi
  unsigned int v97; // r15d
  __int64 v98; // rsi
  __int64 v99; // rcx
  char v100[26]; // [rsp+30h] [rbp-498h] BYREF
  _BYTE v101[2]; // [rsp+4Ah] [rbp-47Eh] BYREF
  LUID PrivilegeValue; // [rsp+58h] [rbp-470h]
  unsigned __int64 v103; // [rsp+60h] [rbp-468h] BYREF
  int v104; // [rsp+68h] [rbp-460h]
  void *Buf1[2]; // [rsp+70h] [rbp-458h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-448h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+88h] [rbp-440h] BYREF
  __int128 v108; // [rsp+98h] [rbp-430h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-420h]
  ULONG Size; // [rsp+B4h] [rbp-414h] BYREF
  PVOID v111; // [rsp+D8h] [rbp-3F0h] BYREF
  PVOID BaseAddress[2]; // [rsp+F8h] [rbp-3D0h] BYREF
  PVOID v113; // [rsp+108h] [rbp-3C0h] BYREF
  __int64 v114; // [rsp+110h] [rbp-3B8h] BYREF
  PVOID Object[3]; // [rsp+120h] [rbp-3A8h] BYREF
  HANDLE v116; // [rsp+150h] [rbp-378h]
  __int64 v117[4]; // [rsp+158h] [rbp-370h] BYREF
  __int64 v118[6]; // [rsp+178h] [rbp-350h] BYREF
  PVOID v119; // [rsp+1A8h] [rbp-320h] BYREF
  int v120; // [rsp+1DCh] [rbp-2ECh]
  __int128 v121; // [rsp+1F0h] [rbp-2D8h]
  unsigned int v122; // [rsp+200h] [rbp-2C8h]
  int v123; // [rsp+208h] [rbp-2C0h]
  _WORD v124[8]; // [rsp+210h] [rbp-2B8h] BYREF
  __int128 v125; // [rsp+220h] [rbp-2A8h] BYREF
  __int128 v126; // [rsp+230h] [rbp-298h] BYREF
  __int64 v127; // [rsp+240h] [rbp-288h]
  void *v128[4]; // [rsp+248h] [rbp-280h] BYREF
  HANDLE v129; // [rsp+268h] [rbp-260h]
  __int64 v130; // [rsp+270h] [rbp-258h]
  __int128 v131; // [rsp+290h] [rbp-238h] BYREF
  __int128 v132; // [rsp+2A0h] [rbp-228h] BYREF
  void *Src[2]; // [rsp+2B0h] [rbp-218h]
  __int128 v134; // [rsp+2D0h] [rbp-1F8h] BYREF
  __int64 v135; // [rsp+2E0h] [rbp-1E8h]
  __int128 v136; // [rsp+2E8h] [rbp-1E0h]
  __int128 v137; // [rsp+2F8h] [rbp-1D0h]
  __int128 v138; // [rsp+308h] [rbp-1C0h]
  char v139[160]; // [rsp+320h] [rbp-1A8h] BYREF
  char v140[160]; // [rsp+3C0h] [rbp-108h] BYREF

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
      if ( v5 <= SystemVmGenerationCountInformation )
      {
        if ( v5 == SystemVmGenerationCountInformation )
        {
          if ( PreviousMode )
            return -1073741790;
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          return KdInitialize(3LL, SystemInformation, &KdpContext);
        }
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
                  memset(v128, 0, sizeof(v128));
                  memmove(v128, (const void *)v4, v3);
                  if ( (_DWORD)v3 == 32 )
                    v9 = v128[3];
                  ThreadPartition = (ULONG_PTR *)MiGetThreadPartition((__int64)KeGetCurrentThread());
                  updated = MiCombineIdenticalPages(
                              ThreadPartition,
                              v128[0],
                              (int)v128[2],
                              v9,
                              KeGetCurrentThread()->PreviousMode,
                              v118);
                  PrivilegeValue.LowPart = updated;
                  *(_QWORD *)(v4 + 8) = v118[0];
                  return updated;
                }
                return -1073741727;
              }
              return -1073741820;
            }
            v42 = v23 - 1;
            if ( !v42 )
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
            v43 = v42 - 1;
            if ( !v43 )
            {
              if ( (_DWORD)v3 != 4 )
                return -1073741820;
              *(_DWORD *)&DriverServiceName.Length = 7733364;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              v44 = *(_DWORD *)SystemInformation & 1;
              v101[1] = *(_BYTE *)SystemInformation & 1;
              if ( (_BYTE)v44 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                updated = ZwLoadDriver(&DriverServiceName);
                v49 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL);
                if ( (v49 & 2) != 0 && (v49 & 4) == 0 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock, v46, v47, v48);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                return updated;
              }
              if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return -1073741727;
              return ZwUnloadDriver(&DriverServiceName);
            }
            if ( v43 == 2 )
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
          v84 = *(_OWORD *)v4;
          v136 = *(_OWORD *)v4;
          v85 = *(__m128i *)(v4 + 16);
          v137 = (__int128)v85;
          v86 = *(_OWORD *)(v4 + 32);
          v138 = v86;
          *(__m128i *)Src = v85;
          v137 = 0uLL;
          v87 = _mm_cvtsi128_si32(v85);
          if ( v87 && (v87 & 1) == 0 )
          {
            if ( ((__int64)Src[1] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v88 = (char *)Src[1] + v87;
            if ( (unsigned __int64)v88 > 0x7FFFFFFF0000LL || v88 < Src[1] )
              MEMORY[0x7FFFFFFF0000] = 0;
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v87, 0x50535845u);
            v90 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src[1], v87);
              *((_QWORD *)&v137 + 1) = v90;
              LOWORD(v137) = v87;
              WORD1(v137) = v87;
            }
          }
          CriticalProcessExceptionData = v84;
          xmmword_1403A1C90 = v137;
          xmmword_1403A1CA0 = v86;
          return 0;
        }
        v91 = v5 - 150;
        if ( !v91 )
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
        v92 = v91 - 1;
        if ( !v92 )
        {
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
            return -1073741727;
          v95 = v3 - 1;
          if ( v95 )
          {
            if ( v95 != 3 )
              return -1073741820;
            return ExpSetSoftRebootFlags(*(_DWORD *)v4);
          }
          else
          {
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            return ExpCompleteSoftReboot();
          }
        }
        v93 = v92 - 1;
        if ( !v93 )
        {
          if ( (_DWORD)v3 != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, SystemInformation, 1LL, 3LL);
          return -1073741811;
        }
        v94 = v93 - 3;
        if ( !v94 )
          return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, SystemInformation, 1LL, 3LL);
        if ( v94 != 4 )
          return -1073741821;
        return -1073741637;
      }
      if ( v5 > SystemActivityModerationExeState )
      {
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          v99 = (unsigned int)(v5 - 191);
          if ( v5 == SystemIntegrityQuotaInformation )
          {
            if ( !(_DWORD)v3 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741727;
              return VslRelaxQuotas(v99, SystemInformation, v7, v10);
            }
            return -1073741811;
          }
          if ( v5 == SystemSecureDumpEncryptionInformation )
          {
            if ( !(_DWORD)v3 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              return VslProvisionDumpEncryption();
            }
            return -1073741811;
          }
          if ( v5 != SystemCodeIntegrityVerificationInformation )
            return -1073741821;
        }
      }
      else
      {
        if ( v5 == SystemActivityModerationExeState )
        {
          if ( (_DWORD)v3 != 24 )
            return -1073741820;
          v108 = *(_OWORD *)SystemInformation;
          v109 = *((_QWORD *)SystemInformation + 2);
          result = VfProbeAndCaptureUnicodeStringBuffer(&v108, 1LL);
          if ( result < 0 )
            return result;
          updated = PsSetExeModerationState((__int64)&v108, v109, HIDWORD(v109));
          v65 = (char *)&v108;
LABEL_220:
          VfFreeCapturedUnicodeString(v65);
          return updated;
        }
        if ( v5 != SystemCodeIntegrityPolicyInformation )
        {
          switch ( v5 )
          {
            case SystemAllowedCpuSetsInformation:
              if ( (v3 & 7) != 0 || (unsigned int)v3 > 0xA0 )
                return -1073741820;
              memmove(v140, SystemInformation, v3);
              result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
              if ( result < 0 )
                return result;
              return KeSetSystemAllowedCpuSets((unsigned int)v3 >> 3, v140);
            case SystemInterruptCpuSetsInformation:
              if ( (_DWORD)v3 != 16 )
                return -1073741820;
              if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return -1073741727;
              return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
            case SystemCpuSetTagInformation:
              if ( (unsigned int)v3 < 8 )
                return -1073741820;
              v97 = v3 - 8;
              if ( (v97 & 7) != 0 || v97 > 0xA0 )
                return -1073741820;
              v98 = *(_QWORD *)SystemInformation;
              v130 = *(_QWORD *)SystemInformation;
              memmove(v139, (char *)SystemInformation + 8, v97);
              updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
              if ( updated >= 0 )
                return KeSetTagCpuSets(v97 >> 3, v139, v98);
              break;
            case SystemWin32WerStartCallout:
              if ( (_DWORD)v3 == 8 )
              {
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  return -1073741727;
                v129 = *(HANDLE *)v4;
                updated = ObReferenceObjectByHandle(
                            v129,
                            0x1000u,
                            (POBJECT_TYPE)PsProcessType,
                            PreviousMode,
                            &v119,
                            0LL);
                if ( updated >= 0 )
                {
                  v53 = v119;
                  if ( (unsigned int)MmGetSessionIdEx((__int64)v119) != -1 )
                    updated = PsInvokeWin32Callout(32LL, v53, 1LL);
                  v28 = v53;
                  goto LABEL_73;
                }
              }
              else
              {
                if ( (_DWORD)v3 )
                  return -1073741820;
                updated = 0;
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( (unsigned int)MmGetSessionIdEx((__int64)Process) != -1 )
                  return PsInvokeWin32Callout(32LL, Process, 1LL);
              }
              break;
            default:
              return -1073741821;
          }
          return updated;
        }
      }
      if ( qword_1403A5D28 )
        return qword_1403A5D28((unsigned int)v5, SystemInformation, (unsigned int)v3, 3LL);
      return -1073741637;
    }
    if ( v5 != SystemScrubPhysicalMemoryInformation )
    {
      if ( v5 <= SystemProcessorMicrocodeUpdateInformation )
      {
        if ( v5 == SystemProcessorMicrocodeUpdateInformation )
        {
          LOBYTE(v7) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(SystemInformation, (unsigned int)v3, v7, 3LL);
        }
        v77 = v5 - 93;
        if ( v77 )
        {
          v78 = v77 - 1;
          if ( !v78 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741790;
            if ( (_DWORD)v3 == 8 )
            {
              v82 = *(_QWORD *)v4;
              _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)v4);
              _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v82));
              return updated;
            }
            return -1073741820;
          }
          v79 = v78 - 1;
          if ( !v79 )
          {
            if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741790;
            if ( (unsigned int)v3 < 0x18 )
              return -1073741820;
            return ExpCovResetInformation(v4, (unsigned int)v3);
          }
          v80 = v79 - 2;
          if ( !v80 )
          {
            if ( (_DWORD)v3 != 40 )
              return -1073741820;
            if ( (unsigned int)ExpIsKernelCfgActive(*(_QWORD *)&SystemInformationClass, SystemInformation, 1LL, 3LL) )
              return -1073740641;
            if ( PreviousMode )
            {
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741727;
              v125 = *(_OWORD *)v4;
              v126 = *(_OWORD *)(v4 + 16);
              v127 = *(_QWORD *)(v4 + 32);
              result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v125 + 8, 1LL);
              if ( result < 0 )
                return result;
              updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v126 + 8, 1LL);
              if ( updated < 0 )
              {
                v65 = (char *)&v125 + 8;
                goto LABEL_220;
              }
              v4 = (unsigned __int64)&v125;
            }
            updated = VfFaultsSetParameters(v4);
            if ( !PreviousMode )
              return updated;
            VfFreeCapturedUnicodeString(v4 + 8);
            v65 = (char *)(v4 + 24);
            goto LABEL_220;
          }
          if ( v80 != 5 )
            return -1073741821;
          v81 = 432;
        }
        else
        {
          v81 = 172;
        }
        if ( (_DWORD)v3 != v81 )
          return -1073741820;
        if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
          return -1073741727;
        if ( PsIsCurrentThreadInServerSilo() )
          return -1073741790;
        return ExpSetTimeZoneInformation(v4, v81);
      }
      v25 = v5 - 106;
      if ( !v25 )
        return -1073741821;
      v26 = v25 - 3;
      if ( v26 )
      {
        v51 = v26 - 1;
        if ( !v51 )
          return -1073741822;
        v52 = v51 - 1;
        if ( v52 )
        {
          if ( v52 == 2 )
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
      return SmSetStoreInformation(*(__int64 *)&SystemInformationClass, (__int128 *)SystemInformation, v3, PreviousMode);
    }
    if ( (_DWORD)v3 != 16 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      return -1073741727;
    updated = MmScrubMemory(v83, *(_QWORD *)v4, v117);
    PrivilegeValue.LowPart = updated;
    *(_QWORD *)(v4 + 8) = v117[0];
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
    if ( v5 <= SystemSuperfetchInformation )
    {
      if ( v5 == SystemSuperfetchInformation )
      {
        LOBYTE(v10) = PreviousMode;
        return PfSetSuperfetchInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, (unsigned int)v3, v10);
      }
      v19 = v5 - 54;
      if ( !v19 )
      {
        LODWORD(v7) = 0;
        goto LABEL_92;
      }
      v20 = 2LL;
      v21 = v19 - 2;
      if ( !v21 )
      {
        LOBYTE(v10) = PreviousMode;
        return PfSnSetPrefetcherInformation(2LL, SystemInformation, (unsigned int)v3, v10);
      }
      v36 = v21 - 3;
      if ( !v36 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          v72 = *(unsigned int *)SystemInformation;
          updated = ExpUpdateComPlusPackage(v72, SystemInformation, 1LL, 3LL);
          if ( updated >= 0 )
            MEMORY[0xFFFFF780000002E0] = v72;
          return updated;
        }
        return -1073741820;
      }
      v37 = v36 - 10;
      if ( v37 )
      {
        v38 = v37 - 2;
        if ( !v38 )
          return -1073741637;
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 2;
          if ( !v40 )
            return -1073741822;
          if ( v40 != 1 )
            return -1073741821;
          LOBYTE(v7) = PreviousMode;
          return ExpRegisterFirmwareTableInformationHandler(SystemInformation, (unsigned int)v3, v7, 3LL);
        }
        if ( PreviousMode || !SystemInformation || (_DWORD)v3 != 8 )
          return -1073741811;
        v66 = *(_DWORD *)SystemInformation;
        if ( v66 )
        {
          v67 = (unsigned int)(v66 - 1);
          if ( !(_DWORD)v67 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_1403989A0[0])(2LL, v67, 1LL, 3LL);
            return 0;
          }
          v68 = (unsigned int)(v67 - 1);
          if ( !(_DWORD)v68 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_1403989A8[0])(2LL, v68, 1LL, 3LL);
            return 0;
          }
          v69 = (unsigned int)(v68 - 1);
          if ( !(_DWORD)v69 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))off_140398998[0])(2LL, v69, 1LL, 3LL);
            return 0;
          }
          v70 = v69 - 1;
          if ( v70 )
          {
            v71 = (unsigned int)(v70 - 2);
            if ( !(_DWORD)v71 )
            {
              LOBYTE(v20) = 1;
              return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))off_1403989B8[0])(v20, v71, 1LL, 3LL);
            }
            if ( (_DWORD)v71 == 1 )
            {
              updated = 0;
              if ( off_1403989B8[0] == xKdEnumerateDebuggingDevices )
                return -1073741822;
              return updated;
            }
            return -1073741811;
          }
        }
      }
      return -1073741637;
    }
    if ( v5 == SystemMemoryListInformation )
    {
      LOBYTE(v7) = PreviousMode;
      return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, v7, 3LL);
    }
    if ( v5 == SystemFileCacheInformationEx )
      goto LABEL_272;
    if ( v5 != SystemThreadPriorityClientIdInformation )
    {
      if ( v5 == SystemRefTraceInformation )
        return ObSetRefTraceInformation(SystemInformation, (unsigned int)v3, 1LL, 3LL);
      if ( v5 == SystemSpecialPoolInformation )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          v75 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v75) & 1;
          return updated;
        }
        return -1073741820;
      }
      if ( v5 != SystemErrorPortInformation )
      {
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
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return -1073741727;
        v73 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( !v73 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v74 = *(_WORD *)(v73 + 8);
        if ( v74 != 332 && v74 != 452 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return -1073741637;
    }
    if ( (unsigned int)v3 < 0x18 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
      return -1073741727;
    if ( PreviousMode )
    {
      v134 = *(_OWORD *)v4;
      v135 = *(_QWORD *)(v4 + 16);
      v4 = (unsigned __int64)&v134;
    }
    if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
      return -1073741811;
    v132 = *(_OWORD *)v4;
    updated = PsLookupProcessThreadByCid(&v132, 0LL, Object);
    if ( updated < 0 )
      return updated;
    v27 = Object[0];
    if ( *((_BYTE *)Object[0] + 4) )
    {
      updated = -1073741749;
    }
    else
    {
      KeSetActualBasePriorityThread((__int64)Object[0], *(unsigned int *)(v4 + 16));
      updated = 259;
    }
    v28 = v27;
LABEL_73:
    ObfDereferenceObject(v28);
    return updated;
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
      if ( v5 != SystemFlagsInformation )
      {
        if ( v5 != SystemFileCacheInformation )
        {
          v13 = (unsigned int)(v5 - 24);
          if ( v5 == SystemDpcBehaviorInformation )
          {
            if ( (_DWORD)v3 == 20 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              {
                v121 = *(_OWORD *)v4;
                v122 = *(_DWORD *)(v4 + 16);
                KiMinimumDpcRate = DWORD2(v121);
                KiMaximumDpcQueueDepth = DWORD1(v121);
                KiAdjustDpcThreshold = HIDWORD(v121);
                KiIdealDpcRate = v122;
                KeSynchronizeWithDynamicProcessors(v122, v13, v7, v10);
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
                          v100[0] = v15;
                          v103 = *(_QWORD *)v4;
                        }
                        else
                        {
                          v15 = *(_BYTE *)(v4 + 4);
                          v100[0] = v15;
                          v16 = *(unsigned int *)v4;
                          v103 = v16;
                          if ( v16 )
                            v103 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v16;
                        }
                        if ( v15 )
                          v103 = MEMORY[0xFFFFF78000000300];
                        LOBYTE(v14) = 1;
                        ExAcquireTimeRefreshLock(v14);
                        updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v103, (__int64)v100);
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
                  return EtwSetPerformanceTraceInformation((volatile void *)v4, (unsigned int)v3, PreviousMode);
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
LABEL_92:
          if ( (_DWORD)v3 == 56 )
          {
            if ( !PreviousMode )
            {
              v131 = *(_OWORD *)v4;
              SystemImage = MmLoadSystemImageEx((unsigned int)&v131, 0, 0, v7, (__int64)&v114, (__int64)&v113);
              updated = SystemImage;
              if ( SystemImage < 0 )
              {
                if ( SystemImage == -1073741411 )
                  return -1073741554;
              }
              else
              {
                v32 = (char *)v113;
                v33 = RtlImageDirectoryEntryToData(v113, 1u, 0, &Size);
                v34 = RtlImageNtHeader(v32);
                *(_QWORD *)(v4 + 40) = v33;
                AddressOfEntryPoint = v34->OptionalHeader.AddressOfEntryPoint;
                *(_QWORD *)(v4 + 16) = v32;
                *(_QWORD *)(v4 + 24) = v114;
                *(_QWORD *)(v4 + 32) = &v32[AddressOfEntryPoint];
                *(_DWORD *)(v4 + 48) = v34->OptionalHeader.SizeOfImage;
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
LABEL_272:
        if ( (unsigned int)v3 >= 0x40 )
        {
          if ( v5 == SystemFileCacheInformation )
          {
            v76 = 0;
            v104 = 0;
          }
          else
          {
            v104 = *((_DWORD *)SystemInformation + 15);
            v76 = v104;
            if ( (v104 & 0xFFFFFFF0) != 0 || (v104 & 0xC) == 0xC || (v104 & 3) == 3 )
              return -1073741584;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v76, v101);
          return -1073741790;
        }
        return -1073741820;
      }
      if ( (_DWORD)v3 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
          *(_DWORD *)v4 = NtGlobalFlag;
          return updated;
        }
        return -1073741790;
      }
      return -1073741820;
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_182;
    if ( PreviousMode )
    {
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v41 = *(_DWORD *)v4;
      v120 = *(_DWORD *)v4;
    }
    else
    {
      v41 = *(_DWORD *)v4;
    }
    if ( !v41 )
      return IoConfigureCrashDump(v41, 0);
    v50 = v41 - 1;
    if ( !v50 )
    {
LABEL_182:
      v41 = 1;
      return IoConfigureCrashDump(v41, 0);
    }
    if ( v50 == 1 )
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
      v123 = *(_DWORD *)v4;
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
        v116 = *(HANDLE *)v4;
        if ( v116 )
        {
          updated = ObReferenceObjectByHandle(v116, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v111, 0LL);
          v62 = v111;
          if ( updated < 0 )
            return updated;
        }
        else
        {
          v62 = 0LL;
          updated = 0;
        }
        KdUpdateTimeSlipEvent(v62);
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
      result = VfProbeAndCaptureUnicodeString(v124, v4, 1LL);
      if ( result < 0 )
        return result;
      v4 = (unsigned __int64)v124;
      if ( !v124[0] )
        return -1073741585;
    }
    v63 = v5 - 40;
    if ( v63 )
    {
      if ( v63 != 1 )
      {
        updated = -1073741821;
LABEL_217:
        if ( !PreviousMode )
          return updated;
        v65 = (char *)v4;
        goto LABEL_220;
      }
      v64 = VfRemoveVerifierEntry(v4);
    }
    else
    {
      v64 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
    }
    updated = v64;
    goto LABEL_217;
  }
  if ( (_DWORD)v3 != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0
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
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v6, (__int64)&BugCheckParameter2, (__int64)BaseAddress);
    if ( result >= 0 )
    {
      v29 = (char *)BaseAddress[0];
      v30 = RtlImageNtHeader(BaseAddress[0]);
      if ( !v30 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver(&v29[v30->OptionalHeader.AddressOfEntryPoint], v29);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
