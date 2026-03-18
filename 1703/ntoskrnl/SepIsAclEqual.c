/*
 * XREFs of SepIsAclEqual @ 0x1406FA4E8
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v3; // ax

  if ( a1 )
  {
    if ( !a2 )
      return 0;
    v3 = a1[1];
    if ( v3 != a2[1] || RtlCompareMemory(a1, a2, v3) != (unsigned __int16)a1[1] )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
