/*
 * XREFs of ndisInitializeConfiguration @ 0x1C00B2388
 * Callers:
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisReadPMRegistry @ 0x1C00B2AB4 (ndisReadPMRegistry.c)
 *     ndisReadOffloadRegistry @ 0x1C00B2C3C (ndisReadOffloadRegistry.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     ndisReadBindPaths @ 0x1C00C4BB8 (ndisReadBindPaths.c)
 *     ndisQueryBusInterface @ 0x1C00C4F7C (ndisQueryBusInterface.c)
 */

__int64 __fastcall ndisInitializeConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IntegerData; // edi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // rdx
  NTSTATUS DeviceProperty; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  void *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  PNDIS_CONFIGURATION_PARAMETER v23; // rax
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD ConfigurationHandle[5]; // [rsp+48h] [rbp-B8h] BYREF
  PNDIS_CONFIGURATION_PARAMETER v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v31; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v33; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v34; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v35; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v36; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v37; // [rsp+D8h] [rbp-28h] BYREF
  __int64 PropertyBuffer; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-10h]
  _BYTE v40[176]; // [rsp+100h] [rbp+0h] BYREF

  memset(ConfigurationHandle, 0, sizeof(ConfigurationHandle));
  v27 = -1;
  v33.Buffer = L"BusNumber";
  *(_DWORD *)&v33.Length = 1310738;
  v34.Buffer = L"SlotNumber";
  IntegerData = 18;
  *(_DWORD *)&v34.Length = 1441812;
  v31.Buffer = L"BusType";
  *(_DWORD *)&v31.Length = 1048590;
  Keyword.Buffer = L"PnPCapabilities";
  *(_DWORD *)&Keyword.Length = 2097182;
  v35.Buffer = L"RemoteBootCard";
  LOWORD(v7) = 20;
  *(_DWORD *)&v35.Length = 1966108;
  v37.Buffer = L"NdisDriverVerifyFlags";
  *(_DWORD *)&v37.Length = 2883626;
  v36.Buffer = L"SGMapRegistersNeeded";
  *(_DWORD *)&v36.Length = 2752552;
  v25 = 1;
  memset(v40, 0, 0xA8uLL);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xAu, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a2);
  *(_DWORD *)a1 = 8913162;
  ConfigurationHandle[4] = a3;
  ConfigurationHandle[1] = a2;
  ConfigurationHandle[2] = a1;
  ConfigurationHandle[3] = 0LL;
  if ( !*(_QWORD *)(a2 + 56) )
  {
    Status = ndisReadBindPaths(a2, v40, a3);
    v8 = Status;
    if ( Status )
      goto LABEL_42;
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
    IntegerData = v25;
    goto LABEL_69;
  }
  v9 = v39;
  v11 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_INTERNAL.Data1 )
    v11 = v39 - *(_QWORD *)GUID_BUS_TYPE_INTERNAL.Data4;
  if ( !v11 )
  {
    IntegerData = 0;
    v25 = 0;
    goto LABEL_17;
  }
  v12 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v12 = v39 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v12 )
  {
    IntegerData = 8;
    goto LABEL_16;
  }
  v13 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v13 = v39 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v13 )
  {
    IntegerData = 5;
LABEL_16:
    v25 = IntegerData;
    goto LABEL_17;
  }
  v17 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_USB.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_USB.Data1 )
    v17 = v39 - *(_QWORD *)GUID_BUS_TYPE_USB.Data4;
  if ( v17 )
  {
    v18 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_IRDA.Data1 )
      v18 = v39 - *(_QWORD *)GUID_BUS_TYPE_IRDA.Data4;
    if ( !v18 )
    {
      IntegerData = 17;
      goto LABEL_16;
    }
    v19 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v19 = v39 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v19 )
    {
      IntegerData = 14;
      goto LABEL_16;
    }
    v20 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_1394.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_1394.Data1 )
      v20 = v39 - *(_QWORD *)GUID_BUS_TYPE_1394.Data4;
    if ( !v20 )
      goto LABEL_16;
    v21 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v21 = v39 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v21 )
    {
      IntegerData = 2;
      goto LABEL_16;
    }
    IntegerData = 1;
    v25 = 1;
LABEL_69:
    if ( IntegerData == 1 )
    {
      v22 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyLegacyBusType, 4u, &v25, &ResultLength);
      IntegerData = v25;
      DeviceProperty = v22;
    }
    goto LABEL_17;
  }
  IntegerData = 16;
  v25 = 16;
LABEL_17:
  if ( DeviceProperty < 0 || IntegerData == 1 || IntegerData == 8 )
  {
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) |= 1u;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v31, NdisParameterInteger);
    *(_DWORD *)(ConfigurationHandle[2] + 16LL) &= ~1u;
    if ( Status )
    {
      IntegerData = v25;
    }
    else
    {
      IntegerData = ParameterValue->ParameterData.IntegerData;
      v25 = IntegerData;
    }
  }
  if ( IntegerData == 5 || IntegerData == 8 )
  {
    Status = ndisQueryBusInterface(a2, v9);
    v8 = Status;
    if ( Status )
      goto LABEL_42;
    IntegerData = v25;
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
    if ( IoGetDeviceProperty(*(PDEVICE_OBJECT *)(a2 + 3856), DevicePropertyBusNumber, 4u, &v27, &ResultLength) >= 0
      || (NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v33, NdisParameterInteger), Status) )
    {
      v14 = v27;
    }
    else
    {
      v14 = ParameterValue->ParameterData.IntegerData;
      v27 = v14;
    }
    *(_DWORD *)(a2 + 3740) = v14;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v34, NdisParameterInteger);
    if ( Status )
      *(_DWORD *)(a2 + 3744) = -1;
    else
      *(_DWORD *)(a2 + 3744) = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v35, NdisParameterHexInteger);
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
      *(_DWORD *)(a2 + 2692) |= 0x200u;
      ndisAoAcTest = 1;
    }
    ndisReadPMRegistry(ConfigurationHandle);
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v36, NdisParameterInteger);
    if ( Status )
    {
      *(_WORD *)(a2 + 3702) = 16;
    }
    else
    {
      v23 = ParameterValue;
      if ( ParameterValue->ParameterData.StringData.Length > 0x80u )
      {
        ParameterValue->ParameterData.IntegerData = 128;
        v23 = ParameterValue;
      }
      *(_WORD *)(a2 + 3702) = v23->ParameterData.StringData.Length;
    }
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v37, NdisParameterHexInteger);
    if ( !Status )
      *(_DWORD *)(a2 + 3704) = ParameterValue->ParameterData.IntegerData;
    *(_DWORD *)(a1 + 16) = 0;
    ndisReadOffloadRegistry((struct _NDIS_MINIPORT_BLOCK *)a2);
    NdisReadConfiguration(&Status, &v30, ConfigurationHandle, &SwTimestampSettingsStr, NdisParameterInteger);
    if ( Status )
      *(_DWORD *)(a2 + 2688) = 0;
    else
      *(_DWORD *)(a2 + 2688) = v30->ParameterData.IntegerData;
    v8 = 0;
  }
LABEL_42:
  while ( 1 )
  {
    v15 = (void *)ConfigurationHandle[3];
    if ( !ConfigurationHandle[3] )
      break;
    ConfigurationHandle[3] = *(_QWORD *)ConfigurationHandle[3];
    ExFreePoolWithTag(v15, 0);
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xBu, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a2);
  return v8;
}
