/*
 * XREFs of WPP_RECORDER_SF_DDDDqss @ 0x1C003AD44
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDDDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = a11;
  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a12[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a12;
    if ( !a12 )
      v18 = "NULL";
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v12 + v22) );
  }
  if ( v13 )
  {
    do
      ++v14;
    while ( v13[v14] );
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v24) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v13);
}
