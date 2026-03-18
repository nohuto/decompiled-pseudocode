/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0006680
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0006730 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0008D14 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C00129D0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0042200 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0042704 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0042A88 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C00068E0 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent();
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL);
  return result;
}
