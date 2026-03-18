/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C005344C
 * Callers:
 *     UsbhBuildClassCompatibleID @ 0x1C0020C90 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildHardwareID @ 0x1C0021690 (UsbhBuildHardwareID.c)
 *     UsbhBuildDeviceID @ 0x1C0021C10 (UsbhBuildDeviceID.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0059888 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rdi
  __int64 v8; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  const wchar_t *v14; // rdx
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = 2 * v12;
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v14,
      v13,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( !a6 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, a5, v16, v6);
}
