/*
 * XREFs of PipFindDependencyNodePath @ 0x14013CF8C
 * Callers:
 *     IoTestDependency @ 0x14013CF30 (IoTestDependency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x14013D014 (PipDependencyGraphDepthFirstSearch.c)
 */

__int64 __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  PipDependencyGraphDepthFirstSearch(a1, a2, v10, a4);
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  __writecr8(v8);
  result = 0LL;
  if ( v10[0] )
  {
    LOBYTE(result) = v10[0] != 1;
    result = (unsigned int)(result + 1);
  }
  *a3 = result;
  return result;
}
