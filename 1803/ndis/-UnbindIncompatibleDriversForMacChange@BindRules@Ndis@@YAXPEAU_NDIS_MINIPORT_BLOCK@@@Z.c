/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE0D0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  char v11; // al
  _DWORD *v12; // rdi
  int v13; // r8d
  char v14; // al
  __int64 v15; // rbp
  unsigned __int64 j; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  char v23; // al
  _DWORD *v24; // rdi
  int v25; // r8d
  bool v26; // cf
  _QWORD v27[20]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v28[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 1263);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1263) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 632);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 56LL);
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
        goto LABEL_35;
      _m_prefetchw((char *)this + 4456);
      v9 = *((_DWORD *)this + 1114);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x40) != 0 && (*(_DWORD *)(v6 + 48) & 4) == 0 )
LABEL_35:
        v11 = 1;
      else
        v11 = 0;
      v12 = *(_DWORD **)(v5 + 8 * i);
      if ( v11 )
      {
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v5 + 8 * i),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v27);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
            WPP_SF_Zq(0x15u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v27[1], v27[0]);
        }
      }
      else
      {
        v13 = v12[8];
        v12[8] = v13 & 0xFFBFFFFF;
        if ( (v13 != 0) == ((v13 & 0xFFBFFFFF) != 0) && *(_QWORD *)v12 )
        {
          v14 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0099623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v13, v13 & 0xFFBFFFFF);
          *(_BYTE *)(*(_QWORD *)v12 + 5240LL) = 1;
          v14 = 1;
        }
        if ( v14 && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v28);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
            WPP_SF_Zq(0x16u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v28[1], v28[0]);
        }
      }
    }
  }
  v15 = *((unsigned int *)this + 1259);
  for ( j = 0LL; j != v15; ++j )
  {
    if ( j >= *((unsigned int *)this + 1259) )
      __fastfail(5u);
    v17 = *((_QWORD *)this + 630);
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * j) + 80LL) + 40LL);
    if ( v18 )
    {
      _m_prefetchw((char *)this + 4456);
      v19 = *((_DWORD *)this + 1114);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v19, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x20) != 0 && (*(_DWORD *)(v18 + 64) & 2) == 0 )
        goto LABEL_51;
      _m_prefetchw((char *)this + 4456);
      v21 = *((_DWORD *)this + 1114);
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1114, v21, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x40) != 0 && (*(_DWORD *)(v18 + 64) & 4) == 0 )
LABEL_51:
        v23 = 1;
      else
        v23 = 0;
      v24 = *(_DWORD **)(v17 + 8 * j);
      if ( v23 )
      {
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v17 + 8 * j),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          WPP_SF_Zq(
            0x17u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v17 + 8 * j));
        }
      }
      else
      {
        v25 = v24[8];
        v24[8] = v25 & 0xFFBFFFFF;
        if ( (v25 != 0) != ((v25 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v24 )
        {
          if ( (unsigned __int8)byte_1C0099623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v25, v25 & 0xFFBFFFFF);
          v26 = (unsigned __int8)byte_1C0099623 < 4u;
          *(_BYTE *)(*(_QWORD *)v24 + 5240LL) = 1;
          if ( !v26 )
            WPP_SF_Zq(
              0x18u,
              &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * j) + 80LL) + 24LL),
              **(_QWORD **)(v17 + 8 * j));
        }
      }
    }
  }
}
