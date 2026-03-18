/*
 * XREFs of XilUsbDevice_CreateSecureObject @ 0x1C0030D50
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0030C50 (XilUsbDevice_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_CreateSecureObject(__int64 a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+28h] [rbp-41h]
  int v12; // [rsp+28h] [rbp-41h]
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h]
  char v15; // [rsp+40h] [rbp-29h]
  _QWORD v16[10]; // [rsp+50h] [rbp-19h] BYREF

  v4 = *(__int64 **)(*(_QWORD *)(a1 + 56) + 8LL);
  v5 = v4[14];
  memset(v16, 0, sizeof(v16));
  v16[3] = 0LL;
  v6 = *(_OWORD *)(a2 + 4);
  LODWORD(v16[4]) = 29;
  v7 = *(_QWORD *)(a2 + 20);
  v16[5] = v4[57];
  LODWORD(v16[6]) = *(_DWORD *)a2;
  *(_OWORD *)((char *)&v16[6] + 4) = v6;
  *(_QWORD *)((char *)&v16[8] + 4) = v7;
  v8 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v16, 80, (unsigned int)&v13, 24);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)a1 = v14;
      *(_BYTE *)(a1 + 48) = v15;
    }
    else
    {
      v12 = v13;
      WPP_RECORDER_SF_d(v4[9], 2u, 0xCu, 0xBu, (__int64)&WPP_98a3598100bf384f25309f27eace5e79_Traceguids, v12);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but UsbDeviceCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        118);
    }
  }
  else
  {
    v11 = v8;
    WPP_RECORDER_SF_d(v4[9], 2u, 0xCu, 0xAu, (__int64)&WPP_98a3598100bf384f25309f27eace5e79_Traceguids, v11);
  }
  return v9;
}
