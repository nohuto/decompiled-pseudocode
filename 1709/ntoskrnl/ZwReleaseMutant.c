/*
 * XREFs of ZwReleaseMutant @ 0x14017DCC0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
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
