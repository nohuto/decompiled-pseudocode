/*
 * XREFs of ndisInvokeUninstall @ 0x1C00E7E80
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E4FFC (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
}
