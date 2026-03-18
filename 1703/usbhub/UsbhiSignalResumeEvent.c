/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0007C00
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0007410 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041410 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041914 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0041C94 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0007CB0 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent();
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL);
  return result;
}
