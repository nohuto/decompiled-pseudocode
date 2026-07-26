/*
 * XREFs of ndisMInvokeCancelOidRequest @ 0x1C005FBEC
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00430E0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xF1u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 240))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xF2u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
}
