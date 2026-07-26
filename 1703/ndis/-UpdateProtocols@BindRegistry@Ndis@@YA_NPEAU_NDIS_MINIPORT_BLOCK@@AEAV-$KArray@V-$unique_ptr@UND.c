/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B1584
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1634 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v10; // r9
  __int64 v12; // r14
  Ndis::BindState *v13; // rbx
  char *v14; // rcx
  char *m_AdditionalContext; // rdx
  int v16; // r8d
  unsigned __int16 v17; // cx
  bool v18; // cf
  int v19; // r8d
  unsigned __int16 v20; // cx
  __int64 v21; // rsi
  Ndis::BindState *v22; // rbx
  int m_bindSources; // r8d
  unsigned __int16 v24; // cx

  v4 = 0LL;
  v5 = 0LL;
  if ( !*(_DWORD *)(a3 + 4) )
  {
LABEL_6:
    if ( (a4 & 1) != 0 || v4 >= *(unsigned int *)(a2 + 4) )
      return 1;
    while ( 1 )
    {
      v21 = *(_QWORD *)(a2 + 8);
      v22 = *(Ndis::BindState **)(v21 + 8 * v4);
      m_bindSources = v22->m_bindSources;
      v22->m_bindSources = m_bindSources & 0xFFFFFFFE;
      if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFE) != 0) )
        break;
LABEL_61:
      if ( ++v4 >= *(unsigned int *)(a2 + 4) )
        return 1;
    }
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFE);
    if ( v22->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v22, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v22,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
        goto LABEL_59;
      }
      v24 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v22, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
        goto LABEL_59;
      }
      v24 = 13;
    }
    WPP_SF_Zq(v24, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_59:
    v18 = (unsigned __int8)byte_1C0092623 < 4u;
    v22->Miniport->BindEngine.m_isDirty = 1;
    if ( !v18 )
      WPP_SF_Zq(
        0xDu,
        &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v21 + 8 * v4) + 80LL) + 32LL),
        **(_QWORD **)(v21 + 8 * v4));
    goto LABEL_61;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(a3 + 8) + 8 * v5;
    if ( v4 >= *(unsigned int *)(a2 + 4) )
      break;
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(Ndis::BindState **)(v12 + 8 * v4);
    v14 = *(char **)(*(_QWORD *)v10 + 80LL);
    m_AdditionalContext = (char *)v13[1].m_AdditionalContext;
    if ( m_AdditionalContext == v14 )
    {
      v16 = v13->m_bindSources;
      v13->m_bindSources = v16 | 1;
      if ( v16 == 0 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v16 | 1);
        if ( v13->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v13, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13->m_bindSources, 0LL, 0LL);
          }
          if ( Ndis::BindState::SetBinding(
                 v13,
                 BindingEnabled,
                 Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v17 = 12;
            goto LABEL_24;
          }
        }
        else if ( Ndis::BindState::SetBinding(v13, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
               && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          v17 = 13;
LABEL_24:
          WPP_SF_Zq(v17, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
        }
        v18 = (unsigned __int8)byte_1C0092623 < 4u;
        v13->Miniport->BindEngine.m_isDirty = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0xBu,
            &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v4) + 80LL) + 32LL),
            **(_QWORD **)(v12 + 8 * v4));
      }
LABEL_4:
      ++v5;
      goto LABEL_5;
    }
    if ( m_AdditionalContext + 8 >= v14 + 8 )
      break;
    if ( (a4 & 1) == 0 )
    {
      v19 = v13->m_bindSources;
      v13->m_bindSources = v19 & 0xFFFFFFFE;
      if ( (v19 != 0) != ((v19 & 0xFFFFFFFE) != 0) )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v19, v19 & 0xFFFFFFFE);
        if ( v13->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v13, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13->m_bindSources, 0LL, 0LL);
          }
          if ( Ndis::BindState::SetBinding(
                 v13,
                 BindingEnabled,
                 Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v20 = 12;
            goto LABEL_42;
          }
        }
        else if ( Ndis::BindState::SetBinding(v13, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
               && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          v20 = 13;
LABEL_42:
          WPP_SF_Zq(v20, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
        }
        v18 = (unsigned __int8)byte_1C0092623 < 4u;
        v13->Miniport->BindEngine.m_isDirty = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0xCu,
            &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v4) + 80LL) + 32LL),
            **(_QWORD **)(v12 + 8 * v4));
      }
    }
LABEL_5:
    ++v4;
    if ( v5 >= *(unsigned int *)(a3 + 4) )
      goto LABEL_6;
  }
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v4, v10) )
    goto LABEL_4;
  return 0;
}
