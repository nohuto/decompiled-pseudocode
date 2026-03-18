/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x1402431DC
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 */

_QWORD *PopPepResetDeviceAccountingLevel()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r12d
  __int64 i; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // si
  unsigned int j; // esi
  __int64 v11; // rbx
  KIRQL v12; // al
  KIRQL v13; // r15

  v0 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      PopFxActivateDevice(v6, 0, 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 576));
      v8 = *(_DWORD *)(v4 + 588) == 5;
      v9 = v7;
      *(_DWORD *)(v4 + 592) = v2;
      *(_QWORD *)(v4 + 608) = 0LL;
      *(_QWORD *)(v4 + 616) = 0LL;
      if ( v8 )
      {
        *(_BYTE *)(v4 + 584) = 0;
        *(_QWORD *)(v4 + 600) = 0LL;
      }
      else
      {
        *(_BYTE *)(v4 + 584) = 1;
        *(_QWORD *)(v4 + 600) = MEMORY[0xFFFFF78000000008];
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 576));
      __writecr8(v9);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v4 + 632) + 8LL * j) + 200LL;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
        v8 = *(_DWORD *)(v11 + 12) == -1;
        v13 = v12;
        *(_DWORD *)(v11 + 16) = v2;
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_QWORD *)(v11 + 40) = 0LL;
        if ( v8 )
        {
          *(_BYTE *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v11 + 8) = 1;
          *(_QWORD *)(v11 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v11);
        __writecr8(v13);
      }
      PoFxIdleDevice(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
