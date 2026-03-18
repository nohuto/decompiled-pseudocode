/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C0031310
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C000E0D0 (WPP_RECORDER_SF_dqd.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, __int64 a2)
{
  char result; // al

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xCu,
      0x44u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *((unsigned __int8 *)a1 + 135),
      *a1,
      BYTE1(*(_DWORD *)a2));
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C004C888)(
             *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
             *a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
