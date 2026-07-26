/*
 * XREFs of ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C2864
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C27D8 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C2950 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFiltersFullStackRebind(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v15; // r14
  Ndis::BindState *v16; // rbx
  unsigned int v17; // eax
  int v18; // edx
  char v19; // al
  unsigned __int16 v20; // cx
  __int64 v21; // r14
  Ndis::BindState *v22; // rbx
  int v23; // r8d
  unsigned int v24; // edx
  char v25; // al
  unsigned __int16 v26; // cx
  __int64 v27; // rsi
  Ndis::BindState *v28; // rbx
  int m_bindSources; // r8d
  unsigned int v30; // edx
  char v31; // al
  unsigned __int16 v32; // cx
  __int64 v34; // [rsp+38h] [rbp-A1h]
  __int64 v36; // [rsp+50h] [rbp-89h] BYREF
  const wchar_t *v37; // [rsp+58h] [rbp-81h]

  v4 = *(unsigned int *)(a3 + 4);
  v5 = 0LL;
  v6 = 0LL;
  v34 = v4;
  v9 = a1;
  while ( 1 )
  {
    if ( v6 == v4 )
    {
      if ( (a4 & 1) != 0 )
        return 1;
      v13 = *(unsigned int *)(a2 + 4);
      if ( v5 >= v13 )
        return 1;
      while ( 1 )
      {
        if ( v5 >= v13 )
          __fastfail(5u);
        v27 = *(_QWORD *)(a2 + 8);
        v28 = *(Ndis::BindState **)(v27 + 8 * v5);
        m_bindSources = v28->m_bindSources;
        v30 = m_bindSources & 0xFFFFFFFE;
        v28->m_bindSources = m_bindSources & 0xFFFFFFFE;
        if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFE) != 0) )
        {
          v31 = 0;
          goto LABEL_82;
        }
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
        {
          WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v30);
          v30 = v28->m_bindSources;
        }
        if ( v30 )
        {
          if ( Ndis::BindState::SetBinding(v28, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v28->m_bindSources, 0LL, 0LL);
          }
          if ( !Ndis::BindState::SetBinding(
                  v28,
                  BindingEnabled,
                  Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            || (unsigned __int8)byte_1C0099623 < 4u )
          {
            goto LABEL_81;
          }
          v32 = 12;
        }
        else
        {
          if ( !Ndis::BindState::SetBinding(v28, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
            || (unsigned __int8)byte_1C0099623 < 4u )
          {
            goto LABEL_81;
          }
          v32 = 13;
        }
        WPP_SF_Zq(v32, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
LABEL_81:
        v28->Miniport->BindEngine.m_isDirty = 1;
        v31 = 1;
LABEL_82:
        if ( v31 )
        {
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v27 + 8 * v5),
              (struct NDIS_PNPTRACE_LOCALS *)&v36);
            if ( (unsigned __int8)byte_1C0099623 >= 4u )
              WPP_SF_Zq(0x13u, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v37, v36);
          }
        }
        v13 = *(unsigned int *)(a2 + 4);
        if ( ++v5 >= v13 )
          return 1;
      }
    }
    if ( v6 >= *(unsigned int *)(a3 + 4) )
      __fastfail(5u);
    v10 = v5;
    v11 = *(unsigned int *)(a2 + 4);
    v12 = *(_QWORD *)(a3 + 8) + 8 * v6;
    if ( v5 >= v11 )
      break;
    while ( 1 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      v16 = *(Ndis::BindState **)(v15 + 8 * v10);
      if ( *(void **)(*(_QWORD *)v12 + 80LL) == v16[1].m_AdditionalContext
        && *(_DWORD *)(*(_QWORD *)v12 + 88LL) == v16[1].m_LastErrorCode )
      {
        break;
      }
      if ( ++v10 >= v11 )
        goto LABEL_5;
    }
    v17 = v16->m_bindSources;
    v18 = v17 | 1;
    v16->m_bindSources = v17 | 1;
    if ( !v17 )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
      {
        WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v18);
        v18 = v16->m_bindSources;
      }
      if ( v18 )
      {
        if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v16->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               v16,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          v20 = 12;
          goto LABEL_31;
        }
      }
      else if ( Ndis::BindState::SetBinding(v16, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        v20 = 13;
LABEL_31:
        WPP_SF_Zq(v20, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
      }
      v16->Miniport->BindEngine.m_isDirty = 1;
      v19 = 1;
      goto LABEL_33;
    }
    v19 = 0;
LABEL_33:
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v15 + 8 * v10),
          (struct NDIS_PNPTRACE_LOCALS *)&v36);
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
          WPP_SF_Zq(0x11u, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v37, v36);
      }
    }
    if ( (a4 & 1) == 0 )
    {
      while ( 1 )
      {
        if ( v5 >= v10 )
          goto LABEL_7;
        if ( v5 >= *(unsigned int *)(a2 + 4) )
          __fastfail(5u);
        v21 = *(_QWORD *)(a2 + 8);
        v22 = *(Ndis::BindState **)(v21 + 8 * v5);
        v23 = v22->m_bindSources;
        v24 = v23 & 0xFFFFFFFE;
        v22->m_bindSources = v23 & 0xFFFFFFFE;
        if ( (v23 != 0) != ((v23 & 0xFFFFFFFE) != 0) )
          break;
        v25 = 0;
LABEL_56:
        if ( v25 && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v21 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v36);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
            WPP_SF_Zq(0x12u, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v37, v36);
        }
        ++v5;
      }
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
      {
        WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v23, v24);
        v24 = v22->m_bindSources;
      }
      if ( v24 )
      {
        if ( Ndis::BindState::SetBinding(v22, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v22->m_bindSources, 0LL, 0LL);
        }
        if ( !Ndis::BindState::SetBinding(
                v22,
                BindingEnabled,
                Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          || (unsigned __int8)byte_1C0099623 < 4u )
        {
          goto LABEL_55;
        }
        v26 = 12;
      }
      else
      {
        if ( !Ndis::BindState::SetBinding(v22, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
          || (unsigned __int8)byte_1C0099623 < 4u )
        {
          goto LABEL_55;
        }
        v26 = 13;
      }
      WPP_SF_Zq(v26, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
LABEL_55:
      v22->Miniport->BindEngine.m_isDirty = 1;
      v25 = 1;
      goto LABEL_56;
    }
LABEL_7:
    v4 = v34;
    v5 = v10 + 1;
    v9 = a1;
    ++v6;
  }
LABEL_5:
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v9, a2, v5, v12) )
  {
    v10 = v5;
    goto LABEL_7;
  }
  return 0;
}
