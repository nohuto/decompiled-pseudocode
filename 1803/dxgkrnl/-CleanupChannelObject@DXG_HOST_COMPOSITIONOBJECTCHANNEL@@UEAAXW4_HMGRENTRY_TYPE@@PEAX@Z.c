/*
 * XREFs of ?CleanupChannelObject@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C01E6140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CleanupChannelObject(__int64 a1)
{
  __int64 v1; // rax

  v1 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v1 + 24) = 420LL;
  return WdLogEvent5_WdAssertion(v1);
}
