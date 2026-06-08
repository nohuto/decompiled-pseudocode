/*
 * XREFs of WPP_RECORDER_SF_SSS @ 0x1C000B4F0
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002DE9C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        __int64 a8)
{
  const wchar_t *v8; // r15
  __int64 v9; // rdi
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  const wchar_t *v15; // r8
  const wchar_t *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r10
  int v20; // [rsp+20h] [rbp-68h]

  v8 = L"NULL";
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a8 + 2 * v11) );
    }
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = L"NULL";
    v16 = L"NULL";
    if ( a7 )
      v15 = a7;
    if ( a6 )
      v16 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      93LL,
      v16,
      2 * v14,
      v15);
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(a8 + 2 * v17) );
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( a6 )
    v8 = a6;
  LOWORD(v20) = 93;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_885f9b737e553b3972faa1b865470758_Traceguids, v20, v8);
}
