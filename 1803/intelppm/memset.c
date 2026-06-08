/*
 * XREFs of memset @ 0x1C0005280
 * Callers:
 *     AcpiEval_OSC @ 0x1C0001C20 (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0001E60 (RegisterKernelIdleStates.c)
 *     InitDevExts @ 0x1C0003B28 (InitDevExts.c)
 *     GetProcessorStatusInfo @ 0x1C0009AA0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0009C00 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0009FC0 (GetWmiBiosThrottleStateInfo.c)
 *     Display_TSS @ 0x1C000AAA0 (Display_TSS.c)
 *     InitLegacyPccInternal @ 0x1C000C66C (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000CABC (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C000D430 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C000E770 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000E8C0 (PepParkPreference.c)
 *     PepQueryVetoList @ 0x1C001E428 (PepQueryVetoList.c)
 *     RegisterWmi @ 0x1C001E560 (RegisterWmi.c)
 *     EnumerateControlMethods @ 0x1C001E7F0 (EnumerateControlMethods.c)
 *     RegisterPepDevice @ 0x1C001EC5C (RegisterPepDevice.c)
 *     RegisterKernelIdleDomains @ 0x1C001FFC8 (RegisterKernelIdleDomains.c)
 *     RegisterXsdDomain @ 0x1C0020930 (RegisterXsdDomain.c)
 *     InitAcpi1ThrottleStates @ 0x1C0021384 (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C00216B4 (AcquirePccInterface.c)
 *     AcpiEval_PSD_TSD @ 0x1C0021840 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C0021A98 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0021C00 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C002203C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0022324 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0022764 (AcpiEval_TSS.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022B28 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPerfStatesInternal @ 0x1C0023130 (InitPerfStatesInternal.c)
 *     EnableEnergyEstimation @ 0x1C0023980 (EnableEnergyEstimation.c)
 *     InitEnergyCounters @ 0x1C0023A50 (InitEnergyCounters.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023E80 (GetRegistryDwordValueNoDefault.c)
 *     RetrieveModelParameters @ 0x1C0023FC0 (RetrieveModelParameters.c)
 *     GetRegistryQwordValue @ 0x1C0024038 (GetRegistryQwordValue.c)
 *     EvtDriverDeviceAdd @ 0x1C0024540 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C00247E8 (ProcLibDeviceCreate.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0028514 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029534 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C0029F30 (WppTraceCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002A4F0 (CpcHighestNotifyWorker.c)
 *     GetHvPackage @ 0x1C002BCD4 (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C002C018 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002C340 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C002C760 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002CBE0 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C002D09C (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C002D350 (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C002DBD0 (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C002DF7C (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C002E358 (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C002EA68 (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C002F280 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00309F8 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C0030D80 (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C0031490 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C003163C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0031C80 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C003223C (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0032C44 (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0032F50 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00330EC (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003346C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033684 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00339F0 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C0033B68 (PepQueryName.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0034044 (EnablePerformanceMonitoringCounters.c)
 *     InitPepPerfStates @ 0x1C0034174 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003479C (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00350D8 (LpiTranslateCoordinatedIdleStates.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036358 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0036450 (ReadEnergyEquation.c)
 *     ProcLibGlobalInit @ 0x1C003650C (ProcLibGlobalInit.c)
 *     ReadPowerCurve @ 0x1C0036F3C (ReadPowerCurve.c)
 *     DriverEntry @ 0x1C0037250 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
