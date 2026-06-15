/*
 * XREFs of _dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x18003A660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__()
{
  int *v0; // rbx
  __int64 result; // rax

  v0 = g_SpatialAudioTraceLoggingProviderRegistration[0];
  result = EtwEventUnregister(*((_QWORD *)g_SpatialAudioTraceLoggingProviderRegistration[0] + 4));
  *((_QWORD *)v0 + 4) = 0LL;
  *v0 = 0;
  return result;
}
