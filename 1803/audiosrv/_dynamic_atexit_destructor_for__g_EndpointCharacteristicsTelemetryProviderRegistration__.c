/*
 * XREFs of _dynamic_atexit_destructor_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x18006B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_EndpointCharacteristicsTelemetryProviderRegistration__()
{
  int *v0; // rbx
  __int64 result; // rax

  v0 = g_EndpointCharacteristicsTelemetryProviderRegistration[0];
  result = EtwEventUnregister(*((_QWORD *)g_EndpointCharacteristicsTelemetryProviderRegistration[0] + 4));
  *((_QWORD *)v0 + 4) = 0LL;
  *v0 = 0;
  return result;
}
