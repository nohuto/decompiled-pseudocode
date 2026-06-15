/*
 * XREFs of _dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__ @ 0x18006B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__()
{
  int *v0; // rbx
  __int64 result; // rax

  v0 = g_SarmTelemetryProviderRegistration[0];
  result = EtwEventUnregister(*((_QWORD *)g_SarmTelemetryProviderRegistration[0] + 4));
  *((_QWORD *)v0 + 4) = 0LL;
  *v0 = 0;
  return result;
}
