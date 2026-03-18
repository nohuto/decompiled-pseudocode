/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C000EA24
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_xx(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      38LL,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 38;
  return WppAutoLogTrace(a1, 4LL, 7LL, &WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids, v7, (__int64 *)va);
}
