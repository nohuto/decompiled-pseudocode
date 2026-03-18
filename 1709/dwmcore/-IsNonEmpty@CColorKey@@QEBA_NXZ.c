/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x18009D0D4
 * Callers:
 *     ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x180045EFC (-SetSourceModifications@CMILBrushBitmap@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModification.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
