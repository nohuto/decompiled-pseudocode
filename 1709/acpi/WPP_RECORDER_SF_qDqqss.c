/*
 * XREFs of WPP_RECORDER_SF_qDqqss @ 0x1C004A350
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x1C0049DB0 (ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDqqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_865309cb09b9397d2632e54924735df7_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v11[v22] );
  }
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v24) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_865309cb09b9397d2632e54924735df7_Traceguids,
           v24,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           8LL,
           &a9,
           8LL,
           v13);
}
