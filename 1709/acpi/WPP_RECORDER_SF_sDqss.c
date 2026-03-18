/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x1C004E384
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A2400 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  int v25; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
    }
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
    }
    if ( a6 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a6[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a6;
    if ( !a6 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a733ebc0c0353af3a414eb8cb5954dc9_Traceguids,
      30LL,
      v19,
      v18,
      &a7);
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v10[v20] );
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v12[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v23 = v11 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !a6 )
    v14 = "NULL";
  LOWORD(v25) = 30;
  return WppAutoLogTrace(
           a1,
           4LL,
           12LL,
           &WPP_a733ebc0c0353af3a414eb8cb5954dc9_Traceguids,
           v25,
           v14,
           v23,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v22,
           v10);
}
