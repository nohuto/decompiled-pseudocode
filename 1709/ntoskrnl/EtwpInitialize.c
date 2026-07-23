/*
 * XREFs of EtwpInitialize @ 0x140840858
 * Callers:
 *     EtwInitialize @ 0x1405C6814 (EtwInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x1400B274C (KiInitializeTimer2.c)
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     ExRegisterCallback @ 0x14012D810 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     WdipSemInitialize @ 0x1405ABAE8 (WdipSemInitialize.c)
 *     EtwpInitializeCoverage @ 0x1405ABC40 (EtwpInitializeCoverage.c)
 *     EtwInitializeProcessor @ 0x1405C6848 (EtwInitializeProcessor.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1405F1934 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeProviderTraits @ 0x1405F1F64 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeLastBranchTracing @ 0x1405F2738 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x1405F2E44 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1405F2FE4 (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwpTraceSystemInitialization @ 0x1408288A4 (EtwpTraceSystemInitialization.c)
 *     PerfDiagInitialize @ 0x140854D40 (PerfDiagInitialize.c)
 *     EtwpReadConfigParameters @ 0x140855378 (EtwpReadConfigParameters.c)
 *     EtwpInitializeRegistration @ 0x1408566F0 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x1408575D8 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeSecurity @ 0x1408576E8 (EtwpInitializeSecurity.c)
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
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  char v13; // [rsp+98h] [rbp+10h] BYREF

  v1 = KeNumberProcessors_0;
  if ( a1 )
  {
    if ( a1 == 1 )
      EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, 0);
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
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0, 1);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration();
    EtwpInitializePrivateSessionDemuxObject();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpInitializeLastBranchTracing();
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    word_14035EC42 = 0;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpBufferAdjustmentCount = 8;
    KiInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      KeBugCheck(0x11Du);
    EtwpLoggerSaveEvent = 0LL;
    if ( (int)KsrGetFirmwareInformation(&v13) >= 0 )
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
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_140354B90, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_140354B50,
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
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
