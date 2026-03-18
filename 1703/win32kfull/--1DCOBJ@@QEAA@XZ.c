/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     NtGdiGetWidthTable @ 0x1C00E2570 (NtGdiGetWidthTable.c)
 *     GreSetWindowOrg @ 0x1C00F76DC (GreSetWindowOrg.c)
 *     NtGdiFastPolyPolyline @ 0x1C0121530 (NtGdiFastPolyPolyline.c)
 *     GreGetKerningPairs @ 0x1C01283C8 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0255ED0 (NtGdiAddEmbFontToDC.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GrePolyDraw @ 0x1C027E9B0 (GrePolyDraw.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1C028C570 (NtGdiGetPath.c)
 *     NtGdiColorCorrectPalette @ 0x1C0294B20 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C0295560 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C0295710 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
 *     NtGdiEnumObjects @ 0x1C0296CC0 (NtGdiEnumObjects.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
