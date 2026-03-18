/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A7FE8
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1, __int64 a2)
{
  return (unsigned int)SetMagnificationInputTransform((__int128 *)a1, a2) == 0 ? 0xC0000001 : 0;
}
