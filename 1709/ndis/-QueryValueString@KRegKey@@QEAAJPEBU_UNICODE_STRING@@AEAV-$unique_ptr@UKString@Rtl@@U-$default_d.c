/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFDF0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFF60 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1BF4 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rt.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00C8D70 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00C9530 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00E8F74 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00FA1C8 (-ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B2174 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00C5A4C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  wchar_t *PoolWithTag; // rsi
  wchar_t *v7; // rbx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned __int16 v11; // cx
  struct Rtl::KString *v12; // rax
  void *v13; // rcx
  struct Rtl::KString *v14; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-168h] BYREF
  struct _UNICODE_STRING v17; // [rsp+38h] [rbp-160h] BYREF
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
        v11 = *((_DWORD *)PoolWithTag + 2);
        v17.Length = v11;
        v17.MaximumLength = v10;
        v17.Buffer = PoolWithTag + 6;
        if ( (unsigned __int16)v10 >= 2u )
        {
          do
          {
            if ( PoolWithTag[((unsigned __int64)v11 >> 1) + 5] )
              break;
            v11 -= 2;
          }
          while ( v11 >= 2u );
          v17.Length = v11;
        }
        v12 = Rtl::KString::Initialize(&v17);
        v13 = *a3;
        v14 = v12;
        if ( v12 != *a3 )
        {
          if ( v13 )
            ExFreePoolWithTag(v13, 0x7274534Bu);
          *a3 = v14;
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
