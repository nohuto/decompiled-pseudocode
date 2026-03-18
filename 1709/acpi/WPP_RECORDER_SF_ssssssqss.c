/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C0005060
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  const char *v15; // rdi
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r9
  const char *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rax
  const char *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rcx
  const char *v28; // r13
  bool v29; // zf
  __int64 v30; // rax
  const char *v31; // rdi
  __int64 v32; // rbx
  __int64 v34; // rbp
  __int64 v35; // rbp
  const char *v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rsi
  const char *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rdi
  const char *v42; // rax
  __int64 v43; // r11
  __int64 v44; // r11
  const char *v45; // r13
  __int64 v46; // r10
  __int64 v47; // r10
  const char *v48; // r12
  __int64 v49; // r9
  __int64 v50; // r9
  const char *v51; // r15
  __int64 v52; // r8
  __int64 v53; // r8
  const char *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  const char *v57; // rcx
  int v58; // [rsp+20h] [rbp-E8h]
  const char *v59; // [rsp+C0h] [rbp-48h]
  const char *v61; // [rsp+130h] [rbp+28h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( a14[v34] );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 5LL;
    }
    v36 = a14;
    if ( !a14 )
      v36 = "NULL";
    v61 = v36;
    if ( a13 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( a13[v37] );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 5LL;
    }
    v39 = a13;
    if ( !a13 )
      v39 = "NULL";
    v59 = v39;
    if ( a11 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( a11[v40] );
      v41 = v40 + 1;
    }
    else
    {
      v41 = 5LL;
    }
    v42 = a11;
    if ( !a11 )
      v42 = "NULL";
    if ( a10 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( a10[v43] );
      v44 = v43 + 1;
    }
    else
    {
      v44 = 5LL;
    }
    v45 = a10;
    if ( !a10 )
      v45 = "NULL";
    if ( a9 )
    {
      v46 = -1LL;
      do
        ++v46;
      while ( a9[v46] );
      v47 = v46 + 1;
    }
    else
    {
      v47 = 5LL;
    }
    v48 = a9;
    if ( !a9 )
      v48 = "NULL";
    if ( a8 )
    {
      v49 = -1LL;
      do
        ++v49;
      while ( a8[v49] );
      v50 = v49 + 1;
    }
    else
    {
      v50 = 5LL;
    }
    v51 = a8;
    if ( !a8 )
      v51 = "NULL";
    if ( a7 )
    {
      v52 = -1LL;
      do
        ++v52;
      while ( a7[v52] );
      v53 = v52 + 1;
    }
    else
    {
      v53 = 5LL;
    }
    v54 = a7;
    if ( !a7 )
      v54 = "NULL";
    if ( a6 )
    {
      v55 = -1LL;
      do
        ++v55;
      while ( a6[v55] );
      v56 = v55 + 1;
    }
    else
    {
      v56 = 5LL;
    }
    v57 = a6;
    if ( !a6 )
      v57 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      22LL,
      v57,
      v56,
      v54,
      v53,
      v51,
      v50,
      v48,
      v47,
      v45,
      v44,
      v42,
      v41,
      &a12,
      8LL,
      v59,
      v38,
      v61,
      v35,
      0LL);
  }
  v15 = a14;
  if ( a14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a14[v16] );
  }
  if ( !a14 )
    v15 = "NULL";
  a14 = v15;
  if ( a13 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a13[v17] );
  }
  if ( a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a11[v18] );
  }
  v19 = a10;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = 5LL;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !a10 )
    v19 = "NULL";
  v22 = a9;
  if ( a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a9[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  v25 = a8;
  if ( !a9 )
    v22 = "NULL";
  if ( a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a8[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  v28 = a7;
  if ( !a8 )
    v25 = "NULL";
  v29 = a7 == 0LL;
  if ( a7 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a7[v30] );
    v21 = v30 + 1;
    v29 = a7 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v31 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v32 = v14 + 1;
  }
  else
  {
    v32 = 5LL;
  }
  if ( !a6 )
    v31 = "NULL";
  LOWORD(v58) = 22;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
           v58,
           v31,
           v32,
           v28,
           v21,
           v25,
           v27,
           v22,
           v24,
           v19);
}
