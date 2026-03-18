/*
 * XREFs of WPP_RECORDER_SF_qdSD @ 0x1C010D888
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C0092B80 (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  const wchar_t *v11; // rdx
  int v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v16; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const wchar_t *v18; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, const wchar_t *);
  v5 = (__int64)v18;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v18 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v18[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = 2 * v9;
    v11 = v18;
    if ( !v18 )
      v11 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      v11,
      v10,
      va2,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
  }
  LOWORD(v13) = 11;
  return WppAutoLogTrace(
           a1,
           3LL,
           20LL,
           &WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
