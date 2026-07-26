/*
 * XREFs of ndisReferenceFilterByHandle @ 0x1C0001634
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 */

char __fastcall ndisReferenceFilterByHandle(struct _NDIS_FILTER_BLOCK *a1)
{
  char v2; // bl
  KIRQL v3; // si
  struct _NDIS_FILTER_BLOCK *i; // rax

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  for ( i = ndisGlobalFilterList; i; i = i->NextGlobalFilter )
  {
    if ( i == a1 )
    {
      v2 = ndisReferenceRefEx(&a1->Ref.SpinLock);
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v3);
  return v2;
}
