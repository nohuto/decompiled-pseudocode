/*
 * XREFs of ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B81A8
 * Callers:
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00B71B0 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00B9290 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000985C (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C (ndisReferenceMiniportByHandleForNsi.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIfGetMiniportStatistics(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _OWORD *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int SetMiniport; // r14d
  _QWORD *v7; // rbx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int *v17; // r12
  __int64 v18; // r13
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v26[248]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[20]; // [rsp+140h] [rbp+40h] BYREF

  SetMiniport = 0;
  memset(v26, 0, sizeof(v26));
  v25[0] = 0LL;
  v7 = a2;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqq(0x3Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3);
  memset(a2, 0, 0x90uLL);
  if ( !ndisReferenceMiniportByHandleForNsi((__int64)a1) )
    goto LABEL_10;
  memset(v26, 0, sizeof(v26));
  *(_DWORD *)v26 = 15466902;
  *(_DWORD *)&v26[32] = 0;
  *(_QWORD *)&v26[104] = &ndisIntReqNsi;
  v8 = *(_DWORD *)&v26[88] | 8;
  *(_QWORD *)&v26[4] = 2LL;
  *(_DWORD *)&v26[88] |= 8u;
  *(_QWORD *)&v26[40] = 0LL;
  *(_DWORD *)&v26[48] = 0;
  if ( !a3 )
    *(_DWORD *)&v26[88] = v8 | 0x100000;
  if ( a1->MajorNdisVersion < 6u )
  {
    v17 = (int *)&unk_1C0086420;
    v18 = 18LL;
    while ( 1 )
    {
      v19 = *v17;
      if ( *v17 == 131586 )
        break;
      v20 = *v17 - 131592;
      if ( *v17 == 131592 )
      {
        *(_DWORD *)&v26[32] = 131592;
LABEL_41:
        v25[0] = 0LL;
LABEL_42:
        *v7 = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[48] = 8;
        SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3);
        if ( !SetMiniport )
          *v7 = v25[0];
        goto LABEL_44;
      }
      v25[0] = 0LL;
      v21 = v20 - 17;
      if ( !v21 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[32] = 131591;
        *(_DWORD *)&v26[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3) )
          *v7 = v25[0];
        v25[0] = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[32] = 131593;
        *(_DWORD *)&v26[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3) )
          *v7 += v25[0];
        *(_DWORD *)&v26[32] = 131595;
        goto LABEL_28;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[32] = 131585;
        *(_DWORD *)&v26[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3) )
          *v7 = v25[0];
        v25[0] = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[32] = 131587;
        *(_DWORD *)&v26[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3) )
          *v7 += v25[0];
        *(_DWORD *)&v26[32] = 131589;
        goto LABEL_28;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        *v7 = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[32] = 131332;
        *(_DWORD *)&v26[48] = 8;
        if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3) )
          *v7 = v25[0];
        *(_DWORD *)&v26[32] = 131333;
LABEL_28:
        v25[0] = 0LL;
        *(_QWORD *)&v26[40] = v25;
        *(_DWORD *)&v26[48] = 8;
        SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3);
        if ( !SetMiniport )
          *v7 += v25[0];
        goto LABEL_44;
      }
      if ( v23 != 1 )
      {
        *(_DWORD *)&v26[32] = v19;
        goto LABEL_42;
      }
      v24 = 2LL;
      do
      {
        *v7 = 0LL;
        --v24;
      }
      while ( v24 );
LABEL_44:
      ++v7;
      ++v17;
      if ( !--v18 )
        goto LABEL_9;
    }
    *(_DWORD *)&v26[32] = 131586;
    goto LABEL_41;
  }
  memset(v27, 0, 0x98uLL);
  *(_DWORD *)&v26[32] = 131334;
  *(_QWORD *)&v26[40] = v27;
  *(_DWORD *)&v26[48] = 152;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0LL, (__int64)a3);
  if ( !SetMiniport )
  {
    v9 = *(_OWORD *)&v27[3];
    *a2 = *(_OWORD *)&v27[1];
    v10 = *(_OWORD *)&v27[5];
    a2[1] = v9;
    v11 = *(_OWORD *)&v27[7];
    a2[2] = v10;
    v12 = *(_OWORD *)&v27[9];
    a2[3] = v11;
    v13 = *(_OWORD *)&v27[11];
    a2[4] = v12;
    v14 = *(_OWORD *)&v27[13];
    a2[5] = v13;
    v15 = *(_OWORD *)&v27[17];
    a2[6] = v14;
    a2[7] = *(_OWORD *)&v27[15];
    a2[8] = v15;
  }
LABEL_9:
  ndisDereferenceMiniportForNsi((__int64)a1, 3u, 0x3Bu);
LABEL_10:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(0x3Fu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3, SetMiniport);
  return 0LL;
}
