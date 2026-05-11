/*
 * XREFs of WPP_RECORDER_SF_ii @ 0x1C0002234
 * Callers:
 *     USBType1AdjustPositionWithin1Ms @ 0x1C000323C (USBType1AdjustPositionWithin1Ms.c)
 *     USBCaptureBytePosition @ 0x1C00058A0 (USBCaptureBytePosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0017E00 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ii(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 3LL, a5, v8, (__int64 *)va, 8LL, va1);
}
