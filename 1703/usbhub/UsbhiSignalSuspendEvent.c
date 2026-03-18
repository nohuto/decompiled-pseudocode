/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0042448
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C730 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00103B0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004129C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027698 (UsbhLogSignalSuspendEvent.c)
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
