/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800DAAE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009BC10 (ZwAlpcSetInformation.c)
 */

__int64 AlpcAdjustCompletionListConcurrencyCount()
{
  return ZwAlpcSetInformation();
}
