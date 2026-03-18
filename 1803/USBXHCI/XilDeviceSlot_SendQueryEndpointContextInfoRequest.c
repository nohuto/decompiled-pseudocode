/*
 * XREFs of XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C000F9B8
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x1C0032668 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C00326DC (UsbDevice_GetXhciEndpointDequeuePointer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendQueryEndpointContextInfoRequest(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // eax
  int v12; // [rsp+28h] [rbp-49h]
  int v13; // [rsp+28h] [rbp-49h]
  _QWORD v14[7]; // [rsp+30h] [rbp-41h] BYREF
  __int64 v15; // [rsp+68h] [rbp-9h] BYREF
  __int64 v16; // [rsp+70h] [rbp-1h]

  v9 = *(_QWORD *)(a1[9] + 8LL);
  v10 = *(_QWORD *)(v9 + 112);
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[4]) = 28;
  v15 = 0LL;
  v16 = 0LL;
  v14[3] = *a1;
  v14[5] = *(_QWORD *)(a2 + 560);
  LODWORD(v14[6]) = a3;
  v11 = SecureChannel_SendRequestSynchronously(v10, (unsigned int)v14, 56, (unsigned int)&v15, 16);
  if ( v11 >= 0 )
  {
    if ( (int)v15 >= 0 )
    {
      if ( a4 )
        *a4 = HIDWORD(v15);
      if ( a5 )
        *a5 = v16;
    }
    else
    {
      v13 = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v9 + 72),
        2u,
        0xAu,
        0x1Fu,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v13);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromEndpointContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        1047);
    }
  }
  else
  {
    v12 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 72),
      2u,
      0xAu,
      0x1Eu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v12);
  }
}
