/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x1C000A898
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000BA70 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhCancelEnumeration @ 0x1C0027D3C (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x1C0041328 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C0041618 (UsbhPCE_HW_Stop.c)
 *     UsbhDropDevice @ 0x1C0051458 (UsbhDropDevice.c)
 *     UsbhHardErrorInvalidData @ 0x1C0051820 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0051900 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortRecycle @ 0x1C0051D90 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x1C00520E0 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x1C0052850 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
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
