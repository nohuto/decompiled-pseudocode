/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FD7B4
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00FDD90 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BBA5C (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C00BBA5C.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BEFA0 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BF0D4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00BF278 (Ndis--sortProtocolsByPointer.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C2AE0 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00DBEBC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

PVOID __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        volatile signed __int32 **a2,
        _NDIS_MINIPORT_BLOCK *a3,
        int a4)
{
  NDIS_BIND_LINK_BASE *v8; // rbx
  PVOID v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rbp
  __int64 v12; // r14
  Ndis::BindState *v13; // rsi
  int m_bindSources; // r8d
  int v15; // edx
  unsigned __int16 v16; // cx
  Ndis::BindState *v17; // rsi
  int v18; // r8d
  int v19; // edx
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rbx
  char v22; // al
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
        v15 = a4 | m_bindSources;
        v13->m_bindSources = a4 | m_bindSources;
        if ( (m_bindSources != 0) != ((a4 | m_bindSources) != 0) )
        {
          if ( (unsigned __int8)byte_1C0099623 >= 5u )
          {
            WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v15);
            v15 = v13->m_bindSources;
          }
          if ( v15 )
          {
            if ( Ndis::BindState::SetBinding(v13, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v13->m_bindSources, 0LL, 0LL);
            }
            if ( Ndis::BindState::SetBinding(
                   v13,
                   BindingEnabled,
                   Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
              && (unsigned __int8)byte_1C0099623 >= 4u )
            {
              v16 = 12;
              goto LABEL_23;
            }
          }
          else if ( Ndis::BindState::SetBinding(v13, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                 && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v16 = 13;
LABEL_23:
            WPP_SF_Zq(v16, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
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
  v17 = (Ndis::BindState *)P[0];
  v18 = *((_DWORD *)P[0] + 7);
  v19 = a4 | v18;
  *((_DWORD *)P[0] + 7) = a4 | v18;
  if ( (v18 != 0) != ((a4 | v18) != 0) )
  {
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
    {
      WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v18, v19);
      v19 = v17->m_bindSources;
    }
    if ( v19 )
    {
      if ( Ndis::BindState::SetBinding(v17, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v17->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v17,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_41;
      }
      v20 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v17, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_41;
      }
      v20 = 13;
    }
    WPP_SF_Zq(v20, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
LABEL_41:
    v17->Miniport->BindEngine.m_isDirty = 1;
  }
  v9 = P[0];
  v21 = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 8) + 8 * v21, (__int64)P) )
    {
      if ( ++v21 >= *(unsigned int *)(a1 + 4) )
        goto LABEL_45;
    }
    v22 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
            a1,
            v21,
            (__int64 *)P);
  }
  else
  {
LABEL_45:
    v22 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
            a1,
            (__int64 *)P);
  }
  if ( v22 )
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
