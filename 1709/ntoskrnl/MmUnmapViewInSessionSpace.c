/*
 * XREFs of MmUnmapViewInSessionSpace @ 0x1404F61D0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSessionSpace(PVOID MappedBase)
{
  return MmUnmapViewInSystemSpace(MappedBase);
}
