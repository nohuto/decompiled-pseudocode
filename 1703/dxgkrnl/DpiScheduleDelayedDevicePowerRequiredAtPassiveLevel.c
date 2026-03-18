/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C003D2EC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C003CF78 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 485, &LockHandle);
  if ( *((_DWORD *)a1 + 986) != 4 && *((_DWORD *)a1 + 987) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
