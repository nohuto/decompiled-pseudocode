/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BB6E4
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BB794 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v11; // r9
  __int64 v13; // r14
  Ndis::BindState *v14; // rbx
  void *v15; // rdx
  void *m_AdditionalContext; // rcx
  unsigned int v17; // eax
  int v18; // edx
  unsigned __int16 v19; // cx
  bool v20; // cf
  int v21; // r8d
  unsigned int v22; // edx
  unsigned __int16 v23; // cx
  __int64 v24; // rsi
  Ndis::BindState *v25; // rbx
  int m_bindSources; // r8d
  unsigned int v27; // edx
  unsigned __int16 v28; // cx

  v4 = *(unsigned int *)(a3 + 4);
  v5 = 0LL;
  v6 = 0LL;
  if ( !(_DWORD)v4 )
  {
LABEL_7:
    if ( (a4 & 1) != 0 )
      return 1;
    while ( 1 )
    {
      if ( v5 >= *(unsigned int *)(a2 + 4) )
        return 1;
      v24 = *(_QWORD *)(a2 + 8);
      v25 = *(Ndis::BindState **)(v24 + 8 * v5);
      m_bindSources = v25->m_bindSources;
      v27 = m_bindSources & 0xFFFFFFFE;
      v25->m_bindSources = m_bindSources & 0xFFFFFFFE;
      if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFE) != 0) )
        break;
LABEL_63:
      ++v5;
    }
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
    {
      WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v27);
      v27 = v25->m_bindSources;
    }
    if ( v27 )
    {
      if ( Ndis::BindState::SetBinding(v25, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v25->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v25,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_61;
      }
      v28 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v25, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_61;
      }
      v28 = 13;
    }
    WPP_SF_Zq(v28, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
LABEL_61:
    v20 = (unsigned __int8)byte_1C0099623 < 4u;
    v25->Miniport->BindEngine.m_isDirty = 1;
    if ( !v20 )
      WPP_SF_Zq(
        0xDu,
        &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v24 + 8 * v5) + 80LL) + 24LL),
        **(_QWORD **)(v24 + 8 * v5));
    goto LABEL_63;
  }
  while ( 1 )
  {
    if ( v6 >= v4 )
      __fastfail(5u);
    v11 = *(_QWORD *)(a3 + 8) + 8 * v6;
    if ( v5 >= *(unsigned int *)(a2 + 4) )
      break;
    v13 = *(_QWORD *)(a2 + 8);
    v14 = *(Ndis::BindState **)(v13 + 8 * v5);
    v15 = *(void **)(*(_QWORD *)v11 + 80LL);
    m_AdditionalContext = v14[1].m_AdditionalContext;
    if ( m_AdditionalContext == v15 )
    {
      v17 = v14->m_bindSources;
      v18 = v17 | 1;
      v14->m_bindSources = v17 | 1;
      if ( !v17 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
        {
          WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v18);
          v18 = v14->m_bindSources;
        }
        if ( v18 )
        {
          if ( Ndis::BindState::SetBinding(v14, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14->m_bindSources, 0LL, 0LL);
          }
          if ( Ndis::BindState::SetBinding(
                 v14,
                 BindingEnabled,
                 Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v19 = 12;
            goto LABEL_25;
          }
        }
        else if ( Ndis::BindState::SetBinding(v14, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
               && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          v19 = 13;
LABEL_25:
          WPP_SF_Zq(v19, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
        }
        v20 = (unsigned __int8)byte_1C0099623 < 4u;
        v14->Miniport->BindEngine.m_isDirty = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0xBu,
            &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * v5) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * v5));
      }
LABEL_5:
      ++v6;
      goto LABEL_6;
    }
    if ( m_AdditionalContext >= v15 )
      break;
    if ( (a4 & 1) == 0 )
    {
      v21 = v14->m_bindSources;
      v22 = v21 & 0xFFFFFFFE;
      v14->m_bindSources = v21 & 0xFFFFFFFE;
      if ( (v21 != 0) != ((v21 & 0xFFFFFFFE) != 0) )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
        {
          WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v21, v22);
          v22 = v14->m_bindSources;
        }
        if ( v22 )
        {
          if ( Ndis::BindState::SetBinding(v14, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14->m_bindSources, 0LL, 0LL);
          }
          if ( Ndis::BindState::SetBinding(
                 v14,
                 BindingEnabled,
                 Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v23 = 12;
            goto LABEL_43;
          }
        }
        else if ( Ndis::BindState::SetBinding(v14, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
               && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          v23 = 13;
LABEL_43:
          WPP_SF_Zq(v23, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
        }
        v20 = (unsigned __int8)byte_1C0099623 < 4u;
        v14->Miniport->BindEngine.m_isDirty = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0xCu,
            &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * v5) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * v5));
      }
    }
LABEL_6:
    v4 = *(unsigned int *)(a3 + 4);
    ++v5;
    if ( v6 >= v4 )
      goto LABEL_7;
  }
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v5, v11) )
    goto LABEL_5;
  return 0;
}
