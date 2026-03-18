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
  for ( i = &unk_14029EAE0; v4 != *i; ++i )
  {
    if ( (unsigned int)++v3 >= 0x13 )
      return 0;
  }
  return 1;
}
