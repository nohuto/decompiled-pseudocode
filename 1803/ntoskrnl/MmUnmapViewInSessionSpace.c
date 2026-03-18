/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x140581B10
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
