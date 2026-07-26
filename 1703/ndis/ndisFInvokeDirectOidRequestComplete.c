/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C005A29C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     WPP_SF_qLqL @ 0x1C0059B8C (WPP_SF_qLqL.c)
 */

void __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qLqL(0x88u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qLq(0x89u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v5);
}
