/*
 * XREFs of ndisInvokeUninstall @ 0x1C00DC5EC
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00D94DC (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
}
