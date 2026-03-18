/*
 * XREFs of SepTokenPrivilegeCount @ 0x140014400
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14045AA90 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14045C878 (SepGetTokenAccessInformationBufferSize.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
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
