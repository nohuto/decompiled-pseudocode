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

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  PSID Sid; // rsi
  UCHAR v2; // di
  int v3; // ebx
  ULONG v4; // ecx
  _DWORD *i; // rax

  if ( !SidAttr )
    return 0;
  if ( (SidAttr->Attributes & 0x30) != 0 )
    return 0;
  Sid = SidAttr->Sid;
  v2 = *RtlSubAuthorityCountSid(SidAttr->Sid);
  if ( !v2 || *RtlSubAuthoritySid(Sid, 0) - 80 <= 0x1F )
    return 0;
  v3 = 0;
  if ( v2 )
    v4 = *RtlSubAuthoritySid(Sid, (unsigned int)v2 - 1);
  else
    v4 = 0;
  for ( i = &unk_1402FA8B0; v4 != *i; ++i )
  {
    if ( (unsigned int)++v3 >= 0x13 )
      return 0;
  }
  return 1;
}
