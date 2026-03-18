/*
 * XREFs of WPP_RECORDER_SF_qDss @ 0x1C0063240
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  const char *v11; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  __int64 v21; // [rsp+78h] [rbp-10h]

  v9 = a9;
  v10 = -1LL;
  v11 = a8;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
    }
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a8[v14] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_38b23b794030396be0665cea4f2c9cee_Traceguids,
      12LL,
      &a6,
      8LL,
      &a7);
  }
  if ( v9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v9[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  if ( v11 )
  {
    do
      ++v10;
    while ( v11[v10] );
    v17 = v10 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v19) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           20LL,
           &WPP_38b23b794030396be0665cea4f2c9cee_Traceguids,
           v19,
           &a6,
           8LL,
           &a7,
           4LL,
           v11,
           v17,
           v9,
           v16,
           0LL,
           v20,
           v21);
}
