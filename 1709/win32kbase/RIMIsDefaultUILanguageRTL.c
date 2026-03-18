/*
 * XREFs of RIMIsDefaultUILanguageRTL @ 0x1C0098500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RIMIsDefaultUILanguageRTL()
{
  unsigned int v0; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  LANGID LanguageId; // [rsp+30h] [rbp+8h] BYREF

  LanguageId = 0;
  if ( ZwQueryDefaultUILanguage(&LanguageId) < 0 )
    return 0LL;
  v0 = LanguageId & 0x3FF;
  if ( v0 > 0x63 )
  {
    v2 = v0 - 101;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 27;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 12;
    if ( !v4 || v4 == 6 )
      return 1LL;
  }
  else if ( v0 == 99 || v0 == 1 || v0 == 13 || v0 == 32 || v0 == 41 || v0 > 0x58 && v0 <= 0x5A )
  {
    return 1LL;
  }
  return LanguageId == 2118 || LanguageId == 2128 || LanguageId == 2144 || LanguageId == 31814 || LanguageId == 31824;
}
