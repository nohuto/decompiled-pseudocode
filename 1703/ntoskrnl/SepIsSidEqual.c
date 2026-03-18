/*
 * XREFs of SepIsSidEqual @ 0x1406FA568
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
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
