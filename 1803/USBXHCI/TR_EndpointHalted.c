/*
 * XREFs of TR_EndpointHalted @ 0x1C00206C0
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C003D1D0 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 120LL))();
}
