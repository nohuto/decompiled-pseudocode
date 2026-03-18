/*
 * XREFs of ?IsNonEmptyOverNormalizedRange@CColorKey@@QEBA_NXZ @ 0x18020F87C
 * Callers:
 *     ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x18020F634 (-SetSourceModifications@CMILBrushBitmap@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModification.c)
 * Callees:
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x18013F4A4 (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 */

char __fastcall CColorKey::IsNonEmptyOverNormalizedRange(CColorKey *this)
{
  bool IsNonEmpty; // al
  float *v2; // rcx
  char v3; // dl

  IsNonEmpty = CColorKey::IsNonEmpty(this);
  v3 = 0;
  if ( IsNonEmpty
    && *v2 <= 1.0
    && v2[1] <= 1.0
    && v2[2] <= 1.0
    && v2[3] <= 1.0
    && v2[4] >= 0.0
    && v2[5] >= 0.0
    && v2[6] >= 0.0 )
  {
    return v2[7] >= 0.0;
  }
  return v3;
}
