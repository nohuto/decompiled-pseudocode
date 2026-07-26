/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00F17A4
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00F1D80 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1828 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1B18 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00B1B98 (Ndis--sortProtocolsByPointer.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00B1CDC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C00B1CDC.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00B26AC (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00CF968 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

PVOID __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        volatile signed __int32 **a2,
        _NDIS_MINIPORT_BLOCK *a3,
        int a4)
{
  NDIS_BIND_LINK_BASE *v8; // rbx
  PVOID v9; // rdi
  unsigned __int64 v10; // r8
  __int64 i; // rdx
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // r8d
  Ndis::BindState *v16; // rbx
  unsigned __int16 v17; // cx
  Ndis::BindState *v18; // rbx
  int v19; // r8d
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rbx
  char v22; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = (NDIS_BIND_LINK_BASE *)P[0];
  if ( !P[0] )
  {
    v9 = 0LL;
    goto LABEL_51;
  }
  v10 = *(unsigned int *)(a1 + 4);
  for ( i = 0LL; (_DWORD)i != (_DWORD)v10; i = (unsigned int)(i + 1) )
  {
    v12 = (unsigned int)i;
    if ( (unsigned int)i >= v10 )
      __fastfail(0xBAD0FFu);
    v13 = *(_QWORD *)(a1 + 8);
    if ( a4 != 4 || !Ndis::BindState::IsAlive(*(Ndis::BindState **)(v13 + 8 * i)) )
    {
      v14 = *(_QWORD *)(v13 + 8 * i);
      if ( *(_NDIS_MINIPORT_BLOCK **)(v14 + 80) == v8[1].BindState.Miniport )
      {
        v15 = *(_DWORD *)(v14 + 28);
        v16 = *(Ndis::BindState **)(v13 + 8 * i);
        *(_DWORD *)(v14 + 28) = a4 | v15;
        if ( (v15 != 0) != ((a4 | v15) != 0) )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, a4 | v15);
          if ( v16->m_bindSources )
          {
            if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
              && (unsigned __int8)byte_1C0092623 >= 4u )
            {
              WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16->m_bindSources, 0LL, 0LL);
            }
            if ( Ndis::BindState::SetBinding(
                   v16,
                   BindingEnabled,
                   Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
              && (unsigned __int8)byte_1C0092623 >= 4u )
            {
              v17 = 12;
              goto LABEL_23;
            }
          }
          else if ( Ndis::BindState::SetBinding(v16, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                 && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v17 = 13;
LABEL_23:
            WPP_SF_Zq(v17, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
          }
          v16->Miniport->BindEngine.m_isDirty = 1;
        }
        v9 = *(PVOID *)(v13 + 8 * v12);
        goto LABEL_50;
      }
    }
  }
  v8->BindState.Miniport = a3;
  NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)P[0], (struct NDIS_BIND_DRIVER_BASE *)(*a2 + 2));
  v18 = (Ndis::BindState *)P[0];
  v19 = *((_DWORD *)P[0] + 7);
  *((_DWORD *)P[0] + 7) = a4 | v19;
  if ( (v19 != 0) != ((a4 | v19) != 0) )
  {
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v19, a4 | v19);
    if ( v18->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v18, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v18,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
        goto LABEL_41;
      }
      v20 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v18, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
        goto LABEL_41;
      }
      v20 = 13;
    }
    WPP_SF_Zq(v20, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
LABEL_41:
    v18->Miniport->BindEngine.m_isDirty = 1;
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
    v22 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
            a1,
            v21,
            (__int64 *)P);
  }
  else
  {
LABEL_45:
    v22 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::append(
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
    if ( Miniport && _InterlockedExchangeAdd((volatile signed __int32 *)&Miniport->OpenQueue, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v8);
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}
