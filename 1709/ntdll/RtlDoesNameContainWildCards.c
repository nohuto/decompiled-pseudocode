/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800F84A0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1800F858C (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rdx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_180131F40[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
