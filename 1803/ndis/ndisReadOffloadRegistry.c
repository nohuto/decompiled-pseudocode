/*
 * XREFs of ndisReadOffloadRegistry @ 0x1C00B9598
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00B8CE4 (ndisInitializeConfiguration.c)
 * Callees:
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001E334 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadOffloadRegistry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  PVOID v3; // rdi
  unsigned int v4; // esi
  unsigned int Value; // ecx
  unsigned int IntegerData; // edx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  PNDIS_CONFIGURATION_PARAMETER v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // r8d
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  __int64 ParameterType; // [rsp+20h] [rbp-30h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+88h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+40h] BYREF

  ConfigurationHandle = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x37u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, (__int64)a1);
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
    if ( !Status )
    {
      Value = a1->OffloadRegistry.Value;
      IntegerData = ParameterValue->ParameterData.IntegerData;
      if ( IntegerData )
      {
        v7 = IntegerData - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            v8 = Value & 0xFFFFFFFC | 1;
          else
            v8 = Value & 0xFFFFFFFC;
        }
        else
        {
          v8 = Value & 0xFFFFFFFC | 2;
        }
      }
      else
      {
        v8 = Value | 3;
      }
      a1->OffloadRegistry.Value = v8;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v9 = a1->OffloadRegistry.Value;
      v10 = ParameterValue->ParameterData.IntegerData;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v12 = v9 & 0xFFFFFFF3 | 4;
          else
            v12 = v9 & 0xFFFFFFF3;
        }
        else
        {
          v12 = v9 & 0xFFFFFFF3 | 8;
        }
      }
      else
      {
        v12 = v9 | 0xC;
      }
      a1->OffloadRegistry.Value = v12;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v13 = a1->OffloadRegistry.Value;
      v14 = ParameterValue->ParameterData.IntegerData;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            v16 = v13 & 0xFFFFFFCF | 0x10;
          else
            v16 = v13 & 0xFFFFFFCF;
        }
        else
        {
          v16 = v13 & 0xFFFFFFCF | 0x20;
        }
      }
      else
      {
        v16 = v13 | 0x30;
      }
      a1->OffloadRegistry.Value = v16;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v17 = a1->OffloadRegistry.Value;
      v18 = ParameterValue->ParameterData.IntegerData;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
            v20 = v17 & 0xFFFFFF3F | 0x40;
          else
            v20 = v17 & 0xFFFFFF3F;
        }
        else
        {
          v20 = v17 & 0xFFFFFF3F | 0x80;
        }
      }
      else
      {
        v20 = v17 | 0xC0;
      }
      a1->OffloadRegistry.Value = v20;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &UDPXsumIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v21 = a1->OffloadRegistry.Value;
      v22 = ParameterValue->ParameterData.IntegerData;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 == 1 )
            v24 = v21 & 0xFFFFFCFF | 0x100;
          else
            v24 = v21 & 0xFFFFFCFF;
        }
        else
        {
          v24 = v21 & 0xFFFFFCFF | 0x200;
        }
      }
      else
      {
        v24 = v21 | 0x300;
      }
      a1->OffloadRegistry.Value = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv4Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3Fu;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPUDPChecksumOffloadIPv6Str, NdisParameterInteger);
    if ( !Status && !ParameterValue->ParameterData.IntegerData )
      a1->OffloadRegistry.Value |= 0x3C0u;
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v25 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v26 = v25 & 0xFFFFEFFF;
      else
        v26 = v25 | 0x1000;
      a1->OffloadRegistry.Value = v26;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV2IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v27 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v28 = v27 & 0xFFFFF7FF;
      else
        v28 = v27 | 0x800;
      a1->OffloadRegistry.Value = v28;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &LsoV1IPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v30 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v31 = v30 & 0xFFFFFBFF;
      else
        v31 = v30 | 0x400;
      a1->OffloadRegistry.Value = v31;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v32 = a1->OffloadRegistry.Value;
      v33 = ParameterValue->ParameterData.IntegerData;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 )
            v35 = v32 & 0xFFFF9FFF | 0x2000;
          else
            v35 = v32 & 0xFFFF9FFF;
        }
        else
        {
          v35 = v32 & 0xFFFF9FFF | 0x4000;
        }
      }
      else
      {
        v35 = v32 | 0x6000;
      }
      a1->OffloadRegistry.Value = v35;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v36 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v37 = v36 & 0xFFFF7FFF;
      else
        v37 = v36 | 0x8000;
      a1->OffloadRegistry.Value = v37;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &TCPConnectionOffloadIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v38 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v39 = v38 & 0xFFFEFFFF;
      else
        v39 = v38 | 0x10000;
      a1->OffloadRegistry.Value = v39;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2Str, NdisParameterInteger);
    if ( Status )
    {
      NdisReadConfiguration(&Status, &ParameterValue, v3, &IPsecV2IPv4Str, NdisParameterInteger);
      if ( !Status )
      {
        v46 = ParameterValue;
        v47 = a1->OffloadRegistry.Value | 0x400000;
        a1->OffloadRegistry.Value = v47;
        v48 = v46->ParameterData.IntegerData;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 == 1 )
              v50 = v47 & 0xFFCFFFFF | 0x100000;
            else
              v50 = v47 & 0xFFCFFFFF;
          }
          else
          {
            v50 = v47 & 0xFFCFFFFF | 0x200000;
          }
        }
        else
        {
          v50 = v47 | 0x300000;
        }
        a1->OffloadRegistry.Value = v50;
      }
      goto LABEL_50;
    }
    v40 = a1->OffloadRegistry.Value;
    v41 = ParameterValue->ParameterData.IntegerData;
    if ( v41 )
    {
      v42 = v41 - 1;
      if ( v42 )
      {
        if ( v42 == 1 )
          v43 = v40 | 0x40000;
        else
          v43 = v40 & 0xFFFBFFFF;
        v44 = v43 & 0xFFF7FFFF;
        goto LABEL_112;
      }
      v45 = v40 & 0xFFFBFFFF;
    }
    else
    {
      v45 = v40 | 0x40000;
    }
    v44 = v45 | 0x80000;
LABEL_112:
    a1->OffloadRegistry.Value = v44;
LABEL_50:
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv4Str, NdisParameterInteger);
    if ( !Status )
    {
      v51 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v52 = v51 & 0xFF7FFFFF;
      else
        v52 = v51 | 0x800000;
      a1->OffloadRegistry.Value = v52;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &RscIPv6Str, NdisParameterInteger);
    if ( !Status )
    {
      v53 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v54 = v53 & 0xFEFFFFFF;
      else
        v54 = v53 | 0x1000000;
      a1->OffloadRegistry.Value = v54;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadStr, NdisParameterInteger);
    if ( !Status )
    {
      v55 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v56 = v55 & 0xFDFFFFFF;
      else
        v56 = v55 | 0x2000000;
      a1->OffloadRegistry.Value = v56;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadNvgreStr, NdisParameterInteger);
    if ( !Status )
    {
      v57 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v58 = v57 & 0xFBFFFFFF;
      else
        v58 = v57 | 0x4000000;
      a1->OffloadRegistry.Value = v58;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v3, &EncapsulatedPacketTaskOffloadVxlanStr, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v59 = a1->OffloadRegistry.Value;
      if ( ParameterValue->ParameterData.IntegerData )
        v60 = v59 & 0xF7FFFFFF;
      else
        v60 = v59 | 0x8000000;
      a1->OffloadRegistry.Value = v60;
    }
  }
  if ( v3 )
    NdisCloseConfiguration(v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ParameterType) = a1->OffloadRegistry.Value;
    WPP_SF_qdD(0x38u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, (__int64)a1, v4, ParameterType);
  }
  if ( (a1->OffloadRegistry.Value & 0x20000) != 0 )
    NdisTraceLoggingOffloadConfigRead(a1);
  return v4;
}
