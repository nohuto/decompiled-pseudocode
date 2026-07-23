/*
 * XREFs of EtwpInitialize @ 0x1407FBF08
 * Callers:
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     KiInitializeTimer2 @ 0x14012A6A0 (KiInitializeTimer2.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140144210 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x140148580 (ExRegisterCallback.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140435640 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwInitializeProcessor @ 0x14059E570 (EtwInitializeProcessor.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     WdipSemInitialize @ 0x1405CA2D0 (WdipSemInitialize.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1405D5288 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeProviderTraits @ 0x1405D59C8 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeStackLookasideList @ 0x1405D64B8 (EtwpInitializeStackLookasideList.c)
 *     EtwpTraceSystemInitialization @ 0x140811798 (EtwpTraceSystemInitialization.c)
 *     EtwpReadConfigParameters @ 0x140823B7C (EtwpReadConfigParameters.c)
 *     PerfDiagInitialize @ 0x140824D70 (PerfDiagInitialize.c)
 *     EtwpInitializeRegistration @ 0x140825108 (EtwpInitializeRegistration.c)
 *     EtwpInitializeSecurity @ 0x140825B5C (EtwpInitializeSecurity.c)
 *     EtwpInitializeRealTimeConnection @ 0x140825C98 (EtwpInitializeRealTimeConnection.c)
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
      EtwpUpdateFileInfoDriverState(&PerfGlobalGroupMask, &PerfGlobalGroupMask, 1, 0);
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
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    word_140345322 = 0;
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
    if ( (int)EtwInitializeSiloState(0LL) < 0 )
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)"Etw");
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_14033C690, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_14033C520,
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
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
