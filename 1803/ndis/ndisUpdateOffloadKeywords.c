/*
 * XREFs of ndisUpdateOffloadKeywords @ 0x1C00DFF58
 * Callers:
 *     ndisPreOffloadAdminSettings @ 0x1C00DEF30 (ndisPreOffloadAdminSettings.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 *     ndisConvertOffloadValueToString @ 0x1C00DDCA4 (ndisConvertOffloadValueToString.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C00E54AC (ndisWriteConfigurationIfPresent.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(__int64 a1, __int64 a2)
{
  PVOID v4; // r15
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r11
  unsigned __int8 v10; // al
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  int v13; // r14d
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  NDIS_STATUS v19; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v20; // xmm6
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned __int8 v26; // al
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int8 v32; // al
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int8 v38; // al
  int v39; // eax
  unsigned int v40; // eax
  unsigned __int8 v41; // al
  int v42; // eax
  unsigned int v43; // eax
  unsigned __int8 v44; // al
  int v45; // eax
  unsigned int v46; // eax
  unsigned __int8 v47; // al
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // ecx
  unsigned int v51; // ecx
  unsigned __int8 v52; // al
  int v53; // eax
  unsigned int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  unsigned __int8 v57; // al
  int v58; // eax
  unsigned int v59; // eax
  unsigned __int8 v60; // si
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int Status; // [rsp+38h] [rbp-59h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER v68; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int8 v69; // [rsp+58h] [rbp-39h]
  unsigned __int8 v70; // [rsp+59h] [rbp-38h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-31h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v72; // [rsp+68h] [rbp-29h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+78h] [rbp-19h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue[11]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v75; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v76; // [rsp+100h] [rbp+6Fh]
  unsigned __int8 v77; // [rsp+108h] [rbp+77h]
  char v78; // [rsp+110h] [rbp+7Fh]

  v72.IntegerData = 262146;
  ConfigurationHandle = 0LL;
  v72.StringData.Buffer = (wchar_t *)L"0";
  v4 = 0LL;
  v76 = 0;
  v69 = 0;
  v77 = 0;
  v5 = 0;
  v78 = 0;
  v6 = 0;
  v70 = 0;
  v7 = 0;
  v75 = 0;
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_q(0xEBu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1);
    v6 = 0;
    v9 = 0;
  }
  v10 = *(_BYTE *)(a2 + 1);
  if ( v10 >= 2u && *(_WORD *)(a2 + 2) >= 0x16u )
  {
    v6 = *(_BYTE *)(a2 + 21);
    v5 = *(_BYTE *)(a2 + 20);
    v76 = v6;
  }
  if ( v10 >= 3u && *(_WORD *)(a2 + 2) >= 0x1Au )
  {
    v7 = *(_BYTE *)(a2 + 22);
    v11 = *(_BYTE *)(a2 + 23);
    v9 = *(_BYTE *)(a2 + 25);
    v8 = *(_BYTE *)(a2 + 24);
    v69 = v7;
    v77 = v11;
    v75 = v9;
  }
  if ( v10 >= 4u && *(_WORD *)(a2 + 2) >= 0x20u )
  {
    v78 = (v9 & 1) != 0 ? v8 : 0;
    if ( (v9 & 2) != 0 )
    {
      v70 = v8;
      v78 = (v9 & 1) != 0 ? v8 : 0;
    }
  }
  v12 = *(_BYTE *)(a2 + 4);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 4120) + 680LL) & 1;
  if ( v12 > 4u )
    goto LABEL_202;
  v14 = *(_BYTE *)(a2 + 5);
  if ( v14 > 4u )
    goto LABEL_202;
  v15 = *(_BYTE *)(a2 + 7);
  if ( v15 > 4u )
    goto LABEL_202;
  v16 = *(_BYTE *)(a2 + 6);
  if ( v16 > 4u )
    goto LABEL_202;
  v17 = *(_BYTE *)(a2 + 8);
  if ( v17 > 4u
    || *(_BYTE *)(a2 + 9) > 2u
    || *(_BYTE *)(a2 + 11) > 2u
    || *(_BYTE *)(a2 + 12) > 2u
    || *(_BYTE *)(a2 + 10) > 4u
    || *(_BYTE *)(a2 + 13) > 2u
    || *(_BYTE *)(a2 + 14) > 2u
    || v5 > 4u
    || v6 > 4u
    || v7 > 2u
    || v77 > 2u
    || v8 > 2u
    || v9 > 3u
    || v8 && !v9 )
  {
    goto LABEL_202;
  }
  if ( v5 && v6 )
    return (unsigned int)-1073676267;
  if ( (_BYTE)v13 && (v12 != v14 || v12 != v16 || v15 != v17) )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 3696) |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v19 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  v18 = v19;
  Status = v19;
  if ( v19 )
    goto LABEL_203;
  v20 = v72;
  if ( (_BYTE)v13 )
  {
    v21 = *(_BYTE *)(a2 + 4);
    if ( v21 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v72;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v21 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv4Str, &v68);
    }
    v22 = *(_BYTE *)(a2 + 7);
    if ( v22 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v22 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv6Str, &v68);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v23 = *(_BYTE *)(a2 + 4);
  if ( v23 )
  {
    if ( !(_BYTE)v13 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v23 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &IPXsumIPv4Str, &v68);
      v23 = *(_BYTE *)(a2 + 4);
    }
    v24 = *(_DWORD *)(a1 + 3696);
    switch ( v23 )
    {
      case 1u:
        v25 = v24 | 3;
        break;
      case 2u:
        v25 = v24 & 0xFFFFFFFC | 2;
        break;
      case 3u:
        v25 = v24 & 0xFFFFFFFC | 1;
        break;
      default:
        v25 = v24 & 0xFFFFFFFC;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v25;
  }
  v26 = *(_BYTE *)(a2 + 5);
  if ( v26 )
  {
    if ( !(_BYTE)v13 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v26 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv4Str, &v68);
      v26 = *(_BYTE *)(a2 + 5);
    }
    v27 = *(_DWORD *)(a1 + 3696);
    switch ( v26 )
    {
      case 1u:
        v28 = v27 | 0xC;
        break;
      case 2u:
        v28 = v27 & 0xFFFFFFF3 | 8;
        break;
      case 3u:
        v28 = v27 & 0xFFFFFFF3 | 4;
        break;
      default:
        v28 = v27 & 0xFFFFFFF3;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v28;
  }
  v29 = *(_BYTE *)(a2 + 7);
  if ( v29 )
  {
    if ( !(_BYTE)v13 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v29 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv6Str, &v68);
      v29 = *(_BYTE *)(a2 + 7);
    }
    v30 = *(_DWORD *)(a1 + 3696);
    switch ( v29 )
    {
      case 1u:
        v31 = v30 | 0xC0;
        break;
      case 2u:
        v31 = v30 & 0xFFFFFF3F | 0x80;
        break;
      case 3u:
        v31 = v30 & 0xFFFFFF3F | 0x40;
        break;
      default:
        v31 = v30 & 0xFFFFFF3F;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v31;
  }
  v32 = *(_BYTE *)(a2 + 6);
  if ( v32 )
  {
    if ( !(_BYTE)v13 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v32 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv4Str, &v68);
      v32 = *(_BYTE *)(a2 + 6);
    }
    v33 = *(_DWORD *)(a1 + 3696);
    switch ( v32 )
    {
      case 1u:
        v34 = v33 | 0x30;
        break;
      case 2u:
        v34 = v33 & 0xFFFFFFCF | 0x20;
        break;
      case 3u:
        v34 = v33 & 0xFFFFFFCF | 0x10;
        break;
      default:
        v34 = v33 & 0xFFFFFFCF;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v34;
  }
  v35 = *(_BYTE *)(a2 + 8);
  if ( v35 )
  {
    if ( !(_BYTE)v13 )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v35 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv6Str, &v68);
      v35 = *(_BYTE *)(a2 + 8);
    }
    v36 = *(_DWORD *)(a1 + 3696);
    switch ( v35 )
    {
      case 1u:
        v37 = v36 | 0x300;
        break;
      case 2u:
        v37 = v36 & 0xFFFFFCFF | 0x200;
        break;
      case 3u:
        v37 = v36 & 0xFFFFFCFF | 0x100;
        break;
      default:
        v37 = v36 & 0xFFFFFCFF;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v37;
  }
  v38 = *(_BYTE *)(a2 + 9);
  if ( v38 )
  {
    if ( v38 > 2u )
      goto LABEL_202;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v38 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV1IPv4Str, &v68);
    v39 = *(_DWORD *)(a1 + 3696);
    if ( *(_BYTE *)(a2 + 9) == 1 )
      v40 = v39 | 0x400;
    else
      v40 = v39 & 0xFFFFFBFF;
    *(_DWORD *)(a1 + 3696) = v40;
  }
  v41 = *(_BYTE *)(a2 + 11);
  if ( v41 )
  {
    if ( v41 > 2u )
      goto LABEL_202;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v41 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv4Str, &v68);
    v42 = *(_DWORD *)(a1 + 3696);
    if ( *(_BYTE *)(a2 + 11) == 1 )
      v43 = v42 | 0x800;
    else
      v43 = v42 & 0xFFFFF7FF;
    *(_DWORD *)(a1 + 3696) = v43;
  }
  v44 = *(_BYTE *)(a2 + 12);
  if ( v44 )
  {
    if ( v44 > 2u )
      goto LABEL_202;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v44 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv6Str, &v68);
    v45 = *(_DWORD *)(a1 + 3696);
    if ( *(_BYTE *)(a2 + 12) == 1 )
      v46 = v45 | 0x1000;
    else
      v46 = v45 & 0xFFFFEFFF;
    *(_DWORD *)(a1 + 3696) = v46;
  }
  v47 = *(_BYTE *)(a2 + 10);
  if ( v47 )
  {
    if ( v47 > 4u )
      goto LABEL_202;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v47 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecIPv4Str, &v68);
    v48 = *(_DWORD *)(a1 + 3696);
    switch ( *(_BYTE *)(a2 + 10) )
    {
      case 1:
        v49 = v48 | 0x6000;
        break;
      case 2:
        v49 = v48 & 0xFFFF9FFF | 0x4000;
        break;
      case 3:
        v49 = v48 & 0xFFFF9FFF | 0x2000;
        break;
      default:
        v49 = v48 & 0xFFFF9FFF;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v49;
  }
  if ( v5 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v5 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2Str, &v68);
    v50 = *(_DWORD *)(a1 + 3696);
    switch ( v5 )
    {
      case 1u:
        v51 = v50 | 0xC0000;
        break;
      case 2u:
        v51 = v50 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v51 = v50 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v51 = v50 & 0xFFF3FFFF;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v51;
  }
  else if ( v76 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v76 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2IPv4Str, &v68);
    v55 = *(_DWORD *)(a1 + 3696);
    switch ( v76 )
    {
      case 1u:
        v56 = v55 | 0x300000;
        break;
      case 2u:
        v56 = v55 & 0xFFCFFFFF | 0x200000;
        break;
      case 3u:
        v56 = v55 & 0xFFCFFFFF | 0x100000;
        break;
      default:
        v56 = v55 & 0xFFCFFFFF;
        break;
    }
    *(_DWORD *)(a1 + 3696) = v56;
  }
  v52 = *(_BYTE *)(a2 + 13);
  if ( v52 )
  {
    if ( v52 > 2u )
      goto LABEL_202;
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v52 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv4Str, &v68);
    v53 = *(_DWORD *)(a1 + 3696);
    if ( *(_BYTE *)(a2 + 13) == 1 )
      v54 = v53 | 0x8000;
    else
      v54 = v53 & 0xFFFF7FFF;
    *(_DWORD *)(a1 + 3696) = v54;
  }
  v57 = *(_BYTE *)(a2 + 14);
  if ( v57 )
  {
    if ( v57 <= 2u )
    {
      v68.ParameterType = NdisParameterString;
      v68.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v57 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_203;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv6Str, &v68);
      v58 = *(_DWORD *)(a1 + 3696);
      if ( *(_BYTE *)(a2 + 14) == 1 )
        v59 = v58 | 0x10000;
      else
        v59 = v58 & 0xFFFEFFFF;
      *(_DWORD *)(a1 + 3696) = v59;
      goto LABEL_175;
    }
LABEL_202:
    v18 = -1073676267;
    goto LABEL_203;
  }
LABEL_175:
  v60 = v69;
  if ( v69 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v69 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv4Str, &v68);
    v61 = 0;
    if ( v60 == 1 )
      v61 = 0x800000;
    *(_DWORD *)(a1 + 3696) = *(_DWORD *)(a1 + 3696) & 0xFF7FFFFF | v61;
  }
  if ( v77 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, (unsigned int)v77 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv6Str, &v68);
    v62 = 0;
    if ( v77 == 1 )
      v62 = 0x1000000;
    *(_DWORD *)(a1 + 3696) = *(_DWORD *)(a1 + 3696) & 0xFEFFFFFF | v62;
  }
  if ( v8 )
  {
    v68.ParameterType = NdisParameterString;
    v68.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((__int64)&v68.ParameterData, v8 == 1);
    v18 = Status;
    if ( Status )
      goto LABEL_203;
    if ( v8 == 2 && v75 == 3 || v8 == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadStr, &v68);
      v63 = 0;
      if ( v8 == 2 )
        v63 = 0x2000000;
      *(_DWORD *)(a1 + 3696) = *(_DWORD *)(a1 + 3696) & 0xFDFFFFFF | v63;
    }
    if ( (v75 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadNvgreStr, &v68);
      v64 = 0;
      if ( v78 == 2 )
        v64 = 0x4000000;
      *(_DWORD *)(a1 + 3696) = *(_DWORD *)(a1 + 3696) & 0xFBFFFFFF | v64;
    }
    if ( (v75 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadVxlanStr, &v68);
      v65 = 0;
      if ( v70 == 2 )
        v65 = 0x8000000;
      *(_DWORD *)(a1 + 3696) = *(_DWORD *)(a1 + 3696) & 0xF7FFFFFF | v65;
    }
  }
  v18 = 0;
LABEL_203:
  if ( v4 )
    NdisCloseConfiguration(v4);
  return v18;
}
