/*
 * XREFs of AslStringPatternMatchW @ 0x14061E218
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x140746014 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407D5878 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x1407D6640 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x1407D8B54 (SdbpCheckAttribute.c)
 *     AslpProcessMatchRegNode @ 0x1407DBB08 (AslpProcessMatchRegNode.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(WCHAR *a1, WCHAR *a2)
{
  WCHAR v2; // si
  WCHAR *v3; // rax
  unsigned int v4; // edi
  WCHAR *v5; // rbp
  WCHAR v6; // bx
  WCHAR v8; // ax
  WCHAR *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v2 = *a1;
  v3 = a2;
  v4 = 0;
LABEL_2:
  v5 = a1;
  while ( 1 )
  {
    if ( !v2 )
    {
      v2 = 0;
      if ( !*v3 )
        return 1;
    }
    if ( v2 == 63 )
    {
      ++v5;
    }
    else
    {
      if ( v2 == 42 )
      {
        a1 = v5 + 1;
        v2 = v5[1];
        if ( v2 == 42 )
          goto LABEL_2;
        if ( !v2 )
          return 1;
        v8 = RtlUpcaseUnicodeChar(v2);
        if ( v8 == RtlUpcaseUnicodeChar(*v9) )
        {
          if ( (unsigned int)AslStringPatternMatchW(v5 + 1, v9) )
            return 1;
        }
      }
      else
      {
        v6 = RtlUpcaseUnicodeChar(*v3);
        if ( RtlUpcaseUnicodeChar(v2) != v6 )
          return v4;
        ++v5;
      }
      v3 = v9;
    }
    if ( !*v3 )
      return v4;
    v2 = *v5;
    v9 = ++v3;
  }
}
