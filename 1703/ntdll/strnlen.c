/*
 * XREFs of strnlen @ 0x18009ADD0
 * Callers:
 *     _strlwr_s @ 0x180097220 (_strlwr_s.c)
 *     _strupr_s @ 0x180097340 (_strupr_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++String )
  {
    if ( !*String )
      break;
    ++result;
  }
  return result;
}
