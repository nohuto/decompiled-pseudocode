/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00B257C
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 1LL;
}
