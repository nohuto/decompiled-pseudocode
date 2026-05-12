/*
 * XREFs of Template_qcccjjzssxcqqqqqqqccccccqqxqbqb @ 0x1C0001D98
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C000342C (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjjzssxcqqqqqqqccccccqqxqbqb(
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
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  char *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  char *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  const wchar_t *v57; // [rsp+A8h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-58h]
  int v59; // [rsp+B4h] [rbp-54h]
  const char *v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  const char *v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+D4h] [rbp-34h]
  __int64 *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  char *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  char *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  char *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  char *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  char *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  char *v80; // [rsp+148h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  char *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  char *v84; // [rsp+168h] [rbp+60h]
  __int64 v85; // [rsp+170h] [rbp+68h]
  char *v86; // [rsp+178h] [rbp+70h]
  __int64 v87; // [rsp+180h] [rbp+78h]
  char *v88; // [rsp+188h] [rbp+80h]
  __int64 v89; // [rsp+190h] [rbp+88h]
  char *v90; // [rsp+198h] [rbp+90h]
  __int64 v91; // [rsp+1A0h] [rbp+98h]
  char *v92; // [rsp+1A8h] [rbp+A0h]
  __int64 v93; // [rsp+1B0h] [rbp+A8h]
  char *v94; // [rsp+1B8h] [rbp+B0h]
  __int64 v95; // [rsp+1C0h] [rbp+B8h]
  char *v96; // [rsp+1C8h] [rbp+C0h]
  __int64 v97; // [rsp+1D0h] [rbp+C8h]
  char *v98; // [rsp+1D8h] [rbp+D0h]
  __int64 v99; // [rsp+1E0h] [rbp+D8h]
  char *v100; // [rsp+1E8h] [rbp+E0h]
  __int64 v101; // [rsp+1F0h] [rbp+E8h]
  int *v102; // [rsp+1F8h] [rbp+F0h]
  __int64 v103; // [rsp+200h] [rbp+F8h]
  __int64 v104; // [rsp+208h] [rbp+100h]
  int v105; // [rsp+210h] [rbp+108h]
  int v106; // [rsp+214h] [rbp+10Ch]
  int *v107; // [rsp+218h] [rbp+110h]
  __int64 v108; // [rsp+220h] [rbp+118h]
  __int64 v109; // [rsp+228h] [rbp+120h]
  int v110; // [rsp+230h] [rbp+128h]
  int v111; // [rsp+234h] [rbp+12Ch]
  int v112; // [rsp+280h] [rbp+178h] BYREF

  v112 = a4;
  v34 = a10;
  v45 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
  UserData.Ptr = (unsigned __int64)&v112;
  LOBYTE(v44) = 3;
  v47 = &a5;
  v49 = &a6;
  v51 = &a7;
  v53 = a8;
  v55 = a9;
  v35 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 16LL;
  v56 = 16LL;
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
  v58 = v37;
  v59 = 0;
  if ( !a10 )
    v34 = L"NULL";
  v38 = a11;
  v57 = v34;
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
  v61 = v40;
  v41 = a12;
  if ( !a11 )
    v38 = "NULL";
  v62 = 0;
  v60 = v38;
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
  v64 = v42;
  v65 = 0;
  v66 = &v45;
  v106 = 0;
  v68 = &v44;
  if ( !a12 )
    v41 = "NULL";
  v63 = v41;
  v70 = &a15;
  v111 = 0;
  v72 = &a16;
  v67 = 8LL;
  v74 = &a17;
  v69 = 1LL;
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
  v104 = a32;
  v105 = a31;
  v107 = &a33;
  v109 = a34;
  v110 = a33;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 1LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 1LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 8LL;
  v103 = 4LL;
  v108 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitErrorData, 0LL, 0x1Fu, &UserData);
}
