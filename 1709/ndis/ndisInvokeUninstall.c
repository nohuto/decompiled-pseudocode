/*
 * XREFs of ndisInvokeUninstall @ 0x1C00E662C
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E389C (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
}
