/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1C0058DF0
 * Callers:
 *     UsbhGetUxdDeviceKey @ 0x1C00585E0 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0058810 (UsbhGetUxdPortKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rsi
  __int64 v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  const wchar_t *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-58h]

  v7 = a6;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = L"NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = 2 * v15;
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
      a4,
      v17,
      v16,
      v13,
      2 * v12,
      0LL);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( !a6 )
    v7 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids, v20, v7);
}
