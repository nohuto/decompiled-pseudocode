/*
 * XREFs of CmWorkerEngineDequeueWorkItem @ 0x14068C564
 * Callers:
 *     CmpUnfreezeHive @ 0x14068F084 (CmpUnfreezeHive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

char __fastcall CmWorkerEngineDequeueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    if ( (_QWORD *)v3[1] != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
    a1[1] = a1;
    *a1 = a1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  return v2;
}
