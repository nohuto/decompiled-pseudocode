/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x1C0004ED8
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0086AD0 (ACPIBusIrpQueryId.c)
 *     ACPIDockIrpQueryID @ 0x1C009E890 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdi
  __int64 v14; // rsi
  const char *v15; // rbp
  __int64 v16; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v24; // r9
  __int64 v25; // r9
  const char *v26; // r11
  __int64 v27; // r8
  const char *v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rcx
  const char *v31; // rdx
  int v32; // [rsp+20h] [rbp-A8h]

  v12 = (__int64)a12;
  v14 = (__int64)a11;
  v15 = a7;
  v16 = -1LL;
  v19 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a12[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a12;
    if ( !a12 )
      v26 = "NULL";
    if ( a11 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a11[v27] );
      v19 = v27 + 1;
    }
    v28 = a11;
    if ( !a11 )
      v28 = "NULL";
    if ( a7 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( a7[v29] );
      v30 = v29 + 1;
    }
    else
    {
      v30 = 5LL;
    }
    v31 = a7;
    if ( !a7 )
      v31 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v31,
      v30,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v28,
      v19,
      v26,
      v25,
      0LL);
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v14 + v21) );
  }
  if ( v15 )
  {
    do
      ++v16;
    while ( v15[v16] );
    v22 = v16 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v32) = a4;
  return WppAutoLogTrace(a1, a2, 5LL, a5, v32, &a6, 8LL, v15, v22, &a8, 4LL, &a9, 4LL, &a10);
}
