/*
 * XREFs of ?ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C01E6CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(DXG_GUEST_REMOTEOBJECTCHANNEL *this, void *a2)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdAssertion(this);
  *(_QWORD *)(v2 + 24) = 334LL;
  WdLogEvent5_WdAssertion(v2);
  return 0LL;
}
