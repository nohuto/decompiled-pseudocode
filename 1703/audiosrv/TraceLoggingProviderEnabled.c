/*
 * XREFs of TraceLoggingProviderEnabled @ 0x180097100
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800D3750 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( (unsigned int)eventLevel < *(_DWORD *)hProvider )
    return TlgKeywordOn(hProvider, 0LL) != 0;
  return v3;
}
