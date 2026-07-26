/*
 * XREFs of ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AA1B0
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BE674 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFiltersFullStackRebind(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  bool v12; // cf
  __int64 v13; // r9
  __int64 v14; // r14
  Ndis::BindState *v15; // rbx
  unsigned int v16; // r8d
  char v17; // al
  unsigned __int16 v18; // cx
  __int64 v19; // r14
  Ndis::BindState *v20; // rbx
  int v21; // r8d
  char v22; // al
  unsigned __int16 v23; // cx
  __int64 v25; // rsi
  Ndis::BindState *v26; // rbx
  int m_bindSources; // r8d
  char v28; // al
  unsigned __int16 v29; // cx
  __int64 v31; // [rsp+38h] [rbp-A1h]
  __int64 v33; // [rsp+50h] [rbp-89h] BYREF
  const wchar_t *v34; // [rsp+58h] [rbp-81h]

  v4 = *(unsigned int *)(a3 + 4);
  v5 = 0LL;
  v6 = 0LL;
  v31 = v4;
  v9 = a1;
  while ( 1 )
  {
    if ( v6 == v4 )
    {
      if ( (a4 & 1) != 0 || v5 >= *(unsigned int *)(a2 + 4) )
        return 1;
      while ( 1 )
      {
        v25 = *(_QWORD *)(a2 + 8);
        v26 = *(Ndis::BindState **)(v25 + 8 * v5);
        m_bindSources = v26->m_bindSources;
        v26->m_bindSources = m_bindSources & 0xFFFFFFFE;
        if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFE) != 0) )
        {
          v28 = 0;
          goto LABEL_81;
        }
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFE);
        if ( v26->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v26, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v26->m_bindSources, 0LL, 0LL);
          }
          if ( !Ndis::BindState::SetBinding(
                  v26,
                  BindingEnabled,
                  Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            || (unsigned __int8)byte_1C0098763 < 4u )
          {
            goto LABEL_80;
          }
          v29 = 12;
        }
        else
        {
          if ( !Ndis::BindState::SetBinding(v26, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
            || (unsigned __int8)byte_1C0098763 < 4u )
          {
            goto LABEL_80;
          }
          v29 = 13;
        }
        WPP_SF_Zq(v29, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_80:
        v26->Miniport->BindEngine.m_isDirty = 1;
        v28 = 1;
LABEL_81:
        if ( v28 )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v25 + 8 * v5),
              (struct NDIS_PNPTRACE_LOCALS *)&v33);
            if ( (unsigned __int8)byte_1C0098763 >= 4u )
              WPP_SF_Zq(0x13u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, v34, v33);
          }
        }
        if ( ++v5 >= *(unsigned int *)(a2 + 4) )
          return 1;
      }
    }
    if ( v6 >= *(unsigned int *)(a3 + 4) )
      __fastfail(5u);
    v10 = v5;
    v11 = *(unsigned int *)(a2 + 4);
    v12 = v5 < v11;
    v13 = *(_QWORD *)(a3 + 8) + 8 * v6;
LABEL_5:
    if ( !v12 )
      break;
    if ( v10 >= v11 )
      __fastfail(5u);
    v14 = *(_QWORD *)(a2 + 8);
    v15 = *(Ndis::BindState **)(v14 + 8 * v10);
    if ( *(void **)(*(_QWORD *)v13 + 80LL) != v15[1].m_AdditionalContext
      || *(_DWORD *)(*(_QWORD *)v13 + 88LL) != v15[1].m_LastErrorCode )
    {
      v12 = ++v10 < v11;
      goto LABEL_5;
    }
    v16 = v15->m_bindSources;
    v15->m_bindSources = v16 | 1;
    if ( !v16 )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0, v16 | 1);
      if ( v15->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v15, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               v15,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          v18 = 12;
          goto LABEL_24;
        }
      }
      else if ( Ndis::BindState::SetBinding(v15, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        v18 = 13;
LABEL_24:
        WPP_SF_Zq(v18, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
      }
      v15->Miniport->BindEngine.m_isDirty = 1;
      v17 = 1;
      goto LABEL_26;
    }
    v17 = 0;
LABEL_26:
    if ( v17 )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v14 + 8 * v10),
          (struct NDIS_PNPTRACE_LOCALS *)&v33);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
          WPP_SF_Zq(0x11u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, v34, v33);
      }
    }
    if ( (a4 & 1) == 0 )
    {
      while ( v5 < v10 )
      {
        if ( v5 >= *(unsigned int *)(a2 + 4) )
          __fastfail(5u);
        v19 = *(_QWORD *)(a2 + 8);
        v20 = *(Ndis::BindState **)(v19 + 8 * v5);
        v21 = v20->m_bindSources;
        v20->m_bindSources = v21 & 0xFFFFFFFE;
        if ( (v21 != 0) == ((v21 & 0xFFFFFFFE) != 0) )
        {
          v22 = 0;
          goto LABEL_49;
        }
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v21, v21 & 0xFFFFFFFE);
        if ( v20->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v20, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v20->m_bindSources, 0LL, 0LL);
          }
          if ( Ndis::BindState::SetBinding(
                 v20,
                 BindingEnabled,
                 Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v23 = 12;
            goto LABEL_47;
          }
        }
        else if ( Ndis::BindState::SetBinding(v20, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
               && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          v23 = 13;
LABEL_47:
          WPP_SF_Zq(v23, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
        }
        v20->Miniport->BindEngine.m_isDirty = 1;
        v22 = 1;
LABEL_49:
        if ( v22 && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v19 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v33);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
            WPP_SF_Zq(0x12u, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, v34, v33);
        }
        ++v5;
        continue;
      }
    }
LABEL_58:
    v4 = v31;
    v5 = v10 + 1;
    v9 = a1;
    ++v6;
  }
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v9, a2, v5, v13) )
  {
    v10 = v5;
    goto LABEL_58;
  }
  return 0;
}
