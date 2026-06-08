/*
 * XREFs of memset @ 0x1C000CC80
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001AF0 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0002004 (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C000246C (InitLegacyPccInternal.c)
 *     GetProcessorStatusInfo @ 0x1C0005020 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0005180 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0005380 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C00065B8 (AcpiEval_OSC.c)
 *     Display_TSS @ 0x1C0006CA4 (Display_TSS.c)
 *     PepParkPreference @ 0x1C0009300 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0009520 (PepParkMask.c)
 *     PepIdlePrepare @ 0x1C0009FB0 (PepIdlePrepare.c)
 *     RegisterHvCStates @ 0x1C001A4BC (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A740 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001AC60 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C001B0C0 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C001B2F8 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B4E0 (RegisterHvFeedbackCountersCallback.c)
 *     WppTraceCallback @ 0x1C001BA10 (WppTraceCallback.c)
 *     EvtDriverDeviceAdd @ 0x1C001BDB0 (EvtDriverDeviceAdd.c)
 *     RegisterKernelPepIdleStates @ 0x1C001C90C (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C001D038 (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C001D59C (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C00204A0 (RegisterKernelPackage.c)
 *     InitAcpi1ThrottleStates @ 0x1C0020AE0 (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C0021124 (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0021388 (RegisterSubspaceForGenAddr.c)
 *     RegisterXsdDomain @ 0x1C0021A08 (RegisterXsdDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021D48 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C0021DC4 (GetRegistryQwordValue.c)
 *     CpcHighestNotifyWorker @ 0x1C00225B4 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C0022934 (InitAcpi1CStates.c)
 *     RegisterWmi @ 0x1C0022D40 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C00232B0 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0023880 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0023B9C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0023F0C (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C00243EC (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C00247E0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0024C8C (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C002529C (AcpiParseLpiObject.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C00259AC (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C0025BB4 (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C0026A88 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C0026D68 (ProcLibDeviceCreate.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C00296D0 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0029964 (ProcLibTraceCoordinatedLpiRundown.c)
 *     InitPep @ 0x1C002AD3C (InitPep.c)
 *     InitPepPerfStates @ 0x1C002B494 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002BAE4 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C002C048 (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C002C48C (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C002C5BC (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002C700 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002CA8C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C002CCA4 (PepNotifyReportCStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C002D164 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002D300 (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002DE9C (LpiTranslateCoordinatedIdleStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002FF58 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     DriverEntry @ 0x1C0031168 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0031EA4 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C0032114 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0032374 (ReadPowerCurve.c)
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
