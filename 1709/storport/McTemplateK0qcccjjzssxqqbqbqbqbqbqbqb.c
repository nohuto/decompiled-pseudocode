/*
 * XREFs of McTemplateK0qcccjjzssxqqbqbqbqbqbqbqb @ 0x1C0042E4C
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0003DBC (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qcccjjzssxqqbqbqbqbqbqbqb(
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
  void *SecurityDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+40h] [rbp-C0h] BYREF
  int *v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  char *v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  char *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  char *v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  const wchar_t *v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+BCh] [rbp-44h]
  const char *v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  const char *v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  void **p_SecurityDescriptor; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  int *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+11Ch] [rbp+1Ch]
  int *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+138h] [rbp+38h]
  int v74; // [rsp+13Ch] [rbp+3Ch]
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  __int64 v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+15Ch] [rbp+5Ch]
  int *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  __int64 v82; // [rsp+170h] [rbp+70h]
  int v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+17Ch] [rbp+7Ch]
  int *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+198h] [rbp+98h]
  int v89; // [rsp+19Ch] [rbp+9Ch]
  int *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 v92; // [rsp+1B0h] [rbp+B0h]
  int v93; // [rsp+1B8h] [rbp+B8h]
  int v94; // [rsp+1BCh] [rbp+BCh]
  int *v95; // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1C8h] [rbp+C8h]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  int v98; // [rsp+1D8h] [rbp+D8h]
  int v99; // [rsp+1DCh] [rbp+DCh]
  int v100; // [rsp+218h] [rbp+118h] BYREF

  v100 = a4;
  v28 = a10;
  SecurityDescriptor = WPP_MAIN_CB.SecurityDescriptor;
  v40 = &v100;
  v42 = &a5;
  v41 = 4LL;
  v44 = &a6;
  v46 = &a7;
  v48 = a8;
  v50 = a9;
  v29 = -1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  v51 = 16LL;
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
  v53 = v31;
  v54 = 0;
  if ( !a10 )
    v28 = L"NULL";
  v32 = a11;
  v52 = v28;
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
  v56 = v34;
  v35 = a12;
  if ( !a11 )
    v32 = "NULL";
  v57 = 0;
  v55 = v32;
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
  v59 = v36;
  v60 = 0;
  p_SecurityDescriptor = &SecurityDescriptor;
  v69 = 0;
  v63 = &a14;
  if ( !a12 )
    v35 = "NULL";
  v74 = 0;
  v65 = &a15;
  v67 = a16;
  v68 = a15;
  v70 = &a17;
  v72 = a18;
  v73 = a17;
  v75 = &a19;
  v77 = a20;
  v78 = a19;
  v80 = &a21;
  v82 = a22;
  v83 = a21;
  v85 = &a23;
  v87 = a24;
  v88 = a23;
  v90 = &a25;
  v92 = a26;
  v93 = a25;
  v95 = &a27;
  v97 = a28;
  v98 = a27;
  v79 = 0;
  v84 = 0;
  v89 = 0;
  v94 = 0;
  v99 = 0;
  v58 = v35;
  v62 = 8LL;
  v64 = 4LL;
  v66 = 4LL;
  v71 = 4LL;
  v76 = 4LL;
  v81 = 4LL;
  v86 = 4LL;
  v91 = 4LL;
  v96 = 4LL;
  return McGenEventWriteKM((__int64)v35, &EventUnitDeviceStatisticsLogs, 0LL, 0x1Au, &v39);
}
