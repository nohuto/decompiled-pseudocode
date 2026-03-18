/*
 * XREFs of AslStringPatternMatchW @ 0x1404F5024
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 *     KseLookupHardwareId @ 0x1406DB518 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckPackageAttributes @ 0x14076EF30 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x140771A24 (SdbpCheckAttribute.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(WCHAR *a1, WCHAR *a2)
{
  unsigned int v4; // edi
  WCHAR v5; // cx
  WCHAR v6; // bx
  WCHAR v7; // cx
  WCHAR v9; // bx

  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 && !*a2 )
      return 1;
    if ( v5 != 42 )
    {
      if ( v5 != 63 )
      {
        v6 = RtlUpcaseUnicodeChar(v5);
        if ( v6 != RtlUpcaseUnicodeChar(*a2) )
          return v4;
      }
      ++a1;
      goto LABEL_7;
    }
    v7 = a1[1];
    if ( v7 == 42 )
    {
      ++a1;
    }
    else
    {
      if ( !v7 )
        return 1;
      v9 = RtlUpcaseUnicodeChar(v7);
      if ( v9 == RtlUpcaseUnicodeChar(*a2) )
      {
        if ( (unsigned int)AslStringPatternMatchW(a1 + 1, a2) )
          return 1;
      }
LABEL_7:
      if ( !*a2 )
        return v4;
      ++a2;
    }
  }
}
