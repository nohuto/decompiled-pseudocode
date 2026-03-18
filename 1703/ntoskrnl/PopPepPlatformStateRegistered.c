/*
 * XREFs of PopPepPlatformStateRegistered @ 0x14022EE40
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14022AD14 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140149A84 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x14022EA48 (PopPepInitializeVetoMasks.c)
 */

void __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 i; // r14
  KIRQL v7; // al
  int v8; // ebp
  unsigned __int64 v9; // rdi

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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
      v3 = PopPepPlatformState;
      v4 = 0LL;
      v5 = v2;
      do
      {
        *(_DWORD *)(v4 + v3 + 320) = 1;
        v4 += 384LL;
        --v5;
      }
      while ( v5 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
        v8 = *(_DWORD *)(i + 160);
        v9 = v7;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
        __writecr8(v9);
        if ( v8 == 1 )
          PopPepInitializeVetoMasks(i, v2);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PopPepUpdateIdleStateRefCount((1 << v2) - 1, 0, 0);
  }
}
