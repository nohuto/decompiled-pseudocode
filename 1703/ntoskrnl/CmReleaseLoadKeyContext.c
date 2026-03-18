/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1404D58DC
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  __int64 v4; // rcx

  if ( a2 >= 0 )
    return CmpDereferenceKeyControlBlock(BugCheckParameter4);
  LOCK_HIVE_LOAD(BugCheckParameter4);
  CmpLockRegistry(v4);
  if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 24) + 4112LL) == 1 )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 24));
  }
  else
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  }
  CmpUnlockRegistry();
  return UNLOCK_HIVE_LOAD();
}
