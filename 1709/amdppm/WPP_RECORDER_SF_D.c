/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C000134C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00014B0 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x1C0003370 (AcpiNotifyCallback.c)
 *     Display_PSS @ 0x1C0003530 (Display_PSS.c)
 *     Display_TSS @ 0x1C00038C4 (Display_TSS.c)
 *     Display_xSD @ 0x1C0003B0C (Display_xSD.c)
 *     Display_CST @ 0x1C0003D98 (Display_CST.c)
 *     Display_CSD @ 0x1C0003FB0 (Display_CSD.c)
 *     Display_CPC @ 0x1C000425C (Display_CPC.c)
 *     Display_LPI @ 0x1C0004628 (Display_LPI.c)
 *     DisplayKernelPerfStates @ 0x1C000587C (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C0007C80 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000818C (UpdateKernelPlatformStates.c)
 *     PepNotifyPerfConstraints @ 0x1C000AC8C (PepNotifyPerfConstraints.c)
 *     PepNotifyFeedbackRead @ 0x1C000AD18 (PepNotifyFeedbackRead.c)
 *     PepPerfControlHandler @ 0x1C000ADD0 (PepPerfControlHandler.c)
 *     PepPerfStateControlHandler @ 0x1C000AFF0 (PepPerfStateControlHandler.c)
 *     PepParkPreference @ 0x1C000B310 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000B520 (PepParkMask.c)
 *     PepPerfCheckComplete @ 0x1C000B670 (PepPerfCheckComplete.c)
 *     PepDevicePowerControlCallback @ 0x1C000B6E0 (PepDevicePowerControlCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001A4B0 (EvtDriverDeviceAdd.c)
 *     EvtDevicePrepareHardware @ 0x1C001A8F0 (EvtDevicePrepareHardware.c)
 *     RegisterWmi @ 0x1C001AA88 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C001AFF8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001B8B8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001BC28 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C001BFD4 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C001C108 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C001C3DC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C001C4F8 (AcpiEval_CSD.c)
 *     ProcLibDeviceCreate @ 0x1C001EA6C (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 *     InitPepIdleStates @ 0x1C0022A08 (InitPepIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0022C04 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00232B4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0023620 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0023834 (PepNotifyReportCStates.c)
 *     PepUpdateCoordinatedStateWorker @ 0x1C0023BA0 (PepUpdateCoordinatedStateWorker.c)
 *     InitAcpiIdleDomain @ 0x1C00241A0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00242BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00244F4 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0024604 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0025500 (InitAcpi2CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0025BE0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002631C (RegisterKernelPlatformStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0026658 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0026734 (RegisterKernelCoordinatedLpiStates.c)
 *     UpdateKernelIdleDomains @ 0x1C0026E0C (UpdateKernelIdleDomains.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0027770 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     GetNtProcessorNumber @ 0x1C00295A0 (GetNtProcessorNumber.c)
 *     InitAcpiPerfStates @ 0x1C002997C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0029CAC (InitAcpiThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0029FB0 (InitAcpi3ThrottleStates.c)
 *     Validate_PCT_PTC @ 0x1C002AC94 (Validate_PCT_PTC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002AEC8 (ValidateAcpiThrottleStates.c)
 *     ValidateAcpiCPC @ 0x1C002B58C (ValidateAcpiCPC.c)
 *     ValidatePlatformIdleState @ 0x1C002C02C (ValidatePlatformIdleState.c)
 *     ValidateLpiState @ 0x1C002C534 (ValidateLpiState.c)
 *     InitPepPerfStates @ 0x1C002C5E8 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002CC38 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002CD24 (PepNotifyQueryPerfCapabilities.c)
 *     InitPep @ 0x1C002CF94 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C002D1F8 (QueryPepCapabilites.c)
 *     PepNotifyQueryCapabilities @ 0x1C002D480 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C002D5AC (PepRegisterSpmSettings.c)
 *     PepGetParkingPageInfo @ 0x1C002D644 (PepGetParkingPageInfo.c)
 *     InitAcpiLegacyPcc @ 0x1C002D6E8 (InitAcpiLegacyPcc.c)
 *     RegisterHvIdleStates @ 0x1C002DA20 (RegisterHvIdleStates.c)
 *     RegisterHvCStates @ 0x1C002DACC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C002DD70 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002E290 (RegisterHvLegacyPcc.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002EB10 (RegisterHvFeedbackCountersCallback.c)
 *     InitAcpiLpiStates @ 0x1C002EF3C (InitAcpiLpiStates.c)
 *     RegisterSubspaceForGenAddr @ 0x1C002FDC0 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C0030130 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C0030294 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
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
