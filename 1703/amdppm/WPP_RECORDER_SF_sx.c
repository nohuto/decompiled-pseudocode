/*
 * XREFs of WPP_RECORDER_SF_sx @ 0x1C0002F3C
 * Callers:
 *     DisplayGenAddr @ 0x1C00043A0 (DisplayGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const char *v11; // rdx
  int v13; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = "NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = "NULL";
    if ( a6 )
      v11 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      155LL,
      v11,
      v10,
      va,
      8LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v13) = 155;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids, v13, v6);
}
