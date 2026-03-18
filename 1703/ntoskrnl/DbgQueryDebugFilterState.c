/*
 * XREFs of DbgQueryDebugFilterState @ 0x14023B0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
