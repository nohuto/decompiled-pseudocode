/*
 * XREFs of XEPATHOBJ_vDestructWrap @ 0x1C0134100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall XEPATHOBJ_vDestructWrap(EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
