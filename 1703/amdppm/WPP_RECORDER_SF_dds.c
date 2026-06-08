/*
 * XREFs of WPP_RECORDER_SF_dds @ 0x1C000A080
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C0028640 (ValidatePerfDomainSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0028CE4 (ValidatePctPtcSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const char *a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rcx
  const char *v13; // rdx
  int v15; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    v13 = "NULL";
    if ( a8 )
      v13 = a8;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      v13);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids, v15, &a6);
}
