/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1405ABC7C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
