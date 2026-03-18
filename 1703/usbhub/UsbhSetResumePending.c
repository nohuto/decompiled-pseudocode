/*
 * XREFs of UsbhSetResumePending @ 0x1C0007E28
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rdi
  KIRQL v6; // al

  v4 = FdoExt(a1);
  UsbhSetPcqEventStatus(a1, a2, 1LL);
  v5 = (KSPIN_LOCK *)(v4 + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  *(_BYTE *)(a2 + 2838) = 0;
  LOBYTE(v4) = v6;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock(v5, v4);
}
