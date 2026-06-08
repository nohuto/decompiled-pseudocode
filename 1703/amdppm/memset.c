/*
 * XREFs of memset @ 0x1C000C3C0
 * Callers:
 *     GetProcessorStatusInfo @ 0x1C0001950 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0001AA0 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0001CA0 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C0003120 (AcpiEval_OSC.c)
 *     Display_TSS @ 0x1C0003820 (Display_TSS.c)
 *     PepIdlePrepare @ 0x1C0005CA0 (PepIdlePrepare.c)
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0007E4C (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C00082B4 (InitLegacyPccInternal.c)
 *     PepParkPreference @ 0x1C000AC90 (PepParkPreference.c)
 *     PepParkMask @ 0x1C000AEA0 (PepParkMask.c)
 *     WppTraceCallback @ 0x1C0017110 (WppTraceCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C00174C0 (EvtDriverDeviceAdd.c)
 *     RegisterWmi @ 0x1C0017A98 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C0018008 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C00185DC (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00188C8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0018C38 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0019118 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00199B4 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C0019FC4 (AcpiParseLpiObject.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C001A6C4 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C001A8C8 (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C001B784 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C001BA60 (ProcLibDeviceCreate.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E3D4 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001E668 (ProcLibTraceCoordinatedLpiRundown.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C001FB8C (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C001FFC8 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C00200F8 (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0020240 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00205AC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C00207C0 (PepNotifyReportCStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0020C84 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0020E20 (PepNotifyCoordinatedLpiStates.c)
 *     RegisterXsdDomain @ 0x1C0021594 (RegisterXsdDomain.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C00220D4 (InitAcpi1CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0022A48 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0023188 (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C00236EC (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0024634 (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0025E50 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C0026430 (RegisterKernelPackage.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0026600 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C002667C (GetRegistryQwordValue.c)
 *     InitAcpi1ThrottleStates @ 0x1C0026BD4 (InitAcpi1ThrottleStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0027348 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C002936C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0029730 (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C0029B24 (InitPep.c)
 *     RegisterHvCStates @ 0x1C002A63C (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C002A8E0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002AE00 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C002B270 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C002B49C (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002B680 (RegisterHvFeedbackCountersCallback.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4 (LpiTranslateCoordinatedIdleStates.c)
 *     AcquirePccInterface @ 0x1C002C6C0 (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C002C910 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C002D140 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C002DEAC (PopulateEnergyEstimationModel.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000C47D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
