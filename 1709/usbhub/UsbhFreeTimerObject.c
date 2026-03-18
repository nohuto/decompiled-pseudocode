/*
 * XREFs of UsbhFreeTimerObject @ 0x1C004663C
 * Callers:
 *     UsbhBusPnpStart @ 0x1C000A9B0 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F41C (UsbhBusPnpStop_Action.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v4; // rbp
  void *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // r14

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  Log(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v5 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2);
    v6 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    *a2 = 0LL;
    v7 = v6;
    Log(a1, 0x2000, 1718768689, (__int64)v5, 0LL);
    ExFreePoolWithTag(v5, 0);
    KeReleaseSpinLock(v4 + 466, v7);
  }
}
