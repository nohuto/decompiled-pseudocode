/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0012FAC
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C0071334 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 264);
}
