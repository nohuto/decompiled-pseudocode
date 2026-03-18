/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x140150FF0
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1406F7D00 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140857ED8 (PoFxRegisterDebugger.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PoFxActivateComponent @ 0x1400FD690 (PoFxActivateComponent.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14023E0AC (PopFxIncrementDeviceSleepCount.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1405D7C6C (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

__int64 __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
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
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rbx
  _BYTE v18[64]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

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
    v19 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 96))(18LL, &v19);
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
  result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v14 )
  {
    v17 = *(_QWORD *)(v3 + 32);
    PopFxActivateDevice(v17, 0, 0);
    result = PopFxIncrementDeviceSleepCount(v17);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 628) )
  {
    do
      result = PopFxIdleComponent(BugCheckParameter2, v5++, 1, (__int64)v18);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 628) );
  }
  return result;
}
