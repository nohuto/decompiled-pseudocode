/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00AC16C
 * Callers:
 *     ndisMUnloadEx @ 0x1C00AC0B0 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xDCu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xDDu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
}
