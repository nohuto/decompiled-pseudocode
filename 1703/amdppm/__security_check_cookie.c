/*
 * XREFs of __security_check_cookie @ 0x1C000BAE0
 * Callers:
 *     ValidatePStateCapability @ 0x1C0001100 (ValidatePStateCapability.c)
 *     Display_TSS @ 0x1C0003820 (Display_TSS.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000597C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0005A58 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0005B00 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0005C1C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     PepIdlePrepare @ 0x1C0005CA0 (PepIdlePrepare.c)
 *     PepIdleTest @ 0x1C0006270 (PepIdleTest.c)
 *     PepProcessorIdleVeto @ 0x1C0006380 (PepProcessorIdleVeto.c)
 *     PepPerfControlHandler @ 0x1C000A920 (PepPerfControlHandler.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000AA00 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C000AA90 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000AB20 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C000ABB0 (PepDifferentialPerfRead.c)
 *     PepDevicePowerControlCallback @ 0x1C000B060 (PepDevicePowerControlCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000BA20 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000BA7C (HviIsHypervisorMicrosoftCompatible.c)
 *     __GSHandlerCheckCommon @ 0x1C000BF0C (__GSHandlerCheckCommon.c)
 *     RegisterWmi @ 0x1C0017A98 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0018008 (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C0018408 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C00185DC (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00188C8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0018C38 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0019118 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00199B4 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C0019FC4 (AcpiParseLpiObject.c)
 *     GetAcpiTable @ 0x1C001B5CC (GetAcpiTable.c)
 *     EnumerateControlMethods @ 0x1C001B784 (EnumerateControlMethods.c)
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 *     ProcLibTraceSummary @ 0x1C001CE90 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C001D178 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C001D680 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001DBF8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C001DE10 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001DEF0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001E19C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001E890 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB14 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001EC60 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001ECF4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001EEF8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001F0F0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001F300 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001F550 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001F634 (ProcLibTraceCoordinatedIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C001FB8C (PepNotifyQueryCoordinatedStates.c)
 *     CpcConnectNativeInterrupt @ 0x1C0021AA8 (CpcConnectNativeInterrupt.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 *     RegisterKernelCStates @ 0x1C0022540 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0022A48 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0022DA4 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x1C00236EC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0023A24 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelCap @ 0x1C0024A00 (RegisterKernelCap.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0027348 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0028640 (ValidatePerfDomainSymmetry.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0028EF8 (ValidateCoordinatedDependencyOptions.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002981C (PepNotifyQueryPerfCapabilities.c)
 *     InitPep @ 0x1C0029B24 (InitPep.c)
 *     PepNotifyQueryCapabilities @ 0x1C002A000 (PepNotifyQueryCapabilities.c)
 *     GetHvPpmCapabilities @ 0x1C002A49C (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C002A63C (RegisterHvCStates.c)
 *     RegisterHvCap @ 0x1C002AD80 (RegisterHvCap.c)
 *     RegisterHvLegacyPcc @ 0x1C002AE00 (RegisterHvLegacyPcc.c)
 *     RegisterVmIdleStates @ 0x1C002B49C (RegisterVmIdleStates.c)
 *     InitDriver @ 0x1C002D008 (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 *     ProcLibRegisterEtw @ 0x1C002DDF4 (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationModel @ 0x1C002DEAC (PopulateEnergyEstimationModel.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
