/*
 * XREFs of ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00AD91C
 * Callers:
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00AE7F0 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00C5D00 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000ABF0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000C080 (ndisReferenceMiniportByHandleForNsi.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // r14d
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int *v18; // r12
  __int64 v19; // r13
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v29[248]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[20]; // [rsp+140h] [rbp+40h] BYREF

  SetMiniport = 0;
  memset(v29, 0, sizeof(v29));
  v28[0] = 0LL;
  v7 = a2;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqq(0x3Eu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, a3);
  memset(a2, 0, 0x90uLL);
  if ( !(unsigned __int8)ndisReferenceMiniportByHandleForNsi((__int64)a1) )
    goto LABEL_10;
  memset(v29, 0, sizeof(v29));
  *(_DWORD *)&v29[32] = 0;
  *(_DWORD *)&v29[8] = 0;
  *(_QWORD *)&v29[40] = 0LL;
  *(_DWORD *)&v29[48] = 0;
  *(_QWORD *)&v29[104] = &ndisIntReqNsi;
  v9 = *(_DWORD *)&v29[88] | 8;
  *(_DWORD *)v29 = 15466902;
  *(_DWORD *)&v29[88] |= 8u;
  *(_DWORD *)&v29[4] = 2;
  if ( !a3 )
    *(_DWORD *)&v29[88] = v9 | 0x100000;
  if ( a1->MajorNdisVersion < 6u )
  {
    v18 = (int *)&unk_1C0087480;
    v19 = 18LL;
    while ( 1 )
    {
      v20 = *v18;
      v21 = *v18;
      v28[0] = 0LL;
      v22 = v21 - 131586;
      if ( !v22 )
        break;
      v23 = v22 - 6;
      if ( !v23 )
      {
        *(_DWORD *)&v29[32] = 131592;
        goto LABEL_41;
      }
      v24 = v23 - 17;
      if ( !v24 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[32] = 131591;
        *(_DWORD *)&v29[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3) )
          *v7 = v28[0];
        v28[0] = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[32] = 131593;
        *(_DWORD *)&v29[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3) )
          *v7 += v28[0];
        *(_DWORD *)&v29[32] = 131595;
        goto LABEL_28;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[32] = 131585;
        *(_DWORD *)&v29[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3) )
          *v7 = v28[0];
        v28[0] = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[32] = 131587;
        *(_DWORD *)&v29[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3) )
          *v7 += v28[0];
        *(_DWORD *)&v29[32] = 131589;
        goto LABEL_28;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[32] = 131332;
        *(_DWORD *)&v29[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3) )
          *v7 = v28[0];
        *(_DWORD *)&v29[32] = 131333;
LABEL_28:
        v28[0] = 0LL;
        *(_QWORD *)&v29[40] = v28;
        *(_DWORD *)&v29[48] = 8;
        SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3);
        if ( !SetMiniport )
          *v7 += v28[0];
        goto LABEL_43;
      }
      if ( v26 != 1 )
      {
        *(_DWORD *)&v29[32] = v20;
        goto LABEL_41;
      }
      v27 = 2LL;
      do
      {
        *v7 = 0LL;
        --v27;
      }
      while ( v27 );
LABEL_43:
      ++v7;
      ++v18;
      if ( !--v19 )
        goto LABEL_9;
    }
    *(_DWORD *)&v29[32] = 131586;
LABEL_41:
    *v7 = 0LL;
    *(_QWORD *)&v29[40] = v28;
    *(_DWORD *)&v29[48] = 8;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3);
    if ( !SetMiniport )
      *v7 = v28[0];
    goto LABEL_43;
  }
  memset(v30, 0, 0x98uLL);
  *(_DWORD *)&v29[32] = 131334;
  *(_QWORD *)&v29[40] = v30;
  *(_DWORD *)&v29[48] = 152;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, (__int64)a3);
  if ( !SetMiniport )
  {
    v10 = *(_OWORD *)&v30[3];
    *a2 = *(_OWORD *)&v30[1];
    v11 = *(_OWORD *)&v30[5];
    a2[1] = v10;
    v12 = *(_OWORD *)&v30[7];
    a2[2] = v11;
    v13 = *(_OWORD *)&v30[9];
    a2[3] = v12;
    v14 = *(_OWORD *)&v30[11];
    a2[4] = v13;
    v15 = *(_OWORD *)&v30[13];
    a2[5] = v14;
    v16 = *(_OWORD *)&v30[17];
    a2[6] = v15;
    a2[7] = *(_OWORD *)&v30[15];
    a2[8] = v16;
  }
LABEL_9:
  LOBYTE(v8) = 3;
  ndisDereferenceMiniportForNsi((__int64)a1, v8, 0x3Bu);
LABEL_10:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqL(0x3Fu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, a3, SetMiniport);
  return 0LL;
}
