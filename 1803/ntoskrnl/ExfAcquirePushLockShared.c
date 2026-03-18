/*
 * XREFs of ExfAcquirePushLockShared @ 0x140008770
 * Callers:
 *     ExpCovQueryInformation @ 0x1407C6ADC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
