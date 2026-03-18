/*
 * XREFs of ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x180066654
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rtt

  v2 = *(_QWORD *)(*((_QWORD *)this + 2686) + 240LL);
  if ( v2 )
    return *(_QWORD *)(*((_QWORD *)this + 2685) + 240LL) - v2;
  v3 = *((_QWORD *)this + 20) - *((_QWORD *)this + 4);
  return *((_QWORD *)this + 1)
       + 10000000 * (v3 / g_qpcFrequency.QuadPart)
       + 10000000 * (v3 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
}
