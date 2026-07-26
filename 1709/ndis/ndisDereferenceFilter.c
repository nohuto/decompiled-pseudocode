/*
 * XREFs of ndisDereferenceFilter @ 0x1C0001278
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0001114 (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C000F1B0 (NdisNblTrackerDeregisterComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00AADE8 (ndisDeinitializeZeroBasedRef.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisDereferenceFilter(KSPIN_LOCK *P)
{
  __int64 result; // rax
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_FILTER_BLOCK **p_NextGlobalFilter; // rcx
  struct _NDIS_FILTER_BLOCK *v6; // rdx
  KIRQL v7; // r8
  _NDIS_FILTER_BLOCK **i; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v12; // rax
  struct NDISWATCHDOG__ *v13; // rcx
  void *v14; // rcx

  result = ndisDereferenceRef(P + 9);
  if ( (_BYTE)result )
  {
    v3 = (_NDIS_FILTER_DRIVER_BLOCK *)P[2];
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    p_NextGlobalFilter = &ndisGlobalFilterList;
    if ( ndisGlobalFilterList )
    {
      while ( 1 )
      {
        v6 = *p_NextGlobalFilter;
        if ( *p_NextGlobalFilter == (struct _NDIS_FILTER_BLOCK *)P )
          break;
        p_NextGlobalFilter = &v6->NextGlobalFilter;
        if ( !v6->NextGlobalFilter )
          goto LABEL_5;
      }
      *p_NextGlobalFilter = (struct _NDIS_FILTER_BLOCK *)P[13];
    }
LABEL_5:
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    for ( i = &v3->FilterQueue; *i; i = &(*i)->NextFilter )
    {
      if ( *i == (_NDIS_FILTER_BLOCK *)P )
      {
        *i = (_NDIS_FILTER_BLOCK *)P[1];
        break;
      }
    }
    KeReleaseSpinLock(&v3->Lock, v7);
    v9 = (void *)P[101];
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      P[101] = 0LL;
    }
    ndisDeinitializeZeroBasedRef(P + 40);
    NdisNblTrackerDeregisterComponent(P[100]);
    v10 = (void *)P[6];
    P[100] = 0LL;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      P[6] = 0LL;
    }
    v11 = (void *)P[54];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      P[54] = 0LL;
    }
    v12 = ndisVerifierNdisDispatch;
    *(_BYTE *)P = 0;
    if ( v12 && P[114] )
    {
      ((void (*)(void))v12->NdisFreeVerifierContext)();
      P[114] = 0LL;
    }
    v13 = (struct NDISWATCHDOG__ *)P[24];
    if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v13);
    v14 = (void *)P[5];
    if ( v14 )
      ExFreePoolWithTag(v14, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    return ndisDereferenceFilterDriver(v3);
  }
  return result;
}
