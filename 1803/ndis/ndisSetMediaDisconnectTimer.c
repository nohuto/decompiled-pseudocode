/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C0016890
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C0024D00 (NdisSetTimer.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x20) != 0 && (*(_DWORD *)(a1 + 4452) & 8) != 0 && (v2 & 8) == 0 && ndisReferenceMiniport(a1) )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(144LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, *(unsigned __int16 *)(a1 + 3700));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3700));
  }
}
