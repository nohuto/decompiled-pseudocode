/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28
 * Callers:
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     GreGetPaletteEntries @ 0x1C009F250 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C009F7CC (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C009F85C (DxEngSetPaletteState.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009F8A0 (hsurfCreateCompatibleSurface.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C01358B0 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C024FCF4 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C026E560 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0285A6C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C028EB80 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C0294B20 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C0295A10 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C0295DE0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
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
