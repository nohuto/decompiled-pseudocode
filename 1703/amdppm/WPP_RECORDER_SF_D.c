/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C00012FC
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001450 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x1C00032B0 (AcpiNotifyCallback.c)
 *     Display_PSS @ 0x1C0003470 (Display_PSS.c)
 *     Display_TSS @ 0x1C0003820 (Display_TSS.c)
 *     Display_xSD @ 0x1C0003A70 (Display_xSD.c)
 *     Display_CST @ 0x1C0003D14 (Display_CST.c)
 *     Display_CSD @ 0x1C0003F44 (Display_CSD.c)
 *     Display_CPC @ 0x1C000420C (Display_CPC.c)
 *     Display_LPI @ 0x1C00045E0 (Display_LPI.c)
 *     DisplayKernelPerfStates @ 0x1C0005724 (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0007E4C (UpdateKernelPlatformStates.c)
 *     PepNotifyPerfConstraints @ 0x1C000A7D8 (PepNotifyPerfConstraints.c)
 *     PepNotifyFeedbackRead @ 0x1C000A864 (PepNotifyFeedbackRead.c)
 *     PepPerfControlHandler @ 0x1C000A920 (PepPerfControlHandler.c)
 *     PepParkPreference @ 0x1C000AC90 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000AEA0 (PepParkMask.c)
 *     PepPerfCheckComplete @ 0x1C000AFF0 (PepPerfCheckComplete.c)
 *     EvtDriverDeviceAdd @ 0x1C00174C0 (EvtDriverDeviceAdd.c)
 *     EvtDevicePrepareHardware @ 0x1C0017900 (EvtDevicePrepareHardware.c)
 *     RegisterWmi @ 0x1C0017A98 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0018008 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00188C8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0018C38 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C0018FE4 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C0019118 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C00193EC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     ProcLibDeviceCreate @ 0x1C001BA60 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 *     InitPepIdleStates @ 0x1C001F990 (InitPepIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C001FB8C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0020240 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00205AC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C00207C0 (PepNotifyReportCStates.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C0020B30 (PepUpdateCoordinatedStateWorker.c)
 *     InitAcpiIdleDomain @ 0x1C0021130 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002124C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0021484 (InitAcpiThrottleDomain.c)
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0022368 (InitAcpi2CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0022A48 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0023188 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C00234C4 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00235A0 (RegisterKernelCoordinatedLpiStates.c)
 *     UpdateKernelIdleDomains @ 0x1C0023C78 (UpdateKernelIdleDomains.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C00245C0 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPepPerf @ 0x1C0025E50 (RegisterKernelPepPerf.c)
 *     GetNtProcessorNumber @ 0x1C0026370 (GetNtProcessorNumber.c)
 *     InitAcpiPerfStates @ 0x1C002674C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0026A7C (InitAcpiThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0026D80 (InitAcpi3ThrottleStates.c)
 *     Validate_PCT_PTC @ 0x1C0027A64 (Validate_PCT_PTC.c)
 *     ValidateAcpiThrottleStates @ 0x1C0027C98 (ValidateAcpiThrottleStates.c)
 *     ValidateAcpiCPC @ 0x1C00283AC (ValidateAcpiCPC.c)
 *     ValidatePlatformIdleState @ 0x1C0028DB0 (ValidatePlatformIdleState.c)
 *     ValidateLpiState @ 0x1C00292B8 (ValidateLpiState.c)
 *     InitPepPerfStates @ 0x1C002936C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0029730 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002981C (PepNotifyQueryPerfCapabilities.c)
 *     PepUpdatePerformanceConstraint @ 0x1C0029904 (PepUpdatePerformanceConstraint.c)
 *     InitPep @ 0x1C0029B24 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C0029D84 (QueryPepCapabilites.c)
 *     PepNotifyQueryCapabilities @ 0x1C002A000 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C002A114 (PepRegisterSpmSettings.c)
 *     PepGetParkingPageInfo @ 0x1C002A1AC (PepGetParkingPageInfo.c)
 *     InitAcpiLegacyPcc @ 0x1C002A250 (InitAcpiLegacyPcc.c)
 *     RegisterHvIdleStates @ 0x1C002A590 (RegisterHvIdleStates.c)
 *     RegisterHvCStates @ 0x1C002A63C (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C002A8E0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002AE00 (RegisterHvLegacyPcc.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002B680 (RegisterHvFeedbackCountersCallback.c)
 *     InitAcpiLpiStates @ 0x1C002BAAC (InitAcpiLpiStates.c)
 *     RegisterSubspaceForGenAddr @ 0x1C002C910 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C002D140 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C002D2A4 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
