/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x14045D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
