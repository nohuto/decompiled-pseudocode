/*
 * XREFs of RtlIsElevatedRid @ 0x1404FF1F0
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14044BE4C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
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
  for ( i = &unk_14029EAE0; v4 != *i; ++i )
  {
    if ( (unsigned int)++v3 >= 0x13 )
      return 0;
  }
  return 1;
}
