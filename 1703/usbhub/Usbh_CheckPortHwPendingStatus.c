/*
 * XREFs of Usbh_CheckPortHwPendingStatus @ 0x1C001EF10
 * Callers:
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSuspendEvent(a1, a2);
  }
  else if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalResumeEvent(a1, a2);
  }
  else
  {
    KeReleaseSpinLock(v4, v5);
  }
}
