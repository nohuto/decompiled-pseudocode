/*
 * XREFs of EngDeleteClip @ 0x1C00FCCA0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C006DC60 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
