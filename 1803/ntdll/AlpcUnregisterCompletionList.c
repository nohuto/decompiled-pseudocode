/*
 * XREFs of AlpcUnregisterCompletionList @ 0x1800DAE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AlpcUnregisterCompletionList()
{
  return ZwAlpcSetInformation();
}
