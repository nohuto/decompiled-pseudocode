/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14020CE50
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14020CEB4 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_14036A7CC);
  return KiEpfDrainCompletionQueue();
}
