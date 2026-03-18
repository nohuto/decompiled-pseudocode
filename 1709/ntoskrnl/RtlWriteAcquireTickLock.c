/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14011FBD8
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14011F4EC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x14011F9AC (KiUpdateTimeAssist.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140139184 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiUpdateSystemTime @ 0x14014A00C (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x140209230 (KeSetTagCpuSets.c)
 *     KiCreateCpuSetForProcessor @ 0x1404262B0 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x14042E2D0 (KiCalibrateTimeAdjustment.c)
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
