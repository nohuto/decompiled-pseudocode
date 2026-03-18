/*
 * XREFs of RtlBeginReadTickLock @ 0x140132B60
 * Callers:
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140246760 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140246E84 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14064D9F0 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
