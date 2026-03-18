/*
 * XREFs of UsbhBusUnlatchPdo @ 0x1C005059C
 * Callers:
 *     UsbhWaitConnect @ 0x1C0014410 (UsbhWaitConnect.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C00261D4 (UsbhRequestPortSuspend.c)
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Disable @ 0x1C004060C (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 *     UsbhPortDisconnect @ 0x1C0050E10 (UsbhPortDisconnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1C000B1A0 (UsbhDerefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  KIRQL v9; // bl

  Log(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    Log(a1, 1024, 1970032690, a2, a3);
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
}
