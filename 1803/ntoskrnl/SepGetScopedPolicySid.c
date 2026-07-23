/*
 * XREFs of SepGetScopedPolicySid @ 0x14029FB94
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x1401047E0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlFindAceByType @ 0x14005C9A0 (RtlFindAceByType.c)
 */

_BYTE *__fastcall SepGetScopedPolicySid(PACL Acl)
{
  _BYTE *result; // rax
  ULONG Index; // [rsp+38h] [rbp+10h] BYREF

  Index = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(Acl, 0x13u, &Index);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
