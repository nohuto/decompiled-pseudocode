/*
 * XREFs of PopCoalescingCallbackWorker @ 0x1406C9520
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14022D7D4 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x14022D8DC (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

__int64 PopCoalescingCallbackWorker()
{
  int v0; // edx

  while ( 1 )
  {
    PopAcquirePolicyLock();
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_9;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock();
    v0 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v0);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock();
    v0 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock();
    v0 = 3;
    goto LABEL_8;
  }
LABEL_9:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock();
}
