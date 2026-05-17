/*
 * XREFs of _wcsicmp @ 0x1800976A0
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     LdrRscIsTypeExist @ 0x180036760 (LdrRscIsTypeExist.c)
 *     sub_180038554 @ 0x180038554 (sub_180038554.c)
 *     sub_180045EFC @ 0x180045EFC (sub_180045EFC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_180046DAC @ 0x180046DAC (sub_180046DAC.c)
 *     sub_180047438 @ 0x180047438 (sub_180047438.c)
 *     sub_18004A7E4 @ 0x18004A7E4 (sub_18004A7E4.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     sub_1800727DC @ 0x1800727DC (sub_1800727DC.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     sub_1800DB530 @ 0x1800DB530 (sub_1800DB530.c)
 *     sub_1800DB608 @ 0x1800DB608 (sub_1800DB608.c)
 *     sub_1800DB898 @ 0x1800DB898 (sub_1800DB898.c)
 *     sub_1800DBD68 @ 0x1800DBD68 (sub_1800DBD68.c)
 *     sub_1800DC28C @ 0x1800DC28C (sub_1800DC28C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     sub_1800FA598 @ 0x1800FA598 (sub_1800FA598.c)
 *     sub_1801074FC @ 0x1801074FC (sub_1801074FC.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)String1 - (char *)String2;
  do
  {
    v3 = *(const wchar_t *)((char *)String2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *String2;
    if ( (unsigned __int16)(*String2 - 65) <= 0x19u )
      v4 += 32;
    ++String2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
