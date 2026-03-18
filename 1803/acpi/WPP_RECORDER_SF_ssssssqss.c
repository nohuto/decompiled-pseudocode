/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C0015B9C
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        const char *a13,
        const char *a14)
{
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbp
  const char *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rsi
  const char *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  const char *v23; // rax
  __int64 v24; // r11
  __int64 v25; // r11
  const char *v26; // r13
  __int64 v27; // r10
  __int64 v28; // r10
  const char *v29; // r12
  __int64 v30; // r9
  __int64 v31; // r9
  const char *v32; // r15
  __int64 v33; // r8
  __int64 v34; // r8
  const char *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  const char *v38; // rcx
  const char *v39; // rdi
  __int64 v40; // r11
  __int64 v41; // r10
  const char *v42; // rbp
  __int64 v43; // r9
  const char *v44; // r14
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rax
  const char *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rdx
  const char *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rcx
  const char *v54; // r13
  bool v55; // zf
  __int64 v56; // rax
  const char *v57; // rdi
  __int64 v58; // rbx
  int v60; // [rsp+20h] [rbp-E8h]
  const char *v61; // [rsp+C0h] [rbp-48h]
  const char *v63; // [rsp+130h] [rbp+28h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a14[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a14;
    if ( !a14 )
      v17 = "NULL";
    v63 = v17;
    if ( a13 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a13[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a13;
    if ( !a13 )
      v20 = "NULL";
    v61 = v20;
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a11;
    if ( !a11 )
      v23 = "NULL";
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a10;
    if ( !a10 )
      v26 = "NULL";
    if ( a9 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a9[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = a9;
    if ( !a9 )
      v29 = "NULL";
    if ( a8 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( a8[v30] );
      v31 = v30 + 1;
    }
    else
    {
      v31 = 5LL;
    }
    v32 = a8;
    if ( !a8 )
      v32 = "NULL";
    if ( a7 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( a7[v33] );
      v34 = v33 + 1;
    }
    else
    {
      v34 = 5LL;
    }
    v35 = a7;
    if ( !a7 )
      v35 = "NULL";
    if ( a6 )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( a6[v36] );
      v37 = v36 + 1;
    }
    else
    {
      v37 = 5LL;
    }
    v38 = a6;
    if ( !a6 )
      v38 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      22LL,
      v38,
      v37,
      v35,
      v34,
      v32,
      v31,
      v29,
      v28,
      v26,
      v25,
      v23,
      v22,
      &a12,
      8LL,
      v61,
      v19,
      v63,
      v16,
      0LL);
  }
  v39 = a14;
  if ( a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a14[v40] );
  }
  if ( !a14 )
    v39 = "NULL";
  a14 = v39;
  if ( a13 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a13[v41] );
  }
  v42 = a11;
  if ( a11 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a11[v43] );
  }
  v44 = a10;
  if ( !a11 )
    v42 = "NULL";
  if ( a10 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a10[v45] );
    v46 = v45 + 1;
    v47 = 5LL;
  }
  else
  {
    v47 = 5LL;
    v46 = 5LL;
  }
  if ( !a10 )
    v44 = "NULL";
  v48 = a9;
  if ( a9 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( a9[v49] );
    v50 = v49 + 1;
  }
  else
  {
    v50 = 5LL;
  }
  v51 = a8;
  if ( !a9 )
    v48 = "NULL";
  if ( a8 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a8[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5LL;
  }
  v54 = a7;
  if ( !a8 )
    v51 = "NULL";
  v55 = a7 == 0LL;
  if ( a7 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( a7[v56] );
    v47 = v56 + 1;
    v55 = a7 == 0LL;
  }
  if ( v55 )
    v54 = "NULL";
  v57 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v58 = v14 + 1;
  }
  else
  {
    v58 = 5LL;
  }
  if ( !a6 )
    v57 = "NULL";
  LOWORD(v60) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
           v60,
           v57,
           v58,
           v54,
           v47,
           v51,
           v53,
           v48,
           v50,
           v44,
           v46,
           v42);
}
