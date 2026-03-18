/*
 * XREFs of PopFxDeviceAccountingWatchdog @ 0x14023DC74
 * Callers:
 *     PopDripsWatchdogFetchDeviceBlockers @ 0x14070A778 (PopDripsWatchdogFetchDeviceBlockers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 */

unsigned __int64 __fastcall PopFxDeviceAccountingWatchdog(unsigned __int64 a1, ULONG_PTR *a2, unsigned int *a3)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r13
  ULONG_PTR i; // rbx
  KIRQL v10; // si
  unsigned int v11; // esi
  __int64 v12; // rdi
  KIRQL v13; // bp
  unsigned __int64 v14; // rax

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v8 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
          if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
            && *(_BYTE *)(i + 584)
            && v8 - *(_QWORD *)(i + 600) >= a1 )
          {
            PopFxAddRefDevice(i);
            *a3 = -1;
            *a2 = i;
            KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
            v14 = v10;
LABEL_21:
            __writecr8(v14);
            break;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
          __writecr8(v10);
        }
        v11 = 0;
        if ( *(_DWORD *)(i + 628) )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * v11) + 200LL;
            v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
            if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
              && *(_BYTE *)(v12 + 8)
              && v8 - *(_QWORD *)(v12 + 24) >= a1 )
            {
              break;
            }
            KxReleaseSpinLock((PKSPIN_LOCK)v12);
            __writecr8(v13);
            if ( ++v11 >= *(_DWORD *)(i + 628) )
              goto LABEL_16;
          }
          PopFxAddRefDevice(i);
          *a2 = i;
          *a3 = v11;
          KxReleaseSpinLock((PKSPIN_LOCK)v12);
          v14 = v13;
          goto LABEL_21;
        }
      }
LABEL_16:
      ;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
