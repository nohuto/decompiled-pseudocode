/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140526E68
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1405EEA80 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x1406256E0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x14076D730 (PopActiveLockScreenPowerRequest.c)
 *     PopUserPresentOverride @ 0x14076DB40 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-30h] BYREF

  v1 = -1;
  memset(v6, 0, sizeof(v6));
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
    qword_1403A7B10 = 0LL;
  }
  return result;
}
