/*
 * XREFs of NdisCoSendPackets @ 0x1C0114AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisCoSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 264))();
}
