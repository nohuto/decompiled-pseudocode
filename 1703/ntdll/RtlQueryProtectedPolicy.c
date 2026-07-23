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

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&stru_18015C290);
    v6 = bsearch(PolicyGuid, Base, (unsigned int)NumOfElements, 0x18uLL, sub_18007A010);
    if ( v6 )
    {
      v4 = 0;
      *PolicyValue = v6[2];
    }
    RtlReleaseSRWLockShared(&stru_18015C290);
  }
  return v4;
}
