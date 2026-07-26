/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C0059484
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00430E0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x7Bu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
}
