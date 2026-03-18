/*
 * XREFs of WPP_RECORDER_SF_LsHHsLLLL @ 0x1C0129AE8
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_LsHHsLLLL(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rdi
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  int v17; // [rsp+28h] [rbp-99h]
  __int64 v18; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  const char *v20; // [rsp+118h] [rbp+57h]
  __int64 v21; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+5Fh]
  __int64 v23; // [rsp+128h] [rbp+67h] BYREF
  va_list va2; // [rsp+128h] [rbp+67h]
  const char *v25; // [rsp+130h] [rbp+6Fh]
  __int64 v26; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v28; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v30; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v30 = va_arg(va6, _QWORD);
  v5 = v25;
  v6 = v20;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v25 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v25[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = v25;
    if ( !v25 )
      v11 = "NULL";
    if ( v20 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v20[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v20;
    if ( !v20 )
      v14 = "NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids,
      264LL,
      (__int64 *)va,
      4LL,
      v14,
      v13,
      (__int64 *)va1,
      2LL,
      (__int64 *)va2,
      2LL,
      v11,
      v10,
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
    v15 = -1LL;
    do
      ++v15;
    while ( v5[v15] );
  }
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v17) = 264;
  return WppAutoLogTrace(a1, 4LL, 11LL, &WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids, v17, (__int64 *)va, 4LL, v6);
}
