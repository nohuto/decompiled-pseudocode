/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C000B908
 * Callers:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  const wchar_t *v15; // rcx
  int v16; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a8[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a8;
    if ( !a8 )
      v15 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v15,
      2 * v14,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_90e310c6b5353faf2d096768653107e7_Traceguids, v16, &a6, 8LL, &a7);
}
