/*
 * XREFs of PopPepPlatformStateRegistered @ 0x140242E70
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14023DEE4 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 */

void __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 i; // r14
  KIRQL v6; // al
  int v7; // ebp
  unsigned __int64 v8; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v3 = 0LL;
      v4 = v2;
      do
      {
        v3 += 384LL;
        *(_DWORD *)(v3 + PopPepPlatformState - 64) = 1073741825;
        --v4;
      }
      while ( v4 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
        v7 = *(_DWORD *)(i + 172);
        v8 = v6;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
        __writecr8(v8);
        if ( v7 == 1 )
          PopPepInitializeVetoMasks(i, v2);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PopPepUpdateIdleStateRefCount((unsigned int)((1 << v2) - 1), 0, 0);
  }
}
