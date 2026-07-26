/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8F74
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B9058 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFilters(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 i; // r10
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // r8d
  Ndis::BindState *v17; // rbx
  char v18; // al
  unsigned __int16 v19; // cx
  __int64 v20; // rsi
  Ndis::BindState *v21; // rbx
  int v22; // r8d
  char v23; // al
  unsigned __int16 v24; // cx
  __int64 v25; // rsi
  Ndis::BindState *v26; // rbx
  int m_bindSources; // r8d
  char v28; // al
  unsigned __int16 v29; // cx
  int v31; // [rsp+34h] [rbp-95h]
  __int64 v33; // [rsp+40h] [rbp-89h] BYREF
  const wchar_t *v34; // [rsp+48h] [rbp-81h]

  v4 = *(_DWORD *)(a3 + 4);
  v5 = 0LL;
  v6 = 0LL;
  v31 = v4;
  for ( i = a1; ; i = a1 )
  {
    if ( (_DWORD)v6 == v4 )
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
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFE);
        if ( v26->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v26, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v26->m_bindSources, 0LL, 0LL);
          }
          if ( !Ndis::BindState::SetBinding(
                  v26,
                  BindingEnabled,
                  Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            || (unsigned __int8)byte_1C0092623 < 4u )
          {
            goto LABEL_80;
          }
          v29 = 12;
        }
        else
        {
          if ( !Ndis::BindState::SetBinding(v26, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
            || (unsigned __int8)byte_1C0092623 < 4u )
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
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v25 + 8 * v5),
              (struct NDIS_PNPTRACE_LOCALS *)&v33);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
              WPP_SF_Zq(0x10u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v34, v33);
          }
        }
        if ( ++v5 >= *(unsigned int *)(a2 + 4) )
          return 1;
      }
    }
    if ( (unsigned int)v6 >= *(_DWORD *)(a3 + 4) )
      __fastfail(0xBAD0FFu);
    v10 = v5;
    v11 = *(unsigned int *)(a2 + 4);
    v12 = *(_QWORD *)(a3 + 8) + 8 * v6;
    if ( v5 >= v11 )
      break;
    while ( 1 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      v15 = *(_QWORD *)(v14 + 8 * v10);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 80LL) == *(_QWORD *)(v15 + 80)
        && *(_DWORD *)(*(_QWORD *)v12 + 88LL) == *(_DWORD *)(v15 + 88) )
      {
        break;
      }
      if ( ++v10 >= v11 )
        goto LABEL_5;
    }
    v16 = *(_DWORD *)(v15 + 28);
    v17 = *(Ndis::BindState **)(v14 + 8 * v10);
    *(_DWORD *)(v15 + 28) = v16 | 1;
    if ( v16 == 0 )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v16 | 1);
      if ( v17->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v17, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v17->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               v17,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          v19 = 12;
          goto LABEL_31;
        }
      }
      else if ( Ndis::BindState::SetBinding(v17, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        v19 = 13;
LABEL_31:
        WPP_SF_Zq(v19, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
      }
      v17->Miniport->BindEngine.m_isDirty = 1;
      v18 = 1;
      goto LABEL_33;
    }
    v18 = 0;
LABEL_33:
    if ( v18 )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v14 + 8 * v10),
          (struct NDIS_PNPTRACE_LOCALS *)&v33);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
          WPP_SF_Zq(0xEu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v34, v33);
      }
    }
    if ( (a4 & 1) == 0 )
    {
      while ( 1 )
      {
        if ( v5 >= v10 )
          goto LABEL_62;
        if ( v5 >= *(unsigned int *)(a2 + 4) )
          __fastfail(0xBAD0FFu);
        v20 = *(_QWORD *)(a2 + 8);
        v21 = *(Ndis::BindState **)(v20 + 8 * v5);
        v22 = v21->m_bindSources;
        v21->m_bindSources = v22 & 0xFFFFFFFE;
        if ( (v22 != 0) != ((v22 & 0xFFFFFFFE) != 0) )
          break;
        v23 = 0;
LABEL_56:
        if ( v23 && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v20 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v33);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
            WPP_SF_Zq(0xFu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v34, v33);
        }
        ++v5;
      }
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22, v22 & 0xFFFFFFFE);
      if ( v21->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v21, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v21->m_bindSources, 0LL, 0LL);
        }
        if ( !Ndis::BindState::SetBinding(
                v21,
                BindingEnabled,
                Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          || (unsigned __int8)byte_1C0092623 < 4u )
        {
          goto LABEL_55;
        }
        v24 = 12;
      }
      else
      {
        if ( !Ndis::BindState::SetBinding(v21, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
          || (unsigned __int8)byte_1C0092623 < 4u )
        {
          goto LABEL_55;
        }
        v24 = 13;
      }
      WPP_SF_Zq(v24, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_55:
      v21->Miniport->BindEngine.m_isDirty = 1;
      v23 = 1;
      goto LABEL_56;
    }
LABEL_62:
    v5 = v10 + 1;
LABEL_7:
    v4 = v31;
    v6 = (unsigned int)(v6 + 1);
  }
LABEL_5:
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(i, a2, v5, v12) )
  {
    ++v5;
    goto LABEL_7;
  }
  return 0;
}
