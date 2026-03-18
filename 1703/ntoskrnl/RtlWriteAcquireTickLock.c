/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14001B1AC
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14001A064 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x14001AF68 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x140144050 (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x140202CEC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140404FC0 (KiCalibrateTimeAdjustment.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140410C0C (KiConfigureCpuSetSchedulingInformation.c)
 *     KiCreateCpuSetForProcessor @ 0x140411A90 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
