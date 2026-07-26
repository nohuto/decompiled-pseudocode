/*
 * XREFs of ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B46E4
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

void __fastcall Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  int v3; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  _DWORD *v6; // rsi
  int v7; // r8d
  char v8; // al
  int v9; // r14d
  __int64 j; // rdi
  __int64 v11; // r15
  _DWORD *v12; // rsi
  int v13; // r8d
  bool v14; // cf
  _QWORD v15[20]; // [rsp+20h] [rbp-C8h] BYREF

  if ( *((_DWORD *)this + 16) )
  {
    v3 = *((_DWORD *)this + 5);
    for ( i = 0LL; (_DWORD)i != v3; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *((_DWORD *)this + 5) )
        __fastfail(0xBAD0FFu);
      v5 = *((_QWORD *)this + 3);
      v6 = *(_DWORD **)(v5 + 8 * i);
      v7 = v6[8];
      v6[8] = v7 & 0xFFFBFFE3;
      if ( (v7 != 0) == ((v7 & 0xFFFBFFE3) != 0) && *(_QWORD *)v6 )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFBFFE3);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v8 = 1;
      }
      if ( v8 && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v15);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
          WPP_SF_Zq(0x19u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v15[1], v15[0]);
      }
    }
    v9 = *((_DWORD *)this + 1);
    for ( j = 0LL; (_DWORD)j != v9; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= *((_DWORD *)this + 1) )
        __fastfail(0xBAD0FFu);
      v11 = *((_QWORD *)this + 1);
      v12 = *(_DWORD **)(v11 + 8 * j);
      v13 = v12[8];
      v12[8] = v13 & 0xFFFBFFE3;
      if ( (v13 != 0) != ((v13 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v12 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13, v13 & 0xFFFBFFE3);
        v14 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0x1Au,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
}
