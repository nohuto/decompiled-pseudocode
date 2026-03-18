/*
 * XREFs of KiEpfHandleNotification @ 0x14020CF30
 * Callers:
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14020CEB4 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14020CF54 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
