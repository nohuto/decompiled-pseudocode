/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x14082A6D8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1402AB208 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402AB220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140829A14 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14082A560 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
