/*
 * XREFs of EngMovePointer @ 0x1C024D910
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C024D92C (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, 0);
}
