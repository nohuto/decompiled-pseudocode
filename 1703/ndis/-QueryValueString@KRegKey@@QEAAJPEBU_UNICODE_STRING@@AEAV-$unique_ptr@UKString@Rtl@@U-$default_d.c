/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30
 * Callers:
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00A9210 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00A9340 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00AFC10 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1128 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rt.c)
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00BE2C0 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00DF0F0 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00F0CB8 (-ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B1474 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00BD6B4 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  wchar_t *PoolWithTag; // rsi
  wchar_t *v7; // rbx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  wchar_t *v11; // rsi
  unsigned __int16 v12; // cx
  struct Rtl::KString *v13; // rax
  void *v14; // rcx
  struct Rtl::KString *v15; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-168h] BYREF
  struct _UNICODE_STRING v18; // [rsp+38h] [rbp-160h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-148h] BYREF

  PoolWithTag = (wchar_t *)KeyValueInformation;
  v7 = 0LL;
  v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    if ( ResultLength > 0x100000 )
    {
      v9 = -1073740757;
      goto LABEL_14;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x72745352u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_14;
    }
    operator delete[](0LL);
    v7 = PoolWithTag;
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    v9 = v8;
  }
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      v10 = *((_DWORD *)PoolWithTag + 2);
      if ( (v10 & 1) != 0 )
      {
        v9 = -1073741811;
      }
      else
      {
        v11 = PoolWithTag + 6;
        v18.Length = v10;
        v18.MaximumLength = v10;
        v12 = v10;
        v18.Buffer = v11;
        if ( (unsigned __int16)v10 >= 2u )
        {
          do
          {
            if ( v11[((unsigned __int64)v12 >> 1) - 1] )
              break;
            v12 -= 2;
          }
          while ( v12 >= 2u );
          v18.Length = v12;
        }
        v13 = Rtl::KString::Initialize(&v18);
        v14 = *a3;
        v15 = v13;
        if ( v13 != *a3 )
        {
          if ( v14 )
            ExFreePoolWithTag(v14, 0x7274534Bu);
          *a3 = v15;
        }
        v9 = -1073741670;
        if ( *a3 )
          v9 = 0;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_14:
  operator delete[](v7);
  return v9;
}
