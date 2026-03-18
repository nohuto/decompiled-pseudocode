/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14002E950
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 *     KeSetTimeAdjustment @ 0x140150788 (KeSetTimeAdjustment.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  KIRQL v4; // si
  unsigned int *v5; // rax
  char *v6; // rax
  __int64 result; // rax
  int v8; // ebx

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v8 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, v3, &ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner();
    **(_DWORD **)a2 = v8;
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  __writecr8(0xFuLL);
  v5 = *(unsigned int **)(a2 + 8);
  if ( v5 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v5);
  v6 = *(char **)(a2 + 16);
  if ( v6 )
    KeTimeSynchronization = *v6;
  result = v4;
  __writecr8(v4);
  return result;
}
