/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00BF100
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16));
}
