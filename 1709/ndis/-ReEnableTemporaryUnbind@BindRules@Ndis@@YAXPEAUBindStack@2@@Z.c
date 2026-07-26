/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD728
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

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 j; // rbx
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r8d
  char v13; // al
  bool v14; // cf
  _QWORD v15[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( !*(_BYTE *)(v6 + 9) && !*(_DWORD *)(v6 + 52) )
    {
      v12 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v12 & 0xFFFFDFFF;
      if ( (v12 != 0) == ((v12 & 0xFFFFDFFF) != 0) && *(_QWORD *)v6 )
      {
        v13 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFFFDFFF);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v13 = 1;
      }
      if ( v13 && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v15);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
          WPP_SF_Zq(0xAu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v15[1], v15[0]);
      }
    }
  }
  v7 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v7; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v9 = *((_QWORD *)this + 1);
    v10 = *(_QWORD *)(v9 + 8 * j);
    if ( !*(_BYTE *)(v10 + 9) && !*(_DWORD *)(v10 + 52) )
    {
      v11 = *(_DWORD *)(v10 + 32);
      *(_DWORD *)(v10 + 32) = v11 & 0xFFFFDFFF;
      if ( (v11 != 0) != ((v11 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v10 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFFDFFF);
        v14 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v10 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0xBu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v9 + 8 * j));
      }
    }
  }
}
