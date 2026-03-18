/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C004323C
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C0008D14 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C030 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C000F4E0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C00129D0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0018524 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004208C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027920 (UsbhLogSignalSuspendEvent.c)
 */

__int64 __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1;
  result = UsbhLogSignalSuspendEvent(a1, a2);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(v3, a2, 0LL, 30);
  return result;
}
