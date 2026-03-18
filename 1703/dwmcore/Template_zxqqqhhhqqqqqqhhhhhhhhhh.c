/*
 * XREFs of Template_zxqqqhhhqqqqqqhhhhhhhhhh @ 0x180141DB8
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x180027CD8 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zxqqqhhhqqqqqqhhhhhhhhhh(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
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
        char a26)
{
  __int64 v26; // rax
  ULONG v27; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  char *v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  char *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  char *v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  char *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  char *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  char *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  char *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  char *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  char *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  char *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  char *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  char *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h] BYREF

  v76 = a4;
  if ( a3 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a3[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  UserData.Size = v27;
  if ( !a3 )
    a3 = L"NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a3;
  v30 = &v76;
  v31 = 8LL;
  v32 = &a5;
  v33 = 4LL;
  v34 = &a6;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v42 = &a10;
  v44 = &a11;
  v46 = &a12;
  v48 = &a13;
  v50 = &a14;
  v52 = &a15;
  v54 = &a16;
  v56 = &a17;
  v58 = &a18;
  v60 = &a19;
  v62 = &a20;
  v64 = &a21;
  v66 = &a22;
  v68 = &a23;
  v70 = &a24;
  v72 = &a25;
  v74 = &a26;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 2LL;
  v41 = 2LL;
  v43 = 2LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 2LL;
  v59 = 2LL;
  v61 = 2LL;
  v63 = 2LL;
  v65 = 2LL;
  v67 = 2LL;
  v69 = 2LL;
  v71 = 2LL;
  v73 = 2LL;
  v75 = 2LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 0x18u, &UserData);
}
