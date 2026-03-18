/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1404A86C0
 * Callers:
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1406F6E04 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1406F6E44 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1406FFD38 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // r15
  ULONG_PTR v5; // r14
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rcx
  int v13; // edx
  __int64 v14; // rcx

  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  if ( *(_DWORD *)BugCheckParameter2 > 1u )
  {
    while ( 1 )
    {
      v13 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)BugCheckParameter2,
                               result - 1,
                               result);
      if ( (_DWORD)result == v13 )
        break;
      if ( (unsigned int)result <= 1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v3 = *(_DWORD *)(BugCheckParameter2 + 8);
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter2);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 40, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 48) = KeGetCurrentThread();
    v5 = 0LL;
    v6 = *(_QWORD *)(BugCheckParameter2 + 184);
    if ( v6 )
    {
      v14 = *(_QWORD *)(v6 + 24);
      if ( v14 )
      {
        v5 = *(_QWORD *)(v14 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v5);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
    v9 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
    ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL, v7, v8);
    if ( v9 && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    if ( v5 )
      CmpUnlockKcb(v5);
    v12 = *(_QWORD *)(v4 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v4 + 1648) - 1) & ((101027 * (v3 ^ (v3 >> 9))) ^ ((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)));
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockEx(v12, 0LL, v10, v11);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 4288), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return CmpDeleteHive((PVOID)v4);
  }
  return result;
}
