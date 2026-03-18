/*
 * XREFs of ?CanContainMoveTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C008C4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMouseProcessor::CanContainMoveTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return (*(_DWORD *)(*(_QWORD *)a1 + 88LL) & 0x400) == 0;
}
