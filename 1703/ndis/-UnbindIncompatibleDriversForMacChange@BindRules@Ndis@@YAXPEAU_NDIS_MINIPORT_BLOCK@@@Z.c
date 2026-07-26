/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B48D0
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

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // r15d
  __int64 i; // rbp
  __int64 v5; // r14
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  _DWORD *v11; // rdi
  int v12; // r8d
  char v13; // al
  int v14; // r15d
  __int64 j; // rbp
  __int64 v16; // r14
  __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  _DWORD *v22; // rdi
  int v23; // r8d
  char v24; // cl
  _QWORD v25[20]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v26[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 1263);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 1263) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 632);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 64LL);
    if ( v6 )
    {
      _m_prefetchw((char *)this + 4456);
      v7 = *((_DWORD *)this + 1114);
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v7, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x20) != 0 && (*(_DWORD *)(v6 + 48) & 2) == 0 )
        goto LABEL_59;
      _m_prefetchw((char *)this + 4456);
      v9 = *((_DWORD *)this + 1114);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x40) == 0 || (*(_DWORD *)(v6 + 48) & 4) != 0 )
      {
        v11 = *(_DWORD **)(v5 + 8 * i);
        v12 = v11[8];
        v11[8] = v12 & 0xFFBFFFFF;
        if ( (v12 != 0) == ((v12 & 0xFFBFFFFF) != 0) && *(_QWORD *)v11 )
        {
          v13 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFBFFFFF);
          *(_BYTE *)(*(_QWORD *)v11 + 5240LL) = 1;
          v13 = 1;
        }
        if ( v13 && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v26);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
            WPP_SF_Zq(0x16u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v26[1], v26[0]);
        }
      }
      else
      {
LABEL_59:
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v5 + 8 * i),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v25);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
            WPP_SF_Zq(0x15u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v25[1], v25[0]);
        }
      }
    }
  }
  v14 = *((_DWORD *)this + 1259);
  for ( j = 0LL; (_DWORD)j != v14; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1259) )
      __fastfail(0xBAD0FFu);
    v16 = *((_QWORD *)this + 630);
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * j) + 80LL) + 48LL);
    if ( v17 )
    {
      _m_prefetchw((char *)this + 4456);
      v18 = *((_DWORD *)this + 1114);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v18, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x20) != 0 && (*(_DWORD *)(v17 + 64) & 2) == 0 )
        goto LABEL_49;
      _m_prefetchw((char *)this + 4456);
      v20 = *((_DWORD *)this + 1114);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v20, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x40) == 0 || (*(_DWORD *)(v17 + 64) & 4) != 0 )
      {
        v22 = *(_DWORD **)(v16 + 8 * j);
        v23 = v22[8];
        v22[8] = v23 & 0xFFBFFFFF;
        if ( (v23 != 0) != ((v23 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v22 )
        {
          v24 = byte_1C0092623;
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
          {
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v23, v23 & 0xFFBFFFFF);
            v24 = byte_1C0092623;
          }
          *(_BYTE *)(*(_QWORD *)v22 + 5240LL) = 1;
          if ( (unsigned __int8)v24 >= 4u )
            WPP_SF_Zq(
              0x18u,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * j) + 80LL) + 32LL),
              **(_QWORD **)(v16 + 8 * j));
        }
      }
      else
      {
LABEL_49:
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v16 + 8 * j),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_Zq(
            0x17u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v16 + 8 * j));
        }
      }
    }
  }
}
