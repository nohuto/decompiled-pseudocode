/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C000B824
 * Callers:
 *     AcpiParseCore @ 0x1C00225A4 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        const char *a7)
{
  __int64 v7; // rbx
  const char *v8; // rsi
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  const char *v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-48h]

  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
    }
    v11 = a7;
    if ( !a7 )
      v11 = "NULL";
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      68LL,
      v14,
      v13,
      v11);
  }
  if ( a7 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a7[v15] );
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v17) = 68;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids, v17, v8);
}
