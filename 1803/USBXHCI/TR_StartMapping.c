/*
 * XREFs of TR_StartMapping @ 0x1C002126C
 * Callers:
 *     Endpoint_SM_StartMapping @ 0x1C0013C10 (Endpoint_SM_StartMapping.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StartMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 96LL))();
}
