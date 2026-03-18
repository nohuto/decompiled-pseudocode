/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C00BEF10
 * Callers:
 *     <none>
 * Callees:
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C00BEDB4 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00BEF54 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C1AB0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  MultiUserGreCleanupAllFonts(v1, v0, v2);
  if ( ghsemFntCache )
  {
    v3 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
}
