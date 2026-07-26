/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BC5C4
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  int v9; // r9d
  char v10; // al
  __int64 v11; // rbp
  unsigned __int64 j; // rdi
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  int v15; // r8d
  int v16; // r9d
  int v17; // r9d
  bool v18; // cf
  int v19; // r9d
  char v20; // al
  unsigned __int16 v21; // cx
  _QWORD v22[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v3; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = v7[8];
    if ( v2 )
    {
      v7[8] = v8 | 0x20000;
      v19 = v7[8];
      if ( (v8 != 0) == (v19 != 0) && *(_QWORD *)v7 )
      {
        v20 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v19);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v20 = 1;
      }
      if ( v20 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v22);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v21 = 59;
            goto LABEL_41;
          }
        }
      }
    }
    else
    {
      v7[8] = v8 & 0xFFFDFFFF;
      v9 = v7[8];
      if ( (v8 != 0) == (v9 != 0) && *(_QWORD *)v7 )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v9);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v10 = 1;
      }
      if ( v10 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v22);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v21 = 58;
LABEL_41:
            WPP_SF_Zq(v21, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v22[1], v22[0]);
            continue;
          }
        }
      }
    }
  }
  v11 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v11; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * j);
    v15 = v14[8];
    if ( v2 )
    {
      v14[8] = v15 | 0x20000;
      v17 = v14[8];
      if ( (v15 != 0) != (v17 != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v17);
        v18 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x3Du,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
    else
    {
      v14[8] = v15 & 0xFFFDFFFF;
      v16 = v14[8];
      if ( (v15 != 0) != (v16 != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v16);
        v18 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x3Cu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
  }
}
