/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BE674
 * Callers:
 *     ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AA1B0 (-UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$u.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BC114 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E4F08 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00F9E70 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  Ndis::BindState *v8; // rbx
  unsigned int m_bindSources; // r8d
  int m_unbindReasons; // r8d
  int v11; // r8d
  bool v12; // cf
  struct NDIS_BIND_FILTER_LINK *v13; // rdi
  __int64 v14; // rbx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *p_DriverLinkage; // rdi
  _LIST_ENTRY *Flink; // rax
  struct NDIS_BIND_FILTER_LINK *v19; // rdi
  NDIS_BIND_LINK_BASE *v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  struct NDIS_BIND_FILTER_LINK **v23; // rcx
  char v24; // di
  unsigned __int16 v26; // cx
  volatile signed __int32 *Miniport; // rcx
  KLockHolder v28; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v29[20]; // [rsp+50h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources )
    goto LABEL_10;
  if ( (unsigned __int8)byte_1C0098763 >= 5u )
    WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0, m_bindSources | 1);
  if ( v8->m_bindSources )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v12 = (unsigned __int8)byte_1C0098763 < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v12 )
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v11 = v8->m_unbindReasons;
    v8->m_unbindReasons = v11 & 0xFFFBFFE3;
    if ( (v11 != 0) == ((v11 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFBFFE3);
    v12 = (unsigned __int8)byte_1C0098763 < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v12 )
      goto LABEL_9;
    v26 = 12;
    goto LABEL_34;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    v26 = 13;
LABEL_34:
    WPP_SF_Zq(v26, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v12 = (unsigned __int8)byte_1C0098763 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v12 )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v29);
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_11812016a7ea377450fd589117a883cb_Traceguids, (const wchar_t *)v29[1], v29[0]);
  }
LABEL_10:
  v13 = *a4;
  v14 = qword_1C0098800 + 8;
  v28.m_Lock = (KPushLockBase *)(qword_1C0098800 + 8);
  p = v13->BindDriver._p;
  KeEnterCriticalRegion();
  v28.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v14, 0LL);
  p_BindLinks = &p->_t.BindLinks;
  v28.m_State = Exclusive;
  p_DriverLinkage = &v13->DriverLinkage;
  Flink = p_BindLinks->Flink;
  if ( p_BindLinks->Flink->Blink != p_BindLinks )
    __fastfail(3u);
  p_DriverLinkage->Flink = Flink;
  p_DriverLinkage->Blink = p_BindLinks;
  Flink->Blink = p_DriverLinkage;
  p_BindLinks->Flink = p_DriverLinkage;
  KLockHolder::~KLockHolder(&v28);
  v19 = *a4;
  *a4 = 0LL;
  v20 = (NDIS_BIND_LINK_BASE *)v19;
  v21 = *(unsigned int *)(a2 + 4);
  if ( a3 <= v21
    && Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
         (unsigned int *)a2,
         (unsigned int)(v21 + 1)) )
  {
    v22 = *(unsigned int *)(a2 + 4);
    if ( a3 < v22 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v22 - a3));
    v23 = (struct NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a2 + 8) + 8 * a3);
    if ( v23 )
    {
      v20 = 0LL;
      *v23 = v19;
    }
    ++*(_DWORD *)(a2 + 4);
    v24 = 1;
  }
  else
  {
    v24 = 0;
  }
  if ( v20 )
  {
    Miniport = (volatile signed __int32 *)v20[1].BindState.Miniport;
    if ( Miniport && !_InterlockedDecrement(Miniport + 16) )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v20);
    ExFreePoolWithTag(v20, 0x4C6C4642u);
  }
  if ( !v24 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
