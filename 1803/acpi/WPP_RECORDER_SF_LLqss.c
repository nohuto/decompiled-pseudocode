/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C00126CC
 * Callers:
 *     ACPIBuildProcessDeviceFailure @ 0x1C000C600 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C00107B0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  int v22; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
    }
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  if ( v10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v10[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v20 = v11 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v22) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           6LL,
           &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
           v22,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v20,
           v10,
           v19,
           0LL);
}
