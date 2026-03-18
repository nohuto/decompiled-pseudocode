/*
 * XREFs of UsbhDispatch_PindicatorEvent @ 0x1C003C8F0
 * Callers:
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhDisablePortIndicators @ 0x1C003C828 (UsbhDisablePortIndicators.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003D1F0 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003D350 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003CD18 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C003CDE0 (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003CE74 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003CF3C (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003D024 (Usbh_PIND_Timeout_Action.c)
 */

void __fastcall UsbhDispatch_PindicatorEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v5 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids,
      a3);
  Log(a1, 0x8000, 1718371670, a4, v5);
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            Usbh_PIND_Enable_Action(a1, a2, a4);
        }
        else
        {
          Usbh_PIND_SetBlink_Action(a1, a2, a4);
        }
      }
      else
      {
        Usbh_PIND_SetAuto_Action(a1, a2, a4);
      }
    }
    else
    {
      Usbh_PIND_Disable_Action(a1, a2, a4);
    }
  }
  else
  {
    Usbh_PIND_Timeout_Action(a1, a2, a4);
  }
}
