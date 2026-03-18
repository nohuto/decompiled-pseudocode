/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x140478920
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x14068F450 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

char __fastcall CmpDereferenceNameControlBlockWithLock(unsigned int *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax

  v1 = a1 + 2;
  v3 = 101027 * (a1[2] ^ (a1[2] >> 9));
  v4 = 16LL * (((unsigned __int16)v3 ^ (unsigned __int16)((unsigned __int64)v3 >> 9)) & 0x7FF);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v4, 0LL);
  v5 = *a1 & 1 | (2 * (*a1 >> 1) - 2);
  *a1 = v5;
  if ( v5 < 2 )
  {
    v6 = (__int64 *)((char *)CmpNameCacheTable + v4 + 8);
    if ( v6 )
    {
      do
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( (_DWORD *)v7 == v1 )
        {
          *v6 = *(_QWORD *)(v7 + 8);
          break;
        }
        v6 = (__int64 *)(v7 + 8);
      }
      while ( v7 != -8 );
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  return ExReleasePushLockEx((ULONG_PTR)CmpNameCacheTable + v4, 0LL);
}
