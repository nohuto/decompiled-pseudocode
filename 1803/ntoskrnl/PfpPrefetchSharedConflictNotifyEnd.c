/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x14075BCA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     PfpPrefetchSharedDeref @ 0x1404925AC (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, _KLOCK_ENTRY *a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((ULONG_PTR)v4, (__int64)a2, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
