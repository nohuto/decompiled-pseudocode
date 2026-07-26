/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0023B5C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00A30A8 (-ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C0023050 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( (v1 & 0x20) != 0 && (*(_BYTE *)(a1 + 4452) & 8) != 0 && (v1 & 8) == 0 && ndisReferenceMiniport(a1, 0xBu) )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qD(144LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, *(unsigned __int16 *)(a1 + 3700));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3700));
  }
}
