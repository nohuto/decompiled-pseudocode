/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0003834
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00016E0 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C00018E0 (SetGV3PerfState.c)
 *     DisplayKernelIdleStates @ 0x1C0002374 (DisplayKernelIdleStates.c)
 *     Display_xSD @ 0x1C00026D4 (Display_xSD.c)
 *     Display_PSS @ 0x1C0002808 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002944 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002A10 (Display_CST.c)
 *     DisplayPPMFlags @ 0x1C0002BEC (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0003AA8 (DisplayKernelPerfStates.c)
 *     ConnectHwpInterrupt @ 0x1C0006A10 (ConnectHwpInterrupt.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00072E0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00073C0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C0009AA0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C000A1C0 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C000A2F0 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C000A338 (Display_CPC.c)
 *     Display_CSD @ 0x1C000A4C0 (Display_CSD.c)
 *     Display_LPI @ 0x1C000A730 (Display_LPI.c)
 *     Display_TSS @ 0x1C000AAA0 (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000CABC (UpdateKernelPlatformStates.c)
 *     AcpiEval_PPC @ 0x1C001E16C (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C001ED38 (QueryPepCapabilites.c)
 *     ProcLibDeviceStart @ 0x1C001EF5C (ProcLibDeviceStart.c)
 *     RegisterIdleComplete @ 0x1C002010C (RegisterIdleComplete.c)
 *     DecodeMWaitIdleState @ 0x1C0020430 (DecodeMWaitIdleState.c)
 *     RegisterXsdDomain @ 0x1C0020930 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0020C30 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C0020E08 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0020E8C (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C0021008 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C0021080 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C0021124 (InitAcpiPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C0021464 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C00214D0 (InitAcpiLpiStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C00215F0 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CSD @ 0x1C0021A98 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0021C00 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C002203C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0022324 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C00225A4 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C0022700 (AcpiParseRegister.c)
 *     AcpiEval_TSS @ 0x1C0022764 (AcpiEval_TSS.c)
 *     InitPerfStatesInternal @ 0x1C0023130 (InitPerfStatesInternal.c)
 *     CpcConnectNativeInterrupt @ 0x1C002A178 (CpcConnectNativeInterrupt.c)
 *     ValidateLpiState @ 0x1C002B410 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002B600 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002B6A4 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C002D580 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C002D7EC (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C002DAB0 (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C002DBD0 (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C002E190 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C002EC00 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002ED00 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002ED70 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C002F0F8 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00309F8 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0031C80 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C003223C (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003346C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033684 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0034174 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0034AB0 (PepUpdatePerformanceConstraintWorker.c)
 *     ProcLibGlobalInit @ 0x1C003650C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, 0LL);
}
