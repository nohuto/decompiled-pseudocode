/*
 * XREFs of ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Initialize@CPartitionScheduler@@IEAAXXZ @ 0x1800C965C (-Initialize@CPartitionScheduler@@IEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 *     ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4 (-WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetQPCTime@CPartitionScheduler@@IEAAXPEA_K@Z @ 0x1800C95B8 (-GetQPCTime@CPartitionScheduler@@IEAAXPEA_K@Z.c)
 */

unsigned __int64 __fastcall CPartitionScheduler::GetAbsoluteTime(CPartitionScheduler *this)
{
  unsigned __int64 v2; // rtt
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CPartitionScheduler::GetQPCTime(this, &v4);
  v2 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
  return *(_QWORD *)this
       + 10000000 * (v2 / g_qpcFrequency.QuadPart)
       + 10000000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
}
