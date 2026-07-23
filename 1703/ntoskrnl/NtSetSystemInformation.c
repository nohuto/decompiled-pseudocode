/*
 * XREFs of NtSetSystemInformation @ 0x140562590
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140826320 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetSystemAllowedCpuSets @ 0x14001A064 (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140030524 (MmAdjustWorkingSetSizeEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiGetThreadPartition @ 0x14012BA50 (MiGetThreadPartition.c)
 *     ExpUpdateTimerConfiguration @ 0x14012CDF4 (ExpUpdateTimerConfiguration.c)
 *     KdUpdateTimeSlipEvent @ 0x140153B28 (KdUpdateTimeSlipEvent.c)
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ZwLoadDriver @ 0x14017FEC0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1401812E0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140181640 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeProcessorProfileControlArea @ 0x1401FD844 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140202CEC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1402056C0 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x140238A68 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x140238E10 (PsSetExeModerationState.c)
 *     ExpCompleteSoftReboot @ 0x14025A850 (ExpCompleteSoftReboot.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExHandleSPCall2 @ 0x140440AC4 (ExHandleSPCall2.c)
 *     PsLookupProcessThreadByCid @ 0x140441EF0 (PsLookupProcessThreadByCid.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140443AF4 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x140447B00 (SmSetStoreInformation.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140563704 (PfSnSetPrefetcherInformation.c)
 *     MmIssueMemoryListCommand @ 0x14057CB60 (MmIssueMemoryListCommand.c)
 *     PsChangeQuantumTable @ 0x1405839EC (PsChangeQuantumTable.c)
 *     MmUnloadSystemImage @ 0x1405856E0 (MmUnloadSystemImage.c)
 *     ExpInitializeSessionDriver @ 0x140585790 (ExpInitializeSessionDriver.c)
 *     KeInitializeEntropySystem @ 0x1405CF1B8 (KeInitializeEntropySystem.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405CF2CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     DbgkRegisterErrorPort @ 0x1405D1A50 (DbgkRegisterErrorPort.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405D6060 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x140662460 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x140668E3C (CmReconcileAndValidateAllHives.c)
 *     VslRelaxQuotas @ 0x140688124 (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1406B4680 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1406B4F80 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1406C25D4 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     ExpIsKernelCfgActive @ 0x1407152D0 (ExpIsKernelCfgActive.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140715F4C (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x140715FA8 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x14071633C (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140720204 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140764C50 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140764DCC (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140764E04 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140775EDC (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140788070 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14078808C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14078818C (VfSetVerifierInformationEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  SYSTEM_INFORMATION_CLASS v5; // ebx
  int v6; // r13d
  __int64 v7; // rdx
  KPROCESSOR_MODE PreviousMode; // r12
  void *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rax
  int updated; // edi
  int v13; // eax
  NTSTATUS result; // eax
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  __int32 v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 ThreadPartition; // rax
  _SINGLE_LIST_ENTRY *v25; // r8
  __int64 v26; // r9
  PVOID v27; // rbx
  int v28; // eax
  char *v29; // rbx
  PVOID v30; // rsi
  PIMAGE_NT_HEADERS v31; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // ebx
  int v42; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v44; // rbx
  PIMAGE_NT_HEADERS v45; // rax
  int v46; // ecx
  int v47; // ecx
  unsigned __int64 v48; // rax
  PVOID v49; // rcx
  __int32 v50; // ebx
  __int32 v51; // ebx
  __int32 v52; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  bool v57; // zf
  __int32 v58; // ebx
  int v59; // eax
  char *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  __int64 v69; // rbx
  __int16 v70; // ax
  __int64 v71; // rax
  int Next_high; // edi
  unsigned int v73; // ebx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  NTSTATUS v78; // ebx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int128 v81; // xmm6
  __m128i v82; // xmm1
  __int128 v83; // xmm7
  unsigned __int16 v84; // bx
  char *v85; // rcx
  PVOID PoolWithTag; // rax
  PVOID v87; // r15
  __int32 v88; // ebx
  __int32 v89; // ebx
  __int32 v90; // ebx
  int v91; // ebx
  int v92; // ebx
  int v93; // ebx
  int v94; // ebx
  ULONG v95; // r15d
  __int64 v96; // rbx
  struct _SINGLE_LIST_ENTRY v97; // [rsp+30h] [rbp-458h] BYREF
  char v98; // [rsp+48h] [rbp-440h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-438h]
  struct _SINGLE_LIST_ENTRY v101; // [rsp+58h] [rbp-430h] BYREF
  int SessionId; // [rsp+60h] [rbp-428h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-420h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-410h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+80h] [rbp-408h] BYREF
  int v106; // [rsp+90h] [rbp-3F8h]
  ULONG Size[8]; // [rsp+98h] [rbp-3F0h] BYREF
  PVOID v108; // [rsp+B8h] [rbp-3D0h] BYREF
  PVOID v109[2]; // [rsp+D8h] [rbp-3B0h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp-3A0h] BYREF
  __int64 v111; // [rsp+F0h] [rbp-398h] BYREF
  PVOID Object[3]; // [rsp+100h] [rbp-388h] BYREF
  __int64 v113[3]; // [rsp+130h] [rbp-358h] BYREF
  HANDLE v114; // [rsp+148h] [rbp-340h]
  __int64 v115[10]; // [rsp+150h] [rbp-338h] BYREF
  int v116; // [rsp+1A4h] [rbp-2E4h]
  __int128 v117; // [rsp+1B8h] [rbp-2D0h]
  int v118; // [rsp+1C8h] [rbp-2C0h]
  __int128 v119; // [rsp+1D0h] [rbp-2B8h] BYREF
  __int64 v120; // [rsp+1E0h] [rbp-2A8h]
  _WORD v121[8]; // [rsp+1E8h] [rbp-2A0h] BYREF
  __int128 v122; // [rsp+1F8h] [rbp-290h] BYREF
  __int128 v123; // [rsp+208h] [rbp-280h] BYREF
  __int64 v124; // [rsp+218h] [rbp-270h]
  void *v125[6]; // [rsp+220h] [rbp-268h] BYREF
  __int128 v126; // [rsp+268h] [rbp-220h] BYREF
  __int128 v127; // [rsp+278h] [rbp-210h] BYREF
  void *Src[2]; // [rsp+288h] [rbp-200h]
  __int128 v129; // [rsp+2A8h] [rbp-1E0h] BYREF
  __int64 v130; // [rsp+2B8h] [rbp-1D0h]
  __int128 v131; // [rsp+2C0h] [rbp-1C8h]
  __int128 v132; // [rsp+2D0h] [rbp-1B8h]
  __int128 v133; // [rsp+2E0h] [rbp-1A8h]
  char v134[160]; // [rsp+2F0h] [rbp-198h] BYREF
  char v135[160]; // [rsp+390h] [rbp-F8h] BYREF

  v3 = SystemInformationLength;
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
    if ( SystemInformationLength )
    {
      if ( ((unsigned __int64)SystemInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
      if ( *(_QWORD *)&SystemInformationClass > 0x7FFFFFFF0000uLL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemHypervisorInformation )
  {
    if ( v5 > SystemCriticalProcessErrorLogInformation )
    {
      if ( v5 <= SystemAllowedCpuSetsInformation )
      {
        if ( v5 == SystemAllowedCpuSetsInformation )
        {
          if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
            return -1073741820;
          memmove(v134, SystemInformation, SystemInformationLength);
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
          return KeSetSystemAllowedCpuSets((unsigned int)v3 >> 3, v134);
        }
        v88 = v5 - 150;
        if ( !v88 )
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
        v89 = v88 - 1;
        if ( !v89 )
        {
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
            return -1073741727;
          if ( (_DWORD)v3 != 1 )
            return -1073741820;
          if ( *(_BYTE *)SystemInformation && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          return ExpCompleteSoftReboot();
        }
        v90 = v89 - 1;
        if ( !v90 )
        {
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, 1LL, SystemInformationLength, 3LL);
          return -1073741811;
        }
        v91 = v90 - 3;
        if ( !v91 )
          return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, 1LL, SystemInformationLength, 3LL);
        v92 = v91 - 4;
        if ( !v92 )
          return -1073741637;
        if ( v92 != 2 )
          return -1073741821;
        if ( !PreviousMode )
        {
          if ( SystemInformationLength != 8 )
            return -1073741820;
          return KdInitialize(3LL, SystemInformation, &KdpContext);
        }
        return -1073741790;
      }
      v50 = v5 - 170;
      if ( !v50 )
      {
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return -1073741727;
        return KeIntSteerAssignCpuSetForGsiv(
                 *(_OWORD *)SystemInformation,
                 WORD2(*(_QWORD *)SystemInformation),
                 *((_QWORD *)SystemInformation + 1));
      }
      v51 = v50 - 6;
      if ( !v51 )
      {
        if ( SystemInformationLength < 8 )
          return -1073741820;
        v95 = SystemInformationLength - 8;
        if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v95 > 0xA0 )
          return -1073741820;
        v125[4] = SystemInformation;
        v96 = *(_QWORD *)SystemInformation;
        v125[5] = *(void **)SystemInformation;
        memmove(v135, (char *)SystemInformation + 8, v95);
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( updated < 0 )
          return updated;
        return KeSetTagCpuSets(v95 >> 3, v135, v96);
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        if ( SessionId == -1 )
          return 0;
        return PsInvokeWin32Callout(32, 0LL, 1, &SessionId);
      }
      v93 = v52 - 10;
      if ( v93 )
      {
        v94 = v93 - 3;
        if ( !v94 )
        {
          if ( qword_140348C28 )
            return qword_140348C28(SystemInformation, SystemInformationLength, SystemInformationLength, 3LL);
          return -1073741637;
        }
        if ( v94 != 1 )
          return -1073741821;
        if ( !SystemInformationLength )
        {
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          return VslRelaxQuotas(*(_QWORD *)&SystemInformationClass, v7, *(_QWORD *)&SystemInformationLength, v10);
        }
        return -1073741811;
      }
      if ( SystemInformationLength != 24 )
        return -1073741820;
      v119 = *(_OWORD *)SystemInformation;
      v120 = *((_QWORD *)SystemInformation + 2);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v119, 1LL, SystemInformationLength, 3LL);
      if ( result < 0 )
        return result;
      updated = PsSetExeModerationState((__int64)&v119, v120);
      v60 = (char *)&v119;
    }
    else
    {
      if ( v5 == SystemCriticalProcessErrorLogInformation )
      {
        if ( SystemInformationLength != 48 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return -1073741727;
        if ( (_DWORD)CriticalProcessExceptionData )
          return 0;
        v81 = *(_OWORD *)SystemInformation;
        v131 = *(_OWORD *)SystemInformation;
        v82 = *((__m128i *)SystemInformation + 1);
        v132 = (__int128)v82;
        v83 = *((_OWORD *)SystemInformation + 2);
        v133 = v83;
        *(__m128i *)Src = v82;
        v132 = 0uLL;
        v84 = _mm_cvtsi128_si32(v82);
        if ( v84 && (v84 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v85 = (char *)Src[1] + v84;
          if ( (unsigned __int64)v85 > 0x7FFFFFFF0000LL || v85 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v84, 0x50535845u);
          v87 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v84);
            *((_QWORD *)&v132 + 1) = v87;
            LOWORD(v132) = v84;
            WORD1(v132) = v84;
          }
        }
        CriticalProcessExceptionData = v81;
        xmmword_140344AF0 = v132;
        xmmword_140344B00 = v83;
        return 0;
      }
      if ( v5 > SystemRegistryAppendString )
      {
        v19 = v5 - 111;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( !v20 )
            return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
          v21 = v20 - 14;
          if ( !v21 )
          {
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                updated = MmScrubMemory(v80, *(_QWORD *)SystemInformation, v115);
                PrivilegeValue.LowPart = updated;
                *((_QWORD *)SystemInformation + 1) = v115[0];
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v22 = v21 - 2;
          if ( !v22 )
            return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
          v23 = v22 - 1;
          if ( !v23 )
          {
            if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                memset(v125, 0, 0x20uLL);
                memmove(v125, SystemInformation, v3);
                if ( (_DWORD)v3 == 32 )
                  v9 = v125[3];
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(
                            ThreadPartition,
                            v125[0],
                            (int)v125[2],
                            v9,
                            KeGetCurrentThread()->PreviousMode,
                            v113);
                PrivilegeValue.LowPart = updated;
                *((_QWORD *)SystemInformation + 1) = v113[0];
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v41 = v23 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              if ( v42 != 2 )
                return -1073741821;
              if ( SystemInformationLength != 32 )
                return -1073741820;
              return ExHandleSPCall2(*(__int64 *)&SystemInformationClass, (__m128i *)SystemInformation);
            }
            else
            {
              if ( SystemInformationLength != 4 )
                return -1073741820;
              *(_DWORD *)&DriverServiceName.Length = 7733364;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)SystemInformation & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                return updated;
              }
              if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return -1073741727;
              return ZwUnloadDriver(&DriverServiceName);
            }
          }
          else
          {
            if ( PreviousMode )
              return -1073741790;
            if ( SystemInformationLength != 24 )
              return -1073741820;
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     3LL);
          }
        }
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
        {
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
          return 0;
        }
        return -1073741790;
      }
      if ( v5 == SystemRegistryAppendString )
        return -1073741822;
      v33 = v5 - 92;
      if ( !v33 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        return VfSetVerifierInformationEx(SystemInformation);
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        v73 = 172;
        goto LABEL_282;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( (_DWORD)v3 == 8 )
          {
            v79 = *(_QWORD *)SystemInformation;
            _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)SystemInformation);
            _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v79));
            return updated;
          }
          return -1073741820;
        }
        return -1073741790;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        return ExpCovResetInformation(SystemInformation, (unsigned int)v3);
      }
      v37 = v36 - 2;
      if ( v37 )
      {
        v38 = v37 - 5;
        if ( v38 )
        {
          v39 = v38 - 2;
          if ( !v39 )
          {
            LOBYTE(SystemInformationLength) = PreviousMode;
            return ExpSetProcessorMicrocodeUpdateInformation(
                     SystemInformation,
                     (unsigned int)v3,
                     SystemInformationLength,
                     3LL);
          }
          if ( v39 != 5 )
            return -1073741821;
          return SmSetStoreInformation(
                   *(__int64 *)&SystemInformationClass,
                   (__int128 *)SystemInformation,
                   SystemInformationLength,
                   PreviousMode);
        }
        v73 = 432;
LABEL_282:
        if ( SystemInformationLength != v73 )
          return -1073741820;
        if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
          return -1073741727;
        return ExpSetTimeZoneInformation(SystemInformation, v73, *(_QWORD *)&SystemInformationLength, v10);
      }
      if ( SystemInformationLength != 40 )
        return -1073741820;
      if ( (unsigned int)ExpIsKernelCfgActive(*(_QWORD *)&SystemInformationClass, 1LL, SystemInformationLength, 3LL) )
        return -1073740641;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        v122 = *(_OWORD *)SystemInformation;
        v123 = *((_OWORD *)SystemInformation + 1);
        v124 = *((_QWORD *)SystemInformation + 4);
        result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v122 + 8, 1LL, v74, v75);
        if ( result < 0 )
          return result;
        v78 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v123 + 8, 1LL, v76, v77);
        if ( v78 < 0 )
        {
          VfFreeCapturedUnicodeString((char *)&v122 + 8);
          return v78;
        }
        SystemInformation = &v122;
      }
      updated = VfFaultsSetParameters(SystemInformation);
      if ( !PreviousMode )
        return updated;
      VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
      v60 = (char *)SystemInformation + 24;
    }
LABEL_213:
    VfFreeCapturedUnicodeString(v60);
    return updated;
  }
  if ( v5 == SystemHypervisorInformation )
  {
    if ( !PreviousMode )
    {
      if ( SystemInformationLength )
        return -1073741584;
      else
        return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
    }
    return -1073741790;
  }
  if ( v5 > SystemVerifierInformation )
  {
    if ( v5 > SystemRegisterFirmwareTableInformationHandler )
    {
      switch ( v5 )
      {
        case SystemSuperfetchInformation:
          LOBYTE(v10) = PreviousMode;
          return PfSetSuperfetchInformation((unsigned int)(v5 - 79), SystemInformation, SystemInformationLength, v10);
        case SystemMemoryListInformation:
          LOBYTE(SystemInformationLength) = PreviousMode;
          return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, SystemInformationLength, 3LL);
        case SystemFileCacheInformationEx:
LABEL_265:
          if ( SystemInformationLength < 0x40 )
            return -1073741820;
          if ( v5 == SystemFileCacheInformation )
          {
            Next_high = 0;
            HIDWORD(v101.Next) = 0;
          }
          else
          {
            HIDWORD(v101.Next) = *((_DWORD *)SystemInformation + 15);
            Next_high = HIDWORD(v101.Next);
            if ( (HIDWORD(v101.Next) & 0xFFFFFFF0) != 0
              || (BYTE4(v101.Next) & 0xC) == 0xC
              || (BYTE4(v101.Next) & 3) == 3 )
            {
              return -1073741584;
            }
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(
                     *((_QWORD *)SystemInformation + 3),
                     *((_QWORD *)SystemInformation + 4),
                     2,
                     1,
                     Next_high,
                     &v98);
          return -1073741790;
        case SystemThreadPriorityClientIdInformation:
          if ( SystemInformationLength < 0x18 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            return -1073741727;
          if ( PreviousMode )
          {
            v129 = *(_OWORD *)SystemInformation;
            v130 = *((_QWORD *)SystemInformation + 2);
            SystemInformation = &v129;
          }
          if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) <= 0x1E )
          {
            v127 = *(_OWORD *)SystemInformation;
            updated = PsLookupProcessThreadByCid((__int64)&v127, 0LL, Object);
            if ( updated >= 0 )
            {
              v27 = Object[0];
              if ( *((_BYTE *)Object[0] + 4) )
              {
                updated = -1073741749;
              }
              else
              {
                KeSetActualBasePriorityThread((__int64)Object[0], *((_DWORD *)SystemInformation + 4), v25, v26);
                updated = 259;
              }
              ObfDereferenceObject(v27);
            }
            return updated;
          }
          return -1073741811;
        case SystemRefTraceInformation:
          return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 3LL);
      }
      if ( v5 != SystemSpecialPoolInformation )
      {
        if ( v5 != SystemErrorPortInformation )
          return -1073741821;
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          v48 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
          if ( !v48 )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
          v70 = *(_WORD *)(v48 + 8);
          if ( v70 != 332 && v70 != 452 )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
        }
        return -1073741637;
      }
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v71 = *(_QWORD *)SystemInformation;
          MmSpecialPoolTag = *(_QWORD *)SystemInformation;
          MmSpecialPoolCatchOverruns = BYTE4(v71) & 1;
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    if ( v5 == SystemRegisterFirmwareTableInformationHandler )
    {
      LOBYTE(SystemInformationLength) = PreviousMode;
      return ExpRegisterFirmwareTableInformationHandler(
               SystemInformation,
               (unsigned int)v3,
               SystemInformationLength,
               3LL);
    }
    v16 = v5 - 52;
    if ( !v16 )
    {
      if ( PreviousMode )
        return -1073741727;
      return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
    }
    v17 = v16 - 2;
    if ( !v17 )
    {
      LODWORD(v7) = 0;
      goto LABEL_67;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      LOBYTE(v10) = PreviousMode;
      return PfSnSetPrefetcherInformation(
               *(_QWORD *)&SystemInformationClass,
               SystemInformation,
               SystemInformationLength,
               v10);
    }
    v65 = v18 - 3;
    if ( !v65 )
    {
      if ( SystemInformationLength == 4 )
      {
        v69 = *(unsigned int *)SystemInformation;
        updated = ExpUpdateComPlusPackage(v69, 1LL, SystemInformationLength, 3LL);
        if ( updated >= 0 )
          MEMORY[0xFFFFF780000002E0] = v69;
        return updated;
      }
      return -1073741820;
    }
    v66 = v65 - 10;
    if ( v66 )
    {
      v67 = v66 - 2;
      if ( !v67 )
        return -1073741637;
      v68 = v67 - 1;
      if ( v68 )
      {
        v57 = v68 == 2;
        goto LABEL_195;
      }
      if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
        return -1073741811;
      if ( *(_DWORD *)SystemInformation )
      {
        switch ( *(_DWORD *)SystemInformation )
        {
          case 1:
            ((void (__fastcall *)(_QWORD, __int64, ULONG, __int64))off_14033B5D0[0])(
              (unsigned int)(*(_DWORD *)SystemInformation - 1),
              1LL,
              SystemInformationLength,
              3LL);
            return 0;
          case 2:
            ((void (__fastcall *)(_QWORD, __int64, ULONG, __int64))off_14033B5D8[0])(
              (unsigned int)(*(_DWORD *)SystemInformation - 2),
              1LL,
              SystemInformationLength,
              3LL);
            return 0;
          case 3:
            ((void (__fastcall *)(_QWORD, __int64, ULONG, __int64))off_14033B5C8[0])(
              (unsigned int)(*(_DWORD *)SystemInformation - 3),
              1LL,
              SystemInformationLength,
              3LL);
            return 0;
        }
        if ( *(_DWORD *)SystemInformation != 4 )
        {
          if ( *(_DWORD *)SystemInformation == 6 )
            return ((__int64 (__fastcall *)(__int64, __int64, ULONG, __int64))off_14033B5E8[0])(
                     1LL,
                     1LL,
                     SystemInformationLength,
                     3LL);
          if ( *(_DWORD *)SystemInformation == 7 )
          {
            updated = 0;
            if ( off_14033B5E8[0] == xKdEnumerateDebuggingDevices )
              return -1073741822;
            return updated;
          }
          return -1073741811;
        }
      }
    }
    return -1073741637;
  }
  if ( v5 == SystemVerifierInformation )
  {
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return -1073741790;
    if ( !(unsigned int)ExpIsKernelCfgActive(v62, v61, v63, v64) )
      return VfSetVerifierInformation(SystemInformation, (unsigned int)v3, 0LL);
    return -1073740641;
  }
  if ( v5 <= SystemCrashDumpStateInformation )
  {
    if ( v5 != SystemCrashDumpStateInformation )
    {
      if ( v5 == SystemFlagsInformation )
      {
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        NtGlobalFlag = *(_DWORD *)SystemInformation ^ (NtGlobalFlag ^ *(_DWORD *)SystemInformation) & 0x6DCE640F;
        *(_DWORD *)SystemInformation = NtGlobalFlag;
        return updated;
      }
      if ( v5 != SystemFileCacheInformation )
      {
        if ( v5 == SystemDpcBehaviorInformation )
        {
          if ( SystemInformationLength == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v117 = *(_OWORD *)SystemInformation;
              v118 = *((_DWORD *)SystemInformation + 4);
              KiMinimumDpcRate = DWORD2(v117);
              KiMaximumDpcQueueDepth = DWORD1(v117);
              KiAdjustDpcThreshold = HIDWORD(v117);
              KiIdealDpcRate = v118;
              KeSynchronizeWithDynamicProcessors();
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v54 = KiProcessorBlock;
                v55 = ActiveProcessorCount;
                do
                {
                  v56 = *v54;
                  *(_DWORD *)(v56 + 11864) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v56 + 11872) = KiMinimumDpcRate;
                  ++v54;
                  --v55;
                }
                while ( v55 );
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
                if ( SystemInformationLength == 8 )
                {
                  if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                  {
                    LOBYTE(v97.Next) = *((_BYTE *)SystemInformation + 4);
                    v13 = *(_DWORD *)SystemInformation;
                    LODWORD(v101.Next) = *(_DWORD *)SystemInformation;
                    if ( LOBYTE(v97.Next) )
                    {
                      LODWORD(v101.Next) = KeMaximumIncrement;
                      goto LABEL_28;
                    }
                    if ( (unsigned int)(v13 - 1) <= 0x98967E )
                    {
LABEL_28:
                      ExAcquireTimeRefreshLock(1LL);
                      updated = ExpUpdateTimerConfiguration(0LL, &v101, &v97);
                      ExReleaseResourceLite(&ExpTimeRefreshLock);
                      KeLeaveCriticalRegion();
                      return updated;
                    }
                    return -1073741584;
                  }
                  return -1073741727;
                }
                return -1073741820;
              case SystemMirrorMemoryInformation:
                return MmCreateMirror();
              case SystemPerformanceTraceInformation:
                LOBYTE(SystemInformationLength) = PreviousMode;
                return EtwSetPerformanceTraceInformation(
                         SystemInformation,
                         (unsigned int)v3,
                         SystemInformationLength,
                         3LL);
            }
            return -1073741821;
          }
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return -1073741727;
          MmUnloadSystemImage(*(_QWORD *)SystemInformation);
          return 0;
        }
LABEL_67:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            v126 = *(_OWORD *)SystemInformation;
            v28 = MmLoadSystemImageEx((__int64)&v126, 0LL, 0LL, v7, &v111, (unsigned __int64 *)&BaseAddress);
            updated = v28;
            if ( v28 < 0 )
            {
              if ( v28 == -1073741411 )
                return -1073741554;
            }
            else
            {
              v29 = (char *)BaseAddress;
              v30 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0, Size);
              v31 = RtlImageNtHeader(v29);
              *((_QWORD *)SystemInformation + 5) = v30;
              AddressOfEntryPoint = v31->OptionalHeader.AddressOfEntryPoint;
              *((_QWORD *)SystemInformation + 2) = v29;
              *((_QWORD *)SystemInformation + 3) = v111;
              *((_QWORD *)SystemInformation + 4) = &v29[AddressOfEntryPoint];
              *((_DWORD *)SystemInformation + 12) = v31->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      goto LABEL_265;
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_189;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SystemInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SystemInformation + 4 > 0x7FFFFFFF0000LL
        || (char *)SystemInformation + 4 < SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      v46 = *(_DWORD *)SystemInformation;
      v116 = *(_DWORD *)SystemInformation;
    }
    else
    {
      v46 = *(_DWORD *)SystemInformation;
    }
    if ( !v46 )
      return IoConfigureCrashDump(v46, 0);
    v47 = v46 - 1;
    if ( !v47 )
    {
LABEL_189:
      v46 = 1;
      return IoConfigureCrashDump(v46, 0);
    }
    if ( v47 == 1 )
      return WheaCrashDumpInitializationComplete();
    return -1073741811;
  }
  if ( v5 != SystemExtendServiceTableInformation )
  {
    if ( v5 != SystemRegistryQuotaInformation )
    {
      if ( v5 == SystemPrioritySeperation )
      {
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v106 = *(_DWORD *)SystemInformation;
        LOBYTE(v40) = 1;
        PsChangeQuantumTable(v40);
        return 0;
      }
      if ( v5 <= SystemPrioritySeperation )
        return -1073741821;
      if ( v5 > SystemVerifierRemoveDriverInformation )
      {
        if ( v5 == SystemTimeSlipNotification )
        {
          if ( SystemInformationLength == 8 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            {
              v114 = *(HANDLE *)SystemInformation;
              if ( v114 )
              {
                updated = ObReferenceObjectByHandle(v114, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v108, 0LL);
                v49 = v108;
                if ( updated < 0 )
                  return updated;
              }
              else
              {
                v49 = 0LL;
                updated = 0;
              }
              KdUpdateTimeSlipEvent(v49);
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 == SystemSessionCreate )
          return -1073741822;
        v57 = v5 == SystemSessionDetach;
LABEL_195:
        if ( !v57 )
          return -1073741821;
        return -1073741822;
      }
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( !(unsigned int)ExpIsKernelCfgActive(*(_QWORD *)&SystemInformationClass, 1LL, SystemInformationLength, 3LL) )
      {
        if ( PreviousMode )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(v121, SystemInformation, 1LL);
          if ( result < 0 )
            return result;
          SystemInformation = v121;
          if ( !v121[0] )
            return -1073741585;
        }
        v58 = v5 - 40;
        if ( v58 )
        {
          if ( v58 != 1 )
          {
            updated = -1073741821;
LABEL_211:
            if ( !PreviousMode )
              return updated;
            v60 = (char *)SystemInformation;
            goto LABEL_213;
          }
          v59 = VfRemoveVerifierEntry(SystemInformation);
        }
        else
        {
          v59 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
        }
        updated = v59;
        goto LABEL_211;
      }
      return -1073740641;
    }
    if ( SystemInformationLength != 16 )
      return -1073741820;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return -1073741727;
    return CmSetRegistryQuotaInformation(SystemInformation, v7, *(_QWORD *)&SystemInformationLength, v10);
  }
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Blink) & 1) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    if ( (unsigned __int64)SystemInformation >= 0x7FFFFFFF0000LL )
      SystemInformation = (PVOID)0x7FFFFFFF0000LL;
    LODWORD(Buf1[0]) = *(_DWORD *)SystemInformation;
    Buf1[1] = *((void **)SystemInformation + 1);
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
    result = MmLoadSystemImageEx((__int64)Buf1, 0LL, 0LL, v6, &BugCheckParameter2, (unsigned __int64 *)v109);
    if ( result >= 0 )
    {
      v44 = (char *)v109[0];
      v45 = RtlImageNtHeader(v109[0]);
      if ( !v45 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver(&v44[v45->OptionalHeader.AddressOfEntryPoint], v44);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
