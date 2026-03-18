/*
 * XREFs of RtlBeginReadTickLock @ 0x140110700
 * Callers:
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140202560 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140202DC8 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1405CBA44 (KeQueryCpuSetInformation.c)
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
