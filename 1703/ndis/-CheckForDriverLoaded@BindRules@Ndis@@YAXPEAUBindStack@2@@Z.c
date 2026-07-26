/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B4B7C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r8d
  char v8; // al
  int v9; // r15d
  __int64 j; // rdi
  __int64 v11; // r14
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // r8d
  bool v15; // cf
  unsigned __int16 v16; // cx
  _QWORD v17[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 5);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 80) + 8LL) )
    {
      v7 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFFFFD;
      if ( (v7 != 0) == ((v7 & 0xFFFFFFFD) != 0) && *(_QWORD *)v6 )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
        v8 = 1;
      }
      if ( v8 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v17);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v16 = 15;
LABEL_35:
            WPP_SF_Zq(v16, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v17[1], v17[0]);
            continue;
          }
        }
      }
    }
    else if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v5 + 8 * i), BindingDisabled, Reason_DriverNotReady)
           && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v17);
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
      {
        v16 = 16;
        goto LABEL_35;
      }
    }
  }
  v9 = *((_DWORD *)this + 1);
  for ( j = 0LL; (_DWORD)j != v9; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v11 = *((_QWORD *)this + 1);
    v12 = 0;
    v13 = *(_QWORD *)(v11 + 8 * j);
    v14 = *(_DWORD *)(v13 + 32);
    if ( *(_BYTE *)(*(_QWORD *)(v13 + 80) + 8LL) )
    {
      *(_DWORD *)(v13 + 32) = v14 & 0xFFFFFFFD;
      LOBYTE(v12) = (v14 & 0xFFFFFFFD) != 0;
      if ( (v14 != 0) != v12 || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 & 0xFFFFFFFD);
        v15 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5240LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x11u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
    else
    {
      *(_DWORD *)(v13 + 32) = v14 | 2;
      LOBYTE(v12) = 1;
      if ( (v14 != 0) != v12 || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 | 2);
        v15 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5240LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x12u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
}
