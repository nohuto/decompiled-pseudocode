/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1401F7844
 * Callers:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
