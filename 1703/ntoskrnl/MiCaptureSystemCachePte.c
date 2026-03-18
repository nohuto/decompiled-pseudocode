/*
 * XREFs of MiCaptureSystemCachePte @ 0x1402122D8
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiCaptureSystemCachePte(__int64 a1)
{
  return MI_READ_PTE_LOCK_FREE(a1);
}
