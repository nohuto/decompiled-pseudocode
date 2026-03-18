/*
 * XREFs of ?IsCompanionRegisteredForDevice@FxCompanionLibrary@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00360C0
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002A5E0 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     GetNameFromPath @ 0x1C0015670 (GetNameFromPath.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     WPP_IFR_SF_Zd @ 0x1C0074480 (WPP_IFR_SF_Zd.c)
 */

char __fastcall FxCompanionLibrary::IsCompanionRegisteredForDevice(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *Pdo)
{
  char v4; // di
  NTSTATUS _a1; // eax
  unsigned __int16 v7; // r9
  NTSTATUS globals; // eax
  unsigned __int8 v9; // dl
  FxAutoRegKey companionRegKey; // [rsp+40h] [rbp-69h] BYREF
  FxAutoRegKey deviceRegKey; // [rsp+48h] [rbp-61h] BYREF
  FxAutoRegKey kmdfSvcKey; // [rsp+50h] [rbp-59h] BYREF
  _UNICODE_STRING serviceNameUnicodeString; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING companionKeyName; // [rsp+68h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-31h] BYREF
  wchar_t companionKeyName_buffer[32]; // [rsp+A8h] [rbp-1h] BYREF

  wcscpy(companionKeyName_buffer, L"WUDF\\CompanionConfigurations");
  companionKeyName.Buffer = companionKeyName_buffer;
  deviceRegKey.m_Key = 0LL;
  v4 = 0;
  companionRegKey.m_Key = 0LL;
  kmdfSvcKey.m_Key = 0LL;
  *(_DWORD *)&companionKeyName.Length = 3801144;
  *(_QWORD *)&serviceNameUnicodeString.Length = 0LL;
  serviceNameUnicodeString.Buffer = 0LL;
  _a1 = IoOpenDeviceRegistryKey(Pdo, 1u, 0x20000u, &deviceRegKey.m_Key);
  if ( _a1 < 0 )
  {
    v7 = 22;
LABEL_12:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, v7, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    goto $exit_12;
  }
  ObjectAttributes.RootDirectory = deviceRegKey.m_Key;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &companionKeyName;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _a1 = ZwOpenKey(&companionRegKey.m_Key, 0x80000000, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    if ( _a1 == -1073741772 )
      goto $exit_12;
    v7 = 23;
    goto LABEL_12;
  }
  GetNameFromPath(&DriverGlobals->Driver->m_RegistryPath, &serviceNameUnicodeString);
  if ( serviceNameUnicodeString.Length )
  {
    ObjectAttributes.RootDirectory = companionRegKey.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &serviceNameUnicodeString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    globals = ZwOpenKey(&kmdfSvcKey.m_Key, 0x80000000, &ObjectAttributes);
    if ( globals >= 0 )
    {
      v4 = 1;
    }
    else if ( globals != -1073741772 )
    {
      WPP_IFR_SF_Zd(
        DriverGlobals,
        v9,
        0xCu,
        0x19u,
        WPP_FxCompanionLibrary_cpp_Traceguids,
        &serviceNameUnicodeString,
        globals);
    }
  }
  else
  {
    WPP_IFR_SF_(DriverGlobals, 2u, 0xCu, 0x18u, WPP_FxCompanionLibrary_cpp_Traceguids);
  }
$exit_12:
  if ( kmdfSvcKey.m_Key )
    ZwClose(kmdfSvcKey.m_Key);
  if ( companionRegKey.m_Key )
    ZwClose(companionRegKey.m_Key);
  if ( deviceRegKey.m_Key )
    ZwClose(deviceRegKey.m_Key);
  return v4;
}
