/*
 * XREFs of ndisDereferenceFilter @ 0x1C0011E1C
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011CBC (ndisFilterAttachCleanUp.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00120B0 (NdisNblTrackerDeregisterComponent.c)
 *     ndisDereferenceFilterDriver @ 0x1C0017074 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00B257C (ndisDeinitializeZeroBasedRef.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisDereferenceFilter(KSPIN_LOCK *P)
{
  __int64 result; // rax
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_FILTER_BLOCK *v5; // rcx
  struct _NDIS_FILTER_BLOCK **p_NextGlobalFilter; // rdx
  KIRQL v7; // r8
  void **i; // rdx
  KSPIN_LOCK *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v13; // rax
  struct NDISWATCHDOG__ *v14; // rcx
  void *v15; // rcx

  result = ndisDereferenceRef(P + 9);
  if ( (_BYTE)result )
  {
    v3 = (_NDIS_FILTER_DRIVER_BLOCK *)P[2];
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    v5 = ndisGlobalFilterList;
    p_NextGlobalFilter = &ndisGlobalFilterList;
    while ( v5 )
    {
      if ( v5 == (struct _NDIS_FILTER_BLOCK *)P )
      {
        *p_NextGlobalFilter = (struct _NDIS_FILTER_BLOCK *)P[13];
        break;
      }
      p_NextGlobalFilter = &v5->NextGlobalFilter;
      v5 = v5->NextGlobalFilter;
    }
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    for ( i = (void **)&v3->FilterQueue; ; i = (void **)(v9 + 1) )
    {
      v9 = (KSPIN_LOCK *)*i;
      if ( !*i )
        break;
      if ( v9 == P )
      {
        *i = (void *)P[1];
        break;
      }
    }
    KeReleaseSpinLock(&v3->Lock, v7);
    v10 = (void *)P[101];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      P[101] = 0LL;
    }
    ndisDeinitializeZeroBasedRef(P + 40);
    NdisNblTrackerDeregisterComponent(P[100]);
    v11 = (void *)P[6];
    P[100] = 0LL;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      P[6] = 0LL;
    }
    v12 = (void *)P[54];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P[54] = 0LL;
    }
    v13 = ndisVerifierNdisDispatch;
    *(_BYTE *)P = 0;
    if ( v13 && P[114] )
    {
      ((void (*)(void))v13->NdisFreeVerifierContext)();
      P[114] = 0LL;
    }
    v14 = (struct NDISWATCHDOG__ *)P[24];
    if ( v14 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v14);
    v15 = (void *)P[5];
    if ( v15 )
      ExFreePoolWithTag(v15, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    return ndisDereferenceFilterDriver(v3);
  }
  return result;
}
