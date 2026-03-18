/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0017300
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiGetRandomRgn @ 0x1C0092950 (NtGdiGetRandomRgn.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     NtGdiGetWidthTable @ 0x1C00F4990 (NtGdiGetWidthTable.c)
 *     NtGdiSetMetaRgn @ 0x1C00F99D0 (NtGdiSetMetaRgn.c)
 *     GreGetKerningPairs @ 0x1C01301D8 (GreGetKerningPairs.c)
 *     NtGdiFastPolyPolyline @ 0x1C0135E10 (NtGdiFastPolyPolyline.c)
 *     NtGdiGetETM @ 0x1C013A2A0 (NtGdiGetETM.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C02579D0 (NtGdiAddEmbFontToDC.c)
 *     GrePolyDraw @ 0x1C027B4C8 (GrePolyDraw.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1C0289090 (NtGdiGetPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C028A350 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C028B030 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C0291240 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C0291C00 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C0291DB0 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C0293380 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
