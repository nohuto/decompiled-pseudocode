/*
 * XREFs of ndisCancelMediaDisconnectTimer @ 0x1C00235D4
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00129C0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00A3008 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 */

BOOLEAN __fastcall ndisCancelMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax
  BOOLEAN v3; // di

  v1 = *(_DWORD *)(a1 + 124);
  v3 = 1;
  if ( (v1 & 8) != 0 )
  {
    *(_DWORD *)(a1 + 124) = v1 & 0xFFFFFDF7 | 0x200;
    v3 = KeCancelTimer((PKTIMER)(a1 + 1392));
    if ( v3 )
      ndisDereferenceMiniport(a1, 0xBu);
  }
  return v3;
}
