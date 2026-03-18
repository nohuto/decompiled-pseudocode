/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1404E3934
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR a1, int a2)
{
  if ( a2 >= 0 )
    return CmpDereferenceKeyControlBlock(a1);
  LOCK_HIVE_LOAD();
  CmpLockRegistry();
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 4112LL) == 1 )
  {
    CmpDereferenceKeyControlBlock(a1);
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(a1 + 24));
  }
  else
  {
    CmpDereferenceKeyControlBlock(a1);
  }
  CmpUnlockRegistry();
  return UNLOCK_HIVE_LOAD();
}
