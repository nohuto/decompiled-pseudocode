/*
 * XREFs of ZwReleaseMutant @ 0x14017E340
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
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
