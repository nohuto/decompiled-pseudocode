/*
 * XREFs of ndisCancelMediaDisconnectTimer @ 0x1C001C504
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00201E0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00C3B58 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
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
