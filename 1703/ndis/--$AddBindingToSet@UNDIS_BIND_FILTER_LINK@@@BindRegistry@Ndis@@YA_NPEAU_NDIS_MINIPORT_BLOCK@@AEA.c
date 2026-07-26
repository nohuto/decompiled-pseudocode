/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B9058
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8F74 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00B26AC (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@AEAA_N_K@Z @ 0x1C00B5444 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DAEF8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@AEAAXKKK@Z @ 0x1C00F0964 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  Ndis::BindState *v8; // rbx
  int m_bindSources; // r8d
  int m_unbindReasons; // r8d
  int v11; // r8d
  bool v12; // cf
  struct NDIS_BIND_FILTER_LINK *v13; // rsi
  NDIS_BIND_LINK_BASE *v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  struct NDIS_BIND_FILTER_LINK **v17; // rcx
  char v18; // di
  unsigned __int16 v20; // cx
  volatile signed __int32 *Miniport; // rcx
  _QWORD v22[20]; // [rsp+30h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_10;
  if ( (unsigned __int8)byte_1C0092623 >= 5u )
    WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources | 1);
  if ( v8->m_bindSources )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v12 = (unsigned __int8)byte_1C0092623 < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v12 )
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v11 = v8->m_unbindReasons;
    v8->m_unbindReasons = v11 & 0xFFFBFFE3;
    if ( (v11 != 0) == ((v11 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
      WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFBFFE3);
    v12 = (unsigned __int8)byte_1C0092623 < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v12 )
      goto LABEL_9;
    v20 = 12;
    goto LABEL_33;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    v20 = 13;
LABEL_33:
    WPP_SF_Zq(v20, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v12 = (unsigned __int8)byte_1C0092623 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v12 )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v22);
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, (const wchar_t *)v22[1], v22[0]);
  }
LABEL_10:
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v13 = *a4;
  *a4 = 0LL;
  v14 = (NDIS_BIND_LINK_BASE *)v13;
  v15 = *(unsigned int *)(a2 + 4);
  if ( a3 <= v15
    && Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::grow(
         (unsigned int *)a2,
         (unsigned int)(v15 + 1)) )
  {
    v16 = *(unsigned int *)(a2 + 4);
    if ( a3 < v16 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v16 - a3));
    v17 = (struct NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a2 + 8) + 8 * a3);
    if ( v17 )
    {
      v14 = 0LL;
      *v17 = v13;
    }
    ++*(_DWORD *)(a2 + 4);
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  if ( v14 )
  {
    Miniport = (volatile signed __int32 *)v14[1].BindState.Miniport;
    if ( Miniport && !_InterlockedDecrement(Miniport + 18) )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v14);
    ExFreePoolWithTag(v14, 0x4C6C4642u);
  }
  if ( !v18 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
