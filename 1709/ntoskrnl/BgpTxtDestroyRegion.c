/*
 * XREFs of BgpTxtDestroyRegion @ 0x1407CF358
 * Callers:
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x1407CE760 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1407D0AE4 (BgpDisplayCharacterDestroyContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x1407CF9E4 (RaspClearCache.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      TxtpClearCache(v3);
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
