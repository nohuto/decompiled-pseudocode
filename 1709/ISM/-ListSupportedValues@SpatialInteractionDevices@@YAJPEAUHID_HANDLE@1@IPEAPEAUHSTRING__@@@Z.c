/*
 * XREFs of ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x180078A48
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevice@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180074EF0 (-ListSupportedValues@SpatialInteractionDevice@@UEAAJIPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     SpatialInteractionDevices::ListSupportedValues @ 0x180078844 (SpatialInteractionDevices--ListSupportedValues.c)
 *     SpatialInteractionDevices::ListSupportedButtons @ 0x180078960 (SpatialInteractionDevices--ListSupportedButtons.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x18007A114 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x18007A1A8 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_18007A1A8.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

int __fastcall SpatialInteractionDevices::ListSupportedValues(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        void *a3,
        HSTRING *a4)
{
  unsigned int v5; // esi
  int result; // eax
  __int128 v8; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-30h]
  _BYTE v10[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-10h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v5 = (unsigned int)a2;
  v8 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                    v10,
                    this,
                    &off_1800D98A0,
                    a4);
  v9 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(v11);
  memset(a3, 0, 8LL * v5);
  v12 = 0;
  result = SpatialInteractionDevices::ListSupportedValues(
             (__int64)this,
             v5,
             (__int64)a3,
             (__int64)&unk_1800D9C00,
             3uLL,
             &v12);
  if ( result >= 0 )
  {
    result = SpatialInteractionDevices::ListSupportedValues(
               (__int64)this,
               v5,
               (__int64)a3,
               (__int64)&unk_1800D9C30,
               4uLL,
               &v12);
    if ( result >= 0 )
    {
      result = SpatialInteractionDevices::ListSupportedValues(
                 (__int64)this,
                 v5,
                 (__int64)a3,
                 (__int64)&unk_1800D9BB0,
                 4uLL,
                 &v12);
      if ( result >= 0 )
      {
        result = SpatialInteractionDevices::ListSupportedValues(
                   (__int64)this,
                   v5,
                   (__int64)a3,
                   (__int64)&unk_1800D9B80,
                   2uLL,
                   &v12);
        if ( result >= 0 )
        {
          result = SpatialInteractionDevices::ListSupportedValues((__int64)this, v5, (__int64)a3, v8, DWORD2(v8), &v12);
          if ( result >= 0 )
          {
            result = SpatialInteractionDevices::ListSupportedValues(
                       (__int64)this,
                       v5,
                       (__int64)a3,
                       (__int64)&unk_1800D9B70,
                       1uLL,
                       &v12);
            if ( result >= 0 )
            {
              result = SpatialInteractionDevices::ListSupportedValues(
                         (__int64)this,
                         v5,
                         (__int64)a3,
                         (__int64)&unk_18010D190,
                         1uLL,
                         &v12);
              if ( result >= 0 )
                return SpatialInteractionDevices::ListSupportedButtons(
                         (__int64)this,
                         v5,
                         (__int64)a3,
                         v9,
                         DWORD2(v9),
                         &v12);
            }
          }
        }
      }
    }
  }
  return result;
}
