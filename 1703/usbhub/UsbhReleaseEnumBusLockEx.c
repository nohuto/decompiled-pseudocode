/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x1C000A028
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x1C0040538 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040828 (UsbhPCE_HW_Stop.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 *     UsbhHardErrorInvalidData @ 0x1C0050A60 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050B40 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortRecycle @ 0x1C0050FD0 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x1C0051320 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x1C0051A90 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967281491, *(_DWORD *)(v6 + 3072), v3);
  if ( *(_QWORD *)(v6 + 4400) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (unsigned __int16)v3 && *(_QWORD *)(v6 + 3080) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      UsbhDecHubBusy(a1, v8, *(_QWORD *)(v6 + 3088));
      *(_QWORD *)(v6 + 3088) = 0LL;
      *(_DWORD *)(v6 + 3072) = 0;
      *(_QWORD *)(v6 + 3080) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 3096));
      (*(void (__fastcall **)(_QWORD))(v6 + 4400))(*(_QWORD *)(v6 + 4232));
    }
    else
    {
      Log(a1, 4, 1967281016, *(_DWORD *)(v6 + 3072), *(_QWORD *)(v6 + 3080));
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v9);
    }
  }
}
