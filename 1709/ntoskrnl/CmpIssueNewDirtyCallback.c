/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14046F484
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140240D30 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
