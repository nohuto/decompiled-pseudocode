/*
 * XREFs of PopAcquireAdaptiveLock @ 0x14059FDE4
 * Callers:
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1405B8560 (PopAdaptivePowerSettingCallback.c)
 *     PopSessionConnectionChange @ 0x1405ED750 (PopSessionConnectionChange.c)
 *     PopActiveLockScreenPowerRequest @ 0x140709AA0 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 *     PopSetDisplayStatus @ 0x14070A030 (PopSetDisplayStatus.c)
 *     PopUserPresentOverride @ 0x14070A154 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[4]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v6[0] = 0;
  v1 = -1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( !a1 )
  {
    v1 = PoBlockConsoleSwitch(v6);
    Interval.QuadPart = -100000LL;
    while ( v1 != PopConsoleContext )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  if ( !a1 )
  {
    result = 0LL;
    PopLazyContext = 1uLL;
    DWORD1(PopLazyContext) = v1;
    qword_1403644B0 = 0LL;
  }
  return result;
}
