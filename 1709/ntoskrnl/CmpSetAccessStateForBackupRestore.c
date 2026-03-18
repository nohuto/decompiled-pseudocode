/*
 * XREFs of CmpSetAccessStateForBackupRestore @ 0x1405E0370
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140580494 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepAdjustAccessStateForConstraints @ 0x1405E0424 (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall CmpSetAccessStateForBackupRestore(_DWORD *a1, KPROCESSOR_MODE a2, __int64 a3, char a4)
{
  __int64 v8; // r8

  a1[5] = 0;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a2) )
  {
    a1[3] |= 2u;
    a1[5] |= 0x1020019u;
  }
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, a2) )
  {
    a1[3] |= 4u;
    a1[5] |= 0x10F0006u;
  }
  if ( a4 )
    a1[6] = a1[5];
  if ( !a1[5] )
    return 3221225506LL;
  LOBYTE(v8) = 1;
  SepAdjustAccessStateForConstraints(CmKeyObjectType, a3, v8, a1);
  a1[4] = ~a1[5] & a1[6];
  return 0LL;
}
