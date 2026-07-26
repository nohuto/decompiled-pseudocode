/*
 * XREFs of ndisFInvokeSetFilterModuleOptions @ 0x1C00BE420
 * Callers:
 *     ndisQueryFilterInstanceHandlers @ 0x1C00BE3C0 (ndisQueryFilterInstanceHandlers.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF7E0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeSetFilterModuleOptions(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 168) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x6Bu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 168))(*(_QWORD *)(a1 + 24));
    v2 = v4;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x6Cu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v4);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x6Du, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  }
  return v2;
}
