/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14049367C
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14027828C (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
