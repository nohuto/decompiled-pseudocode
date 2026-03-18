/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140008500
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14075F0F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140760074 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
