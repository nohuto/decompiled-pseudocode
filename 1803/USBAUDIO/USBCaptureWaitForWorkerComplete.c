/*
 * XREFs of USBCaptureWaitForWorkerComplete @ 0x1C00050DC
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0005160 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0005820 (USBCaptureStateChangePin.c)
 *     USBCaptureClosePin @ 0x1C0025CB0 (USBCaptureClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBCaptureWaitForWorkerComplete(__int64 a1, _BYTE *a2, struct _KEVENT *a3)
{
  KSPIN_LOCK *v3; // rdi
  KIRQL v6; // al
  KIRQL v7; // si

  v3 = (KSPIN_LOCK *)(a1 + 112);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  v7 = v6;
  if ( *a2 )
  {
    KeResetEvent(a3);
    KeReleaseSpinLock(v3, v7);
    KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeReleaseSpinLock(v3, v6);
  }
}
