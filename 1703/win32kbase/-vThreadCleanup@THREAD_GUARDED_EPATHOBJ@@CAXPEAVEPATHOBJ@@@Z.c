/*
 * XREFs of ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C00E9360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall THREAD_GUARDED_EPATHOBJ::vThreadCleanup(struct EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
