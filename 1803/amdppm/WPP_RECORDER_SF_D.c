/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0001374
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00016A0 (EvtDeviceD0Entry.c)
 *     RegisterKernelIdleStates @ 0x1C0001AF0 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0002004 (UpdateKernelPlatformStates.c)
 *     AcpiNotifyCallback @ 0x1C0006750 (AcpiNotifyCallback.c)
 *     Display_PSS @ 0x1C0006910 (Display_PSS.c)
 *     Display_TSS @ 0x1C0006CA4 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006EEC (Display_xSD.c)
 *     Display_CST @ 0x1C0007178 (Display_CST.c)
 *     Display_CSD @ 0x1C0007390 (Display_CSD.c)
 *     Display_CPC @ 0x1C000763C (Display_CPC.c)
 *     Display_LPI @ 0x1C0007A08 (Display_LPI.c)
 *     DisplayKernelPerfStates @ 0x1C0008C6C (DisplayKernelPerfStates.c)
 *     PepParkPreference @ 0x1C0009300 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0009520 (PepParkMask.c)
 *     PepPerfCheckComplete @ 0x1C0009670 (PepPerfCheckComplete.c)
 *     PepDevicePowerControlCallback @ 0x1C00096E0 (PepDevicePowerControlCallback.c)
 *     PepNotifyPerfConstraints @ 0x1C000993C (PepNotifyPerfConstraints.c)
 *     PepNotifyFeedbackRead @ 0x1C00099C8 (PepNotifyFeedbackRead.c)
 *     PepPerfControlHandler @ 0x1C0009A80 (PepPerfControlHandler.c)
 *     PepPerfStateControlHandler @ 0x1C0009C90 (PepPerfStateControlHandler.c)
 *     RegisterHvIdleStates @ 0x1C001A410 (RegisterHvIdleStates.c)
 *     RegisterHvCStates @ 0x1C001A4BC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A740 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001AC60 (RegisterHvLegacyPcc.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B4E0 (RegisterHvFeedbackCountersCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001BDB0 (EvtDriverDeviceAdd.c)
 *     EvtDevicePrepareHardware @ 0x1C001C1F0 (EvtDevicePrepareHardware.c)
 *     RegisterKernelPepIdleStates @ 0x1C001C90C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C001D038 (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C001D374 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C001D450 (RegisterKernelCoordinatedLpiStates.c)
 *     UpdateKernelIdleDomains @ 0x1C001DB38 (UpdateKernelIdleDomains.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C001E4B0 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     GetNtProcessorNumber @ 0x1C00203E0 (GetNtProcessorNumber.c)
 *     InitAcpiPerfStates @ 0x1C002064C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0020984 (InitAcpiThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0020C8C (InitAcpi3ThrottleStates.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0021388 (RegisterSubspaceForGenAddr.c)
 *     InitAcpiIdleDomain @ 0x1C00215A0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00216BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00218F8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0021A08 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0021E94 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0022BD4 (InitAcpi2CStates.c)
 *     RegisterWmi @ 0x1C0022D40 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C00232B0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0023B9C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0023F0C (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C00242B8 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C00243EC (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C00246C0 (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C00247E0 (AcpiEval_CSD.c)
 *     ProcLibDeviceCreate @ 0x1C0026D68 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 *     InitPep @ 0x1C002AD3C (InitPep.c)
 *     QueryPepCapabilites @ 0x1C002AFA8 (QueryPepCapabilites.c)
 *     PepNotifyQueryCapabilities @ 0x1C002B22C (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C002B358 (PepRegisterSpmSettings.c)
 *     PepGetParkingPageInfo @ 0x1C002B3F0 (PepGetParkingPageInfo.c)
 *     InitPepPerfStates @ 0x1C002B494 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002BAE4 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002BBD0 (PepNotifyQueryPerfCapabilities.c)
 *     InitPepIdleStates @ 0x1C002BE48 (InitPepIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C002C048 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002C700 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002CA8C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C002CCA4 (PepNotifyReportCStates.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C002D010 (PepUpdateCoordinatedStateWorker.c)
 *     InitAcpiLegacyPcc @ 0x1C002D60C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002D854 (InitAcpiLpiStates.c)
 *     Validate_PCT_PTC @ 0x1C002E4D0 (Validate_PCT_PTC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002E704 (ValidateAcpiThrottleStates.c)
 *     ValidateAcpiCPC @ 0x1C002EDD0 (ValidateAcpiCPC.c)
 *     ValidatePlatformIdleState @ 0x1C002F870 (ValidatePlatformIdleState.c)
 *     ValidateLpiState @ 0x1C002FD78 (ValidateLpiState.c)
 *     DriverEntry @ 0x1C0031168 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C00312CC (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
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
