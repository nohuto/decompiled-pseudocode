/*
 * XREFs of ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C003A678
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C003A0FC (DpiSetDevicePowerTransitionState.c)
 */

bool __fastcall DpiStartSuspendingAdapter(KSPIN_LOCK *a1)
{
  int v2; // edi
  bool v3; // zf
  bool v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 488, &LockHandle);
  v2 = *((_DWORD *)a1 + 992);
  v3 = v2 == 1;
  if ( v2 == 1 )
  {
    DpiSetDevicePowerTransitionState((__int64)a1, 2);
    v3 = 1;
  }
  v4 = v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
