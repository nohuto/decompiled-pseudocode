/*
 * XREFs of RtlQueryProtectedPolicy @ 0x1800712C0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x18008DB40 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax

  v6 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&qword_18015D2D0, a2, a3, a4);
    v7 = bsearch(Key, Base, (unsigned int)NumOfElements, 0x18uLL, sub_180076DA0);
    if ( v7 )
    {
      v6 = 0;
      *(_QWORD *)a2 = v7[2];
    }
    RtlReleaseSRWLockShared(&qword_18015D2D0);
  }
  return v6;
}
