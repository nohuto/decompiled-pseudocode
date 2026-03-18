/*
 * XREFs of PopReleaseAdaptiveLock @ 0x14059FD4C
 * Callers:
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1405B8560 (PopAdaptivePowerSettingCallback.c)
 *     PopSessionConnectionChange @ 0x1405ED750 (PopSessionConnectionChange.c)
 *     PopActiveLockScreenPowerRequest @ 0x140709AA0 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 *     PopSetDisplayStatus @ 0x14070A030 (PopSetDisplayStatus.c)
 *     PopUserPresentOverride @ 0x14070A154 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopNotifyConsoleUserPresent @ 0x1405EED5C (PopNotifyConsoleUserPresent.c)
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 *     PopSetWin32kDisplayTimeout @ 0x14070A07C (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x14070A0DC (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  _QWORD *result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  int v3; // ebx
  unsigned int v4; // edi
  _BYTE v5[24]; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v7[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+44h] [rbp-1Ch]
  __int64 v9; // [rsp+4Ch] [rbp-14h]
  int v10; // [rsp+54h] [rbp-Ch]

  v7[0] = 0;
  PopAdpmLockThread = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v5[0] = 0;
  memset(&v5[4], 0, 20);
  if ( (_BYTE)PopLazyContext )
  {
    v2 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    *(_OWORD *)v5 = v2;
    *(_QWORD *)&v5[16] = qword_1403644B0;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5[0] )
  {
    if ( v5[18] )
    {
      PopNotifyConsoleUserPresent(0LL, v1, *(unsigned int *)&v5[20]);
      v3 = *(_DWORD *)&v5[4];
      PopSetWin32kDisplayTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[12]);
      v4 = *(_DWORD *)&v5[8];
      PopSetWin32kInputTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[8]);
    }
    else
    {
      v4 = *(_DWORD *)&v5[8];
      v3 = *(_DWORD *)&v5[4];
      if ( v5[16] )
        PopSetWin32kInputTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[8]);
      if ( v5[17] )
        PopSetWin32kDisplayTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[12]);
    }
    v6 = v3;
    HIDWORD(v9) = 7;
    result = (_QWORD *)PopDispatchStateCallout(v7, &v6);
    if ( v5[19] )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v4);
  }
  return result;
}
