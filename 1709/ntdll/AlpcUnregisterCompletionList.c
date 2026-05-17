/*
 * XREFs of AlpcUnregisterCompletionList @ 0x1800DFF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AlpcUnregisterCompletionList()
{
  return NtAlpcSetInformation();
}
