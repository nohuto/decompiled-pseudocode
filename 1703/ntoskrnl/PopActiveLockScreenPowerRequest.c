/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1406D43F0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x14041DEE4 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopReleaseAdaptiveLock @ 0x14041FF90 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x140420304 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(char a1)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a1 )
  {
    byte_140349E95 = 1;
    if ( byte_140349E96 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v4) = PopDisplayTimeout;
      byte_140349E96 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_140349E95 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v4) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_140349E94 )
    {
      byte_140349E96 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140349E50) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v4, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
