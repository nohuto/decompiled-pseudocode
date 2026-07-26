/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B4E90
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

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r15d
  __int64 j; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // r8d
  char v13; // al
  bool v14; // cf
  _QWORD v15[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 5);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
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
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFFFDFFF);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v13 = 1;
      }
      if ( v13 && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v15);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
          WPP_SF_Zq(0xAu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v15[1], v15[0]);
      }
    }
  }
  v7 = *((_DWORD *)this + 1);
  for ( j = 0LL; (_DWORD)j != v7; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v9 = *((_QWORD *)this + 1);
    v10 = *(_QWORD *)(v9 + 8 * j);
    if ( !*(_BYTE *)(v10 + 9) && !*(_DWORD *)(v10 + 52) )
    {
      v11 = *(_DWORD *)(v10 + 32);
      *(_DWORD *)(v10 + 32) = v11 & 0xFFFFDFFF;
      if ( (v11 != 0) != ((v11 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v10 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFFDFFF);
        v14 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v10 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0xBu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v9 + 8 * j));
      }
    }
  }
}
