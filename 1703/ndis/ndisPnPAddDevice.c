/*
 * XREFs of ndisPnPAddDevice @ 0x1C00A9500
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00A91F0 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00DFEB0 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C0014430 (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D3E4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF__guid_ @ 0x1C0044180 (WPP_SF__guid_.c)
 *     Template_z @ 0x1C0061694 (Template_z.c)
 *     WPP_SF_S @ 0x1C0061728 (WPP_SF_S.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00A9210 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00A929C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00A9340 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00A9400 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00AD510 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AED00 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B0F6C (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00DEF30 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00DF04C (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00DF0F0 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00F057C (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, void *a3, __int64 a4)
{
  _DEVICE_OBJECT *v5; // r15
  bool v7; // r14
  const UNICODE_STRING *p_DriverName; // rbx
  unsigned int v9; // r13d
  char v10; // r12
  int v11; // ebx
  int v12; // r15d
  UNICODE_STRING *v13; // rdi
  int v14; // eax
  const wchar_t *v15; // rax
  unsigned __int8 v16; // bl
  __int64 v17; // rcx
  int v18; // eax
  const wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v24; // eax
  HANDLE v25; // rbx
  const wchar_t *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int16 v29; // cx
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  __int16 v33; // cx
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  __int16 v37; // cx
  const wchar_t *v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  __int16 v41; // cx
  __int64 v42; // rax
  const wchar_t *v43; // rcx
  int v44; // edx
  __int16 v45; // cx
  HANDLE v46; // rcx
  const wchar_t *v47; // rcx
  __int64 v48; // rax
  __int16 v49; // cx
  unsigned __int8 IsHardwareLoopbackSupported; // cl
  bool v51; // [rsp+40h] [rbp-C0h] BYREF
  bool v52; // [rsp+41h] [rbp-BFh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING v58; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v59; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING v60; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING v61; // [rsp+A8h] [rbp-58h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v65; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v66; // [rsp+E8h] [rbp-18h] BYREF
  NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+100h] [rbp+0h] BYREF
  GUID KeyValueInformation; // [rsp+150h] [rbp+50h] BYREF
  __int128 v69; // [rsp+168h] [rbp+68h] BYREF
  __int64 v70; // [rsp+178h] [rbp+78h]
  int v71; // [rsp+180h] [rbp+80h]
  wchar_t v72; // [rsp+184h] [rbp+84h]
  _OWORD v73[2]; // [rsp+188h] [rbp+88h] BYREF
  wchar_t v74; // [rsp+1A8h] [rbp+A8h]
  _OWORD v75[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v76; // [rsp+1D0h] [rbp+D0h]

  v63 = a4;
  DeviceObject = a2;
  DriverObject = a1;
  v5 = a2;
  DeviceRegKey = 0LL;
  v7 = a3 != 0LL;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, a1, a2);
  v76 = *(_DWORD *)L"p";
  String2.Buffer = (wchar_t *)v75;
  p_DriverName = &a1->DriverName;
  v71 = *(_DWORD *)L"va";
  v9 = 0;
  v72 = aDriverJnprva[14];
  v10 = 0;
  v75[0] = *(_OWORD *)L"\\Driver\\threadvmp";
  *(_DWORD *)&String2.Length = 2359330;
  v65.Buffer = (wchar_t *)&v69;
  v75[1] = *(_OWORD *)L"threadvmp";
  v74 = aDriverAsyncmac[16];
  v69 = *(_OWORD *)L"\\Driver\\jnprva";
  v66.Buffer = (wchar_t *)v73;
  *(_DWORD *)&v65.Length = 1966108;
  v70 = *(_QWORD *)L"jnprva";
  *(_DWORD *)&v66.Length = 2228256;
  v73[0] = *(_OWORD *)L"\\Driver\\AsyncMac";
  v73[1] = *(_OWORD *)L"AsyncMac";
  if ( RtlEqualUnicodeString(p_DriverName, &String2, 0)
    || RtlEqualUnicodeString(p_DriverName, &v65, 0)
    || RtlEqualUnicodeString(p_DriverName, &v66, 0) )
  {
    v10 = 1;
  }
  v11 = IoOpenDeviceRegistryKey(v5, 2u, 0xC2000000, &DeviceRegKey);
  if ( v11 < 0 )
    goto LABEL_41;
  v52 = 0;
  v12 = -1073741811;
  while ( 1 )
  {
    KeyHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      DeviceRegKey);
    v51 = 0;
    GuidString = 0LL;
    v11 = ndisCheckIfDeviceNeedsInstallation((__int64)&KeyHandle, (__int64)&GuidString, &v51);
    if ( v11 < 0 )
    {
      if ( GuidString )
        ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
      v46 = KeyHandle;
      if ( !KeyHandle )
        goto LABEL_152;
LABEL_151:
      ZwClose(v46);
LABEL_152:
      v5 = DeviceObject;
      goto LABEL_41;
    }
    v13 = (UNICODE_STRING *)GuidString;
    if ( v51 )
      goto LABEL_79;
    if ( ndisIsNetSetupV2Interface(GuidString) || !ndisIsNetSetupV1Interface(v13) )
    {
      v51 = 0;
      v11 = ndisCheckIfDeviceNeedsFullMigration((__int64)&KeyHandle, (__int64)&GuidString, &v51);
      if ( v11 < 0 )
        goto LABEL_120;
      if ( !v51 )
      {
        v11 = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&KeyHandle, &v51);
        if ( v11 < 0 )
        {
          if ( !v13 )
            goto LABEL_114;
          goto LABEL_113;
        }
        if ( !v51 )
          goto LABEL_15;
      }
LABEL_79:
      v25 = KeyHandle;
      goto LABEL_80;
    }
    if ( (unsigned __int8)byte_1C0092614 >= 3u )
      WPP_SF_S(0x38u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, v13->Buffer);
    v24 = RtlGUIDFromString(v13, &KeyValueInformation);
    v25 = KeyHandle;
    if ( v24 >= 0 )
    {
      *(_DWORD *)&v58.Length = 0;
      v26 = L"SuggestedInstanceId";
      v58.Buffer = 0LL;
      v27 = 0x7FFFLL;
      do
      {
        if ( !*v26 )
          break;
        ++v26;
        --v27;
      }
      while ( v27 );
      v28 = -1073741811;
      if ( v27 )
      {
        v28 = 0;
        v29 = 0x7FFF - v27;
      }
      else
      {
        v29 = 0;
      }
      if ( v27 )
      {
        v58.Buffer = L"SuggestedInstanceId";
        v58.Length = 2 * v29;
        v58.MaximumLength = 2 * v29 + 2;
      }
      if ( v28 >= 0 )
        ZwSetValueKey(KeyHandle, &v58, 0, 3u, &KeyValueInformation, 0x10u);
    }
    *(_DWORD *)&v59.Length = 0;
    v30 = L"MigratedFromNetSetupV1";
    v59.Buffer = 0LL;
    v31 = 0x7FFFLL;
    do
    {
      if ( !*v30 )
        break;
      ++v30;
      --v31;
    }
    while ( v31 );
    v32 = -1073741811;
    if ( v31 )
    {
      v32 = 0;
      v33 = 0x7FFF - v31;
    }
    else
    {
      v33 = 0;
    }
    if ( v31 )
    {
      v59.Buffer = L"MigratedFromNetSetupV1";
      v59.Length = 2 * v33;
      v59.MaximumLength = 2 * v33 + 2;
    }
    if ( v32 >= 0 )
    {
      LODWORD(GuidString) = 1;
      ZwSetValueKey(v25, &v59, 0, 4u, &GuidString, 4u);
    }
    *(_DWORD *)&v60.Length = 0;
    v34 = L"NetCfgInstanceId";
    v60.Buffer = 0LL;
    v35 = 0x7FFFLL;
    do
    {
      if ( !*v34 )
        break;
      ++v34;
      --v35;
    }
    while ( v35 );
    v36 = -1073741811;
    if ( v35 )
    {
      v36 = 0;
      v37 = 0x7FFF - v35;
    }
    else
    {
      v37 = 0;
    }
    if ( v35 )
    {
      v60.Buffer = L"NetCfgInstanceId";
      v60.Length = 2 * v37;
      v60.MaximumLength = 2 * v37 + 2;
    }
    if ( v36 >= 0 )
      ZwDeleteValueKey(v25, &v60);
LABEL_80:
    if ( v10 && v9 < 0xA )
    {
      *(_DWORD *)&v61.Length = 0;
      v38 = L"NdisWaitingUsermodeToCompleteAddDevice";
      v61.Buffer = 0LL;
      v39 = 0x7FFFLL;
      do
      {
        if ( !*v38 )
          break;
        ++v38;
        --v39;
      }
      while ( v39 );
      v40 = -1073741811;
      if ( v39 )
      {
        v40 = 0;
        v41 = 0x7FFF - v39;
      }
      else
      {
        v41 = 0;
      }
      if ( v39 )
      {
        v61.Buffer = L"NdisWaitingUsermodeToCompleteAddDevice";
        v61.Length = 2 * v41;
        v61.MaximumLength = 2 * v41 + 2;
      }
      if ( v40 >= 0 )
      {
        LODWORD(GuidString) = 0;
        ZwSetValueKey(v25, &v61, 0, 4u, &GuidString, 4u);
      }
    }
    ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
      WPP_SF_(0x3Bu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids);
    if ( !v10 || v9 >= 0xA )
      break;
    ++v9;
    NdisMSleep(0xF4240u);
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v42 = 0x7FFFLL;
    v43 = L"NdisWaitingUsermodeToCompleteAddDevice";
    do
    {
      if ( !*v43 )
        break;
      ++v43;
      --v42;
    }
    while ( v42 );
    v44 = -1073741811;
    if ( v42 )
    {
      v44 = 0;
      v45 = 0x7FFF - v42;
    }
    else
    {
      v45 = 0;
    }
    if ( v42 )
    {
      ValueName.Buffer = L"NdisWaitingUsermodeToCompleteAddDevice";
      ValueName.Length = 2 * v45;
      ValueName.MaximumLength = 2 * v45 + 2;
    }
    if ( v44 >= 0 )
      ZwDeleteValueKey(v25, &ValueName);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x7274534Bu);
    if ( v25 )
      ZwClose(v25);
    v11 = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( v11 < 0 )
      goto LABEL_152;
  }
  v11 = ndisCheckAlwaysStartFlag((struct KRegKey *)&KeyHandle, &v52);
  if ( v11 < 0 )
  {
LABEL_120:
    if ( v13 )
LABEL_113:
      ExFreePoolWithTag(v13, 0x7274534Bu);
LABEL_114:
    v46 = KeyHandle;
    if ( !KeyHandle )
      goto LABEL_152;
    goto LABEL_151;
  }
  if ( v52 )
  {
LABEL_15:
    Guid.IsPhysicalMediumAvailable = 0;
    memset(&Guid.PhysicalMedium, 0, 29);
    Guid.Characteristics = 0;
    Guid.IsHardwareLoopbackSupported = 0;
    Guid.NetLuid.Value = 0LL;
    Guid.MiniportAdapterContext = a3;
    v11 = RtlGUIDFromString(v13, &Guid.InterfaceGuid);
    if ( v11 >= 0 )
    {
      if ( (unsigned __int8)byte_1C0092614 >= 4u )
        WPP_SF__guid_(0x3Cu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)&Guid);
      if ( v7 )
      {
        *(_DWORD *)&ValueName.Length = 0;
        v47 = L"HardwareLoopback";
        ValueName.Buffer = 0LL;
        v48 = 0x7FFFLL;
        do
        {
          if ( !*v47 )
            break;
          ++v47;
          --v48;
        }
        while ( v48 );
        if ( v48 )
        {
          v12 = 0;
          v49 = 0x7FFF - v48;
        }
        else
        {
          v49 = 0;
        }
        if ( v48 )
        {
          ValueName.Buffer = L"HardwareLoopback";
          ValueName.Length = 2 * v49;
          ValueName.MaximumLength = 2 * v49 + 2;
        }
        if ( v12 >= 0 )
          v12 = KRegKey::QueryValueBoolean(
                  (KRegKey *)&KeyHandle,
                  &ValueName,
                  &Guid.IsHardwareLoopbackSupported,
                  FailIfNotFound);
        IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
        if ( v12 < 0 )
          IsHardwareLoopbackSupported = 0;
        Guid.IsHardwareLoopbackSupported = IsHardwareLoopbackSupported;
      }
      v14 = ndisIfReadInterfaceAddDeviceParameters(&Guid);
      v5 = DeviceObject;
      if ( v14 >= 0 || ndisReadAddDeviceParametersV1(DeviceObject, (struct KRegKey *)&KeyHandle, &Guid) )
      {
        *(_DWORD *)&ValueName.Length = 0;
        v15 = L"IMMiniport";
        ValueName.Buffer = 0LL;
        v16 = 0;
        v17 = 0x7FFFLL;
        while ( *v15 )
        {
          ++v15;
          if ( !--v17 )
            goto LABEL_29;
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
LABEL_29:
          Guid.IsImMiniport = 0;
          goto LABEL_30;
        }
        Guid.IsImMiniport = v16 & 1;
LABEL_30:
        *(_DWORD *)&ValueName.Length = 0;
        v19 = L"ComponentID";
        ValueName.Buffer = 0LL;
        v20 = 0x7FFFLL;
        while ( *v19 )
        {
          ++v19;
          if ( !--v20 )
            goto LABEL_35;
        }
        ValueName.Buffer = L"ComponentID";
        ValueName.Length = 2 * (0x7FFF - v20);
        ValueName.MaximumLength = ValueName.Length + 2;
        KRegKey::QueryValueString(&KeyHandle, &ValueName, &Guid.ComponentId);
LABEL_35:
        ndisTemporarilyScribbleNetLuidIndex((struct KRegKey *)&KeyHandle, &Guid.NetLuid);
        if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
          Template_z(v21, &AddPnPDevice, v22, Guid.ExportName._Myptr->Buffer);
        v11 = ndisAddDevice(DriverObject, v5, v63);
        NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        if ( !v13 )
          goto LABEL_39;
      }
      else
      {
        v11 = -1073741823;
        NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        if ( !v13 )
        {
LABEL_39:
          if ( KeyHandle )
            ZwClose(KeyHandle);
LABEL_41:
          if ( (unsigned __int8)byte_1C0092614 >= 4u )
            WPP_SF_qD(0x3Du, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)v5, v11);
          return (unsigned int)v11;
        }
      }
      ExFreePoolWithTag(v13, 0x7274534Bu);
      goto LABEL_39;
    }
    NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
    if ( v13 )
      goto LABEL_113;
    goto LABEL_114;
  }
  if ( v7 )
    v11 = -1073740651;
  else
    v11 = ndisSetupDeviceAdd(DriverObject, DeviceObject);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x7274534Bu);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
