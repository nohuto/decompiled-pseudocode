/*
 * XREFs of BgpTxtDestroyRegion @ 0x14083D1D0
 * Callers:
 *     BgpDisplayCharacterDestroyContext @ 0x14083D0AC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x14083DBB8 (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     RaspClearCache @ 0x14083C73C (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
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
      TxtpClearCache();
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
