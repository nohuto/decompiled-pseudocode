/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468
 * Callers:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     bUnloadEudcFont @ 0x1C0008B20 (bUnloadEudcFont.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0008BFC (prfntDeactivateEudcRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0008CB0 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0008E14 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 *     GreGetUFI @ 0x1C00287F0 (GreGetUFI.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00327BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C007D7CC (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008C5D4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C009784C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     FONTOBJ_pifi @ 0x1C009B950 (FONTOBJ_pifi.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009B990 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     GreGetTextCharsetInfo @ 0x1C00E08F4 (GreGetTextCharsetInfo.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1F64 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00E2570 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00E517C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00F4BCC (FONTOBJ_GetCachedGlyphAttrs.c)
 *     GreGetCharWidthW @ 0x1C00F5BE4 (GreGetCharWidthW.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00F9130 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphIndicesW @ 0x1C00FA32C (GreGetGlyphIndicesW.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBA88 (GreGetFontUnicodeRanges.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FEFC0 (NtGdiQueryFontAssocInfo.c)
 *     GreFontIsLinked @ 0x1C0102D2C (GreFontIsLinked.c)
 *     prfntKillList @ 0x1C0103FFC (prfntKillList.c)
 *     GreGetCharWidthInfo @ 0x1C0106EF8 (GreGetCharWidthInfo.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C010E810 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     GreGetKerningPairs @ 0x1C01283C8 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C013C58C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     GreGetRealizationInfo @ 0x1C013EABC (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 *     vKillRFONTList @ 0x1C024A3B8 (vKillRFONTList.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0254BCC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0270084 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0273560 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C02735B0 (FONTOBJ_cGetAllGlyphHandles.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C02735F0 (FONTOBJ_cGetGlyphs.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0273660 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C02736D0 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C0273710 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x1C0273750 (FONTOBJ_pwszFontFilePaths.c)
 *     FONTOBJ_vGetInfo @ 0x1C02737B0 (FONTOBJ_vGetInfo.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027768C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     vMakeInactiveHelper @ 0x1C0277D90 (vMakeInactiveHelper.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0277DE0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0277FAC (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02780F8 (vUnlinkEudcRFONTsWorker.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028606C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02867C0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02872D0 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C0287320 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C0287374 (FONTOBJ_SetCachedGlyphAttrs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02873A0 (vRemoveAllInactiveRFONTs.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0288260 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0288930 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C0289BE0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028A340 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0293010 (NtGdiFONTOBJ_pfdg.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0299DAC (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C008EC54 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x81) != 0 )
      RFONTOBJ::dtHelper(this, 1);
    v2 = *(_QWORD *)(*(_QWORD *)this + 632LL);
    if ( v2 )
    {
      Win32FreePool(v2);
      *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
  }
}
