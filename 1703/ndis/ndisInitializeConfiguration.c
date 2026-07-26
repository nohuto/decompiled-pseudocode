/*
 * XREFs of ndisInitializeConfiguration @ 0x1C00ADB74
 * Callers:
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisReadBindPaths @ 0x1C00ABC40 (ndisReadBindPaths.c)
 *     ndisQueryBusInterface @ 0x1C00ABEE8 (ndisQueryBusInterface.c)
 *     ndisReadPMRegistry @ 0x1C00AE270 (ndisReadPMRegistry.c)
 *     ndisReadOffloadRegistry @ 0x1C00AE3F8 (ndisReadOffloadRegistry.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisInitializeConfiguration(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned int IntegerData; // edi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  NTSTATUS DeviceProperty; // r9d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  void *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  PNDIS_CONFIGURATION_PARAMETER v22; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD ConfigurationHandle[5]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v29; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Keyword; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v31; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v32; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v33; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v34; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 PropertyBuffer; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-18h]
  _RTL_QUERY_REGISTRY_TABLE v38[3]; // [rsp+F0h] [rbp-10h] BYREF

  memset(ConfigurationHandle, 0, sizeof(ConfigurationHandle));
  v26 = -1;
  v31.Buffer = L"BusNumber";
  *(_DWORD *)&v31.Length = 1310738;
  v32.Buffer = L"SlotNumber";
  IntegerData = 18;
  *(_DWORD *)&v32.Length = 1441812;
  v29.Buffer = L"BusType";
  *(_DWORD *)&v29.Length = 1048590;
  Keyword.Buffer = L"PnPCapabilities";
  *(_DWORD *)&Keyword.Length = 2097182;
  v33.Buffer = L"RemoteBootCard";
  LOWORD(v7) = 20;
  *(_DWORD *)&v33.Length = 1966108;
  v35.Buffer = L"NdisDriverVerifyFlags";
  *(_DWORD *)&v35.Length = 2883626;
  v34.Buffer = L"SGMapRegistersNeeded";
  *(_DWORD *)&v34.Length = 2752552;
  v24 = 1;
  memset(v38, 0, sizeof(v38));
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xAu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a2);
  *(_DWORD *)a1 = 8913162;
  ConfigurationHandle[4] = a3;
  ConfigurationHandle[1] = a2;
  ConfigurationHandle[2] = a1;
  ConfigurationHandle[3] = 0LL;
  if ( !*(_QWORD *)(a2 + 56) )
  {
    Status = ndisReadBindPaths(a2, v38, a3);
    v8 = Status;
    if ( Status )
      goto LABEL_40;
  }
  *(_DWORD *)(a1 + 32) = 20;
  *(_QWORD *)(a1 + 24) = &ndisSaveParameters;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  DeviceProperty = IoGetDeviceProperty(
                     *(PDEVICE_OBJECT *)(a2 + 3856),
                     DevicePropertyBusTypeGuid,
                     0x10u,
                     &PropertyBuffer,
                     &ResultLength);
  if ( DeviceProperty < 0 )
  {
    IntegerData = v24;
    goto LABEL_67;
  }
  v10 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v10 = v37 - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v10 )
  {
    IntegerData = 0;
    v24 = 0;
    goto LABEL_17;
  }
  v11 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v11 = v37 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v11 )
  {
    IntegerData = 8;
    goto LABEL_16;
  }
  v12 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v12 = v37 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v12 )
  {
    IntegerData = 5;
LABEL_16:
    v24 = IntegerData;
    goto LABEL_17;
  }
  v16 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
    v16 = v37 - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
  if ( v16 )
  {
    v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v17 = v37 - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( !v17 )
    {
      IntegerData = 17;
      goto LABEL_16;
    }
    v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v18 = v37 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v18 )
    {
      IntegerData = 14;
      goto LABEL_16;
    }
    v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
      v19 = v37 - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
    if ( !v19 )
      goto LABEL_16;
    v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v20 = v37 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v20 )
    {
      IntegerData = 2;
      goto LABEL_16;
    }
    IntegerData = 1;
    v24 = 1;
LABEL_67:
    if ( IntegerData == 1 )
    {
      v21 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyLegacyBusType, 4u, &v24, &ResultLength);
      IntegerData = v24;
      DeviceProperty = v21;
    }
    goto LABEL_17;
  }
  IntegerData = 16;
  v24 = 16;
LABEL_17:
  if ( DeviceProperty < 0 || IntegerData == 1 || IntegerData == 8 )
  {
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v29, NdisParameterInteger);
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) &= ~1u;
    if ( Status )
    {
      IntegerData = v24;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v24 = IntegerData;
    }
  }
  if ( IntegerData == 5 || IntegerData == 8 )
  {
    Status = ndisQueryBusInterface(a2);
    v8 = Status;
    if ( Status )
      goto LABEL_40;
    IntegerData = v24;
  }
  if ( IntegerData - 2 <= 1 )
  {
    v8 = -1073741637;
  }
  else
  {
    *(_DWORD *)(a2 + 3736) = IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
      if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 )
      {
        *(_DWORD *)(a2 + 3888) = ndisDefaultPnPCapabilities;
        *(_DWORD *)(a2 + 3888) |= 0x10000000u;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 3888) = ParameterValue->ParameterData.IntegerData;
    }
    if ( IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyBusNumber, 4u, &v26, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v31, NdisParameterInteger), Status) )
    {
      v13 = v26;
    }
    else
    {
      v13 = ParameterValue->ParameterData.IntegerData;
      v26 = v13;
    }
    *(_DWORD *)(a2 + 3740) = v13;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v32, NdisParameterInteger);
    if ( Status )
      *(_DWORD *)(a2 + 3744) = -1;
    else
      *(_DWORD *)(a2 + 3744) = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v33, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a2 + 120) |= 0x40000000u;
      *(_DWORD *)(a2 + 1872) |= 0x4000u;
    }
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &MediaDisconnectTimeOutStr,
      NdisParameterHexInteger);
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      if ( v7 )
      {
        if ( v7 > 0xFFFF )
          LOWORD(v7) = -1;
      }
      else
      {
        LOWORD(v7) = 1;
      }
    }
    *(_WORD *)(a2 + 3700) = v7;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a2 + 2688) |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(ConfigurationHandle);
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v34, NdisParameterInteger);
    if ( Status )
    {
      *(_WORD *)(a2 + 3702) = 16;
    }
    else
    {
      v22 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v22 = ParameterValue;
      }
      *(_WORD *)(a2 + 3702) = v22->ParameterData.StringData.Length;
    }
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v35, NdisParameterHexInteger);
    if ( !Status )
      *(_DWORD *)(a2 + 3704) = ParameterValue->ParameterData.IntegerData;
    *(_DWORD *)(a1 + 16) = 0;
    ndisReadOffloadRegistry((struct _NDIS_MINIPORT_BLOCK *)a2);
    v8 = 0;
  }
LABEL_40:
  while ( 1 )
  {
    v14 = (void *)ConfigurationHandle[3];
    if ( !ConfigurationHandle[3] )
      break;
    ConfigurationHandle[3] = *(_QWORD *)ConfigurationHandle[3];
    ExFreePoolWithTag(v14, 0);
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xBu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a2);
  return v8;
}
