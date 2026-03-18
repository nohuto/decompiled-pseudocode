/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x1C00072D0
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0013350 (VidSchFlushQueuePackets.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C006AE70 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 264) - 1) & 0xFFFFFFFD) == 0;
}
