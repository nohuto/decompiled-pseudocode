/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00B448C
 * Callers:
 *     ndisMUnloadEx @ 0x1C00B43D0 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xDFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xE0u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
}
