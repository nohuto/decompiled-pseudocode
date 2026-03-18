/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x1402C36DC
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402C3750 (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14006C420 (AuthzBasepEqualUnicodeString.c)
 */

_UNKNOWN **__fastcall AuthzBasepFindTokenAttribute(const UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const UNICODE_STRING **i; // rsi

  v1 = 0LL;
  v2 = 0;
  for ( i = (const UNICODE_STRING **)&TokenAttributeLookupTable; !AuthzBasepEqualUnicodeString(a1, *i); i += 2 )
  {
    if ( ++v2 >= 4 )
      return (_UNKNOWN **)v1;
  }
  return &TokenAttributeLookupTable + 2 * v2;
}
