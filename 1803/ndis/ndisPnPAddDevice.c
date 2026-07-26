/*
 * XREFs of ndisPnPAddDevice @ 0x1C00B6980
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00B6660 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00EC290 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C00168BC (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001F110 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF__guid_ @ 0x1C0041E08 (WPP_SF__guid_.c)
 *     McTemplateK0z @ 0x1C0061EC8 (McTemplateK0z.c)
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00B6680 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00B670C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00B67B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00B6880 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00B72D0 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00B7710 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00BAED8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00EAAD8 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00EABF8 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00EAEEC (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ndisWdfUpdateAddDeviceParameters @ 0x1C00ECE14 (ndisWdfUpdateAddDeviceParameters.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEBG@Z @ 0x1C00FC784 (-DeleteValue@KRegKey@@QEAAJPEBG@Z.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(PDRIVER_OBJECT DriverObject, struct _DEVICE_OBJECT *a2, void *a3, __int64 a4)
{
  bool v7; // r14
  int updated; // ebx
  UNICODE_STRING *v9; // rdi
  bool v10; // al
  const wchar_t *v11; // rax
  unsigned __int8 v12; // bl
  __int64 v13; // rcx
  int v14; // eax
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  HANDLE v19; // rcx
  UNICODE_STRING *v21; // rcx
  NTSTATUS v22; // eax
  HANDLE v23; // rbx
  const wchar_t *v24; // rax
  __int64 v25; // rcx
  const wchar_t *v26; // rax
  __int64 v27; // rcx
  const unsigned __int16 *v28; // rdx
  const wchar_t *v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  unsigned __int8 IsHardwareLoopbackSupported; // cl
  bool v33; // [rsp+40h] [rbp-C0h] BYREF
  bool v34; // [rsp+41h] [rbp-BFh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Data; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+80h] [rbp-80h] BYREF
  GUID KeyValueInformation; // [rsp+E0h] [rbp-20h] BYREF

  v40 = a4;
  DeviceRegKey = 0LL;
  v7 = a3 != 0LL;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qq(0x3Du, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, DriverObject, a2);
  updated = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_39;
  KeyHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    DeviceRegKey);
  v33 = 0;
  v34 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation((__int64)&KeyHandle, (__int64)&GuidString, &v33);
  if ( updated < 0 )
  {
    v21 = (UNICODE_STRING *)GuidString;
    if ( !GuidString )
      goto LABEL_44;
    goto LABEL_43;
  }
  v9 = (UNICODE_STRING *)GuidString;
  if ( !v33 )
  {
    if ( ndisIsNetSetupV2Interface(GuidString) || !ndisIsNetSetupV1Interface(v9) )
    {
      v10 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0099614 >= 3u )
        WPP_SF_S(0x38u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v9->Buffer);
      v22 = RtlGUIDFromString(v9, &KeyValueInformation);
      v23 = KeyHandle;
      if ( v22 >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 0;
        v24 = L"SuggestedInstanceId";
        ValueName.Buffer = 0LL;
        v25 = 0x7FFFLL;
        do
        {
          if ( !*v24 )
            break;
          ++v24;
          --v25;
        }
        while ( v25 );
        if ( v25 )
        {
          ValueName.Buffer = L"SuggestedInstanceId";
          ValueName.Length = 2 * (0x7FFF - v25);
          ValueName.MaximumLength = ValueName.Length + 2;
          ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &KeyValueInformation, 0x10u);
        }
      }
      *(_DWORD *)&ValueName.Length = 0;
      v26 = L"MigratedFromNetSetupV1";
      ValueName.Buffer = 0LL;
      v27 = 0x7FFFLL;
      do
      {
        if ( !*v26 )
          break;
        ++v26;
        --v27;
      }
      while ( v27 );
      v28 = 0LL;
      if ( v27 )
      {
        ValueName.Buffer = L"MigratedFromNetSetupV1";
        ValueName.Length = 2 * (0x7FFF - v27);
        ValueName.MaximumLength = ValueName.Length + 2;
        Data = 1;
        ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
      }
      KRegKey::DeleteValue((KRegKey *)&KeyHandle, v28);
      v10 = 1;
    }
    v33 = v10;
    if ( !v10 )
    {
      updated = ndisCheckIfDeviceNeedsFullMigration((__int64)&KeyHandle, (__int64)&GuidString, (char *)&v33);
      if ( updated < 0 )
        goto LABEL_61;
      if ( v33 )
        goto LABEL_63;
      updated = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&KeyHandle, &v33);
      if ( updated < 0 )
      {
LABEL_61:
        if ( !v9 )
        {
LABEL_44:
          v19 = KeyHandle;
          if ( !KeyHandle )
            goto LABEL_39;
          goto LABEL_38;
        }
        v21 = v9;
LABEL_43:
        ExFreePoolWithTag(v21, 0x7274534Bu);
        goto LABEL_44;
      }
      if ( !v33 )
      {
LABEL_13:
        Guid.IsPhysicalMediumAvailable = 0;
        memset(&Guid.PhysicalMedium, 0, 29);
        Guid.Characteristics = 0;
        *(_WORD *)&Guid.IsHardwareLoopbackSupported = 0;
        *(_OWORD *)&Guid.MiniBlock = 0LL;
        Guid.NetLuid.Value = 0LL;
        Guid.MiniportAdapterContext = a3;
        updated = RtlGUIDFromString(v9, &Guid.InterfaceGuid);
        if ( updated < 0 )
          goto LABEL_81;
        if ( (unsigned __int8)byte_1C0099614 >= 4u )
          WPP_SF__guid_(0x3Fu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)&Guid);
        if ( !v7 )
          goto LABEL_89;
        *(_DWORD *)&ValueName.Length = 0;
        v29 = L"HardwareLoopback";
        ValueName.Buffer = 0LL;
        v30 = 0x7FFFLL;
        do
        {
          if ( !*v29 )
            break;
          ++v29;
          --v30;
        }
        while ( v30 );
        v31 = -1073741811;
        if ( v30 )
        {
          ValueName.Buffer = L"HardwareLoopback";
          ValueName.Length = 2 * (0x7FFF - v30);
          ValueName.MaximumLength = ValueName.Length + 2;
          v31 = KRegKey::QueryValueBoolean(
                  (KRegKey *)&KeyHandle,
                  &ValueName,
                  &Guid.IsHardwareLoopbackSupported,
                  FailIfNotFound);
        }
        IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
        if ( v31 < 0 )
          IsHardwareLoopbackSupported = 0;
        Guid.IsHardwareLoopbackSupported = IsHardwareLoopbackSupported;
        updated = ndisWdfUpdateAddDeviceParameters(&KeyHandle, &Guid);
        if ( updated < 0 )
        {
LABEL_81:
          NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        }
        else
        {
LABEL_89:
          if ( (int)ndisIfReadInterfaceAddDeviceParameters(&Guid) >= 0
            || ndisReadAddDeviceParametersV1(a2, (struct KRegKey *)&KeyHandle, &Guid) )
          {
            *(_DWORD *)&ValueName.Length = 0;
            v11 = L"IMMiniport";
            ValueName.Buffer = 0LL;
            v12 = 0;
            v13 = 0x7FFFLL;
            while ( *v11 )
            {
              ++v11;
              if ( !--v13 )
                goto LABEL_27;
            }
            ValueName.Buffer = L"IMMiniport";
            ValueName.Length = 2 * (0x7FFF - v13);
            ValueName.MaximumLength = ValueName.Length + 2;
            if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data) < 0
              || (*(_DWORD *)&KeyValueInformation.Data2 != 4
                ? (v14 = -1073741788)
                : *(_DWORD *)KeyValueInformation.Data4 != 4
                ? (v14 = -1073741789)
                : (v12 = KeyValueInformation.Data4[4], v14 = 0),
                  v14 < 0) )
            {
LABEL_27:
              Guid.IsImMiniport = 0;
              goto LABEL_28;
            }
            Guid.IsImMiniport = v12 & 1;
LABEL_28:
            *(_DWORD *)&ValueName.Length = 0;
            v15 = L"ComponentID";
            ValueName.Buffer = 0LL;
            v16 = 0x7FFFLL;
            while ( *v15 )
            {
              ++v15;
              if ( !--v16 )
                goto LABEL_33;
            }
            ValueName.Buffer = L"ComponentID";
            ValueName.Length = 2 * (0x7FFF - v16);
            ValueName.MaximumLength = ValueName.Length + 2;
            KRegKey::QueryValueString(&KeyHandle, &ValueName, &Guid.ComponentId);
LABEL_33:
            ndisTemporarilyScribbleNetLuidIndex((struct KRegKey *)&KeyHandle, &Guid.NetLuid);
            if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
              McTemplateK0z(v17, &AddPnPDevice, v18, Guid.ExportName._Myptr->Buffer);
            updated = ndisAddDevice(DriverObject, a2, v40);
            NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
            if ( v9 )
              ExFreePoolWithTag(v9, 0x7274534Bu);
            v19 = KeyHandle;
            if ( !KeyHandle )
              goto LABEL_39;
LABEL_38:
            ZwClose(v19);
LABEL_39:
            if ( (unsigned __int8)byte_1C0099614 >= 4u )
              WPP_SF_qD(0x40u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a2, updated);
            return (unsigned int)updated;
          }
          updated = -1073741823;
          NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        }
        goto LABEL_61;
      }
    }
  }
LABEL_63:
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x3Eu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  updated = ndisCheckAlwaysStartFlag((struct KRegKey *)&KeyHandle, &v34);
  if ( updated < 0 )
    goto LABEL_61;
  if ( v34 )
    goto LABEL_13;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x7274534Bu);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221226645LL;
}
