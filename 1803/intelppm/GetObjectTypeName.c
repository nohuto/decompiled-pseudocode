/*
 * XREFs of GetObjectTypeName @ 0x1C000AD98
 * Callers:
 *     AcpiParseCore @ 0x1C00225A4 (AcpiParseCore.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectTypeName(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return "INTEGER";
    case 1u:
      return "STRING";
    case 2u:
      return "BUFFER";
  }
  if ( (unsigned int)a1 - 3 > 1 )
    return "UNKNOWN";
  return "PACKAGE";
}
