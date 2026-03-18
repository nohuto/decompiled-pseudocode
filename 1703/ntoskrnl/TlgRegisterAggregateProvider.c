/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1405CDEE8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
