/*
 * XREFs of UpdateLogicalCursorPos @ 0x1C012EFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UpdateLogicalCursorPos(struct tagPOINT a1, char a2)
{
  CMouseProcessor::SetLogicalCursorPos(a1, a2);
}
