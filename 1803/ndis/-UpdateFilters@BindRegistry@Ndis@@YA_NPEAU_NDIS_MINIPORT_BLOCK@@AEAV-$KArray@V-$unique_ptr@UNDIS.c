/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C27D8
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00B83C0 (-CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C2864 (-UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$u.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C2950 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?append@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N$$QEAPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FC8D0 (-append@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N$$QEAPEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?reserve@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00FCAE4 (-reserve@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFilters(Ndis::BindRegistry *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v8; // di
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned __int64 i; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  char *v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  char updated; // al
  unsigned __int64 v25; // r9
  Ndis::BindState *v26; // rsi
  int m_bindSources; // r8d
  unsigned int v28; // edx
  char v29; // al
  unsigned __int16 v30; // cx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r10
  int v39; // r9d
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  Ndis::BindState *v43; // rsi
  __int64 v44; // rdx
  unsigned int v46; // eax
  int v47; // edx
  char v48; // al
  unsigned __int16 v49; // cx
  unsigned __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  Ndis::BindRegistry *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v58; // [rsp+78h] [rbp-88h]

  v56 = a1;
  v8 = 1;
  if ( (unsigned int)Ndis::BindRegistry::CheckRegistryForFilterBindLogicMode(a1) != 1 || (a4 & 1) != 0 )
    return Ndis::BindRegistry::UpdateFiltersFullStackRebind(a1, a2, a3, a4);
  v10 = *(unsigned int *)(a2 + 4);
  v11 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  P = 0LL;
  if ( !(unsigned __int8)Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::reserve(&v51, v10)
    || !(unsigned __int8)Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::reserve(&v53, *(unsigned int *)(a3 + 4)) )
  {
    if ( (unsigned __int8)byte_1C009961D >= 2u )
      WPP_SF_(0xEu, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids);
    updated = 0;
    goto LABEL_112;
  }
  v12 = *(unsigned int *)(a2 + 4);
  while ( v11 != v12 )
  {
    if ( v11 >= *(unsigned int *)(a2 + 4) )
      __fastfail(5u);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v11) + 80LL) + 40LL) & 0xC) != 0 )
    {
      v50 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v11);
      Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::append(&v51, &v50);
    }
    ++v11;
  }
  v13 = *(unsigned int *)(a3 + 4);
  for ( i = 0LL; i != v13; ++i )
  {
    if ( i >= *(unsigned int *)(a3 + 4) )
      __fastfail(5u);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * i) + 80LL) + 40LL) & 0xC) != 0 )
    {
      v50 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * i);
      Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::append(&v53, &v50);
    }
  }
  if ( HIDWORD(v51) != HIDWORD(v53) )
  {
LABEL_34:
    updated = Ndis::BindRegistry::UpdateFiltersFullStackRebind(a1, a2, a3, a4);
LABEL_112:
    v8 = updated;
    goto LABEL_113;
  }
  v15 = HIDWORD(v51);
  v16 = 0LL;
  if ( HIDWORD(v51) )
  {
    v17 = (char *)v52;
    do
    {
      if ( v16 >= HIDWORD(v53) )
        __fastfail(5u);
      if ( v16 >= v15 )
        __fastfail(5u);
      v18 = *(_QWORD *)&v17[(_BYTE *)P - (_BYTE *)v52];
      if ( *(_QWORD *)(*(_QWORD *)v17 + 80LL) != *(_QWORD *)(v18 + 80)
        || *(_DWORD *)(*(_QWORD *)v17 + 88LL) != *(_DWORD *)(v18 + 88) )
      {
        goto LABEL_34;
      }
      v15 = HIDWORD(v51);
      ++v16;
      v17 += 8;
    }
    while ( v16 < HIDWORD(v51) );
  }
  v19 = *(_DWORD *)(a2 + 4);
  v20 = 0LL;
  v21 = 0LL;
  if ( v19 )
  {
    while ( v20 < v15 )
    {
      if ( v21 >= v19 )
        __fastfail(5u);
      v22 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v21);
      v23 = *((_QWORD *)v52 + v20);
      if ( *(_QWORD *)(v22 + 80) != *(_QWORD *)(v23 + 80) || *(_DWORD *)(v22 + 88) != *(_DWORD *)(v23 + 88) )
        break;
      ++v20;
LABEL_59:
      v15 = HIDWORD(v51);
      if ( ++v21 >= v19 )
        goto LABEL_60;
    }
    if ( v21 >= v19 )
      __fastfail(5u);
    v25 = *(_QWORD *)(a2 + 8);
    v50 = v25;
    v26 = *(Ndis::BindState **)(v25 + 8 * v21);
    m_bindSources = v26->m_bindSources;
    v28 = m_bindSources & 0xFFFFFFFE;
    v26->m_bindSources = m_bindSources & 0xFFFFFFFE;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFE) != 0) )
    {
      v29 = 0;
      goto LABEL_54;
    }
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
    {
      WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v28);
      v28 = v26->m_bindSources;
    }
    if ( v28 )
    {
      if ( Ndis::BindState::SetBinding(v26, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v26->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v26,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_53;
      }
      v30 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v26, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_53;
      }
      v30 = 13;
    }
    WPP_SF_Zq(v30, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
LABEL_53:
    v25 = v50;
    v26->Miniport->BindEngine.m_isDirty = 1;
    v29 = 1;
LABEL_54:
    if ( v29 )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v25 + 8 * v21),
          (struct NDIS_PNPTRACE_LOCALS *)&v57);
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
          WPP_SF_Zq(0xFu, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v58, v57);
      }
    }
    v19 = *(_DWORD *)(a2 + 4);
    goto LABEL_59;
  }
LABEL_60:
  LODWORD(v31) = *(_DWORD *)(a3 + 4);
  v32 = 0LL;
  v33 = 0LL;
  v50 = 0LL;
  v34 = 0LL;
  if ( (_DWORD)v31 )
  {
    while ( 1 )
    {
      v35 = (unsigned int)v31;
      if ( v32 >= v15 )
        goto LABEL_82;
      if ( v34 >= (unsigned int)v31 )
        __fastfail(5u);
      v36 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v34);
      v37 = *((_QWORD *)v52 + v32);
      v38 = *(_QWORD *)(v37 + 80);
      if ( *(_QWORD *)(v36 + 80) == v38 && (v39 = *(_DWORD *)(v37 + 88), *(_DWORD *)(v36 + 88) == v39) )
      {
        v40 = 0LL;
        if ( *(_DWORD *)(a2 + 4) )
        {
          while ( 1 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v40);
            if ( *(_QWORD *)(v41 + 80) == v38 && *(_DWORD *)(v41 + 88) == v39 )
              break;
            if ( ++v40 >= *(unsigned int *)(a2 + 4) )
              goto LABEL_73;
          }
          v33 = v40;
        }
LABEL_73:
        v50 = v32 + 1;
      }
      else
      {
LABEL_82:
        if ( v33 < *(unsigned int *)(a2 + 4) )
        {
          v42 = *(_QWORD *)(a2 + 8);
          v55 = v42;
          v43 = *(Ndis::BindState **)(v42 + 8 * v33);
          if ( v34 >= v35 )
            __fastfail(5u);
          v44 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v34);
          if ( *(void **)(v44 + 80) == v43[1].m_AdditionalContext && *(_DWORD *)(v44 + 88) == v43[1].m_LastErrorCode )
          {
            v46 = v43->m_bindSources;
            v47 = v46 | 1;
            v43->m_bindSources = v46 | 1;
            if ( v46 )
            {
              v48 = 0;
LABEL_99:
              if ( v48 )
              {
                if ( (unsigned __int8)byte_1C0099623 >= 4u )
                {
                  ndisGetBindLinkNameForTracing(
                    *(struct NDIS_BIND_FILTER_LINK **)(v42 + 8 * v33),
                    (struct NDIS_PNPTRACE_LOCALS *)&v57);
                  if ( (unsigned __int8)byte_1C0099623 >= 4u )
                    WPP_SF_Zq(0x10u, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v58, v57);
                }
              }
              goto LABEL_74;
            }
            if ( (unsigned __int8)byte_1C0099623 >= 5u )
            {
              WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v47);
              v47 = v43->m_bindSources;
            }
            if ( v47 )
            {
              if ( Ndis::BindState::SetBinding(v43, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
                && (unsigned __int8)byte_1C0099623 >= 4u )
              {
                WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v43->m_bindSources, 0LL, 0LL);
              }
              if ( Ndis::BindState::SetBinding(
                     v43,
                     BindingEnabled,
                     Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
                && (unsigned __int8)byte_1C0099623 >= 4u )
              {
                v49 = 12;
                goto LABEL_97;
              }
            }
            else if ( Ndis::BindState::SetBinding(v43, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                   && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              v49 = 13;
LABEL_97:
              WPP_SF_Zq(v49, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
            }
            v42 = v55;
            v43->Miniport->BindEngine.m_isDirty = 1;
            v48 = 1;
            goto LABEL_99;
          }
        }
        if ( v34 >= v35 )
          __fastfail(5u);
        updated = Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
                    v56,
                    a2,
                    v33,
                    *(_QWORD *)(a3 + 8) + 8 * v34);
        if ( !updated )
          goto LABEL_112;
      }
LABEL_74:
      v31 = *(unsigned int *)(a3 + 4);
      ++v33;
      if ( ++v34 >= v31 )
        break;
      v32 = v50;
      v15 = HIDWORD(v51);
    }
  }
LABEL_113:
  if ( P )
    ExFreePoolWithTag(P, 0x7272414Bu);
  if ( v52 )
    ExFreePoolWithTag(v52, 0x7272414Bu);
  return v8;
}
