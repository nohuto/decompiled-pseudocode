/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14010F010
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     KeSetTimeAdjustment @ 0x140149F98 (KeSetTimeAdjustment.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  KIRQL v4; // si
  _QWORD *v5; // rcx
  char *v6; // rax
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v8 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, v3, &ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner(v10, v9);
    **(_DWORD **)a2 = v8;
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  __writecr8(0xFuLL);
  v5 = *(_QWORD **)(a2 + 8);
  if ( v5 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v5);
  v6 = *(char **)(a2 + 16);
  if ( v6 )
    KeTimeSynchronization = *v6;
  result = v4;
  __writecr8(v4);
  return result;
}
