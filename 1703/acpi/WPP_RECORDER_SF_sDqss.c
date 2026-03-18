/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x1C004E984
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C009F410 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r9
  const char *v17; // r11
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  int v30; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    if ( a6 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a6[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a6;
    if ( !a6 )
      v23 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_0a6d19c5c580341afc0214e049fe0a3d_Traceguids,
      30LL,
      v23,
      v22,
      &a7,
      4LL,
      &a8,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v10[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v28 = v11 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  if ( !a6 )
    v14 = "NULL";
  LOWORD(v30) = 30;
  return WppAutoLogTrace(
           a1,
           4LL,
           12LL,
           &WPP_0a6d19c5c580341afc0214e049fe0a3d_Traceguids,
           v30,
           v14,
           v28,
           &a7,
           4LL,
           &a8,
           8LL,
           v12,
           v27,
           v10,
           v25,
           0LL);
}
