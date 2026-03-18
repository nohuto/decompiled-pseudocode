/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14024B1D0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14024B234 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_1403AD92C);
  return KiEpfDrainCompletionQueue();
}
