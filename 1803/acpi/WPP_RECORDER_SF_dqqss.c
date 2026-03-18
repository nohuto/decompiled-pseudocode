/*
 * XREFs of WPP_RECORDER_SF_Dqqss @ 0x1C002A6F8
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0029EF4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+20h] [rbp-78h]

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
      &WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
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
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v22 = v11 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v24) = 17;
  return WppAutoLogTrace(
           a1,
           2LL,
           6LL,
           &WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v12,
           v22,
           v10,
           v21,
           0LL);
}
