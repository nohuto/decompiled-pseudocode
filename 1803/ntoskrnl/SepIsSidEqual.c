/*
 * XREFs of SepIsSidEqual @ 0x1407958A4
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 */

char __fastcall SepIsSidEqual(void *a1, void *a2)
{
  if ( a1 )
  {
    if ( !a2 || !RtlEqualSid(a1, a2) )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
