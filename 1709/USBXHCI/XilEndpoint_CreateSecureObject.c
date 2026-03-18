/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1C0017628
 * Callers:
 *     XilEndpoint_Create @ 0x1C0017594 (XilEndpoint_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  _QWORD v15[7]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1[4];
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 112LL);
  memset(v15, 0, sizeof(v15));
  v15[3] = 0LL;
  LODWORD(v15[4]) = 32;
  v5 = v1[2];
  if ( *(_BYTE *)(v5 + 608) )
  {
    v6 = *(_QWORD *)(v5 + 560);
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      265);
    v6 = 0LL;
  }
  v7 = a1[4];
  v15[5] = v6;
  LODWORD(v15[6]) = *(_DWORD *)(v7 + 144);
  v8 = SecureChannel_SendRequestSynchronously(v4, (unsigned int)v15, 56, (unsigned int)&v13, 16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
    {
      *a1 = v14;
    }
    else
    {
      v12 = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        2u,
        0xDu,
        0xBu,
        (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
        v12);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but EndpointCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        255);
    }
  }
  else
  {
    v11 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xDu,
      0xAu,
      (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
      v11);
  }
  return v9;
}
