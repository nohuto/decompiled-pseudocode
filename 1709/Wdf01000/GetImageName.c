/*
 * XREFs of GetImageName @ 0x1C00153AC
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     RtlUnicodeStringCopy @ 0x1C0015560 (RtlUnicodeStringCopy.c)
 *     GetNameFromPath @ 0x1C0015670 (GetNameFromPath.c)
 *     QueryAndAllocString @ 0x1C00156F0 (QueryAndAllocString.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_D @ 0x1C006E904 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall GetImageName(_FX_DRIVER_GLOBALS *DriverGlobals, _UNICODE_STRING *ImageName)
{
  FxDriver *Driver; // rax
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // bx
  wchar_t *v8; // rax
  unsigned __int16 v10; // r9
  wchar_t *stringBuffer; // [rsp+30h] [rbp-59h] BYREF
  FxAutoRegKey hKey; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-49h] BYREF
  _UNICODE_STRING valueName; // [rsp+50h] [rbp-39h] BYREF
  _UNICODE_STRING imagePath; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  wchar_t valueName_buffer[10]; // [rsp+A0h] [rbp+17h] BYREF
  void *Caller; // [rsp+E8h] [rbp+5Fh]

  wcscpy(&valueName_buffer[8], L"h");
  hKey.m_Key = 0LL;
  valueName.Buffer = valueName_buffer;
  *(_DWORD *)&valueName.Length = 1310738;
  *(_QWORD *)&ImageName->Length = 0LL;
  ImageName->Buffer = 0LL;
  *(_QWORD *)&imagePath.Length = 0LL;
  imagePath.Buffer = 0LL;
  *(_QWORD *)&Name.Length = 0LL;
  Name.Buffer = 0LL;
  Driver = DriverGlobals->Driver;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"ImagePath";
  stringBuffer = 0LL;
  ObjectAttributes.ObjectName = &Driver->m_RegistryPath;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 21;
LABEL_14:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v10, WPP_FxTelemetryKm_cpp_Traceguids, v5);
    goto LABEL_9;
  }
  v5 = QueryAndAllocString(hKey.m_Key, DriverGlobals, &valueName, &stringBuffer);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 22;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&imagePath, stringBuffer);
  GetNameFromPath(&imagePath, &Name);
  if ( Name.Length )
  {
    v7 = Name.Length + 2;
    if ( (unsigned __int16)(Name.Length + 2) < Name.Length )
    {
      v6 = -1073741675;
      WPP_IFR_SF_D(
        DriverGlobals,
        (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
        0x11u,
        0x18u,
        WPP_FxTelemetryKm_cpp_Traceguids,
        0xC0000095);
    }
    else
    {
      v8 = (wchar_t *)FxPoolAllocator(
                        DriverGlobals,
                        &DriverGlobals->FxPoolFrameworks,
                        1u,
                        v7,
                        DriverGlobals->Tag,
                        Caller);
      ImageName->Buffer = v8;
      if ( v8 )
      {
        memset(v8, 0, v7);
        ImageName->Length = 0;
        ImageName->MaximumLength = v7;
        v6 = RtlUnicodeStringCopy(ImageName, &Name);
      }
      else
      {
        v6 = -1073741670;
        WPP_IFR_SF_D(
          DriverGlobals,
          (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
          0x11u,
          0x19u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          0xC000009A);
      }
    }
  }
  else
  {
    v6 = -1073741811;
    WPP_IFR_SF_D(
      DriverGlobals,
      (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
      0x11u,
      0x17u,
      WPP_FxTelemetryKm_cpp_Traceguids,
      0xC000000D);
  }
  if ( stringBuffer )
    FxPoolFree(stringBuffer);
LABEL_9:
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return v6;
}
