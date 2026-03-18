/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x140709AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x14059FD4C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14059FDE4 (PopAcquireAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x1405A0278 (PopUpdateTimeouts.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140709C7C (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(char a1)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a1 )
  {
    byte_1403644D5 = 1;
    if ( byte_1403644D6 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v4) = PopDisplayTimeout;
      byte_1403644D6 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_1403644D5 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v4) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_1403644D4 )
    {
      byte_1403644D6 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_1403644B0) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v4, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
