/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800E1260
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x1800A6430 (ZwAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return ZwAlpcSetInformation();
}
