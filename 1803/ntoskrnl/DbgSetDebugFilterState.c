/*
 * XREFs of DbgSetDebugFilterState @ 0x140170540
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14061D608 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
