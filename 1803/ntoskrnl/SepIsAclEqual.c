/*
 * XREFs of SepIsAclEqual @ 0x140795824
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
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
