/*
 * XREFs of SepGetScopedPolicySid @ 0x140246AC4
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SeComputeCreatorDeniedRights @ 0x1400EDF40 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
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
