/*
 * XREFs of ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0054A80
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00529A0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00546D0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}
