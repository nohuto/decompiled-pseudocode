/*
 * XREFs of XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00170A0
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00171C0 (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_SendSetDeviceContextRequest(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+28h] [rbp-80h]
  int v12; // [rsp+28h] [rbp-80h]
  int v13; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v14[7]; // [rsp+38h] [rbp-70h] BYREF

  v6 = *(_QWORD *)(a1[9] + 8LL);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[4]) = 25;
  v13 = 0;
  v14[3] = *a1;
  v14[5] = *(_QWORD *)(a2 + 560);
  LODWORD(v14[6]) = a3;
  v8 = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v14, 56, (unsigned int)&v13, 4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = v13;
    if ( v13 < 0 )
    {
      v12 = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        2u,
        0xAu,
        0x18u,
        (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
        v12);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotSetDeviceContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        648);
    }
  }
  else
  {
    v11 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      0xAu,
      0x17u,
      (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
      v11);
  }
  return v9;
}
