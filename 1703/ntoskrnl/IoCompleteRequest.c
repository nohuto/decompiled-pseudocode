/*
 * XREFs of IoCompleteRequest @ 0x1401F38C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoCompleteRequest(PIRP Irp, CCHAR PriorityBoost)
{
  IofCompleteRequest(Irp, PriorityBoost);
}
