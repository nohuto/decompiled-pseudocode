/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C0008710
 * Callers:
 *     <none>
 * Callees:
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C00085B0 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0008754 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009204 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  MultiUserGreCleanupAllFonts();
  if ( ghsemFntCache )
  {
    v0 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v0);
  }
}
