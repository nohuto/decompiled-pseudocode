/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x140186FEC
 * Callers:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x14006E6CC (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
