/*
 * XREFs of ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B4154
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFDF0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B0DE4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C8BF8 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00C9530 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 */

char ndisIsInNetSetupMode(void)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_1C0097EC9 )
  {
    byte_1C0097EC8 = ndisIsNetSetupTheBindingEngineUncached();
    _InterlockedOr(v1, 0);
    byte_1C0097EC9 = 1;
  }
  return byte_1C0097EC8;
}
