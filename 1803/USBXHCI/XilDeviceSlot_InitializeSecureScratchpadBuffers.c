/*
 * XREFs of XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C000F650
 * Callers:
 *     DeviceSlot_ControllerResetPostReset @ 0x1C000EE34 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000EF60 (DeviceSlot_D0EntryCleanupState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_InitializeSecureScratchpadBuffers(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1[9] + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[4]) = 24;
  v7 = 0;
  v8[3] = *a1;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( v4 >= 0 )
  {
    if ( v7 < 0 )
    {
      v6 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        2u,
        0xAu,
        0x16u,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v6);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotInitializeScratchpadBuffers failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        555);
    }
  }
  else
  {
    v5 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      2u,
      0xAu,
      0x15u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v5);
  }
}
