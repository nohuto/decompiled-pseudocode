/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x14015ECD4
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PopPluginRegisterDevice @ 0x14022CB84 (PopPluginRegisterDevice.c)
 *     PopPepRegisterDevice @ 0x1405AC508 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, int a4)
{
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  ULONG_PTR *i; // rsi
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v9 = PopPluginRegisterDevice(a1, v12, (__int64)&v13);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v9 = PopPluginRegisterDevice((ULONG_PTR)i, v12, (__int64)&v13);
      if ( v9 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 )
  {
    v9 = 2;
    *(_QWORD *)(a3 + 72) = v13;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, a4, v9, a3 + 56);
}
