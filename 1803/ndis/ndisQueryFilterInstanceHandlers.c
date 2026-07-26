/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C00C0C9C
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C001CE10 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00C0CFC (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x19u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
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
    WPP_SF_q(0x1Au, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
}
