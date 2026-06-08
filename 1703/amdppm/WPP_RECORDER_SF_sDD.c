/*
 * XREFs of WPP_RECORDER_SF_sDD @ 0x1C000A67C
 * Callers:
 *     ValidatePssCore @ 0x1C00282BC (ValidatePssCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const char *v11; // rdx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v14 = va_arg(va1, _QWORD);
  v6 = "NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
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
      &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      42LL,
      v11,
      v10,
      (__int64 *)va,
      4LL,
      va1);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v13) = 42;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids, v13, v6);
}
