/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x14077B420
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x140251888 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402518A0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14077A724 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14077A75C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14077B2AC (ViDeadlockSearchThread.c)
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
