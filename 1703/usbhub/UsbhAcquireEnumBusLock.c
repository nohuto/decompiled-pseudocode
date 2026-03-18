/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C0009EC8
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x1C0007900 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1631737171, *(_DWORD *)(v6 + 3072), v3);
  Log(a1, 4, 1631734851, *(_DWORD *)(v6 + 3072), a2);
  if ( *(_QWORD *)(v6 + 4392) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (unsigned __int16)v3 || *(_QWORD *)(v6 + 3080) == a2 )
    {
      Log(a1, 4, 2017613139, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      Usbh_SSH_Event(a1, 6LL, a2);
      (*(void (__fastcall **)(_QWORD))(v6 + 4392))(*(_QWORD *)(v6 + 4232));
      Log(a1, 4, 1816286547, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      *(_DWORD *)(v6 + 3072) = (unsigned __int16)v3;
      *(_QWORD *)(v6 + 3080) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 3096));
      *(_QWORD *)(v6 + 3088) = UsbhIncHubBusy(a1, a2, a1, 1430416236, 1);
    }
  }
}
