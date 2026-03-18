/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140478370
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1404E3934 (CmReleaseLoadKeyContext.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140693C14 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140693C54 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14069B148 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // r15
  ULONG_PTR v6; // r14
  __int64 v7; // rax
  int v8; // esi
  ULONG_PTR v9; // rcx
  __int64 v10; // rcx

  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  if ( *(_DWORD *)BugCheckParameter2 <= 1u )
  {
LABEL_4:
    v4 = *(_DWORD *)(BugCheckParameter2 + 8);
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter2);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 40, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 48) = KeGetCurrentThread();
    v6 = 0LL;
    v7 = *(_QWORD *)(BugCheckParameter2 + 184);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 24);
      if ( v10 )
      {
        v6 = *(_QWORD *)(v10 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v6);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
    v8 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
    ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL);
    if ( v8 && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    if ( v6 )
      CmpUnlockKcb(v6);
    v9 = *(_QWORD *)(v5 + 2800)
       + 24
       * ((unsigned int)(*(_DWORD *)(v5 + 2808) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockEx(v9, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 5496), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return CmpDeleteHive((PERESOURCE *)v5);
  }
  else
  {
    while ( 1 )
    {
      v3 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)BugCheckParameter2,
                               result - 1,
                               result);
      if ( (_DWORD)result == v3 )
        break;
      if ( (unsigned int)result <= 1 )
        goto LABEL_4;
    }
  }
  return result;
}
