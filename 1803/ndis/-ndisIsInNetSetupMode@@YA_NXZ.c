/*
 * XREFs of ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B7824
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61AC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00B67B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B785C (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00CAC90 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 */

char ndisIsInNetSetupMode(void)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_1C00996E0 )
  {
    byte_1C00996D0 = ndisIsNetSetupTheBindingEngineUncached();
    _InterlockedOr(v1, 0);
    byte_1C00996E0 = 1;
  }
  return byte_1C00996D0;
}
