/*
 * XREFs of AdtpLookupKnownPrivilegeNameQuickly @ 0x1402C5A48
 * Callers:
 *     AdtpBuildPrivilegeAuditString @ 0x1407DFF90 (AdtpBuildPrivilegeAuditString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpLookupKnownPrivilegeNameQuickly(_DWORD *a1, _OWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[1] || (unsigned int)(*a1 - 2) > 0x22 )
    return (unsigned int)-1073741728;
  else
    *a2 = *(_OWORD *)((char *)&AdtpKnownPrivilege + 24 * (unsigned int)(*a1 - 2));
  return v2;
}
