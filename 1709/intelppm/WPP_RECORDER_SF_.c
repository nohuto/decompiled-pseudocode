/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002A20
 * Callers:
 *     DisplayKernelPerfStates @ 0x1C0001768 (DisplayKernelPerfStates.c)
 *     DisplayPPMFlags @ 0x1C0001880 (DisplayPPMFlags.c)
 *     Display_xSD @ 0x1C0002508 (Display_xSD.c)
 *     Display_PSS @ 0x1C000263C (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002778 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002844 (Display_CST.c)
 *     DisplayKernelIdleStates @ 0x1C00032AC (DisplayKernelIdleStates.c)
 *     EvtDeviceD0Entry @ 0x1C00035B0 (EvtDeviceD0Entry.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0003A00 (SetGV3PerfStateAndTurbo.c)
 *     ConnectHwpInterrupt @ 0x1C0006750 (ConnectHwpInterrupt.c)
 *     SetGV3PerfState @ 0x1C0006F30 (SetGV3PerfState.c)
 *     SetTurboDisablePolicy @ 0x1C0006FE0 (SetTurboDisablePolicy.c)
 *     CpcNativeInterruptDpc @ 0x1C0007C30 (CpcNativeInterruptDpc.c)
 *     GetProcessorStatusInfo @ 0x1C00096D0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0009DF0 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C0009F20 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C0009F68 (Display_CPC.c)
 *     Display_CSD @ 0x1C000A0F0 (Display_CSD.c)
 *     Display_LPI @ 0x1C000A360 (Display_LPI.c)
 *     Display_TSS @ 0x1C000A6D0 (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000C6CC (UpdateKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C001F090 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C001F114 (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C001F290 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C001F308 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C001F3AC (InitAcpiPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C001F6E4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C001F750 (InitAcpiLpiStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C001F870 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CST @ 0x1C001FC18 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001FF00 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C0020180 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C00202D0 (AcpiParseRegister.c)
 *     AcpiEval_TSS @ 0x1C0020334 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0020484 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00205EC (AcpiEval_CPC.c)
 *     AcpiEval_PPC @ 0x1C0020A28 (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C0020FE0 (QueryPepCapabilites.c)
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 *     RegisterIdleComplete @ 0x1C0022368 (RegisterIdleComplete.c)
 *     RegisterXsdDomain @ 0x1C0022A24 (RegisterXsdDomain.c)
 *     DecodeMWaitIdleState @ 0x1C0023720 (DecodeMWaitIdleState.c)
 *     ValidateLpiState @ 0x1C002A220 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002A410 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002A4B4 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C002C3B0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C002C614 (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C002C8D8 (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C002C9F4 (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C002CFB0 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C002DA10 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002DB10 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002DB80 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C002DF08 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00309E0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0030F1C (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003214C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0032360 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0032E54 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0033770 (PepUpdatePerformanceConstraintWorker.c)
 *     ProcLibGlobalInit @ 0x1C00354C0 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
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
