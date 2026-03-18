/*
 * XREFs of UsbhSetPcqEventStatus @ 0x1C0007EAC
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0007410 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhSetResumePending @ 0x1C0007E28 (UsbhSetResumePending.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C730 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0010890 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0016B34 (Usbh_PCE_HardwareWake_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003FF64 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_Close_Action @ 0x1C004170C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041914 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0041E8C (Usbh_PCE_SD_Resume_Action.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 */

__int64 __fastcall UsbhSetPcqEventStatus(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v6; // r11d
  __int64 v7; // r10
  _DWORD *v8; // r8
  int v9; // r11d
  int v10; // r11d

  result = Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v8 = (_DWORD *)(v7 + 32 * (*(unsigned int *)(v7 + 2400) + 43LL));
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8[7] = a4;
      }
      else
      {
        v8[6] = a4;
      }
    }
    else
    {
      v8[5] = a4;
    }
  }
  else
  {
    v8[4] = a4;
  }
  return result;
}
