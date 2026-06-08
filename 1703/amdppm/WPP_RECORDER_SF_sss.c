/*
 * XREFs of WPP_RECORDER_SF_SSS @ 0x1C0009C44
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // r15
  __int64 v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // r8
  const wchar_t *v16; // r11
  const wchar_t *v17; // r9
  const wchar_t *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r10
  int v22; // [rsp+20h] [rbp-68h]

  v8 = L"NULL";
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
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = L"NULL";
    if ( a8 )
      v16 = a8;
    v17 = L"NULL";
    v18 = L"NULL";
    if ( a7 )
      v17 = a7;
    if ( a6 )
      v18 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      91LL,
      v18,
      2 * v15,
      v17,
      2 * v13,
      v16);
  }
  if ( a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a8[v19] );
  }
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( a6 )
    v8 = a6;
  LOWORD(v22) = 91;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids, v22, v8);
}
