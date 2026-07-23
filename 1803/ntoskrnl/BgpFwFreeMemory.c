/*
 * XREFs of BgpFwFreeMemory @ 0x1401659F0
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140164E84 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140174460 (RaspFreeMemory.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x14083C37C (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x14083C3FC (ResFwpPageOutBackground.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     BgpFwLibraryDestroy @ 0x14083CFC4 (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x14083D050 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14083D0AC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x14083D1D0 (BgpTxtDestroyRegion.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 *     TxtpAddCacheEntry @ 0x14083D4D4 (TxtpAddCacheEntry.c)
 *     BgpFoDestroy @ 0x14083D768 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x14083D834 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x14083D8A8 (FopFreeMappingTable.c)
 *     BgpConsoleInitialize @ 0x14083D9A0 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x14083DBB8 (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x1408E3930 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x1408E3B54 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1408E3D24 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1408E3EB8 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x1408E41EC (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1408E4574 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
    v10 = v1 - qword_1403CDC30 - 8;
    RtlClearBits(&stru_1403CDC40, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < dword_1403CDC38 )
      dword_1403CDC38 = v10;
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
