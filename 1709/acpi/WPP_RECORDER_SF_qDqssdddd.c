/*
 * XREFs of WPP_RECORDER_SF_qDqssdddd @ 0x1C0024EC0
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0023C00 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qDqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rdi
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rax
  int v19; // [rsp+28h] [rbp-99h]
  __int64 v20; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  __int64 v22; // [rsp+118h] [rbp+57h] BYREF
  va_list va1; // [rsp+118h] [rbp+57h]
  __int64 v24; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  const char *v26; // [rsp+128h] [rbp+67h]
  const char *v27; // [rsp+130h] [rbp+6Fh]
  __int64 v28; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v30; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v32; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v26 = va_arg(va3, const char *);
  v27 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  v5 = v27;
  v6 = v26;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v27 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v27[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v27;
    if ( !v27 )
      v15 = "NULL";
    if ( v26 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v26[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = v26;
    if ( !v26 )
      v18 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      v18,
      v17,
      v15,
      v14,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
  }
  if ( !v5 )
    v5 = "NULL";
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v11 = v7 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
           v19,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           v6,
           v11,
           v5);
}
