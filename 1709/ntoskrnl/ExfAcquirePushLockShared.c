/*
 * XREFs of ExfAcquirePushLockShared @ 0x140007FF0
 * Callers:
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
