/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140008AD0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1407C63F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1407C6ADC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1407C7374 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
