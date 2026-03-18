/*
 * XREFs of BvgaIndicateProgress @ 0x140832D00
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1401EF0D0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_1407C5164;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_1407C5168 )
  {
    dword_1407C5168 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
