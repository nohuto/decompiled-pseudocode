/*
 * XREFs of WPP_RECORDER_SF_qdSD @ 0x1C010C86C
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C009C380 (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  const wchar_t *v10; // rcx
  int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v15; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const wchar_t *v17; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, const wchar_t *);
  v5 = (__int64)v17;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v17 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v17[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v17;
    if ( !v17 )
      v10 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      v10,
      2 * v9,
      va2,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
  }
  LOWORD(v12) = 11;
  return WppAutoLogTrace(
           a1,
           3LL,
           20LL,
           &WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
