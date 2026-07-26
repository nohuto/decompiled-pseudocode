/*
 * XREFs of ndisGetMiniportInfo @ 0x1C00E970C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     McTemplateK0jqxb @ 0x1C005E3B8 (McTemplateK0jqxb.c)
 *     WPP_SF_qDDDDDD @ 0x1C005F388 (WPP_SF_qDDDDDD.c)
 *     ndisQueryDeviceOid @ 0x1C00AC7DC (ndisQueryDeviceOid.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00C1E98 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisQueryOidList @ 0x1C00C405C (ndisQueryOidList.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00E9070 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00F01E4 (ndisGetMiniportOffloadCapability.c)
 */

__int64 __fastcall ndisGetMiniportInfo(__int64 a1, __int64 a2, _DWORD *a3, char *a4, _DWORD *a5)
{
  _DWORD *v5; // r13
  char v6; // r12
  unsigned int Flags; // r15d
  _DWORD *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  char v28; // si
  unsigned int v29; // ecx
  __int16 v30; // ax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r14d
  PVOID PoolWithTag; // rax
  PVOID v40; // r15
  NDIS_STATUS v41; // eax
  PVOID v42; // r14
  unsigned __int16 Length; // cx
  __int64 ParameterType; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-A8h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v53; // [rsp+68h] [rbp-98h]
  char *v54; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Keyword; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v57[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_PNP_CAPABILITIES Status; // [rsp+C8h] [rbp-38h] BYREF
  SIZE_T v59[32]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = a5;
  *(_QWORD *)&Status.Flags = a5;
  v6 = 0;
  Keyword.Buffer = L"*IfType";
  ConfigurationHandle = 0LL;
  v54 = a4;
  Flags = -1073741823;
  v53 = a3;
  *(_DWORD *)&Keyword.Length = 1048590;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x9Eu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  *a5 = 1;
  v10 = (_DWORD *)(*(_QWORD *)(a1 + 3784) + 480LL);
  if ( !*v10 )
  {
    v11 = ndisMDoMiniportOp((void *)a1, 1, 65814, (__int64)v10, 4, 1u, 1);
    v12 = *(_QWORD *)(a1 + 3784);
    ndisWriteDriverNDISVersionToServiceKey(
      *(unsigned __int8 *)(v12 + 24),
      *(unsigned __int8 *)(v12 + 25),
      v11 == 0,
      HIWORD(*(_DWORD *)(v12 + 480)),
      (unsigned __int16)*(_DWORD *)(v12 + 480),
      v12 + 488);
  }
  v13 = *(_DWORD *)(a1 + 464);
  if ( !v13 )
  {
    *(_WORD *)(a2 + 180) = 6;
    *(_QWORD *)(a2 + 168) = 2LL;
LABEL_26:
    *(_DWORD *)(a2 + 84) = 47;
    goto LABEL_27;
  }
  v14 = v13 - 3;
  if ( !v14 )
  {
    *(_WORD *)(a2 + 180) = 23;
    goto LABEL_24;
  }
  v15 = v14 - 5;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
    {
      *(_WORD *)(a2 + 180) = 1;
      *(_QWORD *)(a2 + 168) = 3LL;
      *(_DWORD *)(a2 + 176) = 3;
      *(_DWORD *)(a2 + 84) = 47;
      goto LABEL_28;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 3;
          if ( v20 )
          {
            *(_QWORD *)(a2 + 168) = 2LL;
            *(_DWORD *)(a2 + 176) = 1;
            *(_DWORD *)(a2 + 84) = 47;
            if ( v20 == 1 )
              *(_WORD *)(a2 + 180) = 71;
            else
              *(_WORD *)(a2 + 180) = 1;
            goto LABEL_28;
          }
          *(_QWORD *)(a2 + 168) = 3LL;
          *(_WORD *)(a2 + 180) = 131;
          goto LABEL_26;
        }
        *(_WORD *)(a2 + 180) = 1;
LABEL_24:
        *(_QWORD *)(a2 + 168) = 3LL;
        *(_DWORD *)(a2 + 176) = 3;
        *(_DWORD *)(a2 + 84) = 1;
        goto LABEL_28;
      }
      *(_DWORD *)(a2 + 168) = 3;
      *(_DWORD *)(a2 + 172) = 2;
    }
    else
    {
      *(_QWORD *)(a2 + 168) = 3LL;
    }
    *(_WORD *)(a2 + 180) = 1;
    *(_DWORD *)(a2 + 84) = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 168) = 4LL;
    *(_WORD *)(a2 + 180) = 37;
    *(_DWORD *)(a2 + 84) = 39;
  }
LABEL_27:
  *(_DWORD *)(a2 + 176) = 1;
LABEL_28:
  v21 = *(int *)(a1 + 464);
  if ( (int)v21 >= 0 && ((int)v21 >= 20 || (_DWORD)v21 != 3 && ndisMediaTypeCl[v21]) )
  {
    v23 = ndisMDoMiniportOp((void *)a1, 1, 65797, a2 + 64, 4, 1u, 1);
    if ( v23 )
    {
      if ( *(int *)(a1 + 464) < 20 )
      {
        if ( (unsigned __int8)byte_1C0099614 >= 3u )
          WPP_SF_(0x9Fu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
          McTemplateK0jqxqqq(
            v22,
            &OidQueryFailed,
            (const GUID *)(a1 + 4032),
            a1 + 4032,
            *(_DWORD *)(a1 + 4080),
            *(_QWORD *)(a1 + 4048),
            5,
            v23,
            245);
        goto LABEL_112;
      }
      *(_DWORD *)(a2 + 64) = 0;
    }
  }
  ndisMDoMiniportOp((void *)a1, 1, 65798, a2 + 16, 4, 1u, 1);
  v24 = *(int *)(a1 + 464);
  if ( (unsigned int)v24 <= 0x13 && ndisMediaTypeCl[v24] || (_DWORD)v24 == 3 )
  {
    v23 = ndisMDoMiniportOp((void *)a1, 1, 65811, a2 + 80, 4, 3u, 1);
    if ( v23 )
    {
      if ( (unsigned __int8)byte_1C0099614 >= 3u )
        WPP_SF_q(0xA0u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        McTemplateK0jqxqqq(
          v25,
          &OidQueryFailed,
          (const GUID *)(a1 + 4032),
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          19,
          v23,
          70);
      goto LABEL_112;
    }
  }
  if ( (*(_BYTE *)(a1 + 928) & 1) != 0 )
  {
    v50 = 16;
    v26 = ndisMDoMiniportOp((void *)a1, 1, 65813, (__int64)&v50, 4, 2u, 1);
    v28 = v26;
    if ( v26 )
    {
      if ( (unsigned __int8)byte_1C0099614 >= 3u )
        WPP_SF_q(0xA1u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        McTemplateK0jqxqqq(
          v27,
          &OidQueryFailed,
          (const GUID *)(a1 + 4032),
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          21,
          v28,
          105);
      v29 = 16;
      v50 = 16;
    }
    else
    {
      v29 = v50;
    }
    v30 = 16;
    if ( v29 < 0x10 )
      v30 = v29;
    *(_WORD *)(a1 + 538) = v30;
  }
  v31 = *(_DWORD *)(a1 + 464);
  if ( !v31 )
  {
    v23 = ndisMDoMiniportOp((void *)a1, 1, 16843012, a2 + 88, 4, 7u, 1);
    v6 = 1;
    if ( v23 )
    {
      if ( (unsigned __int8)byte_1C0099614 >= 3u )
        WPP_SF_q(0xA2u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        McTemplateK0jqxqqq(
          v33,
          &OidQueryFailed,
          (const GUID *)(a1 + 4032),
          a1 + 4032,
          *(_DWORD *)(a1 + 4080),
          *(_QWORD *)(a1 + 4048),
          4,
          v23,
          152);
    }
    else
    {
      *(_WORD *)(a2 + 92) = 6;
      v23 = ndisMDoMiniportOp((void *)a1, 1, 16843010, a2 + 126, 6, 9u, 1);
      if ( v23 )
      {
        if ( (unsigned __int8)byte_1C0099614 >= 3u )
          WPP_SF_q(0xA3u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
          McTemplateK0jqxqqq(
            v35,
            &OidQueryFailed,
            (const GUID *)(a1 + 4032),
            a1 + 4032,
            *(_DWORD *)(a1 + 4080),
            *(_QWORD *)(a1 + 4048),
            2,
            v23,
            180);
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099614 >= 4u )
        {
          LODWORD(v49) = *(unsigned __int8 *)(a2 + 131);
          LODWORD(v48) = *(unsigned __int8 *)(a2 + 130);
          LODWORD(v47) = *(unsigned __int8 *)(a2 + 129);
          LODWORD(v46) = *(unsigned __int8 *)(a2 + 128);
          LODWORD(ParameterType) = *(unsigned __int8 *)(a2 + 127);
          WPP_SF_qDDDDDD(
            *(unsigned __int8 *)(a2 + 130),
            *(unsigned __int8 *)(a2 + 129),
            a1,
            *(unsigned __int8 *)(a2 + 126),
            ParameterType,
            v46,
            v47,
            v48,
            v49);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
          McTemplateK0jqxb(
            v35,
            v34,
            (const GUID *)(a1 + 4032),
            a1 + 4032,
            *(_DWORD *)(a1 + 4080),
            *(_QWORD *)(a1 + 4048),
            a2 + 126);
        v23 = ndisMDoMiniportOp((void *)a1, 1, 16843009, a2 + 94, *(unsigned __int16 *)(a2 + 92), 9u, 1);
        if ( v23 )
        {
          if ( (unsigned __int8)byte_1C0099614 >= 3u )
            WPP_SF_q(0xA5u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
            McTemplateK0jqxqqq(
              v36,
              &OidQueryFailed,
              (const GUID *)(a1 + 4032),
              a1 + 4032,
              *(_DWORD *)(a1 + 4080),
              *(_QWORD *)(a1 + 4048),
              1,
              v23,
              223);
          v6 = 1;
        }
        else
        {
          v23 = ndisMDoMiniportOp((void *)a1, 1, 66050, a2 + 12, 4, 0xAu, 1);
          if ( v23 )
          {
            v23 = 0;
            *(_DWORD *)(a2 + 12) = 0;
          }
          else if ( *(_DWORD *)(a2 + 12) == 1 )
          {
            *(_WORD *)(a2 + 180) = 71;
          }
          ndisGetMiniportOffloadCapability(a1);
          v6 = 0;
        }
      }
      v5 = *(_DWORD **)&Status.Flags;
    }
    goto LABEL_94;
  }
  if ( v31 == 3 )
  {
    *(_WORD *)(a2 + 92) = 6;
    v23 = ndisMDoMiniportOp((void *)a1, 1, 67174658, a2 + 126, 6, 0x17u, 1);
    if ( !v23 )
    {
      *(_DWORD *)(a2 + 94) = *(_DWORD *)(a2 + 126);
      v6 = 0;
      *(_WORD *)(a2 + 98) = *(_WORD *)(a2 + 130);
      goto LABEL_95;
    }
    if ( (unsigned __int8)byte_1C0099614 >= 3u )
      WPP_SF_q(0xA6u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
      McTemplateK0jqxqqq(
        v32,
        &OidQueryFailed,
        (const GUID *)(a1 + 4032),
        a1 + 4032,
        *(_DWORD *)(a1 + 4080),
        *(_QWORD *)(a1 + 4048),
        2,
        v23,
        24);
    v6 = 1;
LABEL_94:
    if ( v23 )
    {
      Flags = -1073741823;
      goto LABEL_112;
    }
    goto LABEL_95;
  }
  v23 = 0;
LABEL_95:
  if ( ((*(_DWORD *)(a1 + 124) & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 3784) + 26LL) & 1) != 0)
    && *(_DWORD *)(a1 + 464) <= 0x13u )
  {
    *(_QWORD *)&Status.Flags = 0LL;
    *(_QWORD *)&Status.WakeUpCapabilities.MinPatternWakeUp = 0LL;
    v37 = ndisMDoMiniportOp((void *)a1, 1, -50265856, (__int64)&Status, 16, 0x19u, 0);
    *v5 = v37;
    if ( !v37 )
      ndisConvertPnpCapabilitiesToPM(&Status, *(struct _NDIS_PM_CAPABILITIES **)(a2 + 216));
  }
  *(_BYTE *)(a2 + 182) = (*(_DWORD *)(a1 + 124) & 0x200000) != 0;
  *(_DWORD *)(a2 + 60) = 0;
  *(_QWORD *)(a2 + 24) = 0x40000000LL;
  *(_QWORD *)(a2 + 32) = 0x40000000LL;
  *(_QWORD *)(a2 + 40) = 0x40000000LL;
  *(_QWORD *)(a2 + 48) = 0x40000000LL;
  *(_DWORD *)(a2 + 56) = 1;
  memset(v57, 0, sizeof(v57));
  v57[2] = a1;
  memset(v59, 0, 0xF8uLL);
  if ( (((unsigned int)ndisQueryDeviceOid((__int64)v57, v59, 65793, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    v38 = v59[7];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LODWORD(v59[7]), 0x2020444Eu);
    v40 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ndisQueryDeviceOid((__int64)v57, v59, 65793, (__int64)PoolWithTag, v38) )
      {
        *(_QWORD *)(a1 + 496) = v40;
        *(_DWORD *)(a1 + 200) = v38;
      }
    }
  }
  ndisQueryOidList((__int64)v57);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v41 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v42 = ConfigurationHandle;
  Flags = v41;
  Status.Flags = v41;
  if ( !v41 )
  {
    NdisReadConfiguration((PNDIS_STATUS)&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    Flags = Status.Flags;
    if ( !Status.Flags )
    {
      Length = ParameterValue->ParameterData.StringData.Length;
      if ( Length != 1 )
        *(_WORD *)(a2 + 180) = Length;
      Flags = 0;
    }
  }
  if ( v42 )
    NdisCloseConfiguration(v42);
LABEL_112:
  *v53 = v23;
  *v54 = v6;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0xA7u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, Flags);
  return Flags;
}
