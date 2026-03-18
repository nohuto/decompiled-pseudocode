/*
 * XREFs of READ_PORT_ULONG @ 0x140140620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall READ_PORT_ULONG(PULONG Port)
{
  return __indword((unsigned __int16)Port);
}
