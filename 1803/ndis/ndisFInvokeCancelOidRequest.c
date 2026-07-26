/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C0059B90
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x7Bu, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
}
