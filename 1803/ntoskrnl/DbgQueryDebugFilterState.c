/*
 * XREFs of DbgQueryDebugFilterState @ 0x1402863D0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140077480 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
