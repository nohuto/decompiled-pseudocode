/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14045B5F8
 * Callers:
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     <none>
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
