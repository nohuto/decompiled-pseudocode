/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x1C0005E50
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v5; // rdi
  const char *v6; // rsi
  const char *v7; // r14
  __int64 v8; // r10
  const char *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // r10
  __int64 v19; // r10
  const char *v20; // r13
  __int64 v21; // r9
  __int64 v22; // r9
  const char *v23; // r12
  __int64 v24; // r8
  const char *v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rcx
  const char *v28; // rdx
  int v29; // [rsp+28h] [rbp-A9h]
  __int64 v31; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v33; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v35; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v37; // [rsp+148h] [rbp+77h]
  const char *v38; // [rsp+150h] [rbp+7Fh]
  __int64 v39; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v41; // [rsp+160h] [rbp+8Fh]
  const char *v42; // [rsp+168h] [rbp+97h]
  __int64 v43; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v35 = va_arg(va3, _QWORD);
  v37 = va_arg(va3, const char *);
  v38 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v39 = va_arg(va4, _QWORD);
  v41 = va_arg(va4, const char *);
  v42 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v43 = va_arg(va5, _QWORD);
  v5 = (__int64)v42;
  v6 = v41;
  v7 = v38;
  v8 = a1;
  v9 = v37;
  v10 = -1LL;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v42 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v42[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = v42;
    if ( !v42 )
      v20 = "NULL";
    if ( v41 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v41[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = v41;
    if ( !v41 )
      v23 = "NULL";
    if ( v38 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( v38[v24] );
      v11 = v24 + 1;
    }
    v25 = v38;
    if ( !v38 )
      v25 = "NULL";
    if ( v37 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v37[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = v37;
    if ( !v37 )
      v28 = "NULL";
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
      v28,
      v27,
      v25,
      v11,
      (__int64 *)va3,
      4LL,
      v23,
      v22,
      v20,
      v19,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v8 = a1;
    v5 = (__int64)v42;
  }
  if ( v5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v5 + v12) );
  }
  if ( v6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v6[v13] );
  }
  if ( !v6 )
    v6 = "NULL";
  if ( v7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v7[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
    v16 = v10 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  LOWORD(v29) = 16;
  return WppAutoLogTrace(
           v8,
           4LL,
           20LL,
           &WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
           v29,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v9,
           v16,
           v7,
           v15,
           (__int64 *)va3,
           4LL,
           v6);
}
