/*
 * XREFs of WPP_RECORDER_SF_qqDqss @ 0x1C00214D8
 * Callers:
 *     ACPIDeferredWakeCompletion @ 0x1C0020E60 (ACPIDeferredWakeCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a11[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a11;
    if ( !a11 )
      v17 = "NULL";
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
      19LL,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v11[v21] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v22 = v12 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v24) = 19;
  return WppAutoLogTrace(
           a1,
           2LL,
           10LL,
           &WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
           v24,
           &a6,
           8LL,
           &a7,
           8LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v13,
           v22,
           v11);
}
