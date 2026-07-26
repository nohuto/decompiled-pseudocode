/*
 * XREFs of ndisMInvokeCancelOidRequest @ 0x1C0060628
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0xF4u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 240))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0xF5u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
}
