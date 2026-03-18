/*
 * XREFs of PopReleaseAdaptiveLock @ 0x140526D74
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1405EEA80 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1406256E0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x14076D730 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x14076DB40 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x14076DA68 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x14076DAC8 (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  _QWORD *result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  unsigned int v3; // edi
  int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]

  PopAdpmLockThread = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  v5 = 0uLL;
  v6 = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v2 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    v5 = v2;
    v6 = qword_1403A7B10;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (_BYTE)v5 )
  {
    if ( BYTE2(v6) )
    {
      PopNotifyConsoleUserPresent(0LL, v1, HIDWORD(v6));
      v4 = DWORD1(v5);
      PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
      v3 = DWORD2(v5);
      PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
    }
    else
    {
      v3 = DWORD2(v5);
      v4 = DWORD1(v5);
      if ( (_BYTE)v6 )
        PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
      if ( BYTE1(v6) )
        PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
    }
    v7 = v4;
    LODWORD(v9) = 7;
    result = (_QWORD *)PopDispatchStateCallout(v8, &v7);
    if ( BYTE3(v6) )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v3);
  }
  return result;
}
