/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B449C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C0078070 (WPP_SF__guid_D_ea_1C0078070.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  int v3; // r14d
  __int64 i; // rbp
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  int v9; // ecx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r14
  _DWORD *v17; // rdi
  int v18; // r8d
  char v19; // al
  bool v20; // cf
  unsigned __int16 v21; // cx
  _QWORD v22[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = 0;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      v8 = v7[8];
      v9 = 0;
      if ( v3 )
      {
        v7[8] = v8 | 0x20;
        LOBYTE(v9) = 1;
        if ( (v8 != 0) == v9 && *(_QWORD *)v7 )
        {
          v19 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 | 0x20);
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v19 = 1;
        }
        if ( v19 )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v22);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
            {
              v21 = 30;
LABEL_52:
              WPP_SF_Zq(v21, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v22[1], v22[0]);
            }
          }
        }
      }
      else
      {
        v7[8] = v8 & 0xFFFFFFDF;
        LOBYTE(v9) = (v8 & 0xFFFFFFDF) != 0;
        if ( (v8 != 0) == v9 && *(_QWORD *)v7 )
        {
          v10 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFFDF);
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v10 = 1;
        }
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v22);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
            {
              v21 = 29;
              goto LABEL_52;
            }
          }
        }
      }
      v11 = *(_QWORD *)(v6 + 8 * i);
      v12 = *(_QWORD *)(v11 + 80);
      if ( (*(_DWORD *)(v12 + 48) & 1) == 0 && *(_DWORD *)(v11 + 28) && *(_DWORD *)(v11 + 32) && !*(_BYTE *)(v11 + 8) )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF__guid_D(0x1Fu, v11, v12 + 32, *(_DWORD *)(v11 + 88));
        v3 = 1;
      }
      continue;
    }
  }
  v13 = *((_DWORD *)this + 1);
  v14 = 0LL;
  v15 = v3;
  while ( (_DWORD)v14 != v13 )
  {
    if ( (unsigned int)v14 >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v16 = *((_QWORD *)this + 1);
    v17 = *(_DWORD **)(v16 + 8 * v14);
    v18 = v17[8];
    if ( v15 )
    {
      v17[8] = v18 | 0x20;
      if ( v18 == 0 || !*(_QWORD *)v17 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 | 0x20);
        v20 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v17 + 5240LL) = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0x21u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v14) + 80LL) + 32LL),
            **(_QWORD **)(v16 + 8 * v14));
      }
    }
    else
    {
      v17[8] = v18 & 0xFFFFFFDF;
      if ( (v18 != 0) != ((v18 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v17 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 & 0xFFFFFFDF);
        v20 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v17 + 5240LL) = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0x20u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v14) + 80LL) + 32LL),
            **(_QWORD **)(v16 + 8 * v14));
      }
    }
    v14 = (unsigned int)(v14 + 1);
  }
}
