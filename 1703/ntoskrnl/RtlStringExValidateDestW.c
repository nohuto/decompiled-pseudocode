/*
 * XREFs of RtlStringExValidateDestW @ 0x140081CE4
 * Callers:
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringExValidateDestW(
        STRSAFE_PCNZWCH pszDest,
        size_t cchDest,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax

  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      return -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    return -1073741811;
  }
  return result;
}
