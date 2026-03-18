/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C01E6110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::CleanupChannelObject(__int64 a1)
{
  __int64 v1; // rax

  v1 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v1 + 24) = 348LL;
  return WdLogEvent5_WdAssertion(v1);
}
