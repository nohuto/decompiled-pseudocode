/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x1C0001920
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0083230 (ACPIBusIrpQueryId.c)
 *     ACPIDockIrpQueryID @ 0x1C009B8A0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  const char *v12; // rdi
  const char *v14; // rsi
  const char *v15; // rbp
  __int64 v16; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // r11
  __int64 v28; // r8
  const char *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rcx
  const char *v32; // rdx
  int v33; // [rsp+20h] [rbp-A8h]

  v12 = a12;
  v14 = a11;
  v15 = a7;
  v16 = -1LL;
  v19 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a12[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a12;
    if ( !a12 )
      v27 = "NULL";
    if ( a11 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a11[v28] );
      v19 = v28 + 1;
    }
    v29 = a11;
    if ( !a11 )
      v29 = "NULL";
    if ( a7 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( a7[v30] );
      v31 = v30 + 1;
    }
    else
    {
      v31 = 5LL;
    }
    v32 = a7;
    if ( !a7 )
      v32 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v32,
      v31,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v29,
      v19,
      v27,
      v26,
      0LL);
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v12[v20] );
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v14[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v15 )
  {
    do
      ++v16;
    while ( v15[v16] );
    v23 = v16 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v33) = a4;
  return WppAutoLogTrace(a1, a2, 5LL, a5, v33, &a6, 8LL, v15, v23, &a8, 4LL, &a9, 4LL, &a10, 8LL, v14, v22, v12);
}
