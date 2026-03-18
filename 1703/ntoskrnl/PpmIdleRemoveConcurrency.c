/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140150820
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x1401508F8 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KSPIN_LOCK *v3; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 24320);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    v3 = *(KSPIN_LOCK **)(a1 + 24328);
    *(_QWORD *)(a1 + 24320) = 0LL;
    if ( v3 )
    {
      PpmIdleUpdateConcurrency(v3);
      *(_QWORD *)(a1 + 24328) = 0LL;
    }
  }
  return 0LL;
}
