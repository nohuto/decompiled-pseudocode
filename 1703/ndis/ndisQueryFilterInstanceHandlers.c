/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C00AEC34
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C001C624 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00AEC94 (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  if ( a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2056LL); i; i = *(_QWORD *)(i + 112) )
    {
      ndisFInvokeSetFilterModuleOptions(i);
      if ( i == a1 )
        break;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Cu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
}
