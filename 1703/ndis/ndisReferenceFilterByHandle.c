/*
 * XREFs of ndisReferenceFilterByHandle @ 0x1C00256FC
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceFilterByHandle(struct _NDIS_FILTER_BLOCK *a1, char a2)
{
  bool v3; // bl
  KIRQL v4; // si
  struct _NDIS_FILTER_BLOCK *i; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  for ( i = ndisGlobalFilterList; i; i = i->NextGlobalFilter )
  {
    if ( i == a1 )
    {
      v3 = ndisReferenceRefEx(&a1->Ref.SpinLock, 0, &v7);
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
  return v3;
}
