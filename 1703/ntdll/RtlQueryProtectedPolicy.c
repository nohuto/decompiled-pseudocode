/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180077890
 * Callers:
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x1800986E0 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&qword_18015C290);
    v6 = bsearch(Key, Base, (unsigned int)NumOfElements, 0x18uLL, sub_18007A010);
    if ( v6 )
    {
      v4 = 0;
      *a2 = v6[2];
    }
    RtlReleaseSRWLockShared(&qword_18015C290);
  }
  return v4;
}
