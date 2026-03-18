/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1401FD728
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140019CFC (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
