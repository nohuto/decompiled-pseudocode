/*
 * XREFs of ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDA20
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v3; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  _DWORD *v6; // rsi
  int v7; // r8d
  char v8; // al
  __int64 v9; // rbp
  unsigned __int64 j; // rbx
  __int64 v11; // r14
  _DWORD *v12; // rsi
  int v13; // r8d
  bool v14; // cf
  _QWORD v15[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( *((_DWORD *)this + 16) )
  {
    v3 = *((unsigned int *)this + 5);
    for ( i = 0LL; i != v3; ++i )
    {
      if ( i >= *((unsigned int *)this + 5) )
        __fastfail(5u);
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
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFBFFE3);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v8 = 1;
      }
      if ( v8 && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v15);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
          WPP_SF_Zq(0x19u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v15[1], v15[0]);
      }
    }
    v9 = *((unsigned int *)this + 1);
    for ( j = 0LL; j != v9; ++j )
    {
      if ( j >= *((unsigned int *)this + 1) )
        __fastfail(5u);
      v11 = *((_QWORD *)this + 1);
      v12 = *(_DWORD **)(v11 + 8 * j);
      v13 = v12[8];
      v12[8] = v13 & 0xFFFBFFE3;
      if ( (v13 != 0) != ((v13 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v12 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13, v13 & 0xFFFBFFE3);
        v14 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0x1Au,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
}
