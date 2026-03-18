/*
 * XREFs of EngUnmapFontFileFD @ 0x1C010CBB0
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00B63CC (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0144D94 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C0226B70 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C0226C40 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0226D20 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0226DB0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0226E60 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C0226F40 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdCloseFontContext @ 0x1C02328B4 (ttfdCloseFontContext.c)
 *     ttfdOpenFontContext @ 0x1C023298C (ttfdOpenFontContext.c)
 *     ttfdOpenFontContextInternal @ 0x1C02329F4 (ttfdOpenFontContextInternal.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C02341D0 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0234280 (BmfdQueryFontDataTE.c)
 *     vBmfdMarkFontGone @ 0x1C0234390 (vBmfdMarkFontGone.c)
 *     BmfdCloseFontContext @ 0x1C0236860 (BmfdCloseFontContext.c)
 *     vVtfdMarkFontGone @ 0x1C02380B8 (vVtfdMarkFontGone.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C02381A0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0238260 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0238330 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 *     vtfdDestroyFont @ 0x1C023A010 (vtfdDestroyFont.c)
 *     vtfdOpenFontContext @ 0x1C023A08C (vtfdOpenFontContext.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0294500 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00B374C (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
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
