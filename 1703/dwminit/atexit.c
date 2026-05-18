/*
 * XREFs of atexit @ 0x180006320
 * Callers:
 *     _dynamic_initializer_for__gDwmStateLock__ @ 0x180001110 (_dynamic_initializer_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__gDwmInitTelemetryAggregator__ @ 0x180001140 (_dynamic_initializer_for__gDwmInitTelemetryAggregator__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x1800011B0 (_dynamic_initializer_for__g_PortClient__.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800059A0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     _onexit_0 @ 0x180006290 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
