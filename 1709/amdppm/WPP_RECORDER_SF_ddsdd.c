/*
 * XREFs of WPP_RECORDER_SF_ddsdd @ 0x1C000A67C
 * Callers:
 *     ValidatePssSymmetry @ 0x1C002BC9C (ValidatePssSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddsdd(
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
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-78h]

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
      &WPP_43c87aadc204398ca111f18064ed4edf_Traceguids,
      60LL,
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
  LOWORD(v14) = 60;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_43c87aadc204398ca111f18064ed4edf_Traceguids, v14, &a6);
}
