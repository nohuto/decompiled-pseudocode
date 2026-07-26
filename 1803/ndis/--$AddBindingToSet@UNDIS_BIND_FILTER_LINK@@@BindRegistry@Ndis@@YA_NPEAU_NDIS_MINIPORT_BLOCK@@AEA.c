/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C2950
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C27D8 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C2864 (-UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$u.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BEBE4 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C2AE0 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E6768 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00FC958 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  Ndis::BindState *v8; // rbx
  unsigned int m_bindSources; // eax
  int v10; // edx
  int m_unbindReasons; // r8d
  int v12; // r8d
  bool v13; // cf
  struct NDIS_BIND_FILTER_LINK *v14; // rdi
  NDIS_BIND_LINK_BASE *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // di
  unsigned __int16 v20; // cx
  volatile signed __int32 *Miniport; // rcx
  _QWORD v22[20]; // [rsp+30h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  v10 = m_bindSources | 1;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources )
    goto LABEL_10;
  if ( (unsigned __int8)byte_1C0099623 >= 5u )
  {
    WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v10);
    v10 = v8->m_bindSources;
  }
  if ( v10 )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v13 = (unsigned __int8)byte_1C0099623 < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v13 )
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v12 = v8->m_unbindReasons;
    v8->m_unbindReasons = v12 & 0xFFFBFFE3;
    if ( (v12 != 0) == ((v12 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
      WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v12, v12 & 0xFFFBFFE3);
    v13 = (unsigned __int8)byte_1C0099623 < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v13 )
      goto LABEL_9;
    v20 = 12;
    goto LABEL_31;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0099623 >= 4u )
  {
    v20 = 13;
LABEL_31:
    WPP_SF_Zq(v20, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v13 = (unsigned __int8)byte_1C0099623 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v13 )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v22);
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, (const wchar_t *)v22[1], v22[0]);
  }
LABEL_10:
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v14 = *a4;
  *a4 = 0LL;
  v15 = (NDIS_BIND_LINK_BASE *)v14;
  v16 = *(unsigned int *)(a2 + 4);
  if ( a3 <= v16
    && Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
         (unsigned int *)a2,
         (unsigned int)(v16 + 1)) )
  {
    v17 = *(unsigned int *)(a2 + 4);
    if ( a3 < v17 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v17 - a3));
    v15 = 0LL;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * a3) = v14;
    v18 = 1;
    ++*(_DWORD *)(a2 + 4);
  }
  else
  {
    v18 = 0;
  }
  if ( v15 )
  {
    Miniport = (volatile signed __int32 *)v15[1].BindState.Miniport;
    if ( Miniport && !_InterlockedDecrement(Miniport + 16) )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
    ExFreePoolWithTag(v15, 0x4C6C4642u);
  }
  if ( !v18 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
