/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00BABA0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00BBE98 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned __int64 v9; // r10
  struct NDIS_BIND_FILTER_LINK *Myptr; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10

  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  v9 = 0LL;
  if ( a1->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      if ( v9 >= a1->Bindings.Filters.m_numElements )
        __fastfail(5u);
      Myptr = a1->Bindings.Filters._p[v9]._Myptr;
      if ( Myptr == a2 )
        break;
      if ( Ndis::BindState::GetBindContext(&Myptr->BindState) )
        BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v13 + 8 * v14));
      v9 = v14 + 1;
      if ( v9 >= a1->Bindings.Filters.m_numElements )
        goto LABEL_11;
    }
    *a4 = BindContext;
    while ( 1 )
    {
      v11 = v9 + 1;
      if ( v11 >= a1->Bindings.Filters.m_numElements )
        break;
      if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v11]._Myptr->BindState) )
      {
        *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v12 + 8 * v9));
        break;
      }
    }
  }
LABEL_11:
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
