/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0014D78
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0013140 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0013F40 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_II(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 4LL, &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v8, (__int64 *)va);
}
