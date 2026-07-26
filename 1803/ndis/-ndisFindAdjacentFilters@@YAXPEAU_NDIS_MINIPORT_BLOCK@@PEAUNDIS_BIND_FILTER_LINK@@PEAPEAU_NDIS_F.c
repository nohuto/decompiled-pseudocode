/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00BBBFC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00BCEC0 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned __int64 m_numElements; // rcx
  unsigned __int64 v10; // r10
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r10

  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  LODWORD(m_numElements) = a1->Bindings.Filters.m_numElements;
  v10 = 0LL;
  if ( (_DWORD)m_numElements )
  {
    while ( 1 )
    {
      if ( v10 >= a1->Bindings.Filters.m_numElements )
        __fastfail(5u);
      p = a1->Bindings.Filters._p;
      if ( p[v10]._Myptr == a2 )
        break;
      if ( Ndis::BindState::GetBindContext(&p[v10]._Myptr->BindState) )
        BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v15 + 8 * v16));
      m_numElements = a1->Bindings.Filters.m_numElements;
      v10 = v16 + 1;
      if ( v10 >= m_numElements )
        goto LABEL_12;
    }
    *a4 = BindContext;
    for ( i = (unsigned int)m_numElements; ; i = a1->Bindings.Filters.m_numElements )
    {
      v13 = v10 + 1;
      if ( v13 >= i )
        break;
      if ( v13 >= a1->Bindings.Filters.m_numElements )
        __fastfail(5u);
      if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v13]._Myptr->BindState) )
      {
        *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v14 + 8 * v10));
        break;
      }
    }
  }
LABEL_12:
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
