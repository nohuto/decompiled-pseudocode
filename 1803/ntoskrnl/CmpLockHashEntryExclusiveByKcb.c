/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  int v6; // ett

  v2 = *(_QWORD *)(BugCheckParameter4 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9)));
  v4 = *(_QWORD *)(v2 + 1640) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  _m_prefetchw((const void *)(v2 + 4288));
  LODWORD(result) = *(_DWORD *)(v2 + 4288);
  if ( !(_DWORD)result )
LABEL_4:
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  while ( 1 )
  {
    v6 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4288), result + 1, result);
    if ( v6 == (_DWORD)result )
      return result;
    if ( !(_DWORD)result )
      goto LABEL_4;
  }
}
