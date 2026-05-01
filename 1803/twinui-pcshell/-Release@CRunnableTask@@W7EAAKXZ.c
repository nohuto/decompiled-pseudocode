/*
 * XREFs of ?Release@CRunnableTask@@W7EAAKXZ @ 0x1800ADD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRunnableTask::Release(__int64 a1)
{
  return CRunnableTask::Release((CRunnableTask *)(a1 - 8));
}
