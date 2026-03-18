/*
 * XREFs of PopPepPlatformStateRegistered @ 0x140279F48
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402752A4 (PopFxEnablePlatformStates.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 */

void __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 i; // r14
  KIRQL v12; // al
  int v13; // ebp
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock, v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock, v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v9 = 0LL;
      v10 = v2;
      do
      {
        v9 += 384LL;
        *(_DWORD *)(v9 + PopPepPlatformState - 64) = 1073741825;
        --v10;
      }
      while ( v10 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
        v13 = *(_DWORD *)(i + 172);
        v14 = v12;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
        __writecr8(v14);
        if ( v13 == 1 )
          PopPepInitializeVetoMasks(i, v2);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock, v15, v16, v17);
    KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PopPepUpdateIdleStateRefCount((unsigned int)((1 << v2) - 1), 0, 0);
  }
}
