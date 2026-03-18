/*
 * XREFs of PoFxSystemLatencyNotify @ 0x1400736D4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  ULONG_PTR i; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rax
  char v7; // al
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(i + 96);
    if ( v6 )
    {
      v8 = a1;
      v7 = v6(16LL, &v8);
    }
    else
    {
      v7 = 0;
    }
    if ( v7 && !v3 )
      v3 = *(_DWORD *)(i + 24) >= 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v3;
}
