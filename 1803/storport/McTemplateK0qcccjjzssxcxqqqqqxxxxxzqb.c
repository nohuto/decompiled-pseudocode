/*
 * XREFs of McTemplateK0qcccjjzssxcxqqqqqxxxxxzqb @ 0x1C000514C
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C0005D40 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0005478 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qcccjjzssxcxqqqqqxxxxxzqb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        int a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        const wchar_t *a26,
        int a27,
        __int64 a28)
{
  __int64 v28; // rcx
  int v29; // r9d
  const wchar_t *v30; // rax
  __int64 v31; // rdx
  int v32; // r8d
  const char *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  const char *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  const wchar_t *v39; // rax
  bool v40; // zf
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v43[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  char *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  char *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  char *v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  const wchar_t *v56; // [rsp+B8h] [rbp-50h]
  int v57; // [rsp+C0h] [rbp-48h]
  int v58; // [rsp+C4h] [rbp-44h]
  const char *v59; // [rsp+C8h] [rbp-40h]
  int v60; // [rsp+D0h] [rbp-38h]
  int v61; // [rsp+D4h] [rbp-34h]
  const char *v62; // [rsp+D8h] [rbp-30h]
  int v63; // [rsp+E0h] [rbp-28h]
  int v64; // [rsp+E4h] [rbp-24h]
  __int64 *v65; // [rsp+E8h] [rbp-20h]
  __int64 v66; // [rsp+F0h] [rbp-18h]
  char *v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h]
  char *v69; // [rsp+108h] [rbp+0h]
  __int64 v70; // [rsp+110h] [rbp+8h]
  char *v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+120h] [rbp+18h]
  char *v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  char *v75; // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h]
  char *v77; // [rsp+148h] [rbp+40h]
  __int64 v78; // [rsp+150h] [rbp+48h]
  char *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  char *v81; // [rsp+168h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+68h]
  char *v83; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  char *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  char *v87; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  char *v89; // [rsp+1A8h] [rbp+A0h]
  __int64 v90; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v91; // [rsp+1B8h] [rbp+B0h]
  int v92; // [rsp+1C0h] [rbp+B8h]
  int v93; // [rsp+1C4h] [rbp+BCh]
  int *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  __int64 v96; // [rsp+1D8h] [rbp+D0h]
  int v97; // [rsp+1E0h] [rbp+D8h]
  int v98; // [rsp+1E4h] [rbp+DCh]
  int v99; // [rsp+220h] [rbp+118h] BYREF

  v99 = a4;
  v42 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v28 = -1LL;
  v45 = 4LL;
  v44 = &v99;
  v46 = &a5;
  v47 = 1LL;
  v48 = &a6;
  v29 = 10;
  v49 = 1LL;
  v50 = &a7;
  v52 = a8;
  v54 = a9;
  v30 = a10;
  v51 = 1LL;
  v53 = 16LL;
  v55 = 16LL;
  if ( a10 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a10[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v33 = a11;
  v57 = v32;
  v58 = 0;
  if ( !a10 )
    v30 = L"NULL";
  v56 = v30;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v60 = v35;
  v61 = 0;
  if ( !a11 )
    v33 = "NULL";
  v59 = v33;
  v36 = a12;
  if ( a12 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a12[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v63 = v38;
  v64 = 0;
  v65 = &v42;
  if ( !a12 )
    v36 = "NULL";
  v62 = v36;
  v67 = &a14;
  v69 = &a15;
  v71 = &a16;
  v73 = &a17;
  v75 = &a18;
  v77 = &a19;
  v79 = &a20;
  v81 = &a21;
  v83 = &a22;
  v85 = &a23;
  v87 = &a24;
  v89 = &a25;
  v39 = a26;
  v66 = 8LL;
  v68 = 1LL;
  v70 = 8LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 8LL;
  v84 = 8LL;
  v86 = 8LL;
  v88 = 8LL;
  v90 = 8LL;
  v40 = a26 == 0LL;
  if ( a26 )
  {
    do
      ++v28;
    while ( a26[v28] );
    v29 = 2 * v28 + 2;
    v40 = a26 == 0LL;
  }
  if ( v40 )
    v39 = L"NULL";
  v92 = v29;
  v91 = v39;
  v93 = 0;
  v94 = &a27;
  v96 = a28;
  v97 = a27;
  v95 = 4LL;
  v98 = 0;
  return McGenEventWriteKM(v28, &EventUnitPerformance, 0LL, 26LL, v43);
}
