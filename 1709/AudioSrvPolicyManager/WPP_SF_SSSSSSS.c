/*
 * XREFs of WPP_SF_SSSSSSS @ 0x180011B38
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014BDC (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_SSSSSSS(
        TRACEHANDLE a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r11
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  const wchar_t *v26; // r12
  const wchar_t *v27; // r14
  __int64 v28; // rbp
  const wchar_t *v29; // rsi
  __int64 v30; // rdi
  const wchar_t *v31; // rbx
  __int64 v32; // r11
  const wchar_t *v33; // r10
  __int64 v34; // r9
  const wchar_t *v35; // r8
  __int64 v36; // rdx
  const wchar_t *v37; // rcx
  __int64 v38; // rax

  v10 = -1LL;
  v12 = 5LL;
  if ( a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a10[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a9[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
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
  if ( a5 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a5[v23] );
    v12 = v23 + 1;
  }
  if ( a4 )
  {
    do
      ++v10;
    while ( a4[v10] );
    v24 = v10 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  v25 = 2 * v14;
  v26 = L"NULL";
  v27 = L"NULL";
  if ( a10 )
    v27 = a10;
  v28 = 2 * v16;
  v29 = L"NULL";
  if ( a9 )
    v29 = a9;
  v30 = 2 * v18;
  v31 = L"NULL";
  if ( a8 )
    v31 = a8;
  v32 = 2 * v20;
  v33 = L"NULL";
  if ( a7 )
    v33 = a7;
  v34 = 2 * v22;
  v35 = L"NULL";
  if ( a6 )
    v35 = a6;
  v36 = 2 * v12;
  v37 = L"NULL";
  if ( a5 )
    v37 = a5;
  v38 = 2 * v24;
  if ( a4 )
    v26 = a4;
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
           0x31u,
           v26,
           v38,
           v37,
           v36,
           v35,
           v34,
           v33,
           v32,
           v31,
           v30,
           v29,
           v28,
           v27,
           v25,
           0LL);
}
