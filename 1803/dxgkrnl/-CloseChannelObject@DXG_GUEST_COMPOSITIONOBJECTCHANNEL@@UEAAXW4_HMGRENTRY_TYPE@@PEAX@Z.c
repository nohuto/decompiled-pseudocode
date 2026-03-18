/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C01BDEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::CloseChannelObject(__int64 a1, int a2, __int64 a3)
{
  if ( a2 == 17 )
    *(_BYTE *)(a3 + 8) = 1;
}
