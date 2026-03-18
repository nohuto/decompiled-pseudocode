/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0004120
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C007C188 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 288);
}
