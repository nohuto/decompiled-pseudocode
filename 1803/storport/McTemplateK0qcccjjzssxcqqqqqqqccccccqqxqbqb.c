/*
 * XREFs of McTemplateK0qcccjjzssxcqqqqqqqccccccqqxqbqb @ 0x1C00049C0
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0005978 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0005478 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qcccjjzssxcqqqqqqqccccccqqxqbqb(
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
        int a14,
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
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        int a31,
        __int64 a32,
        int a33,
        __int64 a34)
{
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // r8d
  const char *v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  const char *v41; // rcx
  int v42; // eax
  char v44; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v46[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  char *v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  char *v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  const wchar_t *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  const char *v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+CCh] [rbp-34h]
  const char *v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  __int64 *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  char *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  char *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  char *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  char *v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  char *v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  char *v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  char *v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  char *v84; // [rsp+160h] [rbp+60h]
  __int64 v85; // [rsp+168h] [rbp+68h]
  char *v86; // [rsp+170h] [rbp+70h]
  __int64 v87; // [rsp+178h] [rbp+78h]
  char *v88; // [rsp+180h] [rbp+80h]
  __int64 v89; // [rsp+188h] [rbp+88h]
  char *v90; // [rsp+190h] [rbp+90h]
  __int64 v91; // [rsp+198h] [rbp+98h]
  char *v92; // [rsp+1A0h] [rbp+A0h]
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  char *v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B8h] [rbp+B8h]
  char *v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h]
  char *v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  char *v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]
  char *v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  int *v104; // [rsp+200h] [rbp+100h]
  __int64 v105; // [rsp+208h] [rbp+108h]
  __int64 v106; // [rsp+210h] [rbp+110h]
  int v107; // [rsp+218h] [rbp+118h]
  int v108; // [rsp+21Ch] [rbp+11Ch]
  int *v109; // [rsp+220h] [rbp+120h]
  __int64 v110; // [rsp+228h] [rbp+128h]
  __int64 v111; // [rsp+230h] [rbp+130h]
  int v112; // [rsp+238h] [rbp+138h]
  int v113; // [rsp+23Ch] [rbp+13Ch]
  int v114; // [rsp+278h] [rbp+178h] BYREF

  v114 = a4;
  v34 = a10;
  v45 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v47 = &v114;
  v49 = &a5;
  v44 = 3;
  v51 = &a6;
  v53 = &a7;
  v55 = a8;
  v57 = a9;
  v35 = -1LL;
  v48 = 4LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 16LL;
  v58 = 16LL;
  if ( a10 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a10[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v60 = v37;
  v61 = 0;
  if ( !a10 )
    v34 = L"NULL";
  v38 = a11;
  v59 = v34;
  if ( a11 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a11[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v63 = v40;
  v41 = a12;
  if ( !a11 )
    v38 = "NULL";
  v64 = 0;
  v62 = v38;
  if ( a12 )
  {
    do
      ++v35;
    while ( a12[v35] );
    v42 = v35 + 1;
  }
  else
  {
    v42 = 5;
  }
  v66 = v42;
  v67 = 0;
  v68 = &v45;
  v108 = 0;
  v70 = &v44;
  if ( !a12 )
    v41 = "NULL";
  v113 = 0;
  v72 = &a15;
  v65 = v41;
  v74 = &a16;
  v69 = 8LL;
  v76 = &a17;
  v78 = &a18;
  v80 = &a19;
  v82 = &a20;
  v84 = &a21;
  v86 = &a22;
  v88 = &a23;
  v90 = &a24;
  v92 = &a25;
  v94 = &a26;
  v96 = &a27;
  v98 = &a28;
  v100 = &a29;
  v102 = &a30;
  v104 = &a31;
  v106 = a32;
  v107 = a31;
  v109 = &a33;
  v111 = a34;
  v112 = a33;
  v71 = 1LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 1LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 1LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 8LL;
  v105 = 4LL;
  v110 = 4LL;
  return McGenEventWriteKM(v41, &EventUnitErrorData, 0LL, 32LL, v46);
}
