/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1C00AA728
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0002174 (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1)
{
  char *v1; // rdi
  char *i; // rbx

  v1 = (char *)(a1 + 64);
  for ( i = *(char **)(a1 + 64); i != v1; i = *(char **)i )
    VidSchiCancelDelayTimerContext(i - 24);
}
