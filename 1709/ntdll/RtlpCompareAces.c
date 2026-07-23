/*
 * XREFs of RtlpCompareAces @ 0x1800E5230
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x18008D710 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800E5274 (RtlpCompareKnownAces.c)
 */

char __fastcall RtlpCompareAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  char v4; // r11

  v4 = 0;
  if ( (unsigned __int8)(*a1 - 5) <= 3u && (unsigned __int8)(*a2 - 5) <= 3u )
    return RtlpCompareKnownObjectAces(a1, a2, a3, a4);
  if ( (unsigned __int8)(*a1 - 5) > 3u && (unsigned __int8)(*a2 - 5) > 3u )
    return RtlpCompareKnownAces();
  return v4;
}
