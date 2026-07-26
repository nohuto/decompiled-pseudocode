/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C005A100
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C0045EE0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x7Du, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x7Eu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
}
