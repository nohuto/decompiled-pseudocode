/*
 * XREFs of WPP_RECORDER_SF_dc @ 0x1C0042488
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      1LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v8, (__int64 *)va);
}
