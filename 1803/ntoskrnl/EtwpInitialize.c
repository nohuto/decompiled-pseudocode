/*
 * XREFs of EtwpInitialize @ 0x1408A3474
 * Callers:
 *     EtwInitialize @ 0x1406224E0 (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14057BF54 (EtwpUpdateFileInfoDriverState.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     EtwInitializeProcessor @ 0x140622514 (EtwInitializeProcessor.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1406289E0 (EtwpInitializeSiloAllowedGroupMask.c)
 *     WdipSemInitialize @ 0x14063916C (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     EtwpInitializeProcessorTrace @ 0x140642180 (EtwpInitializeProcessorTrace.c)
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140654768 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x140654CA4 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeProviderTraits @ 0x1406551F8 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeLastBranchTracing @ 0x140655468 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeCoverage @ 0x1406558C0 (EtwpInitializeCoverage.c)
 *     EtwpInitializeStackLookasideList @ 0x140655B78 (EtwpInitializeStackLookasideList.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 *     EtwpReadConfigParameters @ 0x1408C742C (EtwpReadConfigParameters.c)
 *     PerfDiagInitialize @ 0x1408C82CC (PerfDiagInitialize.c)
 *     EtwpInitializeRegistration @ 0x1408C88E0 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x1408C8D9C (EtwpInitializeCoverageSampler.c)
 *     EtwpInitializeRealTimeConnection @ 0x1408C95E8 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeSecurity @ 0x1408C969C (EtwpInitializeSecurity.c)
 */

void __fastcall EtwpInitialize(int a1)
{
  ULONG v1; // ebx
  unsigned __int8 CurrentIrql; // cl
  __int64 v3; // rdx
  LARGE_INTEGER v4; // rax
  int v5; // eax
  _WORD *v6; // rdi
  __int64 i; // rcx
  ULONG j; // edi
  __int64 Prcb; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  char v15; // [rsp+98h] [rbp+10h] BYREF

  v1 = KeNumberProcessors_0;
  if ( a1 )
  {
    if ( a1 == 1 )
      EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v3 = KeBootTimeBias;
    EtwpRefTimeSystem = MEMORY[0xFFFFF78000000014];
    v4 = KeBootTime;
    __writecr8(CurrentIrql);
    EtwpBootTime = v4.QuadPart - v3;
    EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
    EtwpRefTimeCycle = __rdtsc();
    v5 = EtwpInitializeSecurity();
    if ( v5 < 0 )
      KeBugCheckEx(0x11Du, 1uLL, v5, 0LL, 0LL);
    v6 = (_WORD *)0xFFFFF78000000380LL;
    for ( i = 9LL; i; --i )
      *v6++ = 0;
    for ( j = 0; j < v1; ++j )
    {
      Prcb = KeGetPrcb(j);
      v10 = EtwInitializeProcessor(Prcb);
      if ( v10 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v10, j, 0LL);
    }
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0LL, 1);
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0LL, 1);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0LL, 1);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration();
    EtwpInitializePrivateSessionDemuxObject();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpInitializeLastBranchTracing();
    EtwpInitializeProcessorTrace(v12, v11);
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    word_1403A2242 = 0;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpBufferAdjustmentCount = 8;
    KiInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      KeBugCheck(0x11Du);
    EtwpLoggerSaveEvent = 0LL;
    if ( (int)KsrGetFirmwareInformation(&v15) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
        ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
    }
    EtwpLoadMicroarchitecturalPmcs();
    EtwpInitializeSiloAllowedGroupMask();
    if ( (int)EtwInitializeSiloState(0LL) < 0 )
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)&EtwpComponentName);
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwpInitializeCoverage();
    EtwpInitializeCoverageSampler();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_1403977A0, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_1403977E0,
      (TLG_PENABLECALLBACK)EtwpTraceLoggingProvEnableCallback,
      &PsProvTraceLoggingGuid);
    EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
    EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
    EtwRegister(
      &FileProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x2000000,
      &EtwpFileProvRegHandle);
    EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
    EtwRegister(
      &MemoryProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x20000001,
      &EtwpMemoryProvRegHandle);
    EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
    EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
    EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
    EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
    EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
    EtwRegister(&MS_Windows_Security_Adminless_Provider, 0LL, 0LL, &EtwAdminlessProvRegHandle);
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
