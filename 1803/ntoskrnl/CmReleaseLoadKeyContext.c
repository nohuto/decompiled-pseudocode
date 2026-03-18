/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14049BE14
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, int a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( a2 >= 0 )
    return (_QWORD *)CmpDereferenceKeyControlBlock(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  CmpLockRegistry();
  v4 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 24) + 2936LL);
  CmpDereferenceKeyControlBlock(BugCheckParameter2);
  if ( v4 == 1 )
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 24));
  CmpUnlockRegistry();
  return UNLOCK_HIVE_LOAD(v6, v5, v7, v8);
}
