/*
 * XREFs of WPP_RECORDER_SF_qsqss @ 0x1C002F6A0
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  int v25; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
    }
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
    }
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
    }
    v18 = a7;
    if ( !a7 )
      v18 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      26LL,
      &a6,
      8LL,
      v18);
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v12[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
    v23 = v11 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  LOWORD(v25) = 26;
  return WppAutoLogTrace(
           a1,
           4LL,
           17LL,
           &WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
           v25,
           &a6,
           8LL,
           v14,
           v23,
           &a8,
           8LL,
           v12,
           v22,
           v10,
           v20,
           0LL);
}
