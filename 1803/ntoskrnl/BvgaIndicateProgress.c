/*
 * XREFs of BvgaIndicateProgress @ 0x1408DE610
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x140231D10 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_1408F2194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_1408F2198 )
  {
    dword_1408F2198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
