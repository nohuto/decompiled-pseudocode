/*
 * XREFs of ndisSetMediaDisconnectTimer @ 0x1C001EADC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 * Callees:
 *     NdisSetTimer @ 0x1C0002A50 (NdisSetTimer.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisSetMediaDisconnectTimer(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x20) != 0 && (*(_DWORD *)(a1 + 4452) & 8) != 0 && (v2 & 8) == 0 && ndisReferenceMiniport(a1) )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qD(144LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, *(unsigned __int16 *)(a1 + 3700));
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFDF7 | 8;
    NdisSetTimer((PNDIS_TIMER)(a1 + 1392), 1000 * *(unsigned __int16 *)(a1 + 3700));
  }
}
