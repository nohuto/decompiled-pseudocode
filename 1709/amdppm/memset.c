/*
 * XREFs of memset @ 0x1C000CA40
 * Callers:
 *     GetProcessorStatusInfo @ 0x1C00019D0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0001B30 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0001D30 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C00031DC (AcpiEval_OSC.c)
 *     Display_TSS @ 0x1C00038C4 (Display_TSS.c)
 *     PepIdlePrepare @ 0x1C0005F00 (PepIdlePrepare.c)
 *     RegisterKernelIdleStates @ 0x1C0007C80 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000818C (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C00085FC (InitLegacyPccInternal.c)
 *     PepParkPreference @ 0x1C000B310 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000B520 (PepParkMask.c)
 *     WppTraceCallback @ 0x1C001A110 (WppTraceCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001A4B0 (EvtDriverDeviceAdd.c)
 *     RegisterWmi @ 0x1C001AA88 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C001AFF8 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C001B5CC (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C001B8B8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001BC28 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C001C108 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001C4F8 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C001C9A4 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C001CFB4 (AcpiParseLpiObject.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C001D6B4 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C001D8B8 (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C001E790 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C001EA6C (ProcLibDeviceCreate.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C00213A0 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0021634 (ProcLibTraceCoordinatedLpiRundown.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0022C04 (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C0023040 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C0023170 (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00232B4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0023620 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0023834 (PepNotifyReportCStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0023CF4 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0023E90 (PepNotifyCoordinatedLpiStates.c)
 *     RegisterXsdDomain @ 0x1C0024604 (RegisterXsdDomain.c)
 *     CpcHighestNotifyWorker @ 0x1C0024F30 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C002526C (InitAcpi1CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0025BE0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C002631C (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0026880 (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C0029660 (RegisterKernelPackage.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C00298AC (GetRegistryQwordValue.c)
 *     InitAcpi1ThrottleStates @ 0x1C0029E04 (InitAcpi1ThrottleStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A574 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C002C5E8 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002CC38 (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C002CF94 (InitPep.c)
 *     RegisterHvCStates @ 0x1C002DACC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C002DD70 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002E290 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C002E6F0 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C002E928 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002EB10 (RegisterHvFeedbackCountersCallback.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002F584 (LpiTranslateCoordinatedIdleStates.c)
 *     AcquirePccInterface @ 0x1C002FB5C (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C002FDC0 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C0030130 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0030E68 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C00310C4 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0031318 (ReadPowerCurve.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000CAFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
