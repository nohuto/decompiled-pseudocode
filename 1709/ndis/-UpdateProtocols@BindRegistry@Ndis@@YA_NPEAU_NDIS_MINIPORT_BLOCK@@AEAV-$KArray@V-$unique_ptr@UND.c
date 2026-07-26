/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B07D8
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3E94 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00B3F7C (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00F9C94 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(_NDIS_MINIPORT_BLOCK *a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  char v6; // bp
  _NDIS_MINIPORT_BLOCK *v9; // r10
  Ndis::BindState **v10; // r14
  Ndis::BindState *v11; // rax
  Ndis::BindState *v12; // rbx
  unsigned int v13; // r8d
  int m_unbindReasons; // r8d
  int v15; // r8d
  Ndis::BindState *v16; // rbx
  __int64 v17; // rbp
  char *v18; // rdi
  _NDIS_MINIPORT_BLOCK **v19; // rdi
  Ndis::BindState *v20; // rbx
  _NDIS_MINIPORT_BLOCK *v21; // rax
  NDIS_BIND_LINK_BASE *v22; // rdi
  NDIS_BIND_LINK_BASE *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  NDIS_BIND_LINK_BASE **v28; // rcx
  char v29; // di
  unsigned __int64 v31; // rdx
  bool v32; // cf
  unsigned __int16 v33; // cx
  volatile signed __int32 *Miniport; // rcx
  __int64 v35; // rdi
  void *m_AdditionalContext; // rdx
  Ndis::BindState *v37; // rbx
  void *v38; // rcx
  unsigned int v39; // r8d
  unsigned __int16 v40; // cx
  int v41; // r8d
  unsigned __int16 v42; // cx
  __int64 v43; // rdi
  Ndis::BindState *v44; // rbx
  int m_bindSources; // r8d
  unsigned __int16 v46; // cx

  v4 = 0LL;
  v5 = 0LL;
  v6 = a4;
  v9 = a1;
  if ( !*(_DWORD *)(a3 + 4) )
  {
LABEL_26:
    if ( (v6 & 1) != 0 )
      return 1;
    while ( 1 )
    {
      if ( v4 >= a2[1] )
        return 1;
      v43 = *((_QWORD *)a2 + 1);
      v44 = *(Ndis::BindState **)(v43 + 8 * v4);
      m_bindSources = v44->m_bindSources;
      v44->m_bindSources = m_bindSources & 0xFFFFFFFE;
      if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFE) != 0) )
        break;
LABEL_108:
      ++v4;
    }
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFE);
    if ( v44->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v44, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v44->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v44,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_106;
      }
      v46 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v44, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_106;
      }
      v46 = 13;
    }
    WPP_SF_Zq(v46, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_106:
    v32 = (unsigned __int8)byte_1C0098763 < 4u;
    v44->Miniport->BindEngine.m_isDirty = 1;
    if ( !v32 )
      WPP_SF_Zq(
        0xDu,
        &WPP_11812016a7ea377450fd589117a883cb_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v43 + 8 * v4) + 80LL) + 24LL),
        **(_QWORD **)(v43 + 8 * v4));
    goto LABEL_108;
  }
  while ( 1 )
  {
    v10 = (Ndis::BindState **)(*(_QWORD *)(a3 + 8) + 8 * v5);
    v11 = *v10;
    if ( v4 < a2[1] )
    {
      v35 = *((_QWORD *)a2 + 1);
      m_AdditionalContext = v11[1].m_AdditionalContext;
      v37 = *(Ndis::BindState **)(v35 + 8 * v4);
      v38 = v37[1].m_AdditionalContext;
      if ( v38 == m_AdditionalContext )
      {
        v39 = v37->m_bindSources;
        v37->m_bindSources = v39 | 1;
        if ( v39 )
          goto LABEL_24;
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0, v39 | 1);
        if ( v37->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v37, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v37->m_bindSources, 0LL, 0LL);
          }
          if ( !Ndis::BindState::SetBinding(
                  v37,
                  BindingEnabled,
                  Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            || (unsigned __int8)byte_1C0098763 < 4u )
          {
            goto LABEL_67;
          }
          v40 = 12;
        }
        else
        {
          if ( !Ndis::BindState::SetBinding(v37, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
            || (unsigned __int8)byte_1C0098763 < 4u )
          {
LABEL_67:
            v37->Miniport->BindEngine.m_isDirty = 1;
            if ( (unsigned __int8)byte_1C0098763 >= 4u )
              WPP_SF_Zq(
                0xBu,
                &WPP_11812016a7ea377450fd589117a883cb_Traceguids,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v35 + 8 * v4) + 80LL) + 24LL),
                **(_QWORD **)(v35 + 8 * v4));
LABEL_90:
            v9 = a1;
            goto LABEL_24;
          }
          v40 = 13;
        }
        WPP_SF_Zq(v40, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
        goto LABEL_67;
      }
      if ( v38 >= m_AdditionalContext )
      {
        if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
                                 v9,
                                 a2,
                                 v4,
                                 *(_QWORD *)(a3 + 8) + 8 * v5) )
          return 0;
        goto LABEL_90;
      }
      if ( (v6 & 1) != 0
        || (v41 = v37->m_bindSources, v37->m_bindSources = v41 & 0xFFFFFFFE, (v41 != 0) == ((v41 & 0xFFFFFFFE) != 0)) )
      {
LABEL_88:
        ++v4;
        goto LABEL_25;
      }
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v41, v41 & 0xFFFFFFFE);
      if ( v37->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v37, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v37->m_bindSources, 0LL, 0LL);
        }
        if ( !Ndis::BindState::SetBinding(
                v37,
                BindingEnabled,
                Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          || (unsigned __int8)byte_1C0098763 < 4u )
        {
          goto LABEL_85;
        }
        v42 = 12;
      }
      else
      {
        if ( !Ndis::BindState::SetBinding(v37, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
          || (unsigned __int8)byte_1C0098763 < 4u )
        {
          goto LABEL_85;
        }
        v42 = 13;
      }
      WPP_SF_Zq(v42, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_85:
      v37->Miniport->BindEngine.m_isDirty = 1;
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zq(
          0xCu,
          &WPP_11812016a7ea377450fd589117a883cb_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v35 + 8 * v4) + 80LL) + 24LL),
          **(_QWORD **)(v35 + 8 * v4));
      v9 = a1;
      goto LABEL_88;
    }
    v11->Miniport = v9;
    v12 = *v10;
    v13 = (*v10)->m_bindSources;
    (*v10)->m_bindSources = v13 | 1;
    if ( v13 )
      goto LABEL_13;
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0, v13 | 1);
    if ( v12->m_bindSources )
    {
      m_unbindReasons = v12->m_unbindReasons;
      v12->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
      if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v12->Miniport )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFFFFFE);
        v32 = (unsigned __int8)byte_1C0098763 < 4u;
        v12->Miniport->BindEngine.m_isDirty = 1;
        if ( !v32 )
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12->m_bindSources, 0LL, 0LL);
      }
      v15 = v12->m_unbindReasons;
      v12->m_unbindReasons = v15 & 0xFFFBFFE3;
      if ( (v15 != 0) == ((v15 & 0xFFFBFFE3) != 0) && v12->Miniport )
        goto LABEL_11;
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v15 & 0xFFFBFFE3);
      v32 = (unsigned __int8)byte_1C0098763 < 4u;
      v12->Miniport->BindEngine.m_isDirty = 1;
      if ( v32 )
        goto LABEL_11;
      v33 = 12;
      goto LABEL_47;
    }
    if ( Ndis::BindState::SetBinding(v12, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      v33 = 13;
LABEL_47:
      WPP_SF_Zq(v33, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
    }
LABEL_11:
    v12->Miniport->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(
        0xAu,
        &WPP_11812016a7ea377450fd589117a883cb_Traceguids,
        *((const wchar_t **)(*v10)[1].m_AdditionalContext + 3),
        (*v10)->Miniport);
LABEL_13:
    v16 = *v10;
    v17 = qword_1C0098800;
    v18 = (char *)(*v10)[1].m_AdditionalContext;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17 + 8, 0LL);
    v19 = (_NDIS_MINIPORT_BLOCK **)(v18 + 8);
    v20 = v16 + 1;
    v21 = *v19;
    if ( (_NDIS_MINIPORT_BLOCK **)(*v19)->NextMiniport != v19 )
      __fastfail(3u);
    v20->Miniport = v21;
    *(_QWORD *)&v20->AllowBindDespiteMandatory = v19;
    v21->NextMiniport = (_NDIS_MINIPORT_BLOCK *)v20;
    *v19 = (_NDIS_MINIPORT_BLOCK *)v20;
    ExReleasePushLockExclusiveEx(v17 + 8, 0LL);
    KeLeaveCriticalRegion();
    v22 = (NDIS_BIND_LINK_BASE *)*v10;
    *v10 = 0LL;
    v23 = v22;
    v24 = a2[1];
    if ( v4 > v24 )
      goto LABEL_34;
    v25 = *a2;
    v26 = (unsigned int)(v24 + 1);
    if ( v25 >= v26 )
      goto LABEL_16;
    if ( v26 < 4 )
      v26 = 4LL;
    v31 = ((unsigned int)v25 >> 1) + (unsigned int)v25;
    if ( v26 >= v31 )
      v31 = v26;
    if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                            a2,
                            v31) )
    {
LABEL_16:
      v27 = a2[1];
      if ( v4 < v27 )
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::moveElements(
          a2,
          (unsigned int)v4,
          (unsigned int)(v4 + 1),
          (unsigned int)(v27 - v4));
      v28 = (NDIS_BIND_LINK_BASE **)(*((_QWORD *)a2 + 1) + 8 * v4);
      if ( v28 )
      {
        v23 = 0LL;
        *v28 = v22;
      }
      ++a2[1];
      v29 = 1;
    }
    else
    {
LABEL_34:
      v29 = 0;
    }
    if ( v23 )
    {
      Miniport = (volatile signed __int32 *)v23[1].BindState.Miniport;
      if ( Miniport && !_InterlockedDecrement(Miniport + 12) )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v23);
      ExFreePoolWithTag(v23, 0x4C745042u);
    }
    if ( !v29 )
      return 0;
    v9 = a1;
    v6 = a4;
    a1->BindEngine.m_isDirty = 1;
LABEL_24:
    ++v4;
    ++v5;
LABEL_25:
    if ( v5 >= *(unsigned int *)(a3 + 4) )
      goto LABEL_26;
  }
}
