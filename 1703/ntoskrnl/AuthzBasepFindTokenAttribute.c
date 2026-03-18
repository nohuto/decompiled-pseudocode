/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x140263734
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402637A8 (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 */

_UNKNOWN **__fastcall AuthzBasepFindTokenAttribute(const void **a1)
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
