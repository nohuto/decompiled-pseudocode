/*
 * XREFs of PopReleaseAdaptiveLock @ 0x14041FF90
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x140579DA0 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14057D5B0 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1405C2C70 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406D43F0 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x1406D47FC (PopUserPresentOverride.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x1406D4724 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1406D4784 (PopSetWin32kInputTimeout.c)
 */

__int64 PopReleaseAdaptiveLock()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  unsigned int v3; // edi
  int v4; // ebx
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
    *(_QWORD *)&v5[16] = qword_140349E50;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5[0] )
  {
    if ( v5[18] )
    {
      PopNotifyConsoleUserPresent(0LL, v1, *(unsigned int *)&v5[20]);
      v4 = *(_DWORD *)&v5[4];
      PopSetWin32kDisplayTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[12]);
      v3 = *(_DWORD *)&v5[8];
      PopSetWin32kInputTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[8]);
    }
    else
    {
      v3 = *(_DWORD *)&v5[8];
      v4 = *(_DWORD *)&v5[4];
      if ( v5[16] )
        PopSetWin32kInputTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[8]);
      if ( v5[17] )
        PopSetWin32kDisplayTimeout(*(unsigned int *)&v5[4], *(unsigned int *)&v5[12]);
    }
    v6 = v4;
    HIDWORD(v9) = 7;
    result = PopDispatchStateCallout(v7, &v6);
    if ( v5[19] )
      return PopSetWin32kInputTimeout(0xFFFFFFFFLL, v3);
  }
  return result;
}
