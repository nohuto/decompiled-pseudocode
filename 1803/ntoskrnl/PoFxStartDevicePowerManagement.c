/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x140181020
 * Callers:
 *     PoFxEnableDStateReporting @ 0x14075F350 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x1408CA0E4 (PoFxRegisterDebugger.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PoFxActivateComponent @ 0x140078070 (PoFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401539D4 (PopFxIncrementDeviceSleepCount.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140644374 (PopDiagTraceFxDeviceStartPowerManagement.c)
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
  *(_DWORD *)(v1 + 172) = 1;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 1) != 0 )
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
      v10 = *(_DWORD *)(BugCheckParameter2 + 708);
      v11 = v8;
      do
      {
        for ( i = 0; i < v10; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v10 = *(_DWORD *)(BugCheckParameter2 + 708);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v14 )
  {
    v16 = *(_QWORD *)(v3 + 32);
    PopFxActivateDevice(v16, 0, 0);
    PopFxIncrementDeviceSleepCount(v16);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 708) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v5++, 1);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 708) );
  }
}
