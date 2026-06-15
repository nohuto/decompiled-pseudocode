/*
 * XREFs of _dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__ @ 0x140001260
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14001B678 (TraceLoggingRegisterEx.c)
 */

int __fastcall dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1400850A0, a2, a3);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SpatialCrossProcessTelemetryProviderRegistration__);
}
