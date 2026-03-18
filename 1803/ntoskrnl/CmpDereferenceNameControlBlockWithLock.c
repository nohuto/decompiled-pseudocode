/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x1404AB680
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1406F3310 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall CmpDereferenceNameControlBlockWithLock(unsigned int *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax

  v1 = a1 + 2;
  v3 = 101027 * (a1[2] ^ (a1[2] >> 9));
  v4 = 16LL * (((unsigned __int16)v3 ^ (unsigned __int16)((unsigned __int64)v3 >> 9)) & 0x7FF);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v4, 0LL);
  v7 = *a1 & 1 | (2 * (*a1 >> 1) - 2);
  *a1 = v7;
  if ( v7 < 2 )
  {
    v8 = (__int64 *)((char *)CmpNameCacheTable + v4 + 8);
    if ( v8 )
    {
      do
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        if ( (_DWORD *)v9 == v1 )
        {
          *v8 = *(_QWORD *)(v9 + 8);
          break;
        }
        v8 = (__int64 *)(v9 + 8);
      }
      while ( v9 != -8 );
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  return ExReleasePushLockEx((ULONG_PTR)CmpNameCacheTable + v4, 0LL, v5, v6);
}
