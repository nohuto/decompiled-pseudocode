/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x140478770
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rdi
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9)));
  v4 = *(_QWORD *)(v2 + 2800) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 2808) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
