/*
 * XREFs of MiCaptureSystemCachePte @ 0x140219D54
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiMapSystemCachePage @ 0x140219F0C (MiMapSystemCachePage.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiCaptureSystemCachePte(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    return MiReadPteShadow();
  return result;
}
