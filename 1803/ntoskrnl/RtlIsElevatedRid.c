/*
 * XREFs of RtlIsElevatedRid @ 0x1404C2450
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140547274 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14005C810 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 */

char __fastcall RtlIsElevatedRid(__int64 a1)
{
  PSID v1; // rsi
  UCHAR v2; // di
  int v3; // ebx
  ULONG v4; // ecx
  _DWORD *i; // rax

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 8) & 0x30) != 0 )
    return 0;
  v1 = *(PSID *)a1;
  v2 = *RtlSubAuthorityCountSid(*(PSID *)a1);
  if ( !v2 || *RtlSubAuthoritySid(v1, 0) - 80 <= 0x1F )
    return 0;
  v3 = 0;
  if ( v2 )
    v4 = *RtlSubAuthoritySid(v1, (unsigned int)v2 - 1);
  else
    v4 = 0;
  for ( i = &unk_1402FA8B0; v4 != *i; ++i )
  {
    if ( (unsigned int)++v3 >= 0x13 )
      return 0;
  }
  return 1;
}
