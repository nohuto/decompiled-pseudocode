/*
 * XREFs of ndisReferenceRefNoCheck @ 0x1C006CA88
 * Callers:
 *     NdisFIndicateStatus @ 0x1C0020AA0 (NdisFIndicateStatus.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059D40 (ndisFDirectOidRequestCompleteInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 */

void __fastcall ndisReferenceRefNoCheck(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  v5 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16);
  ++*(_WORD *)(a1 + 8);
  v6 = v4;
  NdisReferenceWithTag(v5, a2);
  KeReleaseSpinLock((PKSPIN_LOCK)a1, v6);
}
