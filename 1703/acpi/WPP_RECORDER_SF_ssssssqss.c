/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C000D7CC
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008F080 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // r8
  const char *v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r10
  const char *v19; // rbp
  __int64 v20; // r9
  const char *v21; // r14
  bool v22; // zf
  __int64 v23; // r8
  const char *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  const char *v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rcx
  const char *v31; // r13
  bool v32; // zf
  __int64 v33; // rax
  const char *v34; // rdi
  __int64 v35; // rbx
  __int64 v37; // r14
  __int64 v38; // r14
  const char *v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // rbp
  const char *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  const char *v45; // rax
  __int64 v46; // r11
  __int64 v47; // r11
  const char *v48; // r13
  __int64 v49; // r10
  __int64 v50; // r10
  const char *v51; // r12
  __int64 v52; // r9
  __int64 v53; // r9
  const char *v54; // r15
  __int64 v55; // r8
  const char *v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rcx
  const char *v59; // rdx
  int v60; // [rsp+20h] [rbp-E8h]
  const char *v61; // [rsp+C0h] [rbp-48h]
  const char *v63; // [rsp+130h] [rbp+28h]

  v14 = -1LL;
  v15 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( a14[v37] );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 5LL;
    }
    v39 = a14;
    if ( !a14 )
      v39 = "NULL";
    v63 = v39;
    if ( a13 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( a13[v40] );
      v41 = v40 + 1;
    }
    else
    {
      v41 = 5LL;
    }
    v42 = a13;
    if ( !a13 )
      v42 = "NULL";
    v61 = v42;
    if ( a11 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( a11[v43] );
      v44 = v43 + 1;
    }
    else
    {
      v44 = 5LL;
    }
    v45 = a11;
    if ( !a11 )
      v45 = "NULL";
    if ( a10 )
    {
      v46 = -1LL;
      do
        ++v46;
      while ( a10[v46] );
      v47 = v46 + 1;
    }
    else
    {
      v47 = 5LL;
    }
    v48 = a10;
    if ( !a10 )
      v48 = "NULL";
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
    v51 = a9;
    if ( !a9 )
      v51 = "NULL";
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
    v54 = a8;
    if ( !a8 )
      v54 = "NULL";
    if ( a7 )
    {
      v55 = -1LL;
      do
        ++v55;
      while ( a7[v55] );
      v15 = v55 + 1;
    }
    v56 = a7;
    if ( !a7 )
      v56 = "NULL";
    if ( a6 )
    {
      v57 = -1LL;
      do
        ++v57;
      while ( a6[v57] );
      v58 = v57 + 1;
    }
    else
    {
      v58 = 5LL;
    }
    v59 = a6;
    if ( !a6 )
      v59 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      22LL,
      v59,
      v58,
      v56,
      v15,
      v54,
      v53,
      v51,
      v50,
      v48,
      v47,
      v45,
      v44,
      &a12,
      8LL,
      v61,
      v41,
      v63,
      v38,
      0LL);
    v15 = 5LL;
  }
  v16 = a14;
  if ( a14 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a14[v17] );
  }
  if ( !a14 )
    v16 = "NULL";
  a14 = v16;
  if ( a13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a13[v18] );
  }
  v19 = a11;
  if ( a11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a11[v20] );
  }
  v21 = a10;
  if ( !a11 )
    v19 = "NULL";
  v22 = a10 == 0LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v15 = v23 + 1;
    v22 = a10 == 0LL;
  }
  if ( v22 )
    v21 = "NULL";
  v24 = a9;
  if ( a9 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a9[v25] );
    v26 = v25 + 1;
    v27 = 5LL;
  }
  else
  {
    v27 = 5LL;
    v26 = 5LL;
  }
  v28 = a8;
  if ( !a9 )
    v24 = "NULL";
  if ( a8 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a8[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  v31 = a7;
  if ( !a8 )
    v28 = "NULL";
  v32 = a7 == 0LL;
  if ( a7 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a7[v33] );
    v27 = v33 + 1;
    v32 = a7 == 0LL;
  }
  if ( v32 )
    v31 = "NULL";
  v34 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v35 = v14 + 1;
  }
  else
  {
    v35 = 5LL;
  }
  if ( !a6 )
    v34 = "NULL";
  LOWORD(v60) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
           v60,
           v34,
           v35,
           v31,
           v27,
           v28,
           v30,
           v24,
           v26,
           v21,
           v15,
           v19);
}
