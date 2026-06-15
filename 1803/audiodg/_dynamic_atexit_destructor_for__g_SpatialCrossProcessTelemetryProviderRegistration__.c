/*
 * XREFs of _dynamic_atexit_destructor_for__g_SpatialCrossProcessTelemetryProviderRegistration__ @ 0x140020DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SpatialCrossProcessTelemetryProviderRegistration__()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = g_SpatialCrossProcessTelemetryProviderRegistration;
  result = EtwEventUnregister(*(_QWORD *)(g_SpatialCrossProcessTelemetryProviderRegistration + 32LL));
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_DWORD *)v0 = 0;
  return result;
}
