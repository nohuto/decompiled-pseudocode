/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B4D18
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(Ndis::BindRules *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // r12d
  const wchar_t *v3; // rbx
  char v4; // dl
  unsigned int i; // ebp
  __int64 v7; // r15
  _DWORD *v8; // rsi
  int v9; // r8d
  char v10; // al
  int v11; // r12d
  unsigned int j; // esi
  __int64 v13; // r15
  _DWORD *v14; // r14
  int v15; // r8d
  int v16; // r8d
  _QWORD v17[20]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_DWORD *)this + 1263);
  v3 = 0LL;
  v4 = byte_1C0092623;
  for ( i = 0; i != v2; ++i )
  {
    if ( i >= (unsigned __int64)*((unsigned int *)this + 1263) )
      __fastfail(0xBAD0FFu);
    v7 = *((_QWORD *)this + 632);
    v8 = *(_DWORD **)(v7 + 8LL * i);
    if ( !v8[10] )
    {
      v9 = v8[9];
      v8[9] = v9 & 0xFFFFFFDF;
      if ( (v9 != 0) == ((v9 & 0xFFFFFFDF) != 0) && *(_QWORD *)v8 )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)v4 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v9, v9 & 0xFFFFFFDF);
          v4 = byte_1C0092623;
        }
        *(_BYTE *)(*(_QWORD *)v8 + 5240LL) = 1;
        v10 = 1;
      }
      if ( v10 && (unsigned __int8)v4 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8LL * i),
          (struct NDIS_PNPTRACE_LOCALS *)v17);
        v4 = byte_1C0092623;
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_Zq(0xCu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v17[1], v17[0]);
          v4 = byte_1C0092623;
        }
      }
    }
  }
  v11 = *((_DWORD *)this + 1259);
  for ( j = 0; j != v11; ++j )
  {
    if ( j >= (unsigned __int64)*((unsigned int *)this + 1259) )
      __fastfail(0xBAD0FFu);
    v13 = *((_QWORD *)this + 630);
    v14 = *(_DWORD **)(v13 + 8LL * j);
    if ( !v14[10] )
    {
      v15 = v14[9];
      v14[9] = v15 & 0xFFFFFFDF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)v4 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v15 & 0xFFFFFFDF);
          v4 = byte_1C0092623;
        }
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( (unsigned __int8)v4 >= 4u )
        {
          WPP_SF_Zq(
            0xDu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8LL * j) + 80LL) + 32LL),
            **(_QWORD **)(v13 + 8LL * j));
          v4 = byte_1C0092623;
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 1276) )
  {
    v16 = *((_DWORD *)this + 1275);
    *((_DWORD *)this + 1275) = v16 & 0xFFFFFFDF;
    if ( (v16 != 0) != ((v16 & 0xFFFFFFDF) != 0) || !*((_QWORD *)this + 633) )
    {
      if ( (unsigned __int8)v4 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v16 & 0xFFFFFFDF);
        v4 = byte_1C0092623;
      }
      *(_BYTE *)(*((_QWORD *)this + 633) + 5240LL) = 1;
      if ( (unsigned __int8)v4 >= 4u )
      {
        if ( this )
          v3 = (const wchar_t *)*((_QWORD *)this + 485);
        WPP_SF_Zq(0xEu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v3, this);
      }
    }
  }
}
