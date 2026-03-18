/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x14021F788
 * Callers:
 *     RtlStringCbPrintfExA @ 0x14021F608 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
