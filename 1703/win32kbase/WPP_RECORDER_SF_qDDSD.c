/*
 * XREFs of WPP_RECORDER_SF_qdDSD @ 0x1C010DC28
 * Callers:
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const wchar_t *v12; // rdx
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v17; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v19; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const wchar_t *v21; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, const wchar_t *);
  v5 = (__int64)v21;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v21 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v21[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = 2 * v10;
    v12 = v21;
    if ( !v21 )
      v12 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v12,
      v11,
      va3,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(
           a1,
           3LL,
           20LL,
           &WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
