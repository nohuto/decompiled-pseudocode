/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14064AEFC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
