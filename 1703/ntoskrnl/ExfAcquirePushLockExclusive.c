/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1400FDC50
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140585CD8 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14071F280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140720204 (ExpCovResetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1);
}
