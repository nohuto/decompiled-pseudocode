/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x140025FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
