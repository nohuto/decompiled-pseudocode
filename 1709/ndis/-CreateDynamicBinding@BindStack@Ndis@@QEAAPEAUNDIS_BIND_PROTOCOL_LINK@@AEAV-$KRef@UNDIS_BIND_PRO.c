/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00FB260 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00B1E6C (Ndis--sortProtocolsByPointer.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B3E40 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B4070 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00DA118 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00DA234 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00DA2BC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

PVOID __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        volatile signed __int32 **a2,
        _NDIS_MINIPORT_BLOCK *a3,
        int a4)
{
  NDIS_BIND_LINK_BASE *v8; // rbx
  PVOID v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rbp
  __int64 v12; // r14
  Ndis::BindState *v13; // rdi
  int m_bindSources; // r8d
  unsigned __int16 v15; // cx
  Ndis::BindState *v16; // rdi
  int v17; // r8d
  unsigned __int16 v18; // cx
  unsigned __int64 v19; // rbx
  char v20; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = (NDIS_BIND_LINK_BASE *)P[0];
  if ( !P[0] )
  {
    v9 = 0LL;
    goto LABEL_51;
  }
  v10 = *(unsigned int *)(a1 + 4);
  for ( i = 0LL; i != v10; ++i )
  {
    if ( i >= v10 )
      __fastfail(5u);
    v12 = *(_QWORD *)(a1 + 8);
    if ( a4 != 4 || !Ndis::BindState::IsAlive(*(Ndis::BindState **)(v12 + 8 * i)) )
    {
      v13 = *(Ndis::BindState **)(v12 + 8 * i);
      if ( v13[1].m_AdditionalContext == v8[1].BindState.Miniport )
      {
        m_bindSources = v13->m_bindSources;
        v13->m_bindSources = a4 | m_bindSources;
        if ( (m_bindSources != 0) != ((a4 | m_bindSources) != 0) )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 5u )
            WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, a4 | m_bindSources);
          if ( v13->m_bindSources )
          {
            if ( Ndis::BindState::SetBinding(v13, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
              && (unsigned __int8)byte_1C0098763 >= 4u )
            {
              WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13->m_bindSources, 0LL, 0LL);
            }
            if ( Ndis::BindState::SetBinding(
                   v13,
                   BindingEnabled,
                   Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
              && (unsigned __int8)byte_1C0098763 >= 4u )
            {
              v15 = 12;
              goto LABEL_23;
            }
          }
          else if ( Ndis::BindState::SetBinding(v13, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                 && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v15 = 13;
LABEL_23:
            WPP_SF_Zq(v15, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
          }
          v13->Miniport->BindEngine.m_isDirty = 1;
        }
        v9 = *(PVOID *)(v12 + 8 * i);
        goto LABEL_50;
      }
    }
  }
  v8->BindState.Miniport = a3;
  NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)P[0], (struct NDIS_BIND_DRIVER_BASE *)*a2);
  v16 = (Ndis::BindState *)P[0];
  v17 = *((_DWORD *)P[0] + 7);
  *((_DWORD *)P[0] + 7) = a4 | v17;
  if ( (v17 != 0) != ((a4 | v17) != 0) )
  {
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v17, a4 | v17);
    if ( v16->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v16,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_41;
      }
      v18 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v16, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_41;
      }
      v18 = 13;
    }
    WPP_SF_Zq(v18, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_41:
    v16->Miniport->BindEngine.m_isDirty = 1;
  }
  v9 = P[0];
  v19 = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 8) + 8 * v19, (__int64)P) )
    {
      if ( ++v19 >= *(unsigned int *)(a1 + 4) )
        goto LABEL_45;
    }
    v20 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
            (unsigned int *)a1,
            v19,
            (__int64 *)P);
  }
  else
  {
LABEL_45:
    v20 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
            (unsigned int *)a1,
            (__int64 *)P);
  }
  if ( v20 )
  {
    ++*(_DWORD *)(a1 + 96);
    a3->BindEngine.m_isDirty = 1;
  }
  else
  {
    v9 = 0LL;
  }
LABEL_50:
  v8 = (NDIS_BIND_LINK_BASE *)P[0];
LABEL_51:
  if ( v8 )
  {
    Miniport = v8[1].BindState.Miniport;
    if ( Miniport && _InterlockedExchangeAdd((volatile signed __int32 *)&Miniport->48, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v8);
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}
