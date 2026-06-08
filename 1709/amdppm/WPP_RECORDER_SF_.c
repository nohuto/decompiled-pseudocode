/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000127C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00014B0 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C00019D0 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0003370 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C00034A0 (AcpiOSCNotifyWorker.c)
 *     Display_PSS @ 0x1C0003530 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0003788 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C00038C4 (Display_TSS.c)
 *     Display_xSD @ 0x1C0003B0C (Display_xSD.c)
 *     Display_CST @ 0x1C0003D98 (Display_CST.c)
 *     Display_CSD @ 0x1C0003FB0 (Display_CSD.c)
 *     Display_CPC @ 0x1C000425C (Display_CPC.c)
 *     Display_LPI @ 0x1C0004628 (Display_LPI.c)
 *     DisplayPPMFlags @ 0x1C0004EE4 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C000587C (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C000597C (DisplayKernelIdleStates.c)
 *     CpcNativeInterruptDpc @ 0x1C0007480 (CpcNativeInterruptDpc.c)
 *     UpdateKernelPlatformStates @ 0x1C000818C (UpdateKernelPlatformStates.c)
 *     AcpiEval_CST @ 0x1C001AFF8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001B8B8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001BC28 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C001BFD4 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C001C108 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C001C3DC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C001C4F8 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C001C7D4 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C001C9A4 (AcpiEval_CPC.c)
 *     AcpiParseCore @ 0x1C001DB10 (AcpiParseCore.c)
 *     AcpiParseULong64 @ 0x1C001DDA0 (AcpiParseULong64.c)
 *     AcpiParseRegister @ 0x1C001DE10 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C001DEA0 (AcpiParseRegisterOrQword.c)
 *     AcpiPStateNotifyWorker @ 0x1C001E110 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001E240 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C001E370 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00232B4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0023620 (PepNotifyQueryProcessorIdleStates.c)
 *     InitAcpiIdleDomain @ 0x1C00241A0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C00242BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00244F4 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0024604 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0025500 (InitAcpi2CStates.c)
 *     RegisterIdleComplete @ 0x1C002623C (RegisterIdleComplete.c)
 *     RegisterKernelPlatformStates @ 0x1C002631C (RegisterKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     InitAcpiPerfStates @ 0x1C002997C (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0029FB0 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiCStates @ 0x1C002B148 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002C534 (ValidateLpiState.c)
 *     InitPepPerfStates @ 0x1C002C5E8 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C002CE10 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C002D1F8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C002D6E8 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002EF3C (InitAcpiLpiStates.c)
 *     AcquirePccInterface @ 0x1C002FB5C (AcquirePccInterface.c)
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
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
