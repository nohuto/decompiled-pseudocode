/*
 * XREFs of XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016AAC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0016290 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C00163BC (DeviceSlot_D0EntryCleanupState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
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
        (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
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
      (__int64)&WPP_c9290fa77d4231816aaf940c56e9ce5a_Traceguids,
      v5);
  }
}
