/*
 * XREFs of ndisQueryGuidDataSize @ 0x1C00B6A0C
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00C526C (ndisWmiQueryAllData.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C000930C (ndisWmiGetGuid.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     WPP_SF_qLDDDDDDDDDD @ 0x1C0065C08 (WPP_SF_qLDDDDDDDDDD.c)
 *     WPP_SF_qLDDDDDDDDDDD @ 0x1C0065CDC (WPP_SF_qLDDDDDDDDDDD.c)
 *     WPP_SF_qLLDDDDDDDDDD @ 0x1C0065DC4 (WPP_SF_qLLDDDDDDDDDD.c)
 */

__int64 __fastcall ndisQueryGuidDataSize(int *a1, __int64 a2, void *a3, GUID *a4, void *a5)
{
  void *v5; // rdi
  unsigned int Guid; // eax
  int v11; // r9d
  __int64 v12; // r14
  unsigned int v13; // r13d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int SetMiniport; // eax
  unsigned int v29; // r15d
  int v30; // eax
  int v31; // ecx
  __int64 v32; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  bool v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING GuidString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v47[248]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a5;
  v45 = a2;
  v44 = 0LL;
  memset(v47, 0, sizeof(v47));
  v43 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
  {
    v43 = RtlStringFromGUID(a4, &GuidString) >= 0;
    if ( (unsigned __int8)byte_1C0098759 >= 4u )
      WPP_SF_qZ(0x1Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a2, &GuidString.Length);
  }
  Guid = ndisWmiGetGuid(&v44, a2, a4, 0);
  v12 = v44;
  v13 = Guid;
  if ( !v44 )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_qLDDDDDDDDDD(
        a4->Data4[6],
        a4->Data4[5],
        a2,
        a4->Data1,
        a4->Data2,
        a4->Data3,
        a4->Data4[0],
        a4->Data4[1],
        a4->Data4[2],
        a4->Data4[3],
        a4->Data4[4],
        a4->Data4[5],
        a4->Data4[6],
        a4->Data4[7]);
    goto LABEL_48;
  }
  v14 = *(_DWORD *)(v44 + 24);
  if ( (v14 & 0x20000000) != 0 )
  {
    v15 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    v13 = 0;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v15 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( !v15 )
    {
      v20 = *(unsigned __int16 *)(a2 + 3832) + 2;
      goto LABEL_20;
    }
    v16 = *(_QWORD *)v44 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
      v16 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
    if ( !v16 )
      goto LABEL_19;
    v17 = *(_QWORD *)v44 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
      v17 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
    if ( !v17 )
      goto LABEL_19;
    v18 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
      v18 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
    if ( !v18 )
      goto LABEL_19;
    v19 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
      v19 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
    if ( !v19 )
      goto LABEL_19;
    v22 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
      v22 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
    if ( !v22 )
    {
LABEL_19:
      v20 = 1;
LABEL_20:
      *a1 = v20;
      goto LABEL_21;
    }
    v23 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
      v23 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
    if ( !v23 )
    {
      *a1 = 136;
      goto LABEL_21;
    }
    v24 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
      v24 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
    if ( !v24 )
      goto LABEL_43;
    v25 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
      v25 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
    if ( !v25 )
    {
LABEL_43:
      *a1 = 28;
      goto LABEL_21;
    }
    if ( a3 )
    {
      v27 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
      if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
        v27 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
      if ( !v27 )
      {
        *a1 = 0;
        goto LABEL_21;
      }
    }
    v26 = *(_QWORD *)v44 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
    if ( *(_QWORD *)v44 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
      v26 = *(_QWORD *)(v44 + 8) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
    if ( !v26 )
    {
      v20 = *(unsigned __int16 *)(a2 + 3832) + 18;
      goto LABEL_20;
    }
LABEL_48:
    v13 = -1073741811;
    goto LABEL_21;
  }
  if ( (v14 & 0x80u) != 0 )
  {
    *a1 &= v11;
    goto LABEL_21;
  }
  if ( (v14 & 1) == 0 )
  {
    v13 = -1073741808;
    goto LABEL_21;
  }
  if ( (v14 & 0x10) == 0 && (v14 & 8) == 0 && (v14 & 4) == 0 )
  {
    v20 = *(_DWORD *)(v44 + 20);
    if ( v20 != -1 )
    {
LABEL_89:
      v13 = 0;
      goto LABEL_20;
    }
  }
  memset(v47, 0, sizeof(v47));
  *(_DWORD *)&v47[88] |= 8u;
  *(_QWORD *)&v47[104] = &ndisIntReqWmi;
  *(_DWORD *)v47 = 15466902;
  *(_DWORD *)&v47[32] = *(_DWORD *)(v44 + 16);
  *(_QWORD *)&v47[4] = 2LL;
  *(_QWORD *)&v47[40] = 0LL;
  *(_DWORD *)&v47[48] = 0;
  if ( a3 || !a5 )
    v5 = (void *)a2;
  SetMiniport = ndisQuerySetMiniport(v5, a3, (struct _NDIS_OID_REQUEST *)v47, 0LL, 0LL);
  v29 = SetMiniport;
  if ( SetMiniport == -1073676268 || SetMiniport == -1073676266 || !SetMiniport )
  {
    v31 = *(_DWORD *)(v12 + 24);
    v20 = *(_DWORD *)&v47[56];
    if ( (v31 & 4) != 0 )
    {
      v20 = 2 * *(_DWORD *)&v47[56] + 4;
    }
    else if ( (v31 & 8) != 0 )
    {
      v20 = *(_DWORD *)&v47[56] + 2;
    }
    else if ( (v31 & 0x10) != 0 )
    {
      v20 = *(_DWORD *)&v47[56] + 4;
    }
    goto LABEL_89;
  }
  if ( (unsigned __int8)byte_1C0098759 >= 2u )
  {
    LODWORD(v32) = a4->Data2;
    WPP_SF_qLDDDDDDDDDDD(
      a4->Data4[7],
      a4->Data4[5],
      v45,
      a4->Data1,
      v32,
      a4->Data3,
      a4->Data4[0],
      a4->Data4[1],
      a4->Data4[2],
      a4->Data4[3],
      a4->Data4[4],
      a4->Data4[5],
      a4->Data4[6],
      a4->Data4[7],
      SetMiniport);
  }
  if ( (*(_DWORD *)(v12 + 24) & 0x200) != 0 )
  {
    if ( (v29 & 0xC0010000) == 0xC0010000 )
      v29 = (unsigned __int16)v29 | 0xC0230000;
    goto LABEL_74;
  }
  if ( v29 == 259
    || v29 == -2147483643
    || (v30 = -1073741823, v29 == -1073741823)
    || v29 == -1073741670
    || v29 == -1073741637 )
  {
LABEL_74:
    v13 = v29;
    goto LABEL_21;
  }
  if ( v29 == -1073676267 )
    v30 = -1073741811;
  v13 = v30;
LABEL_21:
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
  {
    LODWORD(v42) = a4->Data4[7];
    LODWORD(v41) = a4->Data4[6];
    LODWORD(v40) = a4->Data4[5];
    LODWORD(v39) = a4->Data4[4];
    LODWORD(v38) = a4->Data4[3];
    LODWORD(v37) = a4->Data4[2];
    LODWORD(v36) = a4->Data4[1];
    LODWORD(v35) = a4->Data4[0];
    LODWORD(v34) = a4->Data3;
    LODWORD(v33) = a4->Data2;
    LODWORD(v32) = a4->Data1;
    WPP_SF_qLLDDDDDDDDDD(a4->Data4[6], a4->Data4[5], v45, v13, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
  }
  if ( v43 )
    RtlFreeUnicodeString(&GuidString);
  return v13;
}
