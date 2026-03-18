/*
 * XREFs of RtlBeginReadTickLock @ 0x1400AB028
 * Callers:
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x140155590 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140208C88 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x14020930C (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1405DEF28 (KeQueryCpuSetInformation.c)
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
