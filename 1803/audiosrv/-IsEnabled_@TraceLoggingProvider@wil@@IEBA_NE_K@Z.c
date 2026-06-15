/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800972D0
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18010E000 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  const struct _TlgProvider_t *v2; // rcx
  char v3; // r9

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *(_DWORD *)v2 )
    return TlgKeywordOn(v2, 0LL) != 0;
  return v3;
}
