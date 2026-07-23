/*
 * XREFs of SepGetScopedPolicySid @ 0x14025E204
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SeComputeCreatorDeniedRights @ 0x1400829D0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
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
