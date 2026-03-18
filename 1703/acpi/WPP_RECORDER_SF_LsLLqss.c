/*
 * XREFs of WPP_RECORDER_SF_LsLLqss @ 0x1C005A310
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rdi
  __int64 v13; // rbx
  const char *v14; // rsi
  const char *v16; // rbp
  __int64 v17; // r9
  __int64 v18; // r9
  const char *v19; // r11
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rcx
  const char *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v30; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = a11;
  v16 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = "NULL";
    if ( a11 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a11[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a11;
    if ( !a11 )
      v22 = "NULL";
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      21LL,
      &a6,
      4LL,
      v25,
      v24,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(v12 + v26) );
  }
  if ( v14 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v14[v27] );
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v16 )
  {
    do
      ++v13;
    while ( v16[v13] );
    v28 = v13 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  if ( !v16 )
    v16 = "NULL";
  LOWORD(v30) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           17LL,
           &WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
           v30,
           &a6,
           4LL,
           v16,
           v28,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v14);
}
