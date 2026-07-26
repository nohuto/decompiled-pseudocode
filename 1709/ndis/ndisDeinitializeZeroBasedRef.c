/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00AADE8
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0001278 (ndisDereferenceFilter.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16));
}
