/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x1406F2DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     PfpPrefetchSharedDeref @ 0x140443A20 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((ULONG_PTR)v4, a2, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, (unsigned __int64)a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
