/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C6E5C
 * Callers:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800C7630 (TraceLoggingProviderEnabled.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this)
{
  const struct _TlgProvider_t *v1; // rcx
  char v2; // r10

  v1 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
    return TraceLoggingProviderEnabled(v1, 0, 0LL) != 0;
  return v2;
}
