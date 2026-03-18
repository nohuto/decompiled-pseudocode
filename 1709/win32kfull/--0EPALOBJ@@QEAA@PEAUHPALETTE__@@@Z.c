/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08
 * Callers:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0041524 (hsurfCreateCompatibleSurface.c)
 *     DxEngSetPaletteState @ 0x1C0041B84 (DxEngSetPaletteState.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0041BC8 (DxEngSelectPaletteToSurface.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00BD590 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreGetPaletteEntries @ 0x1C00FFA40 (GreGetPaletteEntries.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C013A8B0 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024C078 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0251744 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C026ACE0 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02825CC (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C028B6E0 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C0291240 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02920C0 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C0292490 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  HPALETTE v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = a2;
  LOBYTE(a2) = 8;
  *(_QWORD *)this = HmgShareLockCheck(v2, a2);
  return this;
}
