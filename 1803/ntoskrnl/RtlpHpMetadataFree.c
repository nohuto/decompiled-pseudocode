/*
 * XREFs of RtlpHpMetadataFree @ 0x140295D08
 * Callers:
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14029E758 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140295D90 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR v5; // r10
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = *a2;
  v4 = (ULONG_PTR *)RtlpHpMetadataHeapCtxGet(&v7, a2, a3, a4);
  return RtlpHpFreeHeap(*v4, v5, 0x1000000, 0LL);
}
