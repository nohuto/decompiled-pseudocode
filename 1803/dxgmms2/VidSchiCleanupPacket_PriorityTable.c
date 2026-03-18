/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00BFB5C
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C0033DFC (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002AAA4 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C002BAE0 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C002CAFC (VidSchiSelectContext.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(KSPIN_LOCK *a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
