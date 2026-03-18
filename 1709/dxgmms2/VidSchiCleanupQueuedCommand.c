/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C00B622C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0027C74 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0028BF8 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C0029BF0 (VidSchiSelectContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00B3FF0 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _ERESOURCE *a1, int a2)
{
  struct _ERESOURCE *v2; // rdi
  struct _VIDSCH_CONTEXT *v5; // rax
  char v6; // al

  v2 = a1 + 10;
  ExAcquireResourceExclusiveLite(a1 + 10, 1u);
  BYTE4(a1[27].OwnerEntry.OwnerThread) = BYTE4(a1[27].OwnerEntry.OwnerThread) & 0xFE | (a2 != 0);
  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    v5 = VidSchiSelectContext((KSPIN_LOCK *)a1, 0);
    if ( !v5 )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)v5);
  }
  v6 = BYTE4(a1[27].OwnerEntry.OwnerThread);
  if ( (v6 & 2) == 0 )
    BYTE4(a1[27].OwnerEntry.OwnerThread) = v6 & 0xFE;
  if ( !a2 )
    VidSchiWaitForEmptyHwQueue((__int64)a1);
  ExReleaseResourceLite(v2);
}
