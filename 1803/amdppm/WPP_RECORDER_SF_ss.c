/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0006058
 * Callers:
 *     AcpiParseCore @ 0x1C0025E0C (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
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
  const char *v7; // rbp
  __int64 v8; // rbx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  const char *v13; // rdx
  const char *v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  v7 = "NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
    }
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = "NULL";
    v14 = "NULL";
    if ( a7 )
      v13 = a7;
    if ( a6 )
      v14 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      68LL,
      v14,
      v12,
      v13);
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
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v7 = a6;
  LOWORD(v17) = 68;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids, v17, v7);
}
