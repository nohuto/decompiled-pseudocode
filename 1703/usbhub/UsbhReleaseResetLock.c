/*
 * XREFs of UsbhReleaseResetLock @ 0x1C00087A0
 * Callers:
 *     Usbh_HRS_Paused @ 0x1C0008618 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C00086EC (Usbh_HRS_WaitReady.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Disabled @ 0x1C0009618 (Usbh_HRS_Disabled.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0046E5C (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C0046F40 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C00471DC (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C00472E4 (Usbh_HRS_WaitDone.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhReleaseResetLock(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KSEMAPHORE *v5; // rax
  __int64 Limit; // rcx

  v5 = (struct _KSEMAPHORE *)FdoExt(a1);
  v5[87].Limit = a3;
  *(_DWORD *)(a2 + 68) = a3;
  *(_DWORD *)(a2 + 64) = 1734964085;
  Limit = (unsigned int)v5[28].Limit;
  v5[41].Header.WaitListHead.Flink = 0LL;
  v5[Limit + 29].Header.SignalState = a3;
  KeReleaseSemaphore(v5 + 88, 16, 1, 0);
  return a3;
}
