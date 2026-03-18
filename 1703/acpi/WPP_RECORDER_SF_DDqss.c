/*
 * XREFs of WPP_RECORDER_SF_ddqss @ 0x1C005575C
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0022DD0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = a9;
  v12 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      &WPP_69b4a5494da73df60ed55ee92cf4d44d_Traceguids,
      12LL,
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
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
    v18 = v12 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v20) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_69b4a5494da73df60ed55ee92cf4d44d_Traceguids,
           v20,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v11,
           v18,
           v10,
           v17,
           0LL);
}
