/*
 * XREFs of KeyboardPnpStartCompletion @ 0x1C0002930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardPnpStartCompletion(__int64 a1, __int64 a2, PIO_WORKITEM *a3)
{
  IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)KeyboardStartWorker, DelayedWorkQueue, a3);
  return 3221225494LL;
}
