/*
 * XREFs of ExfAcquirePushLockShared @ 0x1400FE060
 * Callers:
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
