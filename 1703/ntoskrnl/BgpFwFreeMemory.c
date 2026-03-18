/*
 * XREFs of BgpFwFreeMemory @ 0x1401417E0
 * Callers:
 *     RaspFreeMemory @ 0x1401417C4 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1401432D8 (BgpFwQueryBootGraphicsInformation.c)
 *     ResFwpPageOutBackground @ 0x140755980 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140755F30 (ResFwpPageInBackground.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 *     TxtpAddCacheEntry @ 0x140757C08 (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140757CB0 (TxtpClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
 *     BgpConsoleInitialize @ 0x140758740 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140758958 (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140758B1C (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140758CA0 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140758D6C (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140758DDC (FopFreeMappingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140837A54 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x140837E64 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x14083825C (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x14083842C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x14083858C (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x140838720 (FopReadNamingTable.c)
 * Callees:
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  ULONG v2; // edx
  __int64 v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // r8
  struct _MDL *v6; // rcx
  ULONG v7; // ebx
  struct _MDL *v8; // rbx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v7 = v1 - qword_14036E368 - 8;
    RtlClearBits(&BitMapHeader, v7, *(_DWORD *)(v1 + 8));
    if ( v7 < HintIndex )
      HintIndex = v7;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = *(_QWORD *)(a1 - 40);
      v4 = *(_QWORD **)(a1 - 40 + 8);
      if ( *(_QWORD *)(v3 + 8) != a1 - 40 || *v4 != a1 - 40 )
        __fastfail(3u);
      *v4 = v3;
      v5 = 48LL;
      *(_QWORD *)(v3 + 8) = v4;
    }
    else
    {
      v5 = 32LL;
    }
    v6 = (struct _MDL *)(a1 - v5);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v6, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      v2 = 0;
      v6 = v8;
    }
    ExFreePoolWithTag(v6, v2);
  }
}
