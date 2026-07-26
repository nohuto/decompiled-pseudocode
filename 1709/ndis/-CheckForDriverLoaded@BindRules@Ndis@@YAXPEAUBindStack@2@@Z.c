/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD41C
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r8d
  char v8; // al
  __int64 v9; // r14
  unsigned __int64 j; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // r8d
  bool v14; // cf
  unsigned __int16 v15; // cx
  _QWORD v16[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( **(_BYTE **)(v6 + 80) )
    {
      v7 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFFFFD;
      if ( (v7 != 0) == ((v7 & 0xFFFFFFFD) != 0) && *(_QWORD *)v6 )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v8 = 1;
      }
      if ( v8 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v16);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v15 = 15;
LABEL_35:
            WPP_SF_Zq(v15, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v16[1], v16[0]);
            continue;
          }
        }
      }
    }
    else if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v5 + 8 * i), BindingDisabled, Reason_DriverNotReady)
           && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
      {
        v15 = 16;
        goto LABEL_35;
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v11 = *((_QWORD *)this + 1);
    v12 = *(_QWORD *)(v11 + 8 * j);
    v13 = *(_DWORD *)(v12 + 32);
    if ( **(_BYTE **)(v12 + 80) )
    {
      *(_DWORD *)(v12 + 32) = v13 & 0xFFFFFFFD;
      if ( (v13 != 0) != ((v13 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v12 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13, v13 & 0xFFFFFFFD);
        v14 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0x11u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
    else
    {
      *(_DWORD *)(v12 + 32) = v13 | 2;
      if ( !v13 || !*(_QWORD *)v12 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13, v13 | 2);
        v14 = (unsigned __int8)byte_1C0098763 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5240LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0x12u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
}
