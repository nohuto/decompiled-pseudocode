/*
 * XREFs of ?TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z @ 0x180065980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryNotifyChannelDetach(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2)
{
  CAnimationTracking::NotifyChannelDetach((CPartitionVerticalBlankScheduler *)((char *)this + 21832), a2);
}
