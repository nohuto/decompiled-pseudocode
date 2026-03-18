/*
 * XREFs of WPP_RECORDER_SF_DLqss @ 0x1C0057870
 * Callers:
 *     ACPISystemPowerProcessRootMapping @ 0x1C0093378 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a10[v14] );
    }
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
      16LL,
      &a6,
      4LL,
      &a7);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v10[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v18 = v11 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v20) = 16;
  return WppAutoLogTrace(
           a1,
           2LL,
           15LL,
           &WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
           v20,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v18,
           v10,
           v17,
           0LL);
}
