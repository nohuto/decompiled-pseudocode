/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0127210
 * Callers:
 *     <none>
 * Callees:
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C012CC88 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection::PalmRejectTimerProcStatic();
  return 0LL;
}
