/*
 * XREFs of McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh @ 0x18012DC60
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18012CA5C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh(
        __int64 a1,
        EVENT_DESCRIPTOR *a2,
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
  int v27; // ecx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+3Ch] [rbp-C4h]
  __int64 *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  char *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  char *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  char *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  char *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  char *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  char *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  char *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  char *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  char *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  char *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  char *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  char *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h] BYREF

  v79 = a4;
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
  v31 = v27;
  v32 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v34 = 8LL;
  v30 = a3;
  v33 = &v79;
  v36 = 4LL;
  v35 = &a5;
  v38 = 4LL;
  v37 = &a6;
  v40 = 4LL;
  v39 = &a7;
  v41 = &a8;
  v43 = &a9;
  v45 = &a10;
  v47 = &a11;
  v49 = &a12;
  v51 = &a13;
  v53 = &a14;
  v55 = &a15;
  v57 = &a16;
  v59 = &a17;
  v61 = &a18;
  v63 = &a19;
  v65 = &a20;
  v67 = &a21;
  v69 = &a22;
  v71 = &a23;
  v73 = &a24;
  v75 = &a25;
  v77 = &a26;
  v42 = 2LL;
  v44 = 2LL;
  v46 = 2LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 2LL;
  v62 = 2LL;
  v64 = 2LL;
  v66 = 2LL;
  v68 = 2LL;
  v70 = 2LL;
  v72 = 2LL;
  v74 = 2LL;
  v76 = 2LL;
  v78 = 2LL;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, 0x19u, &v29);
}
