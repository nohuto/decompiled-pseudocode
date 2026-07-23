/*
 * XREFs of BgpFwFreeMemory @ 0x14013CD34
 * Callers:
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14013E750 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpConsoleInitialize @ 0x1407CE070 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x1407CE760 (BgpDisplayCharacterGetContext.c)
 *     FopFreeFontData @ 0x1407CE9D0 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1407CEA44 (FopFreeMappingTable.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x1407CFE6C (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     BgConsoleDestroyInterface @ 0x1407D0938 (BgConsoleDestroyInterface.c)
 *     BgpFoDestroy @ 0x1407D0A18 (BgpFoDestroy.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1407D0AE4 (BgpDisplayCharacterDestroyContext.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 *     BgpFoInitialize @ 0x14086EBD4 (BgpFoInitialize.c)
 *     FopValidateFontNameTable @ 0x14086EDF8 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x14086F1D0 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x14086F494 (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x14086F7E8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x14086F9B8 (FopReadCmapTable.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  ULONG v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  ULONG v8; // edx
  struct _MDL *v9; // rbx
  ULONG v10; // ebx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v10 = v1 - qword_14038D020 - 8;
    RtlClearBits(&stru_14038D030, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < dword_14038D028 )
      dword_14038D028 = v10;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0);
      v8 = 0;
      v7 = v9;
    }
    else
    {
      v8 = v2;
    }
    ExFreePoolWithTag(v7, v8);
  }
}
