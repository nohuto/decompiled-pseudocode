/*
 * XREFs of WPP_RECORDER_SF_qdDSD @ 0x1C010CC0C
 * Callers:
 *     RIMOpenDev @ 0x1C000C32C (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  int v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v16; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v18; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const wchar_t *v20; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, const wchar_t *);
  v5 = (__int64)v20;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v20 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v20[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = v20;
    if ( !v20 )
      v11 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9161076fa35a349775df2bff3996d00f_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v11,
      2 * v10,
      va3,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(
           a1,
           3LL,
           20LL,
           &WPP_9161076fa35a349775df2bff3996d00f_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
