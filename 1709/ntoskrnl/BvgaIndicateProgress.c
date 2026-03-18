/*
 * XREFs of BvgaIndicateProgress @ 0x140869E20
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1401F47E0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_14087C194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_14087C198 )
  {
    dword_14087C198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
