/*
 * XREFs of SepTokenPrivilegeCount @ 0x14003F170
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14044BE4C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14046EE08 (SepGetTokenAccessInformationBufferSize.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 v1; // r10
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(result) = 0;
  v3 = 1LL;
  v4 = 37LL;
  do
  {
    v5 = result + 1;
    v6 = v3 & v1;
    v3 = __ROL8__(v3, 1);
    if ( !v6 )
      v5 = result;
    result = v5;
    --v4;
  }
  while ( v4 );
  return result;
}
