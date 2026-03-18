/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0107654 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01E3068 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z @ 0x1C01E778C (-_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0004038 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F2BC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000F3B0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000F460 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C000F628 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     _TlgCreateWsz @ 0x1C001038C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, int a2)
{
  bool v3; // r12
  unsigned __int16 v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  int HWMonitorBaseEDIDBlock; // eax
  unsigned __int8 *v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // edi
  __int128 v12; // xmm0
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  int v15; // r9d
  BOOLEAN v16; // al
  __int64 v17; // rdx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  __int64 v20; // r10
  LPCGUID v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // r9d
  BOOLEAN v25; // al
  __int64 v26; // rdx
  unsigned __int16 *v27; // rax
  int v28; // ecx
  LPCGUID v29; // r9
  int v30; // r10d
  SIZE_T v31; // rax
  char *v32; // rdi
  unsigned __int8 i; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // r10d
  unsigned int v38; // r11d
  BOOLEAN v39; // al
  __int64 v40; // rdx
  __int64 v41; // r11
  unsigned __int16 *v42; // rax
  int v43; // ecx
  __int64 v44; // r10
  bool v45; // zf
  int v46; // eax
  __int64 v47; // r11
  LPCGUID v48; // r9
  unsigned __int8 v49[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v50[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v51; // [rsp+40h] [rbp-C8h] BYREF
  int v52; // [rsp+44h] [rbp-C4h] BYREF
  int v53; // [rsp+48h] [rbp-C0h] BYREF
  int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  int v55; // [rsp+50h] [rbp-B8h] BYREF
  int v56; // [rsp+54h] [rbp-B4h] BYREF
  int v57; // [rsp+58h] [rbp-B0h] BYREF
  int v58; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-A4h] BYREF
  int v61; // [rsp+68h] [rbp-A0h] BYREF
  int v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v63; // [rsp+70h] [rbp-98h] BYREF
  int v64; // [rsp+74h] [rbp-94h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v67; // [rsp+80h] [rbp-88h] BYREF
  int v68; // [rsp+84h] [rbp-84h] BYREF
  int v69; // [rsp+88h] [rbp-80h] BYREF
  int v70; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v71; // [rsp+90h] [rbp-78h] BYREF
  int v72; // [rsp+94h] [rbp-74h] BYREF
  int v73; // [rsp+98h] [rbp-70h] BYREF
  int v74; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v75; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+A4h] [rbp-64h] BYREF
  int v77; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-50h] BYREF
  GUID ActivityId; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v81; // [rsp+D0h] [rbp-38h] BYREF
  int v82; // [rsp+E0h] [rbp-28h]
  _OWORD v83[2]; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int16 *v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  unsigned int *v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  unsigned int *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  int *v91; // [rsp+158h] [rbp+50h]
  __int64 v92; // [rsp+160h] [rbp+58h]
  int *v93; // [rsp+168h] [rbp+60h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  int *v95; // [rsp+178h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+78h]
  int *v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+190h] [rbp+88h]
  int *v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+98h]
  __int64 v101; // [rsp+1A8h] [rbp+A0h]
  int v102; // [rsp+1B0h] [rbp+A8h] BYREF
  int v103; // [rsp+1B4h] [rbp+ACh]
  int *v104; // [rsp+1B8h] [rbp+B0h]
  __int64 v105; // [rsp+1C0h] [rbp+B8h]
  __int64 v106; // [rsp+1C8h] [rbp+C0h]
  __int64 v107; // [rsp+1D0h] [rbp+C8h]
  WCHAR *v108; // [rsp+1D8h] [rbp+D0h]
  __int64 v109; // [rsp+1E0h] [rbp+D8h]
  int *v110; // [rsp+1E8h] [rbp+E0h]
  __int64 v111; // [rsp+1F0h] [rbp+E8h]
  __int64 v112; // [rsp+1F8h] [rbp+F0h]
  int v113; // [rsp+200h] [rbp+F8h] BYREF
  int v114; // [rsp+204h] [rbp+FCh]
  __int64 *v115; // [rsp+208h] [rbp+100h]
  __int64 v116; // [rsp+210h] [rbp+108h]
  __int128 *v117; // [rsp+218h] [rbp+110h]
  __int64 v118; // [rsp+220h] [rbp+118h] BYREF
  __int64 *v119; // [rsp+228h] [rbp+120h]
  __int64 v120; // [rsp+230h] [rbp+128h]
  __int64 *v121; // [rsp+238h] [rbp+130h]
  __int64 v122; // [rsp+240h] [rbp+138h] BYREF
  __int64 *v123; // [rsp+248h] [rbp+140h]
  __int64 v124; // [rsp+250h] [rbp+148h]
  _OWORD *v125; // [rsp+258h] [rbp+150h]
  __int64 v126; // [rsp+260h] [rbp+158h] BYREF
  int *v127; // [rsp+268h] [rbp+160h]
  __int64 v128; // [rsp+270h] [rbp+168h]
  int *v129; // [rsp+278h] [rbp+170h]
  __int64 v130; // [rsp+280h] [rbp+178h]
  int *v131; // [rsp+288h] [rbp+180h]
  __int64 v132; // [rsp+290h] [rbp+188h]
  int *v133; // [rsp+298h] [rbp+190h]
  __int64 v134; // [rsp+2A0h] [rbp+198h]
  unsigned int *v135; // [rsp+2A8h] [rbp+1A0h]
  __int64 v136; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v137; // [rsp+2B8h] [rbp+1B0h]
  __int64 v138; // [rsp+2C0h] [rbp+1B8h]
  int *v139; // [rsp+2C8h] [rbp+1C0h]
  __int64 v140; // [rsp+2D0h] [rbp+1C8h]
  int *v141; // [rsp+2D8h] [rbp+1D0h]
  __int64 v142; // [rsp+2E0h] [rbp+1D8h]
  unsigned int *v143; // [rsp+2E8h] [rbp+1E0h]
  __int64 v144; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v145; // [rsp+2F8h] [rbp+1F0h]
  __int64 v146; // [rsp+300h] [rbp+1F8h]
  __int64 *v147; // [rsp+308h] [rbp+200h]
  __int64 v148; // [rsp+310h] [rbp+208h]
  unsigned __int8 *v149; // [rsp+318h] [rbp+210h]
  __int64 v150; // [rsp+320h] [rbp+218h] BYREF
  __int64 v151; // [rsp+328h] [rbp+220h]
  __int64 v152; // [rsp+330h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+338h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v154; // [rsp+348h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+358h] [rbp+250h] BYREF
  unsigned __int8 *v156; // [rsp+368h] [rbp+260h]
  __int64 v157; // [rsp+370h] [rbp+268h]
  unsigned __int16 *v158; // [rsp+378h] [rbp+270h]
  __int64 v159; // [rsp+380h] [rbp+278h]
  int *v160; // [rsp+388h] [rbp+280h]
  __int64 v161; // [rsp+390h] [rbp+288h]
  int *v162; // [rsp+398h] [rbp+290h]
  __int64 v163; // [rsp+3A0h] [rbp+298h]
  int *v164; // [rsp+3A8h] [rbp+2A0h]
  __int64 v165; // [rsp+3B0h] [rbp+2A8h]
  int *v166; // [rsp+3B8h] [rbp+2B0h]
  __int64 v167; // [rsp+3C0h] [rbp+2B8h]
  int *v168; // [rsp+3C8h] [rbp+2C0h]
  __int64 v169; // [rsp+3D0h] [rbp+2C8h]
  int *v170; // [rsp+3D8h] [rbp+2D0h]
  __int64 v171; // [rsp+3E0h] [rbp+2D8h]
  int *v172; // [rsp+3E8h] [rbp+2E0h]
  __int64 v173; // [rsp+3F0h] [rbp+2E8h]
  unsigned int *v174; // [rsp+3F8h] [rbp+2F0h]
  __int64 v175; // [rsp+400h] [rbp+2F8h]
  unsigned int *v176; // [rsp+408h] [rbp+300h]
  __int64 v177; // [rsp+410h] [rbp+308h]
  _DWORD *v178; // [rsp+418h] [rbp+310h]
  __int64 v179; // [rsp+420h] [rbp+318h]
  char *v180; // [rsp+428h] [rbp+320h]
  _DWORD v181[6]; // [rsp+430h] [rbp+328h] BYREF
  WCHAR pwsz[4]; // [rsp+448h] [rbp+340h] BYREF
  WCHAR v183[4]; // [rsp+450h] [rbp+348h] BYREF
  __int16 v184; // [rsp+458h] [rbp+350h]
  WCHAR v185[4]; // [rsp+460h] [rbp+358h] BYREF
  __int64 v186; // [rsp+468h] [rbp+360h]
  __int64 v187; // [rsp+470h] [rbp+368h]
  int v188; // [rsp+478h] [rbp+370h]

  v51 = a2;
  *(_QWORD *)pwsz = 0LL;
  v3 = 0;
  v4 = 3;
  EtwActivityIdControl(3u, &ActivityId);
  HWMonitorBaseEDIDBlock = DXGMONITOR::_GetHWMonitorBaseEDIDBlock((DXGMONITOR *)a1, (unsigned __int8 **)pwsz, v5, v6);
  v8 = *(unsigned __int8 **)pwsz;
  if ( HWMonitorBaseEDIDBlock >= 0 )
    v3 = (int)EDIDV1_IsEDIDBaseBlock(*(unsigned __int8 **)pwsz) >= 0;
  v9 = *(_OWORD *)(a1 + 528);
  v10 = *(_OWORD *)(a1 + 572);
  v11 = *(_DWORD *)(a1 + 24);
  v82 = *(_DWORD *)(a1 + 544);
  v78 = *(_QWORD *)(a1 + 548);
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v81 = v9;
  v12 = *(_OWORD *)(a1 + 556);
  v83[1] = v10;
  v83[0] = v12;
  if ( (v11 & 0x400) != 0 )
  {
    v22 = HIDWORD(*(_QWORD *)(a1 + 408));
    v23 = HIDWORD(*(_QWORD *)(a1 + 408));
    v65 = 1;
    v66 = (v23 >> 1) & 1;
    v67 = ((unsigned int)v22 >> 2) & 1;
  }
  if ( v8 )
  {
    v49[0] = 0;
    *(_QWORD *)pwsz = 0LL;
    *(_QWORD *)v183 = 0LL;
    v184 = 0;
    *(_QWORD *)v185 = 0LL;
    v186 = 0LL;
    v187 = 0LL;
    v188 = 0;
    v50[0] = 0;
    v59 = 0;
    v60 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    EDIDV1_ObtainMonitorManufacturerName(v8, pwsz);
    EDIDV1_ObtainMonitorProductCodeID(v8, v183);
    EDIDV1_ObtainMonitorSerialNumber(v8, v185);
    EDIDV1_ObtainMonitorManufactureDate(v8, v49, v50);
    EDID_V1_GetPhysicalSize(v13, v8, &v59, &v60);
    v14 = *(_DWORD **)(a1 + 176);
    if ( v14 )
    {
      v53 = v14[5];
      v54 = v14[6];
      v55 = v14[2];
      v56 = v14[14];
      v57 = v14[7];
      v58 = v14[8];
    }
    if ( *(_DWORD *)(a1 + 112) > 1u
      && TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x400000000000uLL) )
    {
      if ( (unsigned int)(v30 - 1) <= 3 )
        v4 = v30 - 1;
      v31 = 136LL * v4;
      if ( !is_mul_ok(v4, 0x88uLL) )
        v31 = -1LL;
      v32 = (char *)operator new(v31, 0x4D677844u, PagedPool);
      if ( !v32 )
        v4 = 0;
      for ( i = 0; i < v4; *(_OWORD *)&v32[v35 + 120] = *(_OWORD *)(v36 + 136) )
      {
        v34 = (unsigned int)i + 1;
        v35 = 136LL * i++;
        *(_DWORD *)&v32[v35] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v34) + 8LL);
        *(_DWORD *)&v32[v35 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v34) + 12LL);
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v34);
        *(_OWORD *)&v32[v35 + 8] = *(_OWORD *)(v36 + 24);
        *(_OWORD *)&v32[v35 + 24] = *(_OWORD *)(v36 + 40);
        *(_OWORD *)&v32[v35 + 40] = *(_OWORD *)(v36 + 56);
        *(_OWORD *)&v32[v35 + 56] = *(_OWORD *)(v36 + 72);
        *(_OWORD *)&v32[v35 + 72] = *(_OWORD *)(v36 + 88);
        *(_OWORD *)&v32[v35 + 88] = *(_OWORD *)(v36 + 104);
        *(_OWORD *)&v32[v35 + 104] = *(_OWORD *)(v36 + 120);
      }
      if ( dword_1C006E810 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C006E810, 0x400000000020uLL) )
      {
        v85 = (unsigned __int16 *)&v52;
        LOWORD(v52) = 2;
        v86 = 2LL;
        v64 = MEMORY[0xFFFFF780000002C4];
        v87 = (unsigned int *)&v64;
        v63 = gDISeqId;
        gDISeqId += v37;
        v89 = &v63;
        v88 = 4LL;
        v90 = 4LL;
        v62 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x400000000000uLL);
        v91 = &v62;
        v92 = v38;
        v39 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x200000000000uLL);
        v40 = *(_QWORD *)(a1 + 16);
        v93 = &v61;
        v95 = &v51;
        v68 = *(_DWORD *)(a1 + 32);
        v97 = &v68;
        v99 = &v102;
        v101 = *(_QWORD *)(a1 + 80);
        v102 = *(unsigned __int16 *)(a1 + 72);
        v61 = v39;
        v94 = v41;
        v96 = v41;
        v98 = v41;
        v100 = 2LL;
        v103 = 0;
        v105 = v41;
        v107 = v41;
        v69 = v3;
        v104 = &v69;
        v106 = a1 + 28;
        v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) + 16LL) + 268LL);
        v108 = (WCHAR *)&v79;
        v109 = 8LL;
        v42 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v40 + 8) + 16LL) + 1224LL);
        v110 = &v113;
        v111 = 2LL;
        v43 = *v42;
        v112 = *((_QWORD *)v42 + 1);
        v113 = v43;
        v115 = &v118;
        v114 = 0;
        v117 = &v81;
        v116 = 2LL;
        v119 = &v122;
        v118 = 20LL;
        v121 = &v78;
        v123 = &v126;
        v125 = v83;
        v70 = *(_DWORD *)(a1 + 588);
        v127 = &v70;
        v71 = *(_DWORD *)(a1 + 592);
        v129 = &v71;
        v72 = *(_DWORD *)(a1 + 596);
        v131 = &v72;
        v73 = *(_DWORD *)(a1 + 600);
        v133 = &v73;
        v74 = *(unsigned __int8 *)(a1 + 604);
        v135 = (unsigned int *)&v74;
        v75 = *(unsigned __int8 *)(a1 + 605);
        v137 = (unsigned int *)&v75;
        v139 = &v65;
        v141 = &v66;
        v143 = &v67;
        LODWORD(v42) = ~(*(_DWORD *)(a1 + 24) >> 11);
        v120 = 2LL;
        v122 = 8LL;
        v76 = (unsigned __int8)v42 & 1;
        v145 = &v76;
        v147 = &v150;
        v151 = a1 + 112;
        v124 = 2LL;
        v126 = 32LL;
        v128 = v41;
        v130 = v41;
        v132 = v41;
        v134 = v41;
        v136 = v41;
        v138 = v41;
        v140 = v41;
        v142 = v41;
        v144 = v41;
        v146 = v41;
        v148 = 2LL;
        v149 = v8;
        v150 = 128LL;
        v152 = v41;
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v154, v183);
        TlgCreateWsz(&v155, v185);
        v45 = *(_QWORD *)(a1 + 176) == v44;
        v158 = v50;
        v46 = v44;
        v156 = v49;
        LOBYTE(v46) = !v45;
        v157 = 1LL;
        v77 = v46;
        v160 = &v77;
        v162 = &v53;
        v164 = &v54;
        v166 = &v55;
        v168 = &v56;
        v170 = &v57;
        v172 = &v58;
        v174 = &v59;
        v176 = &v60;
        v178 = v181;
        v159 = 2LL;
        v161 = v47;
        v163 = v47;
        v165 = v47;
        v181[0] = 136 * v4;
        v167 = v47;
        v169 = v47;
        v171 = v47;
        v173 = v47;
        v175 = v47;
        v177 = v47;
        v179 = 2LL;
        v180 = v32;
        v181[1] = v44;
        TlgWrite((TraceLoggingHProvider)&dword_1C006E810, &unk_1C0051F3A, &ActivityId, v48, 0x33u, &pData);
      }
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
    }
    else if ( dword_1C006E810 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C006E810, 0x800000000020uLL) )
      {
        v85 = (unsigned __int16 *)&v52;
        LOWORD(v52) = 2;
        v86 = 2LL;
        v77 = MEMORY[0xFFFFF780000002C4];
        v87 = (unsigned int *)&v77;
        v76 = gDISeqId;
        gDISeqId += v15;
        v89 = &v76;
        v88 = 4LL;
        v90 = 4LL;
        v75 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x400000000000uLL);
        v91 = &v75;
        v92 = 4LL;
        v16 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x200000000000uLL);
        v17 = *(_QWORD *)(a1 + 16);
        v93 = &v74;
        v73 = v51;
        v95 = &v73;
        v72 = *(_DWORD *)(a1 + 32);
        v97 = &v72;
        v99 = &v102;
        v101 = *(_QWORD *)(a1 + 80);
        v102 = *(unsigned __int16 *)(a1 + 72);
        v74 = v16;
        v94 = 4LL;
        v96 = 4LL;
        v98 = 4LL;
        v100 = 2LL;
        v103 = 0;
        v105 = 4LL;
        v107 = 4LL;
        v71 = v3;
        v104 = &v71;
        v106 = a1 + 28;
        v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL) + 268LL);
        v108 = (WCHAR *)&v79;
        v109 = 8LL;
        v18 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL) + 1224LL);
        v110 = &v113;
        v111 = 2LL;
        v19 = *v18;
        v112 = *((_QWORD *)v18 + 1);
        v113 = v19;
        v114 = 0;
        v115 = &v118;
        v116 = 2LL;
        v117 = &v81;
        v118 = 20LL;
        v119 = &v122;
        v120 = 2LL;
        v121 = &v78;
        v123 = &v126;
        v125 = v83;
        v70 = *(_DWORD *)(a1 + 588);
        v127 = &v70;
        v69 = *(_DWORD *)(a1 + 592);
        v129 = &v69;
        v68 = *(_DWORD *)(a1 + 596);
        v131 = &v68;
        v64 = *(_DWORD *)(a1 + 600);
        v133 = &v64;
        v63 = *(unsigned __int8 *)(a1 + 604);
        v135 = &v63;
        v62 = *(unsigned __int8 *)(a1 + 605);
        v137 = (unsigned int *)&v62;
        v139 = &v65;
        v141 = &v66;
        v143 = &v67;
        LODWORD(v18) = ~(*(_DWORD *)(a1 + 24) >> 11);
        v122 = 8LL;
        v124 = 2LL;
        v61 = (unsigned __int8)v18 & 1;
        v145 = (unsigned int *)&v61;
        v147 = &v150;
        v151 = a1 + 112;
        v126 = 32LL;
        v128 = 4LL;
        v130 = 4LL;
        v132 = 4LL;
        v134 = 4LL;
        v136 = 4LL;
        v138 = 4LL;
        v140 = 4LL;
        v142 = 4LL;
        v144 = 4LL;
        v146 = 4LL;
        v148 = 2LL;
        v149 = v8;
        v150 = 128LL;
        v152 = 4LL;
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v154, v183);
        TlgCreateWsz(&v155, v185);
        v157 = v20;
        v158 = v50;
        v156 = v49;
        v159 = 2LL;
        v161 = 4LL;
        v163 = 4LL;
        v51 = v14 != 0LL;
        v160 = &v51;
        v162 = &v53;
        v164 = &v54;
        v166 = &v55;
        v168 = &v56;
        v170 = &v57;
        v172 = &v58;
        v174 = &v59;
        v176 = &v60;
        v165 = 4LL;
        v167 = 4LL;
        v169 = 4LL;
        v171 = 4LL;
        v173 = 4LL;
        v175 = 4LL;
        v177 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C006E810, &unk_1C0051C57, &ActivityId, v21, 0x31u, &pData);
      }
    }
  }
  else if ( dword_1C006E810 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C006E810, 0x800000000020uLL) )
  {
    v85 = v50;
    v50[0] = 2;
    v86 = 2LL;
    v60 = MEMORY[0xFFFFF780000002C4];
    v87 = &v60;
    v59 = gDISeqId;
    gDISeqId += v24;
    v89 = &v59;
    v88 = 4LL;
    v90 = 4LL;
    v58 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x400000000000uLL);
    v91 = &v58;
    v92 = 4LL;
    v25 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C006E810, 0, 0x200000000000uLL);
    v26 = *(_QWORD *)(a1 + 16);
    v93 = &v57;
    v56 = v51;
    v95 = &v56;
    v55 = *(_DWORD *)(a1 + 32);
    v97 = &v55;
    v99 = &v102;
    v101 = *(_QWORD *)(a1 + 80);
    v102 = *(unsigned __int16 *)(a1 + 72);
    v57 = v25;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 2LL;
    v103 = 0;
    v105 = 4LL;
    v107 = 4LL;
    v54 = v3;
    v104 = &v54;
    v106 = a1 + 28;
    *(_QWORD *)pwsz = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) + 268LL);
    v108 = pwsz;
    v109 = 8LL;
    v27 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) + 1224LL);
    v110 = &v113;
    v111 = 2LL;
    v28 = *v27;
    v112 = *((_QWORD *)v27 + 1);
    v113 = v28;
    v114 = 0;
    v115 = &v118;
    v117 = &v81;
    v119 = &v122;
    v121 = &v78;
    v123 = &v126;
    v125 = v83;
    v53 = *(_DWORD *)(a1 + 588);
    v127 = &v53;
    v51 = *(_DWORD *)(a1 + 592);
    v129 = &v51;
    v52 = *(_DWORD *)(a1 + 596);
    v131 = &v52;
    v61 = *(_DWORD *)(a1 + 600);
    v133 = &v61;
    v62 = *(unsigned __int8 *)(a1 + 604);
    v135 = (unsigned int *)&v62;
    v63 = *(unsigned __int8 *)(a1 + 605);
    v137 = &v63;
    v139 = &v65;
    v141 = &v66;
    v143 = &v67;
    v116 = 2LL;
    v145 = (unsigned int *)&v64;
    v118 = 20LL;
    v120 = 2LL;
    v122 = 8LL;
    v124 = 2LL;
    v126 = 32LL;
    v128 = 4LL;
    v130 = 4LL;
    v132 = 4LL;
    v134 = 4LL;
    v136 = 4LL;
    v138 = 4LL;
    v140 = 4LL;
    v142 = 4LL;
    v144 = 4LL;
    v64 = (v11 & 0x800) == 0;
    v146 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C006E810, &unk_1C0052229, &ActivityId, v29, 0x20u, &pData);
  }
}
