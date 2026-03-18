/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140150890
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x1401508F8 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, KSPIN_LOCK *a2, KSPIN_LOCK *a3)
{
  KeQueryPerformanceCounter(0LL);
  PpmIdleUpdateConcurrency(a2);
  *(_QWORD *)(a1 + 24320) = a2;
  if ( a3 )
  {
    PpmIdleUpdateConcurrency(a3);
    *(_QWORD *)(a1 + 24328) = a3;
  }
  return 0LL;
}
