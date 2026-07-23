/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14022AD14 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14022E5E0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14022E69C (PopPepGetMinimumDevicePowerState.c)
 */

NTSTATUS __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
  char MinimumDevicePowerState; // bl
  KIRQL v9; // al
  KIRQL v10; // bp
  unsigned int j; // ebp
  __int64 v12; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v14; // r12
  char Buffer; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF

  result = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v3 = result;
  if ( result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v6 = *(_QWORD *)(i + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        PopFxActivateDevice(v7, 0);
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), a1, &v16);
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
        *(_QWORD *)(i + 608) = 0LL;
        v10 = v9;
        *(_QWORD *)(i + 616) = 0LL;
        *(_DWORD *)(i + 592) = v3;
        if ( MinimumDevicePowerState && v16 > 1 )
        {
          *(_DWORD *)(i + 588) = v16;
          *(_BYTE *)(i + 584) = 1;
          *(_QWORD *)(i + 600) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 624), 0x10u);
        }
        else
        {
          *(_BYTE *)(i + 584) = 0;
          *(_QWORD *)(i + 600) = 0LL;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v10);
        for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), j, a1, &v16);
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
          *(_DWORD *)(v12 + 16) = v3;
          *(_QWORD *)(v12 + 32) = 0LL;
          *(_QWORD *)(v12 + 40) = 0LL;
          if ( MinimumComponentIdleState && v16 )
          {
            *(_DWORD *)(v12 + 12) = v16;
            *(_BYTE *)(v12 + 8) = 1;
            *(_QWORD *)(v12 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 624), 0x10u);
          }
          else
          {
            *(_BYTE *)(v12 + 8) = 0;
            *(_QWORD *)(v12 + 24) = 0LL;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)v12);
          __writecr8(v14);
        }
        PoFxIdleDevice(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Buffer = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
