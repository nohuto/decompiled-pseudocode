/*
 * XREFs of Template_qcccjjzssxqqbqbqbqbqbqbqb @ 0x1C0045DDC
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C000243C (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjjzssxqqbqbqbqbqbqbqb(
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
        __int64 a13,
        char a14,
        int a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24,
        int a25,
        __int64 a26,
        int a27,
        __int64 a28)
{
  const wchar_t *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // r8d
  const char *v32; // rdx
  __int64 v33; // rcx
  int v34; // ecx
  const char *v35; // rcx
  int v36; // eax
  __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  char *v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  char *v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  char *v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  const wchar_t *v50; // [rsp+A8h] [rbp-60h]
  int v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B4h] [rbp-54h]
  const char *v53; // [rsp+B8h] [rbp-50h]
  int v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C4h] [rbp-44h]
  const char *v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+D0h] [rbp-38h]
  int v58; // [rsp+D4h] [rbp-34h]
  __int64 *v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  char *v61; // [rsp+E8h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-18h]
  int *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  __int64 v65; // [rsp+108h] [rbp+0h]
  int v66; // [rsp+110h] [rbp+8h]
  int v67; // [rsp+114h] [rbp+Ch]
  int *v68; // [rsp+118h] [rbp+10h]
  __int64 v69; // [rsp+120h] [rbp+18h]
  __int64 v70; // [rsp+128h] [rbp+20h]
  int v71; // [rsp+130h] [rbp+28h]
  int v72; // [rsp+134h] [rbp+2Ch]
  int *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  __int64 v75; // [rsp+148h] [rbp+40h]
  int v76; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+154h] [rbp+4Ch]
  int *v78; // [rsp+158h] [rbp+50h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  __int64 v80; // [rsp+168h] [rbp+60h]
  int v81; // [rsp+170h] [rbp+68h]
  int v82; // [rsp+174h] [rbp+6Ch]
  int *v83; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  __int64 v85; // [rsp+188h] [rbp+80h]
  int v86; // [rsp+190h] [rbp+88h]
  int v87; // [rsp+194h] [rbp+8Ch]
  int *v88; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  __int64 v90; // [rsp+1A8h] [rbp+A0h]
  int v91; // [rsp+1B0h] [rbp+A8h]
  int v92; // [rsp+1B4h] [rbp+ACh]
  int *v93; // [rsp+1B8h] [rbp+B0h]
  __int64 v94; // [rsp+1C0h] [rbp+B8h]
  __int64 v95; // [rsp+1C8h] [rbp+C0h]
  int v96; // [rsp+1D0h] [rbp+C8h]
  int v97; // [rsp+1D4h] [rbp+CCh]
  int v98; // [rsp+220h] [rbp+118h] BYREF

  v98 = a4;
  v28 = a10;
  v38 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
  UserData.Ptr = (unsigned __int64)&v98;
  *(_QWORD *)&UserData.Size = 4LL;
  v40 = &a5;
  v42 = &a6;
  v44 = &a7;
  v46 = a8;
  v48 = a9;
  v29 = -1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  v49 = 16LL;
  if ( a10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a10[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v51 = v31;
  v52 = 0;
  if ( !a10 )
    v28 = L"NULL";
  v32 = a11;
  v50 = v28;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v54 = v34;
  v35 = a12;
  if ( !a11 )
    v32 = "NULL";
  v55 = 0;
  v53 = v32;
  if ( a12 )
  {
    do
      ++v29;
    while ( a12[v29] );
    v36 = v29 + 1;
  }
  else
  {
    v36 = 5;
  }
  v57 = v36;
  v58 = 0;
  v59 = &v38;
  v67 = 0;
  v61 = &a14;
  if ( !a12 )
    v35 = "NULL";
  v56 = v35;
  v63 = &a15;
  v65 = a16;
  v66 = a15;
  v68 = &a17;
  v70 = a18;
  v71 = a17;
  v73 = &a19;
  v75 = a20;
  v76 = a19;
  v78 = &a21;
  v80 = a22;
  v81 = a21;
  v83 = &a23;
  v85 = a24;
  v86 = a23;
  v88 = &a25;
  v90 = a26;
  v91 = a25;
  v93 = &a27;
  v95 = a28;
  v96 = a27;
  v72 = 0;
  v77 = 0;
  v82 = 0;
  v87 = 0;
  v92 = 0;
  v97 = 0;
  v60 = 8LL;
  v62 = 4LL;
  v64 = 4LL;
  v69 = 4LL;
  v74 = 4LL;
  v79 = 4LL;
  v84 = 4LL;
  v89 = 4LL;
  v94 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitDeviceStatisticsLogs, 0LL, 0x19u, &UserData);
}
