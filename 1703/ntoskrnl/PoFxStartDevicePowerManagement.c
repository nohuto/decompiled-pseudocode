/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1401624F0
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1406C7370 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PoFxActivateComponent @ 0x140068EA0 (PoFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14013AAA4 (PopFxIncrementDeviceSleepCount.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopPepInitializeVetoMasks @ 0x14022EA48 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1405C41A0 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  KIRQL v7; // al
  unsigned int v8; // edx
  KIRQL v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int i; // ebx
  struct _KTHREAD *v13; // rcx
  char v14; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rbx
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v3 = *(_QWORD *)(BugCheckParameter2 + 48);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 64));
  *(_DWORD *)(v1 + 160) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  __writecr8(v4);
  v5 = 0;
  if ( *(_BYTE *)(v1 + 124) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( PopPepPlatformState )
      PopPepInitializeVetoMasks(v1, *(unsigned int *)PpmPlatformStates);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v6 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 96))(18LL, &v17);
  }
  if ( v3 )
  {
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
    v8 = *(_DWORD *)(v3 + 120);
    v9 = v7;
    if ( (*(_DWORD *)(BugCheckParameter2 + 624) & 1) != 0 )
    {
      if ( !v8 )
      {
LABEL_11:
        *(_DWORD *)(v3 + 296) |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
        __writecr8(v9);
        PopDiagTraceFxDeviceStartPowerManagement(v3);
        goto LABEL_12;
      }
      v8 = 0;
      *(_DWORD *)(v3 + 120) = 0;
    }
    if ( v8 )
    {
      v10 = *(_DWORD *)(BugCheckParameter2 + 628);
      v11 = v8;
      do
      {
        for ( i = 0; i < v10; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v10 = *(_DWORD *)(BugCheckParameter2 + 628);
        }
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_11;
  }
LABEL_12:
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v14 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v14 )
  {
    v16 = *(_QWORD *)(v3 + 32);
    PopFxActivateDevice(v16, 0);
    PopFxIncrementDeviceSleepCount(v16);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 628) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v5++, 1);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 628) );
  }
}
