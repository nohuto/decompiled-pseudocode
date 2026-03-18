/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059BF4
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0059380 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C00594F8 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C00595BC (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005968C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C0059B0C (UpdateUcmIsPresentBit.c)
 */

__int64 __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r9
  int v6; // [rsp+28h] [rbp-10h]

  if ( (int)ReadTestOverrideValue(a1) < 0 )
  {
    ReadManifestAssignedValue(a1);
    if ( !CheckUSBFnIncludeDefaultCfg(v2) )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1);
  }
  UpdateUcmIsPresentBit(a1);
  v6 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x1Fu,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    v6);
  v3 = 32;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v3 = 33;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v3,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids);
  v4 = 34;
  if ( (*(_BYTE *)a1 & 2) == 0 )
    v4 = 35;
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           1u,
           v4,
           (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids);
}
