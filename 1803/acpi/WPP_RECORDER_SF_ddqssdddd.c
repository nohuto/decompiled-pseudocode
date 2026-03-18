/*
 * XREFs of WPP_RECORDER_SF_ddqssdddd @ 0x1C003E734
 * Callers:
 *     ACPIThermalUpdateTemperature @ 0x1C003DF1C (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rdi
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+28h] [rbp-99h]
  __int64 v21; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  __int64 v23; // [rsp+118h] [rbp+57h] BYREF
  va_list va1; // [rsp+118h] [rbp+57h]
  __int64 v25; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  const char *v27; // [rsp+128h] [rbp+67h]
  const char *v28; // [rsp+130h] [rbp+6Fh]
  __int64 v29; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v31; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v33; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v27 = va_arg(va3, const char *);
  v28 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, _QWORD);
  v5 = v28;
  v6 = v27;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v28 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v28[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v28;
    if ( !v28 )
      v12 = "NULL";
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
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1b1165dd198a34919fb1e2a61779dbfc_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      v15,
      v14,
      v12,
      v11,
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
    v16 = -1LL;
    do
      ++v16;
    while ( v5[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v18 = v7 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_1b1165dd198a34919fb1e2a61779dbfc_Traceguids,
           v20,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           v6,
           v18,
           v5,
           v17,
           (__int64 *)va3);
}
