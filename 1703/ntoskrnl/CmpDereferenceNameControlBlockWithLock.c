/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x140665AFC
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x140665800 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     CmpLockNameHashEntryExclusive @ 0x14066A44C (CmpLockNameHashEntryExclusive.c)
 */

__int64 __fastcall CmpDereferenceNameControlBlockWithLock(char *P)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rax

  v1 = P + 8;
  v3 = *((_DWORD *)P + 2);
  CmpLockNameHashEntryExclusive(v3);
  v4 = *(_DWORD *)P & 1 | (2 * (*(_DWORD *)P >> 1) - 2);
  *(_DWORD *)P = v4;
  if ( v4 < 2 )
  {
    v5 = (__int64 *)((char *)CmpNameCacheTable
                   + 16
                   * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                   + 8);
    if ( v5 )
    {
      do
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        if ( (char *)v6 == v1 )
        {
          *v5 = *(_QWORD *)(v6 + 8);
          break;
        }
        v5 = (__int64 *)(v6 + 8);
      }
      while ( v6 != -8 );
    }
    CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
  }
  return CmpUnlockNameHashEntry(v3);
}
