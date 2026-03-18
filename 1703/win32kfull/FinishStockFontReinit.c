/*
 * XREFs of FinishStockFontReinit @ 0x1C000B490
 * Callers:
 *     <none>
 * Callees:
 *     FinishStockFontInit @ 0x1C000A820 (FinishStockFontInit.c)
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     hfontInitDefaultGuiFont @ 0x1C038873C (hfontInitDefaultGuiFont.c)
 */

void __fastcall FinishStockFontReinit(unsigned int c)
{
  void *inited; // rax

  GreSetLFONTOwner(gahStockObjects[17], 2147483650LL);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0LL;
  GreSetLFONTOwner(gahStockObjects96[17], 2147483650LL);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0LL;
  inited = (void *)hfontInitDefaultGuiFont();
  bSetStockObject(inited, 17, 0);
  GreSetLFONTOwner(gahStockObjects[17], 0LL);
  FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
}
