/*
 * XREFs of SepIdAssignableAsOwner @ 0x14057EE18
 * Callers:
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x14057ED30 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
