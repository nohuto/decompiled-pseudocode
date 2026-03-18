/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x1C0058504
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r9
  __int64 v13; // r9
  const char *v14; // r13
  __int64 v15; // r8
  __int64 v16; // r8
  const char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v20; // r11
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
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
  v6 = -1LL;
  v7 = (__int64)v41;
  v8 = v38;
  v9 = a1;
  v10 = v37;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v42 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v42[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v42;
    if ( !v42 )
      v14 = "NULL";
    if ( v41 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v41[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v41;
    if ( !v41 )
      v17 = "NULL";
    if ( v38 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v38[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = v38;
    if ( !v38 )
      v20 = "NULL";
    if ( v37 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v37[v21] );
      v11 = v21 + 1;
    }
    v22 = v37;
    if ( !v37 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v22,
      v11,
      v20,
      v19,
      (__int64 *)va3,
      4LL,
      v17,
      v16,
      v14,
      v13,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v9 = a1;
    v5 = (__int64)v42;
  }
  if ( v5 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v5 + v23) );
  }
  if ( v7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v7 + v24) );
  }
  if ( v8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v8[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v8 )
    v8 = "NULL";
  if ( v10 )
  {
    do
      ++v6;
    while ( v10[v6] );
    v27 = v6 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v29) = 16;
  return WppAutoLogTrace(
           v9,
           4LL,
           20LL,
           &WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
           v29,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v10,
           v27,
           v8,
           v26,
           (__int64 *)va3);
}
