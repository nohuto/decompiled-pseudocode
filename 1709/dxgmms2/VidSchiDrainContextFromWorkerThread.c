/*
 * XREFs of VidSchiDrainContextFromWorkerThread @ 0x1C0027C74
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00B622C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C0010610 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0028BF8 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0028D08 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 */

void __fastcall VidSchiDrainContextFromWorkerThread(__int64 a1)
{
  __int64 i; // rdi
  _VIDSCH_QUEUE_PACKET *v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL); ; VidSchiProcessPrimariesTerminationList(i) )
  {
    v3 = (_VIDSCH_QUEUE_PACKET *)VidSchiReadCommandFromContextQueue(a1, 0LL, &v4);
    if ( !v3 )
      break;
    VidSchiSubmitQueueCommand(v3);
  }
  VidSchiSetTransferContextRunningTime(a1, 0LL, 0);
}
