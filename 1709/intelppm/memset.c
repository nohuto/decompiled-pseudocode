/*
 * XREFs of memset @ 0x1C0005000
 * Callers:
 *     InitDevExts @ 0x1C000170C (InitDevExts.c)
 *     AcpiEval_OSC @ 0x1C0002AC0 (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0002DA0 (RegisterKernelIdleStates.c)
 *     GetProcessorStatusInfo @ 0x1C00096D0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0009830 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0009BF0 (GetWmiBiosThrottleStateInfo.c)
 *     Display_TSS @ 0x1C000A6D0 (Display_TSS.c)
 *     InitLegacyPccInternal @ 0x1C000C27C (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000C6CC (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C000D040 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C000E3F0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000E540 (PepParkPreference.c)
 *     GetRegistryQwordValue @ 0x1C001D584 (GetRegistryQwordValue.c)
 *     RetrieveModelParameters @ 0x1C001D654 (RetrieveModelParameters.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D950 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     EnableEnergyEstimation @ 0x1C001E7A0 (EnableEnergyEstimation.c)
 *     InitEnergyCounters @ 0x1C001E870 (InitEnergyCounters.c)
 *     RegisterWmi @ 0x1C001EC30 (RegisterWmi.c)
 *     InitAcpi1ThrottleStates @ 0x1C001F604 (InitAcpi1ThrottleStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C001F9C0 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001FC18 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001FF00 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0020334 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0020484 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00205EC (AcpiEval_CPC.c)
 *     AcquirePccInterface @ 0x1C0020EE0 (AcquirePccInterface.c)
 *     RegisterKernelIdleDomains @ 0x1C0022228 (RegisterKernelIdleDomains.c)
 *     RegisterXsdDomain @ 0x1C0022A24 (RegisterXsdDomain.c)
 *     RegisterPepDevice @ 0x1C0022EE4 (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C0022FB4 (EnumerateControlMethods.c)
 *     PepQueryVetoList @ 0x1C0023284 (PepQueryVetoList.c)
 *     EvtDriverDeviceAdd @ 0x1C0023370 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C0023618 (ProcLibDeviceCreate.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002746C (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0028480 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C0028E80 (WppTraceCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C00293A4 (CpcHighestNotifyWorker.c)
 *     GetHvPackage @ 0x1C002AAE4 (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C002AE28 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002B170 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C002B590 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002BA10 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C002BECC (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C002C17C (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C002C9F4 (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C002CDA0 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C002D178 (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C002D878 (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C002E090 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C002FAD0 (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C00301D0 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C003037C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C00309E0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0030F1C (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0031920 (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0031C30 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0031DCC (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003214C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0032360 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00326D0 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C0032848 (PepQueryName.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0032D24 (EnablePerformanceMonitoringCounters.c)
 *     InitPepPerfStates @ 0x1C0032E54 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0033468 (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0033D94 (LpiTranslateCoordinatedIdleStates.c)
 *     DriverEntry @ 0x1C0035050 (DriverEntry.c)
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0035340 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00353FC (ReadPowerCurve.c)
 *     ProcLibGlobalInit @ 0x1C00354C0 (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00050BD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
