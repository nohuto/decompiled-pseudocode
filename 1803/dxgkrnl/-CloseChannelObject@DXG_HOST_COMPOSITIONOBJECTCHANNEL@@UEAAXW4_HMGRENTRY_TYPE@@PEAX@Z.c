/*
 * XREFs of ?CloseChannelObject@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C01E61A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CloseChannelObject(__int64 a1)
{
  __int64 v1; // rax

  v1 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v1 + 24) = 432LL;
  return WdLogEvent5_WdAssertion(v1);
}
