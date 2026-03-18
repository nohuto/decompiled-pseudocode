/*
 * XREFs of XilDeviceSlot_SetDeviceContext @ 0x1C000FD78
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F044 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C000FC44 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C003F978 (XilCoreDeviceSlot_SetDeviceContext.c)
 */

__int64 __fastcall XilDeviceSlot_SetDeviceContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 XilCoreDeviceSlotData; // rax
  int v11; // eax

  v3 = a1 + 16;
  v4 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  if ( Controller_IsControllerAccessible(v6) )
  {
    if ( *(_BYTE *)(v3 + 64) )
    {
      v7 = XilDeviceSlot_SendSetDeviceContextRequest((_QWORD *)v3, a2, v4);
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(v3 + 72);
        if ( *(_BYTE *)(v8 + 80) )
          v9 = *(_QWORD *)(v8 + 24);
        else
          v9 = *(_QWORD *)(v8 + 72);
        *(_QWORD *)(v9 + 8 * v4) = a2;
      }
    }
    else
    {
      XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v3 + 72));
      v11 = XilCoreDeviceSlot_SetDeviceContext(XilCoreDeviceSlotData, a2, (unsigned int)v4, 0LL);
      v7 = v11;
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          2u,
          0xAu,
          0x19u,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v11);
        Debug_FreAssertMsg(
          (__int64)"XilCoreDeviceSlot_SetDeviceContext failed",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
          728);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
