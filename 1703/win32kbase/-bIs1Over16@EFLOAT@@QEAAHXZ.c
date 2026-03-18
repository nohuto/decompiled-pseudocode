/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C00E8D88
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0021570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}
