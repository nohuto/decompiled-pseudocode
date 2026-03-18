/*
 * XREFs of CmpSetAccessStateForBackupRestore @ 0x14042B3E4
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x14042B290 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     SepAdjustAccessStateForConstraints @ 0x14042B498 (SepAdjustAccessStateForConstraints.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
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
