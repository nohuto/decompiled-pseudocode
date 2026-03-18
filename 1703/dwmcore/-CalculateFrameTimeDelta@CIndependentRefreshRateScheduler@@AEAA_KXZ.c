/*
 * XREFs of ?CalculateFrameTimeDelta@CIndependentRefreshRateScheduler@@AEAA_KXZ @ 0x18013C5B4
 * Callers:
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CIndependentRefreshRateScheduler::CalculateFrameTimeDelta(
        CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // rtt

  v2 = *(_QWORD *)(*((_QWORD *)this + 2686) + 240LL);
  if ( v2 )
    return *(_QWORD *)(*((_QWORD *)this + 2685) + 240LL) - v2;
  v4 = *((_QWORD *)this + 20) - *((_QWORD *)this + 4);
  return *((_QWORD *)this + 1)
       + 10000000 * (v4 / g_qpcFrequency.QuadPart)
       + 10000000 * (v4 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
}
