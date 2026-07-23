/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x1402764F4
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402752A4 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140279668 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140279724 (PopPepGetMinimumDevicePowerState.c)
 */

NTSTATUS __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR i; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r8d
  char MinimumDevicePowerState; // bl
  KIRQL v10; // al
  KIRQL v11; // bp
  unsigned int j; // ebp
  __int64 v13; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v15; // al
  KIRQL v16; // r15
  char Buffer; // [rsp+88h] [rbp+10h] BYREF
  int v18; // [rsp+90h] [rbp+18h] BYREF

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
        PopFxActivateDevice(v7, 0, 0);
        LOBYTE(v8) = 1;
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), a1, v8, (unsigned int)&v18, 0LL);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
        *(_DWORD *)(i + 592) = v3;
        *(_QWORD *)(i + 608) = 0LL;
        v11 = v10;
        *(_QWORD *)(i + 616) = 0LL;
        memset((void *)(i + 624), 0, 0x50uLL);
        if ( MinimumDevicePowerState && v18 > 1 )
        {
          *(_DWORD *)(i + 588) = v18;
          *(_BYTE *)(i + 584) = 1;
          *(_QWORD *)(i + 600) = MEMORY[0xFFFFF78000000008];
          _InterlockedOr((volatile signed __int32 *)(i + 704), 0x10u);
        }
        else
        {
          *(_BYTE *)(i + 584) = 0;
          *(_QWORD *)(i + 600) = 0LL;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v11);
        for ( j = 0; j < *(_DWORD *)(i + 708); ++j )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(i + 712) + 8LL * j) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), j, a1, &v18);
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 40) = 0LL;
          v16 = v15;
          *(_DWORD *)(v13 + 16) = v3;
          memset((void *)(v13 + 48), 0, 0x50uLL);
          if ( MinimumComponentIdleState && v18 )
          {
            *(_DWORD *)(v13 + 12) = v18;
            *(_BYTE *)(v13 + 8) = 1;
            *(_QWORD *)(v13 + 24) = MEMORY[0xFFFFF78000000008];
            _InterlockedOr((volatile signed __int32 *)(i + 704), 0x10u);
          }
          else
          {
            *(_QWORD *)(v13 + 24) = 0LL;
            *(_BYTE *)(v13 + 8) = 0;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)v13);
          __writecr8(v16);
        }
        PoFxIdleDevice(v7);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Buffer = 1;
    return ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return result;
}
