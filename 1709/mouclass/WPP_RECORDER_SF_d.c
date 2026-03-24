/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C000489C
 * Callers:
 *     MouDeterminePortsServiced @ 0x1C000B8B4 (MouDeterminePortsServiced.c)
 *     DriverEntry @ 0x1C000E080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C000E95C (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00017D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v9; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, &WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids, v9, va, 4LL, 0LL);
}
