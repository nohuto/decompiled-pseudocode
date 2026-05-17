/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DFBB0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A11F0 (NtAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return NtAlpcSetInformation();
}
