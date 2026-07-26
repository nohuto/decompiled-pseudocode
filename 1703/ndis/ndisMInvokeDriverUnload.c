/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00C061C
 * Callers:
 *     ndisMUnloadEx @ 0x1C00C0560 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCFu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xD0u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
}
