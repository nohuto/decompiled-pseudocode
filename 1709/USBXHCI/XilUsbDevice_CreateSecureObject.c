/*
 * XREFs of XilUsbDevice_CreateSecureObject @ 0x1C00331F8
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0033180 (XilUsbDevice_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_CreateSecureObject(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-60h]
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  _QWORD v11[6]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1[7] + 8LL);
  v3 = v2[14];
  memset(v11, 0, sizeof(v11));
  v11[3] = 0LL;
  LODWORD(v11[4]) = 29;
  v11[5] = v2[56];
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v11, 48, (unsigned int)&v9, 16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = v9;
    if ( v9 >= 0 )
    {
      *a1 = v10;
    }
    else
    {
      v8 = v9;
      WPP_RECORDER_SF_d(v2[9], 2u, 0xCu, 0xBu, (__int64)&WPP_ef5eddd1bf0d3dd74888b2eada32d46b_Traceguids, v8);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but UsbDeviceCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        80);
    }
  }
  else
  {
    v7 = v4;
    WPP_RECORDER_SF_d(v2[9], 2u, 0xCu, 0xAu, (__int64)&WPP_ef5eddd1bf0d3dd74888b2eada32d46b_Traceguids, v7);
  }
  return v5;
}
