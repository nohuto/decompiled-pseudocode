/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x14041DEE4
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopGetLockConsoleTimeout @ 0x14042094C (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406D43F0 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 PopGetLockConsoleTimeoutUnsafe()
{
  unsigned int v0; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = PopAdaptiveLockConsoleTimeout;
  if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
  {
    if ( PopEnforceConsoleLockScreenTimeout )
    {
      if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
        TlgWrite(&hProvider, &unk_1402ADBF1, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
