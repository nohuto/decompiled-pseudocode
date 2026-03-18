/*
 * XREFs of ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0276C3C
 * Callers:
 *     ?PanAssertMode@@YAHPEAUDHPDEV__@@H@Z @ 0x1C02746E0 (-PanAssertMode@@YAHPEAUDHPDEV__@@H@Z.c)
 *     ?PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0274900 (-PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0274A90 (-PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0274DF0 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C02753C0 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z @ 0x1C02754B0 (-PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0275970 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0276B00 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PANDEVLOCK::vUnLock(HSEMAPHORE *this)
{
  HSEMAPHORE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    EngReleaseSemaphore(v2);
    *this = 0LL;
  }
}
