/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C000EC88
 * Callers:
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  const char *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  const char *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  const char *v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a8;
    if ( !a8 )
      v14 = "NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6783757ef24338dfc93e96ba234e56a7_Traceguids,
      10LL,
      v17,
      v16,
      &a7,
      4LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v8[v18] );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v20) = 10;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_6783757ef24338dfc93e96ba234e56a7_Traceguids, v20, v10);
}
