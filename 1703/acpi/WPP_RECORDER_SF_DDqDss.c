/*
 * XREFs of WPP_RECORDER_SF_DDqDss @ 0x1C0005CFC
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDqDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rax
  int v25; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = a10;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
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
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_38b23b794030396be0665cea4f2c9cee_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      v24,
      v23,
      v21,
      v20,
      0LL);
  }
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
    v17 = v13 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v25) = 11;
  return WppAutoLogTrace(
           a1,
           4LL,
           20LL,
           &WPP_38b23b794030396be0665cea4f2c9cee_Traceguids,
           v25,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           &a9,
           4LL,
           v12,
           v17,
           v11,
           v16,
           0LL);
}
