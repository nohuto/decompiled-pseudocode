/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14076D730
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x14048BA24 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopUpdateTimeouts @ 0x1405265A0 (PopUpdateTimeouts.c)
 *     PopReleaseAdaptiveLock @ 0x140526D74 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140526E68 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(char a1)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a1 )
  {
    byte_1403A7B75 = 1;
    if ( byte_1403A7B76 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v4) = PopDisplayTimeout;
      byte_1403A7B76 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_1403A7B75 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v4) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_1403A7B74 )
    {
      byte_1403A7B76 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_1403A7B10) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v4, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
