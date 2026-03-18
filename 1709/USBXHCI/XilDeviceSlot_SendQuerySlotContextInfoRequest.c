/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C00356A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // eax
  int v11; // [rsp+28h] [rbp-90h]
  int v12; // [rsp+28h] [rbp-90h]
  _QWORD v13[6]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+60h] [rbp-58h] BYREF
  int v15; // [rsp+68h] [rbp-50h]

  v8 = *(_QWORD *)(a1[9] + 8LL);
  v9 = *(_QWORD *)(v8 + 112);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[4]) = 27;
  v14 = 0LL;
  v15 = 0;
  v13[3] = *a1;
  v13[5] = *(_QWORD *)(a2 + 560);
  v10 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v13, 48, (unsigned int)&v14, 12);
  if ( v10 >= 0 )
  {
    if ( (int)v14 >= 0 )
    {
      if ( a3 )
        *a3 = HIDWORD(v14);
      if ( a4 )
        *a4 = v15;
    }
    else
    {
      v12 = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 72),
        2u,
        0xAu,
        0x1Du,
        (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
        v12);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        907);
    }
  }
  else
  {
    v11 = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 72),
      2u,
      0xAu,
      0x1Cu,
      (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
      v11);
  }
}
