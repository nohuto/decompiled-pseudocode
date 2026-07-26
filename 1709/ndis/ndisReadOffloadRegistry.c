/*
 * XREFs of ndisReadOffloadRegistry @ 0x1C00B2C3C
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00B2388 (ndisInitializeConfiguration.c)
 * Callees:
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011F60 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rsi
  unsigned int v4; // edi
  unsigned int IntegerData; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int Value; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __int64 ParameterType; // [rsp+20h] [rbp-30h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+88h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+40h] BYREF

  ConfigurationHandle = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x37u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, (__int64)a1);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v3 = ConfigurationHandle;
  v4 = v2;
  Status = v2;
  if ( !v2 )
  {
    a1->OffloadRegistry.Value |= 0x20000u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_9;
    IntegerData = ParameterValue->ParameterData.IntegerData;
    if ( IntegerData )
    {
      v6 = IntegerData - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFFC;
          goto LABEL_9;
        }
        v16 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 1;
      }
      else
      {
        v16 = a1->OffloadRegistry.Value & 0xFFFFFFFC | 2;
      }
      a1->OffloadRegistry.Value = v16;
    }
    else
    {
      a1->OffloadRegistry.Value |= 3u;
    }
LABEL_9:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_14;
    v7 = ParameterValue->ParameterData.IntegerData;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFF3;
          goto LABEL_14;
        }
        v17 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 4;
      }
      else
      {
        v17 = a1->OffloadRegistry.Value & 0xFFFFFFF3 | 8;
      }
      a1->OffloadRegistry.Value = v17;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0xCu;
    }
LABEL_14:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_19;
    v9 = ParameterValue->ParameterData.IntegerData;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFFCF;
          goto LABEL_19;
        }
        v18 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x10;
      }
      else
      {
        v18 = a1->OffloadRegistry.Value & 0xFFFFFFCF | 0x20;
      }
      a1->OffloadRegistry.Value = v18;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0x30u;
    }
LABEL_19:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( Status )
      goto LABEL_24;
    v11 = ParameterValue->ParameterData.IntegerData;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFF3F;
          goto LABEL_24;
        }
        v19 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x40;
      }
      else
      {
        v19 = a1->OffloadRegistry.Value & 0xFFFFFF3F | 0x80;
      }
      a1->OffloadRegistry.Value = v19;
    }
    else
    {
      a1->OffloadRegistry.Value |= 0xC0u;
    }
LABEL_24:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v13 = ParameterValue->ParameterData.IntegerData;
      if ( !v13 )
      {
        a1->OffloadRegistry.Value |= 0x300u;
        goto LABEL_29;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          a1->OffloadRegistry.Value &= 0xFFFFFCFF;
          goto LABEL_29;
        }
        v20 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x100;
      }
      else
      {
        v20 = a1->OffloadRegistry.Value & 0xFFFFFCFF | 0x200;
      }
      a1->OffloadRegistry.Value = v20;
    }
LABEL_29:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value &= ~0x1000u;
      else
        a1->OffloadRegistry.Value |= 0x1000u;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value &= ~0x800u;
      else
        a1->OffloadRegistry.Value |= 0x800u;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value &= ~0x400u;
      else
        a1->OffloadRegistry.Value |= 0x400u;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v21 = ParameterValue->ParameterData.IntegerData;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 != 1 )
          {
            a1->OffloadRegistry.Value &= 0xFFFF9FFF;
            goto LABEL_39;
          }
          v23 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x2000;
        }
        else
        {
          v23 = a1->OffloadRegistry.Value & 0xFFFF9FFF | 0x4000;
        }
        a1->OffloadRegistry.Value = v23;
      }
      else
      {
        a1->OffloadRegistry.Value |= 0x6000u;
      }
    }
LABEL_39:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value &= ~0x8000u;
      else
        a1->OffloadRegistry.Value |= 0x8000u;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      if ( ParameterValue->ParameterData.IntegerData )
        a1->OffloadRegistry.Value &= ~0x10000u;
      else
        a1->OffloadRegistry.Value |= 0x10000u;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        a1->OffloadRegistry.Value |= 0x400000u;
        Value = a1->OffloadRegistry.Value;
        v28 = ParameterValue->ParameterData.IntegerData;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 )
              v30 = Value & 0xFFCFFFFF | 0x100000;
            else
              v30 = Value & 0xFFCFFFFF;
          }
          else
          {
            v30 = Value & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v30 = Value | 0x300000;
        }
        a1->OffloadRegistry.Value = v30;
      }
      goto LABEL_43;
    }
    v24 = ParameterValue->ParameterData.IntegerData;
    if ( !v24 )
    {
      a1->OffloadRegistry.Value |= 0xC0000u;
      goto LABEL_43;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      if ( v25 != 1 )
      {
        a1->OffloadRegistry.Value &= 0xFFF3FFFF;
LABEL_43:
        NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
        if ( !Status )
        {
          if ( ParameterValue->ParameterData.IntegerData )
            a1->OffloadRegistry.Value &= ~0x800000u;
          else
            a1->OffloadRegistry.Value |= 0x800000u;
        }
        NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
        if ( !Status )
        {
          if ( ParameterValue->ParameterData.IntegerData )
            a1->OffloadRegistry.Value &= ~0x1000000u;
          else
            a1->OffloadRegistry.Value |= 0x1000000u;
        }
        NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
        if ( !Status )
        {
          if ( ParameterValue->ParameterData.IntegerData )
            a1->OffloadRegistry.Value &= ~0x2000000u;
          else
            a1->OffloadRegistry.Value |= 0x2000000u;
        }
        NdisReadConfiguration(
          &Status,
          &ParameterValue,
          v3,
          &EncapsulatedPacketTaskOffloadNvgreStr,
          NdisParameterInteger);
        if ( !Status )
        {
          if ( ParameterValue->ParameterData.IntegerData )
            a1->OffloadRegistry.Value &= ~0x4000000u;
          else
            a1->OffloadRegistry.Value |= 0x4000000u;
        }
        NdisReadConfiguration(
          &Status,
          &ParameterValue,
          v3,
          &EncapsulatedPacketTaskOffloadVxlanStr,
          NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          if ( ParameterValue->ParameterData.IntegerData )
            a1->OffloadRegistry.Value &= ~0x8000000u;
          else
            a1->OffloadRegistry.Value |= 0x8000000u;
        }
        goto LABEL_48;
      }
      v26 = a1->OffloadRegistry.Value & 0xFFF3FFFF | 0x40000;
    }
    else
    {
      v26 = a1->OffloadRegistry.Value & 0xFFF3FFFF | 0x80000;
    }
    a1->OffloadRegistry.Value = v26;
    goto LABEL_43;
  }
LABEL_48:
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ParameterType) = a1->OffloadRegistry.Value;
    WPP_SF_qdD(0x38u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, (__int64)a1, v4, ParameterType);
  }
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
