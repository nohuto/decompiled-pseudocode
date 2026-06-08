/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000122C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001450 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C0001950 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C00032B0 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C00033E0 (AcpiOSCNotifyWorker.c)
 *     Display_PSS @ 0x1C0003470 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C00036E8 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C0003820 (Display_TSS.c)
 *     Display_xSD @ 0x1C0003A70 (Display_xSD.c)
 *     Display_CST @ 0x1C0003D14 (Display_CST.c)
 *     Display_CSD @ 0x1C0003F44 (Display_CSD.c)
 *     Display_CPC @ 0x1C000420C (Display_CPC.c)
 *     Display_LPI @ 0x1C00045E0 (Display_LPI.c)
 *     DisplayPPMFlags @ 0x1C0004EA8 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0005724 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0005828 (DisplayKernelIdleStates.c)
 *     CpcNativeInterruptDpc @ 0x1C0007130 (CpcNativeInterruptDpc.c)
 *     UpdateKernelPlatformStates @ 0x1C0007E4C (UpdateKernelPlatformStates.c)
 *     AcpiEval_CST @ 0x1C0018008 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00188C8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0018C38 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x1C0018FE4 (AcpiEval_PPC.c)
 *     AcpiEval_TSS @ 0x1C0019118 (AcpiEval_TSS.c)
 *     AcpiEval_TPC @ 0x1C00193EC (AcpiEval_TPC.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C00197E4 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C00199B4 (AcpiEval_CPC.c)
 *     AcpiParseCore @ 0x1C001AB1C (AcpiParseCore.c)
 *     AcpiParseULong64 @ 0x1C001ADA0 (AcpiParseULong64.c)
 *     AcpiParseRegister @ 0x1C001AE10 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C001AEA0 (AcpiParseRegisterOrQword.c)
 *     AcpiPStateNotifyWorker @ 0x1C001B110 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001B240 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C001B370 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0020240 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00205AC (PepNotifyQueryProcessorIdleStates.c)
 *     InitAcpiIdleDomain @ 0x1C0021130 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002124C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0021484 (InitAcpiThrottleDomain.c)
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 *     InitAcpi2CStates @ 0x1C0022368 (InitAcpi2CStates.c)
 *     RegisterIdleComplete @ 0x1C00230A4 (RegisterIdleComplete.c)
 *     RegisterKernelPlatformStates @ 0x1C0023188 (RegisterKernelPlatformStates.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0024634 (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0025E50 (RegisterKernelPepPerf.c)
 *     InitAcpiPerfStates @ 0x1C002674C (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0026D80 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiCStates @ 0x1C0027F50 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C00292B8 (ValidateLpiState.c)
 *     InitPepPerfStates @ 0x1C002936C (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C00299A0 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C0029D84 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C002A250 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002BAAC (InitAcpiLpiStates.c)
 *     AcquirePccInterface @ 0x1C002C6C0 (AcquirePccInterface.c)
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
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
