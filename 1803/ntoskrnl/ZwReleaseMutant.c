/*
 * XREFs of ZwReleaseMutant @ 0x1401A78C0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, ReleaseCount, v2);
}
