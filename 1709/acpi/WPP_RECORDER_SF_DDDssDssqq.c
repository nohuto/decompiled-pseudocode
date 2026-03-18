/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x1C000E618
 * Callers:
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  const char *v8; // r14
  __int64 v9; // r10
  const char *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  const char *v19; // r13
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // r11
  __int64 v26; // rcx
  const char *v27; // rax
  int v28; // [rsp+28h] [rbp-A9h]
  __int64 v30; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v32; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v34; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v36; // [rsp+148h] [rbp+77h]
  const char *v37; // [rsp+150h] [rbp+7Fh]
  __int64 v38; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v40; // [rsp+160h] [rbp+8Fh]
  const char *v41; // [rsp+168h] [rbp+97h]
  __int64 v42; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  v36 = va_arg(va3, const char *);
  v37 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  v40 = va_arg(va4, const char *);
  v41 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v42 = va_arg(va5, _QWORD);
  v5 = (__int64)v41;
  v6 = -1LL;
  v7 = (__int64)v40;
  v8 = v37;
  v9 = a1;
  v10 = v36;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v41 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v41[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = v41;
    if ( !v41 )
      v19 = "NULL";
    if ( v40 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v40[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = v40;
    if ( !v40 )
      v22 = "NULL";
    if ( v37 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v37[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = v37;
    if ( !v37 )
      v25 = "NULL";
    if ( v36 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v36[v26] );
      v11 = v26 + 1;
    }
    v27 = v36;
    if ( !v36 )
      v27 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v27,
      v11,
      v25,
      v24,
      (__int64 *)va3,
      4LL,
      v22,
      v21,
      v19,
      v18,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v9 = a1;
    v5 = (__int64)v41;
  }
  if ( v5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v5 + v12) );
  }
  if ( v7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v7 + v13) );
  }
  if ( v8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v8[v14] );
  }
  if ( !v8 )
    v8 = "NULL";
  if ( v10 )
  {
    do
      ++v6;
    while ( v10[v6] );
    v15 = v6 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v28) = 16;
  return WppAutoLogTrace(
           v9,
           4LL,
           20LL,
           &WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
           v28,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v10,
           v15,
           v8);
}
