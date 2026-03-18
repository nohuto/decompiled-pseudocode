/*
 * XREFs of DbgQueryDebugFilterState @ 0x140250970
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140132A50 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
