/*
 * XREFs of WPP_RECORDER_SF_sqSD @ 0x1C004B638
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008CF5C (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const wchar_t *v20; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const wchar_t *);
  v6 = v20;
  v7 = -1LL;
  v9 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v20 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v20[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v20;
    v13 = -1LL;
    if ( !v20 )
      v12 = L"NULL";
    do
      ++v13;
    while ( aAcpiinternalno[v13] );
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
      21LL,
      "ACPIInternalNotifyAvailableDeviceObject",
      v13 + 1,
      (__int64 *)va,
      8LL,
      v12,
      2 * v11,
      va1,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v6[v14] );
    v9 = v14 + 1;
  }
  v15 = 2 * v9;
  if ( !v6 )
    v6 = L"NULL";
  do
    ++v7;
  while ( aAcpiinternalno[v7] );
  LOWORD(v17) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           6LL,
           &WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
           v17,
           "ACPIInternalNotifyAvailableDeviceObject",
           v7 + 1,
           (__int64 *)va,
           8LL,
           v6,
           v15,
           va1,
           4LL,
           0LL);
}
