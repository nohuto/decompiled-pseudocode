/*
 * XREFs of ndisDereferenceFilter @ 0x1C00252A0
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C002513C (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisDereferenceFilterDriver @ 0x1C001CA04 (ndisDereferenceFilterDriver.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0025590 (NdisNblTrackerDeregisterComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00BF100 (ndisDeinitializeZeroBasedRef.c)
 */

void __fastcall ndisDereferenceFilter(struct _NDIS_FILTER_BLOCK *P, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  KIRQL v4; // al
  struct _NDIS_FILTER_BLOCK **p_NextGlobalFilter; // rcx
  struct _NDIS_FILTER_BLOCK *v6; // rdx
  KIRQL v7; // r8
  _NDIS_FILTER_BLOCK **i; // rcx
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  _UNICODE_STRING *FilterFriendlyName; // rcx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v12; // rax
  struct NDISWATCHDOG__ *m_ptr; // rcx
  Rtl::KString *Myptr; // rcx
  __int64 v15; // rdx

  if ( ndisDereferenceRef(&P->Ref.SpinLock, a2) )
  {
    FilterDriver = P->FilterDriver;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    p_NextGlobalFilter = &ndisGlobalFilterList;
    if ( ndisGlobalFilterList )
    {
      while ( 1 )
      {
        v6 = *p_NextGlobalFilter;
        if ( *p_NextGlobalFilter == P )
          break;
        p_NextGlobalFilter = &v6->NextGlobalFilter;
        if ( !v6->NextGlobalFilter )
          goto LABEL_7;
      }
      *p_NextGlobalFilter = P->NextGlobalFilter;
    }
LABEL_7:
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&FilterDriver->Lock);
    for ( i = &FilterDriver->FilterQueue; *i; i = &(*i)->NextFilter )
    {
      if ( *i == P )
      {
        *i = P->NextFilter;
        break;
      }
    }
    KeReleaseSpinLock(&FilterDriver->Lock, v7);
    Offload = P->Offload;
    if ( Offload )
    {
      ExFreePoolWithTag(Offload, 0);
      P->Offload = 0LL;
    }
    ndisDeinitializeZeroBasedRef(&P->PnPRef);
    NdisNblTrackerDeregisterComponent(P->NblTracker);
    FilterFriendlyName = P->FilterFriendlyName;
    P->NblTracker = 0LL;
    if ( FilterFriendlyName )
    {
      ExFreePoolWithTag(FilterFriendlyName, 0);
      P->FilterFriendlyName = 0LL;
    }
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)P->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      P->IterativeDataPathTracker = 0LL;
    }
    v12 = ndisVerifierNdisDispatch;
    P->Header.Type = 0;
    if ( v12 && P->VerifierContext )
    {
      ((void (*)(void))v12->NdisFreeVerifierContext)();
      P->VerifierContext = 0LL;
    }
    m_ptr = P->PendingOidWatchdog.m_ptr;
    if ( m_ptr != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(m_ptr);
    Myptr = P->FilterInstanceName._Myptr;
    if ( Myptr )
      ExFreePoolWithTag(Myptr, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    ndisDereferenceFilterDriver(FilterDriver, v15, 3u);
  }
}
