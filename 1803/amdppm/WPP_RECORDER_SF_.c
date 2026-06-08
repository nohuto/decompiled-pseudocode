/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00010B0
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00016A0 (EvtDeviceD0Entry.c)
 *     UpdateKernelPlatformStates @ 0x1C0002004 (UpdateKernelPlatformStates.c)
 *     GetProcessorStatusInfo @ 0x1C0005020 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0006750 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C0006880 (AcpiOSCNotifyWorker.c)
 *     Display_PSS @ 0x1C0006910 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0006B68 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C0006CA4 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006EEC (Display_xSD.c)
 *     Display_CST @ 0x1C0007178 (Display_CST.c)
 *     Display_CSD @ 0x1C0007390 (Display_CSD.c)
 *     Display_CPC @ 0x1C000763C (Display_CPC.c)
 *     Display_LPI @ 0x1C0007A08 (Display_LPI.c)
 *     DisplayPPMFlags @ 0x1C00082D4 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0008C6C (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0008D6C (DisplayKernelIdleStates.c)
 *     DecodeMWaitIdleState @ 0x1C001A010 (DecodeMWaitIdleState.c)
 *     RegisterIdleComplete @ 0x1C001CF50 (RegisterIdleComplete.c)
 *     RegisterKernelPlatformStates @ 0x1C001D038 (RegisterKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     InitAcpiPerfStates @ 0x1C002064C (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0020C8C (InitAcpi3ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C0021124 (AcquirePccInterface.c)
 *     InitAcpiIdleDomain @ 0x1C00215A0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00216BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00218F8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0021A08 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0021E94 (InitAcpiCpc.c)
 *     CpcConnectNativeInterrupt @ 0x1C00221B8 (CpcConnectNativeInterrupt.c)
 *     InitAcpi2CStates @ 0x1C0022BD4 (InitAcpi2CStates.c)
 *     AcpiEval_CST @ 0x1C00232B0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0023B9C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0023F0C (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C00242B8 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C00243EC (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C00246C0 (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C00247E0 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C0024ABC (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C0024C8C (AcpiEval_CPC.c)
 *     AcpiParseCore @ 0x1C0025E0C (AcpiParseCore.c)
 *     AcpiParseULong64 @ 0x1C0026090 (AcpiParseULong64.c)
 *     AcpiParseRegister @ 0x1C0026100 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0026190 (AcpiParseRegisterOrQword.c)
 *     AcpiPStateNotifyWorker @ 0x1C0026400 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0026530 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C0026660 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 *     QueryPepCapabilites @ 0x1C002AFA8 (QueryPepCapabilites.c)
 *     InitPepPerfStates @ 0x1C002B494 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C002BCC0 (PepUpdatePerformanceConstraintWorker.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002C700 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002CA8C (PepNotifyQueryProcessorIdleStates.c)
 *     InitAcpiLegacyPcc @ 0x1C002D60C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002D854 (InitAcpiLpiStates.c)
 *     ValidateAcpiCStates @ 0x1C002E98C (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002FD78 (ValidateLpiState.c)
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
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
