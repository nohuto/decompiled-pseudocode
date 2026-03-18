/*
 * XREFs of DbgSetDebugFilterState @ 0x140148E20
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1405CBE78 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
