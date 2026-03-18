/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0109C84 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01FD9B8 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02016B4 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0201714 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z @ 0x1C02020A8 (-_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000C844 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D494 (_TlgCreateWsz.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F860 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000FA54 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000FBBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C0011608 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0012220 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0014168 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C0037234 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int16 v6; // r13
  int v7; // r11d
  __int64 *v8; // rdi
  __int64 **v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // eax
  int v18; // r11d
  char *v19; // r12
  bool v20; // zf
  int v21; // r15d
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm0
  char *v26; // rsi
  unsigned __int8 *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  int v32; // r9d
  BOOLEAN v33; // al
  BOOLEAN v34; // al
  __int64 v35; // rdx
  unsigned __int16 *v36; // rax
  int v37; // ecx
  unsigned __int8 *v38; // rax
  __int64 v39; // r11
  __int64 v40; // r10
  int v41; // eax
  LPCGUID v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  size_t v49; // rsi
  const void *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r15d
  SIZE_T v54; // rax
  unsigned __int8 i; // r9
  __int64 v56; // r8
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int8 v60[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v61[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v62; // [rsp+40h] [rbp-C8h] BYREF
  int v63; // [rsp+44h] [rbp-C4h] BYREF
  int v64; // [rsp+48h] [rbp-C0h] BYREF
  int v65; // [rsp+4Ch] [rbp-BCh] BYREF
  int v66; // [rsp+50h] [rbp-B8h] BYREF
  int v67; // [rsp+54h] [rbp-B4h] BYREF
  int v68; // [rsp+58h] [rbp-B0h] BYREF
  int v69; // [rsp+5Ch] [rbp-ACh] BYREF
  int v70; // [rsp+60h] [rbp-A8h] BYREF
  int v71; // [rsp+64h] [rbp-A4h] BYREF
  int v72; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v73; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v74; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v75; // [rsp+74h] [rbp-94h] BYREF
  int v76; // [rsp+78h] [rbp-90h] BYREF
  int v77; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v78; // [rsp+80h] [rbp-88h] BYREF
  int v79; // [rsp+84h] [rbp-84h] BYREF
  int v80; // [rsp+88h] [rbp-80h] BYREF
  int v81; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v82; // [rsp+90h] [rbp-78h] BYREF
  int v83; // [rsp+94h] [rbp-74h] BYREF
  int v84; // [rsp+98h] [rbp-70h] BYREF
  int v85; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v86; // [rsp+A0h] [rbp-68h] BYREF
  int v87; // [rsp+A4h] [rbp-64h] BYREF
  int v88; // [rsp+A8h] [rbp-60h] BYREF
  int v89; // [rsp+ACh] [rbp-5Ch] BYREF
  int v90; // [rsp+B0h] [rbp-58h] BYREF
  size_t v91; // [rsp+B8h] [rbp-50h]
  __int64 v92; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v94[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v95; // [rsp+E8h] [rbp-20h] BYREF
  int v96; // [rsp+F8h] [rbp-10h]
  GUID ActivityId; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v98[2]; // [rsp+110h] [rbp+8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v100; // [rsp+158h] [rbp+50h]
  __int64 v101; // [rsp+160h] [rbp+58h]
  unsigned int *v102; // [rsp+168h] [rbp+60h]
  __int64 v103; // [rsp+170h] [rbp+68h]
  int *v104; // [rsp+178h] [rbp+70h]
  int v105; // [rsp+180h] [rbp+78h]
  int v106; // [rsp+184h] [rbp+7Ch]
  int *v107; // [rsp+188h] [rbp+80h]
  __int64 v108; // [rsp+190h] [rbp+88h]
  int *v109; // [rsp+198h] [rbp+90h]
  __int64 v110; // [rsp+1A0h] [rbp+98h]
  int *v111; // [rsp+1A8h] [rbp+A0h]
  __int64 v112; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v113; // [rsp+1B8h] [rbp+B0h]
  __int64 v114; // [rsp+1C0h] [rbp+B8h]
  __int64 v115; // [rsp+1C8h] [rbp+C0h]
  _DWORD v116[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  int *v117; // [rsp+1D8h] [rbp+D0h]
  __int64 v118; // [rsp+1E0h] [rbp+D8h]
  __int64 v119; // [rsp+1E8h] [rbp+E0h]
  __int64 v120; // [rsp+1F0h] [rbp+E8h]
  __int64 *v121; // [rsp+1F8h] [rbp+F0h]
  __int64 v122; // [rsp+200h] [rbp+F8h]
  _DWORD *v123; // [rsp+208h] [rbp+100h]
  __int64 v124; // [rsp+210h] [rbp+108h]
  __int64 v125; // [rsp+218h] [rbp+110h]
  _DWORD v126[2]; // [rsp+220h] [rbp+118h] BYREF
  _QWORD *v127; // [rsp+228h] [rbp+120h]
  __int64 v128; // [rsp+230h] [rbp+128h]
  __int128 *v129; // [rsp+238h] [rbp+130h]
  _QWORD v130[4]; // [rsp+240h] [rbp+138h] BYREF
  _QWORD v131[4]; // [rsp+260h] [rbp+158h] BYREF
  _QWORD v132[28]; // [rsp+280h] [rbp+178h] BYREF
  _DWORD v133[2]; // [rsp+360h] [rbp+258h] BYREF
  __int64 v134; // [rsp+368h] [rbp+260h]
  __int64 v135; // [rsp+370h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+378h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+388h] [rbp+280h] BYREF
  unsigned __int8 *v138; // [rsp+398h] [rbp+290h]
  __int64 v139; // [rsp+3A0h] [rbp+298h]
  unsigned __int16 *v140; // [rsp+3A8h] [rbp+2A0h]
  __int64 v141; // [rsp+3B0h] [rbp+2A8h]
  int *v142; // [rsp+3B8h] [rbp+2B0h]
  __int64 v143; // [rsp+3C0h] [rbp+2B8h]
  int *v144; // [rsp+3C8h] [rbp+2C0h]
  __int64 v145; // [rsp+3D0h] [rbp+2C8h]
  int *v146; // [rsp+3D8h] [rbp+2D0h]
  __int64 v147; // [rsp+3E0h] [rbp+2D8h]
  int *v148; // [rsp+3E8h] [rbp+2E0h]
  __int64 v149; // [rsp+3F0h] [rbp+2E8h]
  int *v150; // [rsp+3F8h] [rbp+2F0h]
  __int64 v151; // [rsp+400h] [rbp+2F8h]
  int *v152; // [rsp+408h] [rbp+300h]
  __int64 v153; // [rsp+410h] [rbp+308h]
  int *v154; // [rsp+418h] [rbp+310h]
  __int64 v155; // [rsp+420h] [rbp+318h]
  unsigned int *v156; // [rsp+428h] [rbp+320h]
  __int64 v157; // [rsp+430h] [rbp+328h]
  unsigned int *v158; // [rsp+438h] [rbp+330h]
  __int64 v159; // [rsp+440h] [rbp+338h]
  _DWORD *v160; // [rsp+448h] [rbp+340h]
  __int64 v161; // [rsp+450h] [rbp+348h]
  char *v162; // [rsp+458h] [rbp+350h]
  _DWORD v163[2]; // [rsp+460h] [rbp+358h] BYREF
  int *v164; // [rsp+468h] [rbp+360h]
  __int64 v165; // [rsp+470h] [rbp+368h]
  _DWORD *v166; // [rsp+478h] [rbp+370h]
  __int64 v167; // [rsp+480h] [rbp+378h]
  char *v168; // [rsp+488h] [rbp+380h]
  _DWORD v169[2]; // [rsp+490h] [rbp+388h] BYREF
  WCHAR v170[4]; // [rsp+498h] [rbp+390h] BYREF
  __int16 v171; // [rsp+4A0h] [rbp+398h]
  WCHAR pwsz[4]; // [rsp+4A8h] [rbp+3A0h] BYREF

  v66 = a2;
  EtwActivityIdControl(3u, &ActivityId);
  v6 = 0;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v62 = v7;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_33;
  v9 = *(__int64 ***)(a1 + 120);
  if ( !v9 )
    goto LABEL_33;
  v10 = *v9;
  if ( !v10 )
    goto LABEL_33;
  do
  {
    if ( *((_DWORD *)v10 + 2) == 2 )
      break;
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v11 = v10 + 3;
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v10 + 24);
    v16 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v43 + 24) = v11;
      *(_QWORD *)(v43 + 32) = v16;
      WdLogEvent5_WdWarning(v43);
      MonitorLogBadEDID(v11, (unsigned int)v16);
    }
    else
    {
      v8 = v11;
      LODWORD(v16) = 0;
    }
    if ( (int)v16 >= 0 )
    {
      v17 = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8);
      v18 = (unsigned __int8)v18;
      if ( v17 >= 0 )
        v18 = 1;
      v62 = v18;
    }
  }
  else
  {
LABEL_33:
    v44 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v44 + 24) = a1;
    WdLogEvent5_WdWarning(v44);
  }
  v19 = 0LL;
  v60[1] = 0;
  LODWORD(v91) = 0;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v45 = (char *)operator new(*(unsigned int *)(a1 + 160), 0x4D677844u, PagedPool);
    v19 = v45;
    if ( v45 )
    {
      v49 = *(unsigned int *)(a1 + 160);
      v50 = *(const void **)(a1 + 152);
      v60[1] = 1;
      v91 = v49;
      memmove(v45, v50, v49);
      DisplayID_Initialize((struct DisplayIDObj *)v94, v19, *(_DWORD *)(a1 + 160));
      DisplayID_UpdateForTelemetry((struct DisplayIDObj *)v94);
    }
    else
    {
      v51 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      WdLogEvent5_WdWarning(v51);
    }
  }
  v20 = (*(_DWORD *)(a1 + 24) & 0x400) == 0;
  LOBYTE(v21) = 0;
  v22 = *(_OWORD *)(a1 + 568);
  v23 = *(_OWORD *)(a1 + 612);
  v96 = *(_DWORD *)(a1 + 584);
  v24 = *(_QWORD *)(a1 + 588);
  v95 = v22;
  v93 = v24;
  v25 = *(_OWORD *)(a1 + 596);
  v98[1] = v23;
  v98[0] = v25;
  if ( v20 )
  {
    v63 = 0;
LABEL_15:
    v64 = 0;
    goto LABEL_16;
  }
  v52 = HIDWORD(*(_QWORD *)(a1 + 448));
  v53 = HIDWORD(*(_QWORD *)(a1 + 448));
  v63 = 1;
  v21 = (v53 >> 1) & 1;
  if ( (v52 & 4) == 0 )
    goto LABEL_15;
  v64 = 1;
LABEL_16:
  v60[0] = 0;
  *(_QWORD *)pwsz = 0LL;
  *(_QWORD *)v170 = 0LL;
  v171 = 0;
  v61[0] = 0;
  v26 = 0LL;
  v73 = 0;
  v74 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v27 = (unsigned __int8 *)operator new(0x80uLL, 0x4D677844u, PagedPool);
  if ( v27 )
  {
    if ( v8 )
    {
      EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)v8, pwsz);
      EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)v8, v170);
      EDIDV1_ObtainMonitorManufactureDate((unsigned __int8 *)v8, v60, v61);
      EDID_V1_GetPhysicalSize(v28, (unsigned __int8 *)v8, &v73, &v74);
      *(_OWORD *)v27 = *(_OWORD *)v8;
      *((_OWORD *)v27 + 1) = *((_OWORD *)v8 + 1);
      *((_OWORD *)v27 + 2) = *((_OWORD *)v8 + 2);
      *((_OWORD *)v27 + 3) = *((_OWORD *)v8 + 3);
      *((_OWORD *)v27 + 4) = *((_OWORD *)v8 + 4);
      *((_OWORD *)v27 + 5) = *((_OWORD *)v8 + 5);
      *((_OWORD *)v27 + 6) = *((_OWORD *)v8 + 6);
      *((_OWORD *)v27 + 7) = *((_OWORD *)v8 + 7);
      EDID_V1_RemovePII(v29, v27);
      v30 = *(_DWORD **)(a1 + 216);
      if ( v30 )
      {
        v67 = v30[5];
        v68 = v30[6];
        v69 = v30[2];
        v70 = v30[14];
        v71 = v30[7];
        v72 = v30[8];
      }
      v31 = *(_DWORD *)(a1 + 112);
      if ( v31 > 1 )
      {
        if ( v31 < 4 )
          v6 = v31 - 1;
        else
          v6 = 3;
        v54 = 136LL * v6;
        if ( !is_mul_ok(v6, 0x88uLL) )
          v54 = -1LL;
        v26 = (char *)operator new(v54, 0x4D677844u, PagedPool);
        if ( v26 )
        {
          for ( i = 0; i < v6; *(_OWORD *)&v26[v56 + 120] = *(_OWORD *)(v59 + 136) )
          {
            v56 = 136LL * i;
            v57 = i++;
            v58 = (unsigned int)(v57 + 1);
            *(_DWORD *)&v26[v56] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v58) + 8LL);
            *(_DWORD *)&v26[v56 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)v58) + 12LL);
            v59 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)v58);
            *(_OWORD *)&v26[v56 + 8] = *(_OWORD *)(v59 + 24);
            *(_OWORD *)&v26[v56 + 24] = *(_OWORD *)(v59 + 40);
            *(_OWORD *)&v26[v56 + 40] = *(_OWORD *)(v59 + 56);
            *(_OWORD *)&v26[v56 + 56] = *(_OWORD *)(v59 + 72);
            *(_OWORD *)&v26[v56 + 72] = *(_OWORD *)(v59 + 88);
            *(_OWORD *)&v26[v56 + 88] = *(_OWORD *)(v59 + 104);
            *(_OWORD *)&v26[v56 + 104] = *(_OWORD *)(v59 + 120);
          }
        }
        else
        {
          v6 = 0;
        }
      }
    }
    if ( dword_1C005F810 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F810, 0x800000000020uLL) )
    {
      v101 = 2LL;
      LOWORD(v65) = 6;
      v103 = 4LL;
      v100 = &v65;
      v75 = gDISeqId;
      gDISeqId += v32;
      v102 = &v75;
      v33 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C005F810, 0, 0x400000000000uLL);
      v106 = 0;
      v76 = v33;
      v104 = &v76;
      v105 = 4;
      v34 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C005F810, 0, 0x200000000000uLL);
      v35 = *(_QWORD *)(a1 + 16);
      v107 = &v77;
      v109 = &v66;
      v78 = *(_DWORD *)(a1 + 32);
      v111 = &v78;
      v113 = v116;
      v115 = *(_QWORD *)(a1 + 80);
      v116[0] = *(unsigned __int16 *)(a1 + 72);
      v62 = (unsigned __int8)v62;
      v117 = &v62;
      v119 = a1 + 28;
      v77 = v34;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 2LL;
      v116[1] = 0;
      v118 = 4LL;
      v120 = 4LL;
      v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 268LL);
      v121 = &v92;
      v122 = 8LL;
      v36 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL) + 1248LL);
      v123 = v126;
      v124 = 2LL;
      v37 = *v36;
      v125 = *((_QWORD *)v36 + 1);
      v127 = v130;
      v126[0] = v37;
      v126[1] = 0;
      v128 = 2LL;
      v129 = &v95;
      v130[1] = v131;
      v130[3] = &v93;
      v131[1] = v132;
      v131[3] = v98;
      v79 = *(_DWORD *)(a1 + 628);
      v132[1] = &v79;
      v80 = *(_DWORD *)(a1 + 632);
      v132[3] = &v80;
      v81 = *(_DWORD *)(a1 + 636);
      v132[5] = &v81;
      v82 = *(_DWORD *)(a1 + 640);
      v132[7] = &v82;
      v83 = *(unsigned __int8 *)(a1 + 648);
      v132[9] = &v83;
      v84 = *(unsigned __int8 *)(a1 + 649);
      v132[11] = &v84;
      v132[13] = &v63;
      v85 = (unsigned __int8)v21;
      v132[15] = &v85;
      v132[17] = &v64;
      LOBYTE(v36) = ~(unsigned __int8)(*(_DWORD *)(a1 + 24) >> 11);
      v130[0] = 20LL;
      v130[2] = 2LL;
      v86 = (unsigned __int8)v36 & 1;
      v132[19] = &v86;
      v87 = *(unsigned __int8 *)(a1 + 650);
      v132[21] = &v87;
      v88 = *(_DWORD *)(a1 + 644);
      v132[23] = &v88;
      v131[0] = 8LL;
      v131[2] = 2LL;
      v132[0] = 32LL;
      v132[2] = 4LL;
      v132[4] = 4LL;
      v132[6] = 4LL;
      v132[8] = 4LL;
      v132[10] = 4LL;
      v132[12] = 4LL;
      v132[14] = 4LL;
      v132[16] = 4LL;
      v132[18] = 4LL;
      v132[20] = 4LL;
      v132[22] = 4LL;
      v132[24] = 4LL;
      v132[26] = 2LL;
      v133[0] = v8 != 0LL ? 0x80 : 0;
      v132[25] = v133;
      v133[1] = 0;
      v38 = 0LL;
      v134 = v39;
      if ( v8 )
        v38 = v27;
      v135 = 4LL;
      v132[27] = v38;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v137, v170);
      v20 = *(_QWORD *)(a1 + 216) == v40;
      v140 = v61;
      v41 = v40;
      v138 = v60;
      LOBYTE(v41) = !v20;
      v139 = 1LL;
      v89 = v41;
      v142 = &v89;
      v144 = &v67;
      v146 = &v68;
      v148 = &v69;
      v150 = &v70;
      v152 = &v71;
      v154 = &v72;
      v156 = &v73;
      v158 = &v74;
      v160 = v163;
      v90 = v60[1];
      v164 = &v90;
      v166 = v169;
      v169[0] = v91;
      v141 = 2LL;
      v143 = 4LL;
      v145 = 4LL;
      v147 = 4LL;
      v149 = 4LL;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 2LL;
      v162 = v26;
      v163[0] = 136 * v6;
      v163[1] = v40;
      v165 = 4LL;
      v167 = 2LL;
      v168 = v19;
      v169[1] = v40;
      TlgWrite((TraceLoggingHProvider)&dword_1C005F810, &unk_1C004178B, &ActivityId, v42, 0x36u, &pData);
    }
    ExFreePoolWithTag(v27, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
  }
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
}
