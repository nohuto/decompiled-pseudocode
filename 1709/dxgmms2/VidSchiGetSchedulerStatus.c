/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C00140D0
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C00773BC (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 272);
}
