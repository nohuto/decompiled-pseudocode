/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1400A9968
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x1400A69AC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x1400A9728 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x140162978 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140175FAC (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x140246DA8 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14047B0A4 (KiCreateCpuSetForProcessor.c)
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
