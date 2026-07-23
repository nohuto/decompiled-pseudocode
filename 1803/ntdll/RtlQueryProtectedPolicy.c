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

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // rax

  v4 = -1073741275;
  if ( Base )
  {
    RtlAcquireSRWLockShared(&stru_18015D2D0);
    v5 = bsearch(PolicyGuid, Base, (unsigned int)NumOfElements, 0x18uLL, sub_180076DA0);
    if ( v5 )
    {
      v4 = 0;
      *PolicyValue = v5[2];
    }
    RtlReleaseSRWLockShared(&stru_18015D2D0);
  }
  return v4;
}
