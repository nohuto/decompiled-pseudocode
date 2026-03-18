/*
 * XREFs of WPP_RECORDER_SF_Dqqss @ 0x1C004FCFC
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0028CA4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqqss(
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
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v23; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a10[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a10;
    if ( !a10 )
      v16 = "NULL";
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_cd6be62ef00435e9c3ee0951047d8321_Traceguids,
      17LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v19,
      v18,
      v16,
      v15,
      0LL);
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
    do
      ++v11;
    while ( v12[v11] );
    v21 = v11 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v23) = 17;
  return WppAutoLogTrace(
           a1,
           2LL,
           6LL,
           &WPP_cd6be62ef00435e9c3ee0951047d8321_Traceguids,
           v23,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v12,
           v21,
           v10);
}
