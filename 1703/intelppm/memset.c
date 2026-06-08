/*
 * XREFs of memset @ 0x1C0004EC0
 * Callers:
 *     InitDevExts @ 0x1C0001C0C (InitDevExts.c)
 *     AcpiEval_OSC @ 0x1C0002CCC (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0002FA0 (RegisterKernelIdleStates.c)
 *     GetProcessorStatusInfo @ 0x1C00092D0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0009420 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C00097E0 (GetWmiBiosThrottleStateInfo.c)
 *     Display_TSS @ 0x1C000A31C (Display_TSS.c)
 *     InitLegacyPccInternal @ 0x1C000BEEC (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000C334 (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C000CC20 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C000DC30 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DD80 (PepParkPreference.c)
 *     EvtDriverDeviceAdd @ 0x1C001A150 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C001A3F8 (ProcLibDeviceCreate.c)
 *     GetRegistryQwordValue @ 0x1C001AC7C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001AD70 (GetRegistryDwordValueNoDefault.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     RegisterWmi @ 0x1C001B9C0 (RegisterWmi.c)
 *     InitAcpi1ThrottleStates @ 0x1C001C394 (InitAcpi1ThrottleStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C001C750 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001C9A8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001CC90 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C001D0C4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001D214 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C001D37C (AcpiEval_CPC.c)
 *     AcquirePccInterface @ 0x1C001DC8C (AcquirePccInterface.c)
 *     RegisterKernelIdleDomains @ 0x1C001EFF8 (RegisterKernelIdleDomains.c)
 *     RegisterXsdDomain @ 0x1C001F800 (RegisterXsdDomain.c)
 *     RegisterPepDevice @ 0x1C001FC60 (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C001FD30 (EnumerateControlMethods.c)
 *     PepQueryVetoList @ 0x1C0020000 (PepQueryVetoList.c)
 *     InitEnergyCounters @ 0x1C0022C40 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C0023078 (RetrieveModelParameters.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0023D54 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0024CA8 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C00256A0 (WppTraceCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0025BC4 (CpcHighestNotifyWorker.c)
 *     GetHvPackage @ 0x1C0027290 (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C00275CC (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0027910 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C0027D30 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C00281E0 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C0028694 (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C002893C (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C002919C (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0029548 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C00298DC (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C0029FDC (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C002A800 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002BE98 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C002C220 (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C002C920 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C002CACC (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C002D130 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C002D624 (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002E028 (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C002E338 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C002E4D4 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002E854 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002EA68 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C002EDD8 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C002EF50 (PepQueryName.c)
 *     EnableEnergyEstimation @ 0x1C002F434 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C002F51C (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002F82C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C002FC10 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002FF80 (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0030844 (LpiTranslateCoordinatedIdleStates.c)
 *     DriverEntry @ 0x1C0031040 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C003202C (PopulateEnergyEstimationModel.c)
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
LABEL_5:
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
    goto LABEL_5;
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0004F7D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
