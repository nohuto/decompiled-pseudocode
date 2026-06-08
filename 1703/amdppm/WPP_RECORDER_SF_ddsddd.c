/*
 * XREFs of WPP_RECORDER_SF_ddsddd @ 0x1C000A38C
 * Callers:
 *     ValidatePssSymmetry @ 0x1C0028C00 (ValidatePssSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddsddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rcx
  const char *v12; // rdx
  int v14; // [rsp+20h] [rbp-88h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a8[v11] );
    }
    v12 = "NULL";
    if ( a8 )
      v12 = a8;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      61LL,
      &a6,
      4LL,
      &a7,
      4LL,
      v12);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v14) = 61;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids, v14, &a6);
}
