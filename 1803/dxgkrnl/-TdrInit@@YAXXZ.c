/*
 * XREFs of ?TdrInit@@YAXXZ @ 0x1C0199D44
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C00D7350 (-TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z.c)
 */

void TdrInit(void)
{
  volatile int v0; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-B4h] BYREF
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  int v37; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-88h]
  const wchar_t *v42; // [rsp+88h] [rbp-80h]
  unsigned int *v43; // [rsp+90h] [rbp-78h]
  int v44; // [rsp+98h] [rbp-70h]
  int *v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B8h] [rbp-50h]
  const wchar_t *v49; // [rsp+C0h] [rbp-48h]
  unsigned int *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  __int64 v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F0h] [rbp-18h]
  const wchar_t *v56; // [rsp+F8h] [rbp-10h]
  unsigned int *v57; // [rsp+100h] [rbp-8h]
  int v58; // [rsp+108h] [rbp+0h]
  int *v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+128h] [rbp+20h]
  const wchar_t *v63; // [rsp+130h] [rbp+28h]
  unsigned int *v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+38h]
  int *v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+150h] [rbp+48h]
  __int64 v68; // [rsp+158h] [rbp+50h]
  int v69; // [rsp+160h] [rbp+58h]
  const wchar_t *v70; // [rsp+168h] [rbp+60h]
  unsigned int *v71; // [rsp+170h] [rbp+68h]
  int v72; // [rsp+178h] [rbp+70h]
  int *v73; // [rsp+180h] [rbp+78h]
  int v74; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+198h] [rbp+90h]
  const wchar_t *v77; // [rsp+1A0h] [rbp+98h]
  unsigned int *v78; // [rsp+1A8h] [rbp+A0h]
  int v79; // [rsp+1B0h] [rbp+A8h]
  int *v80; // [rsp+1B8h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+B8h]
  __int64 v82; // [rsp+1C8h] [rbp+C0h]
  int v83; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v84; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v85; // [rsp+1E0h] [rbp+D8h]
  int v86; // [rsp+1E8h] [rbp+E0h]
  __int64 *v87; // [rsp+1F0h] [rbp+E8h]
  int v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  int v90; // [rsp+208h] [rbp+100h]
  const wchar_t *v91; // [rsp+210h] [rbp+108h]
  unsigned int *v92; // [rsp+218h] [rbp+110h]
  int v93; // [rsp+220h] [rbp+118h]
  char *v94; // [rsp+228h] [rbp+120h]
  int v95; // [rsp+230h] [rbp+128h]
  __int64 v96; // [rsp+238h] [rbp+130h]
  int v97; // [rsp+240h] [rbp+138h]
  _BYTE v98[40]; // [rsp+248h] [rbp+140h] BYREF

  v33 = 3;
  v30 = 0;
  v0 = 2;
  v39 = 0x20000003CLL;
  v34 = 2;
  v35 = 2;
  v42 = L"TdrLevel";
  v43 = &v32;
  v36 = 2;
  v45 = &v33;
  v37 = 5;
  v49 = L"TdrDelay";
  v50 = &v26;
  v52 = &v34;
  v56 = L"TdrDodPresentDelay";
  v57 = &v27;
  v59 = &v35;
  v63 = L"TdrDodVSyncDelay";
  v64 = &v28;
  v66 = &v36;
  v70 = L"TdrDdiDelay";
  v71 = &v29;
  v73 = &v37;
  v77 = L"TdrLimitCount";
  v78 = &v30;
  v80 = &v38;
  v84 = L"TdrLimitTime";
  v38 = 5;
  v31 = 0;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v62 = 288;
  v65 = 67108868;
  v67 = 4;
  v68 = 0LL;
  v69 = 288;
  v72 = 67108868;
  v74 = 4;
  v75 = 0LL;
  v76 = 288;
  v79 = 67108868;
  v81 = 4;
  v82 = 0LL;
  v83 = 288;
  v85 = &v31;
  v87 = &v39;
  v91 = L"TdrDebugMode";
  v92 = &v25;
  v86 = 67108868;
  v88 = 4;
  v90 = 288;
  v93 = 67108868;
  v95 = 4;
  v94 = (char *)&v39 + 4;
  v89 = 0LL;
  v96 = 0LL;
  v97 = 0;
  memset(v98, 0, sizeof(v98));
  v1 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v40,
         0LL,
         0LL);
  v5 = v1;
  if ( v1 < 0 )
  {
    v32 = 3;
    v26 = 2;
    v27 = 2;
    v28 = 2;
    v29 = 5;
    v25 = 2;
    v6 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdWarning(v6);
  }
  if ( v32 <= 1 || v32 == 3 )
  {
    g_TdrConfig = v32;
  }
  else
  {
    g_TdrConfig = 3;
    v7 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v7 + 24) = v32;
    *(_QWORD *)(v7 + 32) = g_TdrConfig;
    WdLogEvent5_WdWarning(v7);
  }
  v8 = v26;
  if ( v26 )
  {
    if ( v26 > 0x384 )
      v8 = 900;
    dword_1C007BD2C = v8;
  }
  else
  {
    dword_1C007BD2C = 1;
  }
  if ( dword_1C007BD2C != v26 )
  {
    v9 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v9 + 24) = v26;
    *(_QWORD *)(v9 + 32) = (unsigned int)dword_1C007BD2C;
    WdLogEvent5_WdWarning(v9);
  }
  v10 = v27;
  if ( v27 )
  {
    if ( v27 > 0x384 )
      v10 = 900;
    dword_1C007BD30 = v10;
  }
  else
  {
    dword_1C007BD30 = 1;
  }
  if ( dword_1C007BD30 != v27 )
  {
    v11 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v11 + 24) = v27;
    *(_QWORD *)(v11 + 32) = (unsigned int)dword_1C007BD30;
    WdLogEvent5_WdWarning(v11);
  }
  v12 = v28;
  if ( v28 )
  {
    if ( v28 > 0x384 )
      v12 = 900;
    dword_1C007BD34 = v12;
  }
  else
  {
    dword_1C007BD34 = 1;
  }
  if ( dword_1C007BD34 != v28 )
  {
    v13 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v13 + 24) = v28;
    *(_QWORD *)(v13 + 32) = (unsigned int)dword_1C007BD34;
    WdLogEvent5_WdWarning(v13);
  }
  v14 = v29;
  if ( v29 )
  {
    if ( v29 > 0x384 )
      v14 = 900;
    dword_1C007BD38 = v14;
  }
  else
  {
    dword_1C007BD38 = 1;
  }
  if ( dword_1C007BD38 != v29 )
  {
    v15 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v15 + 24) = v29;
    *(_QWORD *)(v15 + 32) = (unsigned int)dword_1C007BD38;
    WdLogEvent5_WdWarning(v15);
  }
  v16 = v30;
  if ( v30 <= 0x20 )
  {
    if ( !v30 )
      v16 = 1;
    dword_1C007BD40 = v16;
  }
  else
  {
    dword_1C007BD40 = 32;
  }
  if ( dword_1C007BD40 != v30 )
  {
    v17 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v17 + 24) = v30;
    *(_QWORD *)(v17 + 32) = (unsigned int)dword_1C007BD40;
    WdLogEvent5_WdWarning(v17);
  }
  v18 = v31;
  v19 = 3600LL;
  if ( v31 <= 0xE10 )
  {
    if ( v31 < 5 )
      v18 = 5;
    dword_1C007BD44 = v18;
  }
  else
  {
    dword_1C007BD44 = 3600;
  }
  if ( dword_1C007BD44 != v31 )
  {
    v20 = WdLogNewEntry5_WdWarning(3600LL, v2, v4);
    *(_QWORD *)(v20 + 24) = v31;
    *(_QWORD *)(v20 + 32) = (unsigned int)dword_1C007BD44;
    WdLogEvent5_WdWarning(v20);
  }
  LOBYTE(v19) = 1;
  byte_1C007BD3C = (unsigned __int8)WdIsDebuggerPresent(v19) != 0;
  if ( v25 <= 3 )
    v0 = v25;
  g_TdrDebugMode = v0;
  if ( v0 != v25 )
  {
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v25;
    *(_QWORD *)(v24 + 32) = g_TdrDebugMode;
    WdLogEvent5_WdWarning(v24);
  }
  TdrHistoryInit(&g_TdrHistory);
}
