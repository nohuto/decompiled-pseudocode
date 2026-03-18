/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x14027A2B4
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_QWORD *PopPepResetDeviceAccountingLevel()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r12d
  __int64 i; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  KIRQL v7; // al
  KIRQL v8; // si
  unsigned int j; // esi
  __int64 v10; // rdi
  KIRQL v11; // al
  KIRQL v12; // r14

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
      *(_DWORD *)(v4 + 592) = v2;
      *(_QWORD *)(v4 + 608) = 0LL;
      v8 = v7;
      *(_QWORD *)(v4 + 616) = 0LL;
      memset((void *)(v4 + 624), 0, 0x50uLL);
      if ( *(_DWORD *)(v4 + 588) == 5 )
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
      __writecr8(v8);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v4 + 712) + 8LL * j) + 200LL;
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
        *(_DWORD *)(v10 + 16) = v2;
        *(_QWORD *)(v10 + 32) = 0LL;
        v12 = v11;
        *(_QWORD *)(v10 + 40) = 0LL;
        memset((void *)(v10 + 48), 0, 0x50uLL);
        if ( *(_DWORD *)(v10 + 12) == -1 )
        {
          *(_BYTE *)(v10 + 8) = 0;
          *(_QWORD *)(v10 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v10 + 8) = 1;
          *(_QWORD *)(v10 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        __writecr8(v12);
      }
      PoFxIdleDevice(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
