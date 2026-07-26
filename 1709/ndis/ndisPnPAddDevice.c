/*
 * XREFs of ndisPnPAddDevice @ 0x1C00AF8C0
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00AF8A0 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00E9D50 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00040CC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C001E750 (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF__guid_ @ 0x1C0040CB8 (WPP_SF__guid_.c)
 *     McTemplateK0z @ 0x1C006154C (McTemplateK0z.c)
 *     WPP_SF_S @ 0x1C0061AA8 (WPP_SF_S.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00AC470 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC5C4 (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFDF0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00AFEB0 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFF60 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00AFFF0 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00B0210 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00B0E20 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B1AD0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00E8ED0 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00E8F74 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, void *a3, __int64 a4)
{
  _DEVICE_OBJECT *v4; // rdi
  PDRIVER_OBJECT v6; // rdx
  bool v7; // si
  char v8; // r12
  unsigned int v9; // r13d
  const UNICODE_STRING *p_DriverName; // rbx
  NTSTATUS v11; // ebx
  UNICODE_STRING *v12; // rdi
  int v13; // eax
  _DEVICE_OBJECT *v14; // rsi
  const wchar_t *v15; // rax
  unsigned __int8 v16; // bl
  __int64 v17; // rcx
  int v18; // eax
  const wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  HANDLE v24; // rbx
  NTSTATUS v25; // eax
  const wchar_t *v26; // rax
  __int64 v27; // rcx
  __int16 v28; // ax
  const wchar_t *v29; // rax
  __int64 v30; // rcx
  __int16 v31; // ax
  const wchar_t *v32; // rax
  __int64 v33; // rcx
  __int16 v34; // ax
  const wchar_t *v35; // rax
  __int64 v36; // rcx
  __int16 v37; // ax
  const wchar_t *v38; // rax
  __int64 v39; // rcx
  __int16 v40; // ax
  const wchar_t *v41; // rax
  __int64 v42; // rcx
  int v43; // edx
  __int16 v44; // ax
  unsigned __int8 IsHardwareLoopbackSupported; // cl
  bool v46; // [rsp+40h] [rbp-C0h] BYREF
  bool v47; // [rsp+41h] [rbp-BFh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING v54; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v55; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v56; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v60; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v61; // [rsp+E8h] [rbp-18h] BYREF
  NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+100h] [rbp+0h] BYREF
  GUID KeyValueInformation; // [rsp+150h] [rbp+50h] BYREF
  __int128 v64; // [rsp+168h] [rbp+68h] BYREF
  __int64 v65; // [rsp+178h] [rbp+78h]
  int v66; // [rsp+180h] [rbp+80h]
  wchar_t v67; // [rsp+184h] [rbp+84h]
  _OWORD v68[2]; // [rsp+188h] [rbp+88h] BYREF
  wchar_t v69; // [rsp+1A8h] [rbp+A8h]
  _OWORD v70[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v71; // [rsp+1D0h] [rbp+D0h]

  DeviceObject = a2;
  v58 = a4;
  v4 = a2;
  DriverObject = a1;
  DeviceRegKey = 0LL;
  v6 = a1;
  v7 = a3 != 0LL;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    WPP_SF_qq(0x3Au, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, a1, v4);
    v6 = DriverObject;
  }
  v8 = 0;
  v71 = *(_DWORD *)L"p";
  String2.Buffer = (wchar_t *)v70;
  v9 = 0;
  v66 = *(_DWORD *)L"va";
  v67 = aDriverJnprva[14];
  v60.Buffer = (wchar_t *)&v64;
  v69 = aDriverAsyncmac[16];
  v61.Buffer = (wchar_t *)v68;
  *(_DWORD *)&String2.Length = 2359330;
  *(_DWORD *)&v60.Length = 1966108;
  *(_DWORD *)&v61.Length = 2228256;
  v70[0] = *(_OWORD *)L"\\Driver\\threadvmp";
  v70[1] = *(_OWORD *)L"threadvmp";
  v65 = *(_QWORD *)L"jnprva";
  v64 = *(_OWORD *)L"\\Driver\\jnprva";
  v68[1] = *(_OWORD *)L"AsyncMac";
  v68[0] = *(_OWORD *)L"\\Driver\\AsyncMac";
  if ( v7
    || (p_DriverName = &v6->DriverName, RtlEqualUnicodeString(&v6->DriverName, &String2, 0))
    || RtlEqualUnicodeString(p_DriverName, &v60, 0)
    || RtlEqualUnicodeString(p_DriverName, &v61, 0) )
  {
    v8 = 1;
  }
  v11 = IoOpenDeviceRegistryKey(v4, 2u, 0xC2000000, &DeviceRegKey);
  if ( v11 < 0 )
    goto LABEL_44;
  v47 = 0;
  while ( 1 )
  {
    KeyHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      DeviceRegKey);
    v46 = 0;
    GuidString = 0LL;
    v11 = ndisCheckIfDeviceNeedsInstallation(&KeyHandle, &GuidString, &v46);
    if ( v11 < 0 )
      break;
    v12 = (UNICODE_STRING *)GuidString;
    if ( v46 )
      goto LABEL_47;
    if ( ndisIsNetSetupV2Interface(GuidString) || !ndisIsNetSetupV1Interface(v12) )
    {
      v46 = 0;
      v11 = ndisCheckIfDeviceNeedsFullMigration(&KeyHandle, &GuidString, &v46);
      if ( v11 < 0 )
        goto LABEL_116;
      if ( !v46 )
      {
        v11 = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&KeyHandle, &v46);
        if ( v11 < 0 )
        {
          if ( v12 )
            goto LABEL_40;
          goto LABEL_41;
        }
        if ( !v46 )
          goto LABEL_16;
      }
LABEL_47:
      v24 = KeyHandle;
      goto LABEL_48;
    }
    if ( (unsigned __int8)byte_1C0098754 >= 3u )
      WPP_SF_S(0x38u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v12->Buffer);
    v25 = RtlGUIDFromString(v12, &KeyValueInformation);
    v24 = KeyHandle;
    if ( v25 >= 0 )
    {
      *(_DWORD *)&v54.Length = 0;
      v26 = L"SuggestedInstanceId";
      v54.Buffer = 0LL;
      v27 = 0x7FFFLL;
      do
      {
        if ( !*v26 )
          break;
        ++v26;
        --v27;
      }
      while ( v27 );
      v28 = v27 ? 0x7FFF - v27 : 0;
      if ( v27 )
      {
        v54.Buffer = L"SuggestedInstanceId";
        v54.Length = 2 * v28;
        v54.MaximumLength = 2 * v28 + 2;
        ZwSetValueKey(KeyHandle, &v54, 0, 3u, &KeyValueInformation, 0x10u);
      }
    }
    *(_DWORD *)&v55.Length = 0;
    v29 = L"MigratedFromNetSetupV1";
    v55.Buffer = 0LL;
    v30 = 0x7FFFLL;
    do
    {
      if ( !*v29 )
        break;
      ++v29;
      --v30;
    }
    while ( v30 );
    if ( v30 )
      v31 = 0x7FFF - v30;
    else
      v31 = 0;
    if ( v30 )
    {
      v55.Buffer = L"MigratedFromNetSetupV1";
      v55.Length = 2 * v31;
      v55.MaximumLength = 2 * v31 + 2;
      LODWORD(GuidString) = 1;
      ZwSetValueKey(v24, &v55, 0, 4u, &GuidString, 4u);
    }
    *(_DWORD *)&v56.Length = 0;
    v32 = L"NetCfgInstanceId";
    v56.Buffer = 0LL;
    v33 = 0x7FFFLL;
    do
    {
      if ( !*v32 )
        break;
      ++v32;
      --v33;
    }
    while ( v33 );
    if ( v33 )
      v34 = 0x7FFF - v33;
    else
      v34 = 0;
    if ( v33 )
    {
      v56.Buffer = L"NetCfgInstanceId";
      v56.Length = 2 * v34;
      v56.MaximumLength = 2 * v34 + 2;
      ZwDeleteValueKey(v24, &v56);
    }
LABEL_48:
    if ( v8 && v9 < 0xA )
    {
      *(_DWORD *)&v57.Length = 0;
      v35 = L"NdisWaitingUsermodeToCompleteAddDevice";
      v57.Buffer = 0LL;
      v36 = 0x7FFFLL;
      do
      {
        if ( !*v35 )
          break;
        ++v35;
        --v36;
      }
      while ( v36 );
      v37 = v36 ? 0x7FFF - v36 : 0;
      if ( v36 )
      {
        v57.Buffer = L"NdisWaitingUsermodeToCompleteAddDevice";
        v57.Length = 2 * v37;
        v57.MaximumLength = 2 * v37 + 2;
        LODWORD(GuidString) = 0;
        ZwSetValueKey(v24, &v57, 0, 4u, &GuidString, 4u);
      }
    }
    ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_(0x3Bu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
    if ( !v8 || v9 >= 0xA )
    {
      v11 = ndisCheckAlwaysStartFlag((struct KRegKey *)&KeyHandle, &v47);
      if ( v11 < 0 )
      {
LABEL_116:
        if ( v12 )
          goto LABEL_40;
      }
      else
      {
        if ( !v47 )
        {
          if ( v7 )
            v11 = -1073740651;
          else
            v11 = ndisSetupDeviceAdd(DriverObject, DeviceObject);
          if ( v12 )
            ExFreePoolWithTag(v12, 0x7274534Bu);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          return (unsigned int)v11;
        }
LABEL_16:
        Guid.IsPhysicalMediumAvailable = 0;
        memset(&Guid.PhysicalMedium, 0, 29);
        Guid.Characteristics = 0;
        Guid.IsHardwareLoopbackSupported = 0;
        Guid.NetLuid.Value = 0LL;
        Guid.MiniportAdapterContext = a3;
        v11 = RtlGUIDFromString(v12, &Guid.InterfaceGuid);
        if ( v11 >= 0 )
        {
          if ( (unsigned __int8)byte_1C0098754 >= 4u )
            WPP_SF__guid_(0x3Cu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)&Guid);
          if ( v7 )
          {
            *(_DWORD *)&ValueName.Length = 0;
            v41 = L"HardwareLoopback";
            ValueName.Buffer = 0LL;
            v42 = 0x7FFFLL;
            do
            {
              if ( !*v41 )
                break;
              ++v41;
              --v42;
            }
            while ( v42 );
            v43 = -1073741811;
            if ( v42 )
            {
              v43 = 0;
              v44 = 0x7FFF - v42;
            }
            else
            {
              v44 = 0;
            }
            if ( v42 )
            {
              ValueName.Buffer = L"HardwareLoopback";
              ValueName.Length = 2 * v44;
              ValueName.MaximumLength = 2 * v44 + 2;
              v43 = KRegKey::QueryValueBoolean(
                      (KRegKey *)&KeyHandle,
                      &ValueName,
                      &Guid.IsHardwareLoopbackSupported,
                      FailIfNotFound);
            }
            IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
            if ( v43 < 0 )
              IsHardwareLoopbackSupported = 0;
            Guid.IsHardwareLoopbackSupported = IsHardwareLoopbackSupported;
          }
          v13 = ndisIfReadInterfaceAddDeviceParameters(&Guid);
          v14 = DeviceObject;
          if ( v13 < 0 && !ndisReadAddDeviceParametersV1(DeviceObject, (struct KRegKey *)&KeyHandle, &Guid) )
          {
            v11 = -1073741823;
            NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
            if ( v12 )
              ExFreePoolWithTag(v12, 0x7274534Bu);
            if ( KeyHandle )
              ZwClose(KeyHandle);
            v4 = v14;
            goto LABEL_44;
          }
          *(_DWORD *)&ValueName.Length = 0;
          v15 = L"IMMiniport";
          ValueName.Buffer = 0LL;
          v16 = 0;
          v17 = 0x7FFFLL;
          while ( *v15 )
          {
            ++v15;
            if ( !--v17 )
              goto LABEL_30;
          }
          ValueName.Buffer = L"IMMiniport";
          ValueName.Length = 2 * (0x7FFF - v17);
          ValueName.MaximumLength = ValueName.Length + 2;
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x14u,
                 (PULONG)&GuidString) < 0
            || (*(_DWORD *)&KeyValueInformation.Data2 != 4
              ? (v18 = -1073741788)
              : *(_DWORD *)KeyValueInformation.Data4 != 4
              ? (v18 = -1073741789)
              : (v16 = KeyValueInformation.Data4[4], v18 = 0),
                v18 < 0) )
          {
LABEL_30:
            Guid.IsImMiniport = 0;
            goto LABEL_31;
          }
          Guid.IsImMiniport = v16 & 1;
LABEL_31:
          *(_DWORD *)&ValueName.Length = 0;
          v19 = L"ComponentID";
          ValueName.Buffer = 0LL;
          v20 = 0x7FFFLL;
          while ( *v19 )
          {
            ++v19;
            if ( !--v20 )
              goto LABEL_36;
          }
          ValueName.Buffer = L"ComponentID";
          ValueName.Length = 2 * (0x7FFF - v20);
          ValueName.MaximumLength = ValueName.Length + 2;
          KRegKey::QueryValueString(&KeyHandle, &ValueName, &Guid.ComponentId);
LABEL_36:
          ndisTemporarilyScribbleNetLuidIndex((struct KRegKey *)&KeyHandle, &Guid.NetLuid);
          if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
            McTemplateK0z(v21, &AddPnPDevice, v22, Guid.ExportName._Myptr->Buffer);
          v11 = ndisAddDevice(DriverObject, v14, v58);
        }
        NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        if ( v12 )
LABEL_40:
          ExFreePoolWithTag(v12, 0x7274534Bu);
      }
LABEL_41:
      if ( KeyHandle )
        ZwClose(KeyHandle);
      v4 = DeviceObject;
      goto LABEL_44;
    }
    ++v9;
    NdisMSleep(0xF4240u);
    *(_DWORD *)&ValueName.Length = 0;
    v38 = L"NdisWaitingUsermodeToCompleteAddDevice";
    ValueName.Buffer = 0LL;
    v39 = 0x7FFFLL;
    do
    {
      if ( !*v38 )
        break;
      ++v38;
      --v39;
    }
    while ( v39 );
    if ( v39 )
      v40 = 0x7FFF - v39;
    else
      v40 = 0;
    if ( v39 )
    {
      ValueName.Buffer = L"NdisWaitingUsermodeToCompleteAddDevice";
      ValueName.Length = 2 * v40;
      ValueName.MaximumLength = 2 * v40 + 2;
      ZwDeleteValueKey(v24, &ValueName);
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x7274534Bu);
    if ( v24 )
      ZwClose(v24);
    v4 = DeviceObject;
    v11 = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( v11 < 0 )
      goto LABEL_44;
  }
  if ( GuidString )
    ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_44:
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x3Du, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)v4, v11);
  return (unsigned int)v11;
}
