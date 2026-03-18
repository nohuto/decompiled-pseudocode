/*
 * XREFs of CiThreadReferenceTaskIndex @ 0x1C0002498
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093C4 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiAcquireProcessLock @ 0x1C000AFA4 (CiAcquireProcessLock.c)
 *     CiReleaseProcessLock @ 0x1C000B2F0 (CiReleaseProcessLock.c)
 */

__int64 __fastcall CiThreadReferenceTaskIndex(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  CiAcquireProcessLock();
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 48)) <= 1 )
      __fastfail(0xEu);
  }
  CiReleaseProcessLock(a1);
  return v2;
}
