/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C00AD81C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0025BD0 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0026AF0 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C002787C (VidSchiSelectContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00AB6B4 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1, int a2)
{
  struct _ERESOURCE *v2; // rdi
  struct _VIDSCH_CONTEXT *v5; // rax
  char v6; // al

  v2 = (struct _ERESOURCE *)((char *)a1 + 1032);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1032), 1u);
  *((_BYTE *)a1 + 2844) = *((_BYTE *)a1 + 2844) & 0xFE | (a2 != 0);
  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    v5 = VidSchiSelectContext((KSPIN_LOCK *)a1, 0);
    if ( !v5 )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)v5);
  }
  v6 = *((_BYTE *)a1 + 2844);
  if ( (v6 & 2) == 0 )
    *((_BYTE *)a1 + 2844) = v6 & 0xFE;
  if ( !a2 )
    VidSchiWaitForEmptyHwQueue((__int64)a1);
  ExReleaseResourceLite(v2);
}
