/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C0017370
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  _DWORD *v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = FdoExt((__int64)a1);
  Log((__int64)a1, 4, 1631737171, (unsigned int)v6[768], v3);
  Log((__int64)a1, 4, 1631734851, (unsigned int)v6[768], a2);
  if ( *((_QWORD *)v6 + 549) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (unsigned __int16)v3 || *((_QWORD *)v6 + 385) == a2 )
    {
      Log((__int64)a1, 4, 2017613139, (unsigned int)v6[768], (unsigned int)v3);
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v7);
      Usbh_SSH_Event(a1);
      (*((void (__fastcall **)(_QWORD))v6 + 549))(*((_QWORD *)v6 + 529));
      Log((__int64)a1, 4, 1816286547, (unsigned int)v6[768], (unsigned int)v3);
      v6[768] = (unsigned __int16)v3;
      *((_QWORD *)v6 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v6 + 774);
      *((_QWORD *)v6 + 386) = UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430416236, 1);
    }
  }
}
