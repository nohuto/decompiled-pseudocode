/*
 * XREFs of ndisInitializeConfiguration @ 0x1C00B8CE4
 * Callers:
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisReadPMRegistry @ 0x1C00B9410 (ndisReadPMRegistry.c)
 *     ndisReadOffloadRegistry @ 0x1C00B9598 (ndisReadOffloadRegistry.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     ndisReadBindPaths @ 0x1C00C8AD8 (ndisReadBindPaths.c)
 *     ndisQueryBusInterface @ 0x1C00C920C (ndisQueryBusInterface.c)
 */

__int64 __fastcall ndisInitializeConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IntegerData; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  __int16 Length; // r12
  bool v10; // zf
  unsigned int v11; // esi
  __int64 v12; // rdx
  NTSTATUS DeviceProperty; // r9d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  void *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  PNDIS_CONFIGURATION_PARAMETER v27; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD ConfigurationHandle[5]; // [rsp+48h] [rbp-B8h] BYREF
  PNDIS_CONFIGURATION_PARAMETER v34; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v35; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v37; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v38; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v39; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v40; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v41; // [rsp+D8h] [rbp-28h] BYREF
  __int64 PropertyBuffer; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-10h]
  _BYTE v44[176]; // [rsp+100h] [rbp+0h] BYREF

  memset(ConfigurationHandle, 0, sizeof(ConfigurationHandle));
  *(_DWORD *)&v37.Length = 1310738;
  v37.Buffer = L"BusNumber";
  *(_DWORD *)&v38.Length = 1441812;
  v38.Buffer = L"SlotNumber";
  IntegerData = 18;
  *(_DWORD *)&v35.Length = 1048590;
  v35.Buffer = L"BusType";
  v7 = -1;
  *(_DWORD *)&Keyword.Length = 2097182;
  Keyword.Buffer = L"PnPCapabilities";
  LOWORD(v8) = 20;
  *(_DWORD *)&v39.Length = 1966108;
  v39.Buffer = L"RemoteBootCard";
  Length = 16;
  *(_DWORD *)&v41.Length = 2883626;
  v41.Buffer = L"NdisDriverVerifyFlags";
  *(_DWORD *)&v40.Length = 2752552;
  v40.Buffer = L"SGMapRegistersNeeded";
  v29 = 1;
  v31 = -1;
  memset(v44, 0, 0xA8uLL);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xAu, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a2);
  ConfigurationHandle[3] = 0LL;
  *(_DWORD *)a1 = 8913162;
  v10 = *(_QWORD *)(a2 + 56) == 0LL;
  ConfigurationHandle[4] = a3;
  ConfigurationHandle[1] = a2;
  ConfigurationHandle[2] = a1;
  if ( v10 )
  {
    Status = ndisReadBindPaths(a2, v44, a3);
    v11 = Status;
    if ( Status )
      goto LABEL_41;
  }
  v11 = 0;
  *(_DWORD *)(a1 + 32) = 20;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 24) = &ndisSaveParameters;
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
    IntegerData = v29;
    goto LABEL_69;
  }
  v12 = v43;
  v14 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v14 = v43 - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v14 )
  {
    IntegerData = 0;
    goto LABEL_16;
  }
  v15 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v15 = v43 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v15 )
  {
    IntegerData = 8;
    goto LABEL_16;
  }
  v16 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v16 = v43 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( v16 )
  {
    v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
      v21 = v43 - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
    if ( !v21 )
    {
      IntegerData = 16;
      goto LABEL_16;
    }
    v22 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v22 = v43 - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( !v22 )
    {
      IntegerData = 17;
      goto LABEL_16;
    }
    v23 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v23 = v43 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v23 )
    {
      IntegerData = 14;
      goto LABEL_16;
    }
    v24 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
      v24 = v43 - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
    if ( !v24 )
      goto LABEL_16;
    v25 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v25 = v43 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v25 )
    {
      IntegerData = 2;
      goto LABEL_16;
    }
    IntegerData = 1;
    v29 = 1;
LABEL_69:
    if ( IntegerData == 1 )
    {
      v26 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyLegacyBusType, 4u, &v29, &ResultLength);
      IntegerData = v29;
      DeviceProperty = v26;
    }
    goto LABEL_17;
  }
  IntegerData = 5;
LABEL_16:
  v29 = IntegerData;
LABEL_17:
  if ( DeviceProperty < 0 || IntegerData == 1 || IntegerData == 8 )
  {
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v35, NdisParameterInteger);
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) &= ~1u;
    if ( Status )
    {
      IntegerData = v29;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v29 = IntegerData;
    }
  }
  if ( IntegerData == 5 || IntegerData == 8 )
  {
    Status = ndisQueryBusInterface(a2, v12);
    v11 = Status;
    if ( Status )
      goto LABEL_41;
    IntegerData = v29;
    v11 = 0;
  }
  if ( IntegerData - 2 <= 1 )
  {
    v11 = -1073741637;
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
    if ( IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyBusNumber, 4u, &v31, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v37, NdisParameterInteger), Status) )
    {
      v17 = v31;
    }
    else
    {
      v17 = ParameterValue->ParameterData.IntegerData;
      v31 = v17;
    }
    *(_DWORD *)(a2 + 3740) = v17;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v38, NdisParameterInteger);
    if ( !Status )
      v7 = ParameterValue->ParameterData.IntegerData;
    *(_DWORD *)(a2 + 3744) = v7;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v39, NdisParameterHexInteger);
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
      v8 = ParameterValue->ParameterData.IntegerData;
      if ( v8 )
      {
        if ( v8 > 0xFFFF )
          LOWORD(v8) = -1;
      }
      else
      {
        LOWORD(v8) = 1;
      }
    }
    *(_WORD *)(a2 + 3700) = v8;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &AoAcTestStr, NdisParameterHexInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData )
    {
      *(_DWORD *)(a2 + 2692) |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(ConfigurationHandle);
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v40, NdisParameterInteger);
    if ( !Status )
    {
      v27 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v27 = ParameterValue;
      }
      Length = v27->ParameterData.StringData.Length;
    }
    *(_WORD *)(a2 + 3702) = Length;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v41, NdisParameterHexInteger);
    if ( !Status )
      *(_DWORD *)(a2 + 3704) = ParameterValue->ParameterData.IntegerData;
    *(_DWORD *)(a1 + 16) = 0;
    ndisReadOffloadRegistry((struct _NDIS_MINIPORT_BLOCK *)a2);
    NdisReadConfiguration(&Status, &v34, ConfigurationHandle, &SwTimestampSettingsStr, NdisParameterInteger);
    if ( Status )
      v18 = 0;
    else
      v18 = v34->ParameterData.IntegerData;
    *(_DWORD *)(a2 + 2688) = v18;
  }
LABEL_41:
  while ( 1 )
  {
    v19 = (void *)ConfigurationHandle[3];
    if ( !ConfigurationHandle[3] )
      break;
    ConfigurationHandle[3] = *(_QWORD *)ConfigurationHandle[3];
    ExFreePoolWithTag(v19, 0);
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xBu, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a2);
  return v11;
}
