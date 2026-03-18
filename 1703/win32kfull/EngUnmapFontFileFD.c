/*
 * XREFs of EngUnmapFontFileFD @ 0x1C00FCCB0
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0027B5C (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013F3BC (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C0225600 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C02256C0 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0225790 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0225820 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C02258D0 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C02259A0 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdCloseFontContext @ 0x1C0231344 (ttfdCloseFontContext.c)
 *     ttfdOpenFontContext @ 0x1C023141C (ttfdOpenFontContext.c)
 *     ttfdOpenFontContextInternal @ 0x1C0231484 (ttfdOpenFontContextInternal.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0232C70 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0232D10 (BmfdQueryFontDataTE.c)
 *     vBmfdMarkFontGone @ 0x1C0232E10 (vBmfdMarkFontGone.c)
 *     BmfdCloseFontContext @ 0x1C02352C4 (BmfdCloseFontContext.c)
 *     vVtfdMarkFontGone @ 0x1C0236B0C (vVtfdMarkFontGone.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0236BF0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0236CB0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0236D70 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontFile @ 0x1C0238600 (vtfdQueryFontFile.c)
 *     vtfdDestroyFont @ 0x1C0238A50 (vtfdDestroyFont.c)
 *     vtfdOpenFontContext @ 0x1C0238ACC (vtfdOpenFontContext.c)
 *     GreMakeFontDir @ 0x1C0297420 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0297E30 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021490 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+60h] [rbp-18h]

  if ( iFile )
  {
    *(_QWORD *)&v10 = 0LL;
    GreAcquireFastMutex(ghfmMemory);
    v2 = *(_DWORD *)(iFile + 100);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(iFile + 100) = v3;
      if ( !v3 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v4 = *(_QWORD *)(iFile + 16) == 0LL;
          v5 = *(_OWORD *)(iFile + 16);
          v9 = *(_OWORD *)iFile;
          v6 = *(_OWORD *)(iFile + 32);
          v10 = v5;
          v7 = *(_OWORD *)(iFile + 48);
          v11 = v6;
          v8 = *(_OWORD *)(iFile + 64);
          v12 = v7;
          v13 = v8;
          if ( !v4 )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_DWORD *)(iFile + 40) & 0x18) != 0 )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( (_QWORD)v10 )
      vUnmapFileFD((struct _FILEVIEW *)&v9, (BYTE8(v11) & 8) != 0 || (BYTE8(v11) & 0x10) != 0);
  }
}
