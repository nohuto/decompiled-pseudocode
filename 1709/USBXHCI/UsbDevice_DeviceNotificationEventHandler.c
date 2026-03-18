/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C00337D0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0015430 (WPP_RECORDER_SF_dqd.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, __int64 a2)
{
  char result; // al
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+38h] [rbp-10h]

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    v6 = *(unsigned __int8 *)(a2 + 1);
    v5 = *((unsigned __int8 *)a1 + 135);
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xCu,
      0x42u,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v5,
      *a1,
      v6);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C004F888)(
             *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
             *a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
