/*
 * XREFs of McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq @ 0x1C0002554
 * Callers:
 *     Etw_ControllerRundown @ 0x1C0001374 (Etw_ControllerRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C000D034 (McGenEventWriteKM.c)
 */

__int64 __fastcall McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        const char *a12,
        const char *a13,
        const char *a14,
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
        char a31,
        char a32,
        char a33,
        char a34)
{
  const char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  const char *v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  const char *v41; // rcx
  int v42; // eax
  _BYTE v44[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  char *v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  char *v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  char *v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  char *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  char *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  char *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  const char *v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+CCh] [rbp-34h]
  const char *v64; // [rsp+D0h] [rbp-30h]
  int v65; // [rsp+D8h] [rbp-28h]
  int v66; // [rsp+DCh] [rbp-24h]
  const char *v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+ECh] [rbp-14h]
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
  char *v104; // [rsp+200h] [rbp+100h]
  __int64 v105; // [rsp+208h] [rbp+108h]
  char *v106; // [rsp+210h] [rbp+110h]
  __int64 v107; // [rsp+218h] [rbp+118h]
  char *v108; // [rsp+220h] [rbp+120h]
  __int64 v109; // [rsp+228h] [rbp+128h]
  __int64 v110; // [rsp+268h] [rbp+168h] BYREF

  v110 = a4;
  v34 = a12;
  v45 = &v110;
  v46 = 8LL;
  v47 = &a5;
  v49 = &a6;
  v51 = &a7;
  v48 = 4LL;
  v53 = &a8;
  v55 = &a9;
  v57 = &a10;
  v59 = &a11;
  v35 = -1LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  if ( a12 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a12[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v62 = v37;
  v63 = 0;
  if ( !a12 )
    v34 = "NULL";
  v61 = v34;
  v38 = a13;
  if ( a13 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a13[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v65 = v40;
  v41 = a14;
  if ( !a13 )
    v38 = "NULL";
  v66 = 0;
  v64 = v38;
  if ( a14 )
  {
    do
      ++v35;
    while ( a14[v35] );
    v42 = v35 + 1;
  }
  else
  {
    v42 = 5;
  }
  v68 = v42;
  v69 = 0;
  v70 = &a15;
  v71 = 8LL;
  v72 = &a16;
  if ( !a14 )
    v41 = "NULL";
  v67 = v41;
  v74 = &a17;
  v73 = 4LL;
  v76 = &a18;
  v78 = &a19;
  v80 = &a20;
  v82 = &a21;
  v84 = &a22;
  v86 = &a23;
  v88 = &a24;
  v90 = &a25;
  v92 = &a26;
  v94 = &a27;
  v96 = &a28;
  v98 = &a29;
  v100 = &a30;
  v102 = &a31;
  v104 = &a32;
  v106 = &a33;
  v108 = &a34;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 1LL;
  v83 = 1LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 8LL;
  v99 = 8LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 4LL;
  return McGenEventWriteKM(v41, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V1, a3, 32LL, v44);
}
