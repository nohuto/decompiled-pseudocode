/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1C00BBA10
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0012AC4 (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1)
{
  char *v1; // rdi
  char *i; // rbx

  v1 = (char *)(a1 + 72);
  for ( i = *(char **)(a1 + 72); i != v1; i = *(char **)i )
    VidSchiCancelDelayTimerContext(i - 24);
}
