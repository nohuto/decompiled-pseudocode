/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C000D090
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000B170 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C0043E80 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C0044610 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 v13; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = a9;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
    }
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      a4,
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
    v10 = "NULL";
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( v11[v13] );
    v18 = v13 + 1;
  }
  else
  {
    v18 = 5LL;
    v11 = "NULL";
  }
  LOWORD(v22) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           6LL,
           &WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
           v22,
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
