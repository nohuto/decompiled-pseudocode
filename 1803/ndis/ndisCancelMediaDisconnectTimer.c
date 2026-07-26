/*
 * XREFs of ndisCancelMediaDisconnectTimer @ 0x1C001AE5C
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010150 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 */

BOOLEAN __fastcall ndisCancelMediaDisconnectTimer(__int64 a1)
{
  int v1; // eax
  BOOLEAN v3; // di
  __int64 v5; // r8
  __int64 v6; // r9

  v1 = *(_DWORD *)(a1 + 124);
  v3 = 1;
  if ( (v1 & 8) != 0 )
  {
    *(_DWORD *)(a1 + 124) = v1 & 0xFFFFFDF7 | 0x200;
    v3 = KeCancelTimer((PKTIMER)(a1 + 1392));
    if ( v3 )
      ndisDereferenceMiniport(a1, 0xBu, v5, v6);
  }
  return v3;
}
