/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140297764
 * Callers:
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402969E4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140297398 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140297470 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapCleanup @ 0x14029D7B0 (RtlCSparseBitmapCleanup.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(ULONG_PTR *a1, ULONG_PTR *a2, int a3)
{
  unsigned __int64 v3; // r9
  ULONG_PTR v4; // r10

  if ( a3 != 0x8000 )
    return MmFreePoolMemory(a1, a2);
  v3 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v4 = *a1 + *a2 - v3;
  *a1 = v3;
  *a2 = v4;
  if ( v4 )
    return MmFreePoolMemory(a1, a2);
  else
    return 0LL;
}
