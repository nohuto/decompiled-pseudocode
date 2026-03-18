/*
 * XREFs of WPP_RECORDER_SF_qDDqssdddd @ 0x1C00223C4
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C00211A0 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qDDqssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  const char *v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const char *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // rax
  int v18; // [rsp+28h] [rbp-A9h]
  __int64 v19; // [rsp+120h] [rbp+4Fh] BYREF
  va_list va; // [rsp+120h] [rbp+4Fh]
  __int64 v21; // [rsp+128h] [rbp+57h] BYREF
  va_list va1; // [rsp+128h] [rbp+57h]
  __int64 v23; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+5Fh]
  __int64 v25; // [rsp+138h] [rbp+67h] BYREF
  va_list va3; // [rsp+138h] [rbp+67h]
  const char *v27; // [rsp+140h] [rbp+6Fh]
  const char *v28; // [rsp+148h] [rbp+77h]
  __int64 v29; // [rsp+150h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+7Fh]
  __int64 v31; // [rsp+158h] [rbp+87h] BYREF
  va_list va5; // [rsp+158h] [rbp+87h]
  __int64 v33; // [rsp+160h] [rbp+8Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+8Fh]
  va_list va7; // [rsp+168h] [rbp+97h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, const char *);
  v28 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v33 = va_arg(va7, _QWORD);
  v5 = v28;
  v6 = -1LL;
  v7 = v27;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v28 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v28[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v28;
    if ( !v28 )
      v14 = "NULL";
    if ( v27 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v27[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v27;
    if ( !v27 )
      v17 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e8a71974e51b30e49c3e0986e671468e_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      v17,
      v16,
      v14,
      v13,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v5[v9] );
  }
  if ( !v5 )
    v5 = "NULL";
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v10 = v6 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v18) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_e8a71974e51b30e49c3e0986e671468e_Traceguids,
           v18,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           v7,
           v10,
           v5);
}
