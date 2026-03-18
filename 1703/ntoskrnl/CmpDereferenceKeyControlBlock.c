/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140490D70
 * Callers:
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1404D58DC (CmReleaseLoadKeyContext.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140668EA0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR v3; // rsi
  unsigned int v4; // r15d
  ULONG_PTR v5; // rdi
  void *v6; // r14
  __int64 v7; // rax
  int v8; // edi
  ULONG_PTR v9; // rcx
  int v10; // edx
  __int64 v11; // rcx

  LODWORD(result) = *(_DWORD *)BugCheckParameter4;
  if ( *(_DWORD *)BugCheckParameter4 > 1u )
  {
    while ( 1 )
    {
      v10 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)BugCheckParameter4,
                               result - 1,
                               result);
      if ( (_DWORD)result == v10 )
        break;
      if ( (unsigned int)result <= 1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v3 = *(_QWORD *)(BugCheckParameter4 + 24);
    v4 = *(_DWORD *)(BugCheckParameter4 + 8);
    v5 = *(_QWORD *)(v3 + 2800)
       + 24
       * ((unsigned int)(*(_DWORD *)(v3 + 2808) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( !CmpReferenceHive(v3) )
      KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
      *(_DWORD *)(BugCheckParameter4 + 60) = CmpLockTableAdd(BugCheckParameter4, 1);
    ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 40, 0LL);
    *(_QWORD *)(BugCheckParameter4 + 48) = KeGetCurrentThread();
    v6 = 0LL;
    v7 = *(_QWORD *)(BugCheckParameter4 + 184);
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 24);
      if ( v11 )
      {
        v6 = *(void **)(v11 + 16);
        CmpUnlockKcb((PVOID)BugCheckParameter4);
        CmpLockKcbExclusive(v6);
        CmpLockKcbExclusive(BugCheckParameter4);
      }
    }
    CmpDereferenceKeyControlBlockWithLock((PVOID)BugCheckParameter4);
    v8 = *(_DWORD *)(BugCheckParameter4 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter4 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter4 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 48));
    ExReleasePushLockEx(BugCheckParameter4 + 40, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 60));
    if ( v8 && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)BugCheckParameter4);
    if ( v6 )
      CmpUnlockKcb(v6);
    v9 = *(_QWORD *)(v3 + 2800)
       + 24
       * ((unsigned int)(*(_DWORD *)(v3 + 2808) - 1) & ((101027 * (v4 ^ (v4 >> 9))) ^ ((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)));
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockEx(v9, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5496), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return CmpDeleteHive(v3);
  }
  return result;
}
