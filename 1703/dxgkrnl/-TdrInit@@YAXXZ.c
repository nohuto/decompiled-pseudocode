/*
 * XREFs of ?TdrInit@@YAXXZ @ 0x1C011B95C
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C009F800 (-TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z.c)
 */

void TdrInit(void)
{
  volatile int v0; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-B4h] BYREF
  int v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  int v37; // [rsp+60h] [rbp-A8h] BYREF
  int v38; // [rsp+64h] [rbp-A4h] BYREF
  int v39; // [rsp+68h] [rbp-A0h] BYREF
  int v40; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  const wchar_t *v44; // [rsp+88h] [rbp-80h]
  unsigned int *v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+98h] [rbp-70h]
  int *v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  int v50; // [rsp+B8h] [rbp-50h]
  const wchar_t *v51; // [rsp+C0h] [rbp-48h]
  unsigned int *v52; // [rsp+C8h] [rbp-40h]
  int v53; // [rsp+D0h] [rbp-38h]
  int *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  __int64 v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+F0h] [rbp-18h]
  const wchar_t *v58; // [rsp+F8h] [rbp-10h]
  unsigned int *v59; // [rsp+100h] [rbp-8h]
  int v60; // [rsp+108h] [rbp+0h]
  int *v61; // [rsp+110h] [rbp+8h]
  int v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+128h] [rbp+20h]
  const wchar_t *v65; // [rsp+130h] [rbp+28h]
  unsigned int *v66; // [rsp+138h] [rbp+30h]
  int v67; // [rsp+140h] [rbp+38h]
  int *v68; // [rsp+148h] [rbp+40h]
  int v69; // [rsp+150h] [rbp+48h]
  __int64 v70; // [rsp+158h] [rbp+50h]
  int v71; // [rsp+160h] [rbp+58h]
  const wchar_t *v72; // [rsp+168h] [rbp+60h]
  unsigned int *v73; // [rsp+170h] [rbp+68h]
  int v74; // [rsp+178h] [rbp+70h]
  int *v75; // [rsp+180h] [rbp+78h]
  int v76; // [rsp+188h] [rbp+80h]
  __int64 v77; // [rsp+190h] [rbp+88h]
  int v78; // [rsp+198h] [rbp+90h]
  const wchar_t *v79; // [rsp+1A0h] [rbp+98h]
  unsigned int *v80; // [rsp+1A8h] [rbp+A0h]
  int v81; // [rsp+1B0h] [rbp+A8h]
  int *v82; // [rsp+1B8h] [rbp+B0h]
  int v83; // [rsp+1C0h] [rbp+B8h]
  __int64 v84; // [rsp+1C8h] [rbp+C0h]
  int v85; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v86; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v87; // [rsp+1E0h] [rbp+D8h]
  int v88; // [rsp+1E8h] [rbp+E0h]
  __int64 *v89; // [rsp+1F0h] [rbp+E8h]
  int v90; // [rsp+1F8h] [rbp+F0h]
  __int64 v91; // [rsp+200h] [rbp+F8h]
  int v92; // [rsp+208h] [rbp+100h]
  const wchar_t *v93; // [rsp+210h] [rbp+108h]
  unsigned int *v94; // [rsp+218h] [rbp+110h]
  int v95; // [rsp+220h] [rbp+118h]
  char *v96; // [rsp+228h] [rbp+120h]
  int v97; // [rsp+230h] [rbp+128h]
  __int64 v98; // [rsp+238h] [rbp+130h]
  int v99; // [rsp+240h] [rbp+138h]
  _BYTE v100[40]; // [rsp+248h] [rbp+140h] BYREF

  v35 = 3;
  v32 = 0;
  v0 = 2;
  v41 = 0x20000003CLL;
  v36 = 2;
  v37 = 2;
  v44 = L"TdrLevel";
  v45 = &v34;
  v38 = 2;
  v47 = &v35;
  v39 = 5;
  v51 = L"TdrDelay";
  v52 = &v28;
  v54 = &v36;
  v58 = L"TdrDodPresentDelay";
  v59 = &v29;
  v61 = &v37;
  v65 = L"TdrDodVSyncDelay";
  v66 = &v30;
  v68 = &v38;
  v72 = L"TdrDdiDelay";
  v73 = &v31;
  v75 = &v39;
  v79 = L"TdrLimitCount";
  v80 = &v32;
  v82 = &v40;
  v86 = L"TdrLimitTime";
  v40 = 5;
  v33 = 0;
  v42 = 0LL;
  v43 = 288;
  v46 = 67108868;
  v48 = 4;
  v49 = 0LL;
  v50 = 288;
  v53 = 67108868;
  v55 = 4;
  v56 = 0LL;
  v57 = 288;
  v60 = 67108868;
  v62 = 4;
  v63 = 0LL;
  v64 = 288;
  v67 = 67108868;
  v69 = 4;
  v70 = 0LL;
  v71 = 288;
  v74 = 67108868;
  v76 = 4;
  v77 = 0LL;
  v78 = 288;
  v81 = 67108868;
  v83 = 4;
  v84 = 0LL;
  v85 = 288;
  v87 = &v33;
  v89 = &v41;
  v93 = L"TdrDebugMode";
  v94 = &v27;
  v88 = 67108868;
  v90 = 4;
  v92 = 288;
  v95 = 67108868;
  v97 = 4;
  v96 = (char *)&v41 + 4;
  v91 = 0LL;
  v98 = 0LL;
  v99 = 0;
  memset(v100, 0, sizeof(v100));
  v1 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v42,
         0LL,
         0LL);
  v6 = v1;
  if ( v1 < 0 )
  {
    v34 = 3;
    v28 = 2;
    v29 = 2;
    v30 = 2;
    v31 = 5;
    v27 = 2;
    v18 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v18 + 24) = v6;
    WdLogEvent5_WdWarning(v18);
  }
  if ( v34 == 3 || v34 <= 1 )
  {
    g_TdrConfig = v34;
  }
  else
  {
    g_TdrConfig = 3;
    v19 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v19 + 24) = v34;
    *(_QWORD *)(v19 + 32) = g_TdrConfig;
    WdLogEvent5_WdWarning(v19);
  }
  v7 = v28;
  if ( v28 )
  {
    if ( v28 > 0x384 )
      v7 = 900;
    dword_1C006FEE4 = v7;
  }
  else
  {
    dword_1C006FEE4 = 1;
  }
  if ( dword_1C006FEE4 != v28 )
  {
    v20 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v20 + 24) = v28;
    *(_QWORD *)(v20 + 32) = (unsigned int)dword_1C006FEE4;
    WdLogEvent5_WdWarning(v20);
  }
  v8 = v29;
  if ( v29 )
  {
    if ( v29 > 0x384 )
      v8 = 900;
    dword_1C006FEE8 = v8;
  }
  else
  {
    dword_1C006FEE8 = 1;
  }
  if ( dword_1C006FEE8 != v29 )
  {
    v21 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v21 + 24) = v29;
    *(_QWORD *)(v21 + 32) = (unsigned int)dword_1C006FEE8;
    WdLogEvent5_WdWarning(v21);
  }
  v9 = v30;
  if ( v30 )
  {
    if ( v30 > 0x384 )
      v9 = 900;
    dword_1C006FEEC = v9;
  }
  else
  {
    dword_1C006FEEC = 1;
  }
  if ( dword_1C006FEEC != v30 )
  {
    v22 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v22 + 24) = v30;
    *(_QWORD *)(v22 + 32) = (unsigned int)dword_1C006FEEC;
    WdLogEvent5_WdWarning(v22);
  }
  v10 = v31;
  if ( v31 )
  {
    if ( v31 > 0x384 )
      v10 = 900;
    dword_1C006FEF0 = v10;
  }
  else
  {
    dword_1C006FEF0 = 1;
  }
  if ( dword_1C006FEF0 != v31 )
  {
    v23 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v23 + 24) = v31;
    *(_QWORD *)(v23 + 32) = (unsigned int)dword_1C006FEF0;
    WdLogEvent5_WdWarning(v23);
  }
  v11 = v32;
  if ( v32 > 0x20 )
  {
    dword_1C006FEF8 = 32;
  }
  else
  {
    if ( !v32 )
      v11 = 1;
    dword_1C006FEF8 = v11;
  }
  if ( dword_1C006FEF8 != v32 )
  {
    v24 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v24 + 24) = v32;
    *(_QWORD *)(v24 + 32) = (unsigned int)dword_1C006FEF8;
    WdLogEvent5_WdWarning(v24);
  }
  v12 = v33;
  v13 = 3600LL;
  if ( v33 > 0xE10 )
  {
    dword_1C006FEFC = 3600;
  }
  else
  {
    if ( v33 < 5 )
      v12 = 5;
    dword_1C006FEFC = v12;
  }
  if ( dword_1C006FEFC != v33 )
  {
    v25 = WdLogNewEntry5_WdWarning(3600LL, v2, v4, v5);
    *(_QWORD *)(v25 + 24) = v33;
    *(_QWORD *)(v25 + 32) = (unsigned int)dword_1C006FEFC;
    WdLogEvent5_WdWarning(v25);
  }
  LOBYTE(v13) = 1;
  byte_1C006FEF4 = (unsigned __int8)WdIsDebuggerPresent(v13) != 0;
  if ( v27 <= 3 )
    v0 = v27;
  g_TdrDebugMode = v0;
  if ( v0 != v27 )
  {
    v26 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v26 + 24) = v27;
    *(_QWORD *)(v26 + 32) = g_TdrDebugMode;
    WdLogEvent5_WdWarning(v26);
  }
  TdrHistoryInit(&g_TdrHistory);
}
