/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002C2C
 * Callers:
 *     SetGV3PerfState @ 0x1C0001980 (SetGV3PerfState.c)
 *     SetEfficientTurboDisablePolicy @ 0x1C0001AD0 (SetEfficientTurboDisablePolicy.c)
 *     DisplayKernelPerfStates @ 0x1C0001C68 (DisplayKernelPerfStates.c)
 *     EvtDeviceD0Entry @ 0x1C0001CD0 (EvtDeviceD0Entry.c)
 *     DisplayPPMFlags @ 0x1C0001DEC (DisplayPPMFlags.c)
 *     Display_xSD @ 0x1C0002958 (Display_xSD.c)
 *     Display_PSS @ 0x1C00029DC (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002A58 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002B00 (Display_CST.c)
 *     DisplayKernelIdleStates @ 0x1C00034AC (DisplayKernelIdleStates.c)
 *     ConnectHwpInterrupt @ 0x1C0006970 (ConnectHwpInterrupt.c)
 *     SetTurboDisablePolicy @ 0x1C0007150 (SetTurboDisablePolicy.c)
 *     CpcNativeInterruptDpc @ 0x1C00079A0 (CpcNativeInterruptDpc.c)
 *     GetProcessorStatusInfo @ 0x1C00092D0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C00099E0 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C0009B10 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C0009B58 (Display_CPC.c)
 *     Display_CSD @ 0x1C0009CEC (Display_CSD.c)
 *     Display_LPI @ 0x1C0009F84 (Display_LPI.c)
 *     Display_TSS @ 0x1C000A31C (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000C334 (UpdateKernelPlatformStates.c)
 *     DecodeMWaitIdleState @ 0x1C001A500 (DecodeMWaitIdleState.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     InitAcpiCpc @ 0x1C001BC50 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C001BE20 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C001BEA4 (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C001C020 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C001C098 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C001C474 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C001C4E0 (InitAcpiLpiStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C001C600 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CST @ 0x1C001C9A8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001CC90 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C001CF10 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C001D060 (AcpiParseRegister.c)
 *     AcpiEval_TSS @ 0x1C001D0C4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001D214 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C001D37C (AcpiEval_CPC.c)
 *     AcpiEval_PPC @ 0x1C001D7B8 (AcpiEval_PPC.c)
 *     QueryPepCapabilites @ 0x1C001DD8C (QueryPepCapabilites.c)
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 *     RegisterIdleComplete @ 0x1C001F138 (RegisterIdleComplete.c)
 *     ValidateLpiState @ 0x1C0026A70 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C0026C60 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C0026D04 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C0028B60 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C0028DBC (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C0029080 (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C002919C (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C0029750 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C002A180 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002A280 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002A2F0 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C002A678 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002BE98 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002D130 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C002D624 (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002E854 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002EA68 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C002FC10 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0030220 (PepUpdatePerformanceConstraintWorker.c)
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
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
