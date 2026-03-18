/*
 * XREFs of XilDeviceSlot_InitializeSecureResources @ 0x1C000F540
 * Callers:
 *     DeviceSlot_Initialize @ 0x1C000F07C (DeviceSlot_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_InitializeSecureResources(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1[9] + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[4]) = 23;
  v9 = 0;
  v10[3] = *a1;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v10, 40, (unsigned int)&v9, 4);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v9 < 0 )
    {
      v8 = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        2u,
        0xAu,
        0x14u,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v8);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotInitialize failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        464);
    }
  }
  else
  {
    v7 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      2u,
      0xAu,
      0x13u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v7);
  }
  return v5;
}
