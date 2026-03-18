/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C
 * Callers:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C022CB64 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02356F4 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0235754 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0237E70 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0238400 (-_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0002748 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0007C58 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0008E88 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0018614 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C00186C8 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C0018768 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C0047EC4 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00480F0 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C0048234 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00AE384 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int16 v6; // r13
  int v7; // r11d
  __int64 v8; // rdi
  __int64 **v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  int v19; // r11d
  __int64 v20; // rax
  char *v21; // r12
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  size_t v26; // rsi
  const void *v27; // rdx
  __int64 v28; // rax
  bool v29; // zf
  int v30; // r15d
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // xmm0_8
  struct HDXGMONITOR__ *MonitorHandle; // rax
  struct HDXGMONITOR__ *v37; // rax
  char *v38; // rsi
  unsigned __int8 *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  unsigned int v43; // eax
  SIZE_T v44; // rax
  unsigned __int8 i; // r9
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r9d
  BOOLEAN v51; // al
  BOOLEAN v52; // al
  __int64 v53; // r11
  __int64 v54; // rdx
  unsigned __int16 *v55; // rax
  int v56; // ecx
  unsigned __int8 *v57; // rax
  __int64 v58; // r10
  int v59; // eax
  LPCGUID v60; // r9
  __int16 v61; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 v62; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned __int8 v63; // [rsp+3Bh] [rbp-CDh] BYREF
  int v64; // [rsp+3Ch] [rbp-CCh]
  unsigned __int16 v65[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v66; // [rsp+44h] [rbp-C4h] BYREF
  int v67; // [rsp+48h] [rbp-C0h] BYREF
  int v68; // [rsp+4Ch] [rbp-BCh] BYREF
  int v69; // [rsp+50h] [rbp-B8h] BYREF
  int v70; // [rsp+54h] [rbp-B4h] BYREF
  int v71; // [rsp+58h] [rbp-B0h] BYREF
  int v72; // [rsp+5Ch] [rbp-ACh] BYREF
  int v73; // [rsp+60h] [rbp-A8h] BYREF
  int v74; // [rsp+64h] [rbp-A4h] BYREF
  int v75; // [rsp+68h] [rbp-A0h] BYREF
  int v76; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v77; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v78; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v79; // [rsp+78h] [rbp-90h] BYREF
  int v80; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v81; // [rsp+80h] [rbp-88h] BYREF
  int v82; // [rsp+84h] [rbp-84h] BYREF
  int v83; // [rsp+88h] [rbp-80h] BYREF
  int v84; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v85; // [rsp+90h] [rbp-78h] BYREF
  int v86; // [rsp+94h] [rbp-74h] BYREF
  int v87; // [rsp+98h] [rbp-70h] BYREF
  int v88; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v89; // [rsp+A0h] [rbp-68h] BYREF
  int v90; // [rsp+A4h] [rbp-64h] BYREF
  int v91; // [rsp+A8h] [rbp-60h] BYREF
  int v92; // [rsp+ACh] [rbp-5Ch] BYREF
  int v93; // [rsp+B0h] [rbp-58h] BYREF
  int v94; // [rsp+B4h] [rbp-54h] BYREF
  int v95; // [rsp+B8h] [rbp-50h] BYREF
  int v96; // [rsp+BCh] [rbp-4Ch] BYREF
  int v97; // [rsp+C0h] [rbp-48h] BYREF
  int v98; // [rsp+C4h] [rbp-44h] BYREF
  size_t v99; // [rsp+C8h] [rbp-40h]
  __int64 v100; // [rsp+D0h] [rbp-38h] BYREF
  int v101; // [rsp+D8h] [rbp-30h]
  __int64 v102; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v103; // [rsp+F0h] [rbp-18h] BYREF
  int v104; // [rsp+100h] [rbp-8h]
  GUID ActivityId; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v106[2]; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v108; // [rsp+158h] [rbp+50h]
  __int64 v109; // [rsp+160h] [rbp+58h]
  unsigned int *v110; // [rsp+168h] [rbp+60h]
  __int64 v111; // [rsp+170h] [rbp+68h]
  int *v112; // [rsp+178h] [rbp+70h]
  int v113; // [rsp+180h] [rbp+78h]
  int v114; // [rsp+184h] [rbp+7Ch]
  int *v115; // [rsp+188h] [rbp+80h]
  __int64 v116; // [rsp+190h] [rbp+88h]
  int *v117; // [rsp+198h] [rbp+90h]
  __int64 v118; // [rsp+1A0h] [rbp+98h]
  int *v119; // [rsp+1A8h] [rbp+A0h]
  __int64 v120; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v121; // [rsp+1B8h] [rbp+B0h]
  __int64 v122; // [rsp+1C0h] [rbp+B8h]
  __int64 v123; // [rsp+1C8h] [rbp+C0h]
  _DWORD v124[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  int *v125; // [rsp+1D8h] [rbp+D0h]
  __int64 v126; // [rsp+1E0h] [rbp+D8h]
  __int64 v127; // [rsp+1E8h] [rbp+E0h]
  __int64 v128; // [rsp+1F0h] [rbp+E8h]
  __int64 *v129; // [rsp+1F8h] [rbp+F0h]
  __int64 v130; // [rsp+200h] [rbp+F8h]
  _DWORD *v131; // [rsp+208h] [rbp+100h]
  __int64 v132; // [rsp+210h] [rbp+108h]
  __int64 v133; // [rsp+218h] [rbp+110h]
  _DWORD v134[2]; // [rsp+220h] [rbp+118h] BYREF
  _QWORD *v135; // [rsp+228h] [rbp+120h]
  __int64 v136; // [rsp+230h] [rbp+128h]
  __int128 *v137; // [rsp+238h] [rbp+130h]
  _QWORD v138[4]; // [rsp+240h] [rbp+138h] BYREF
  _QWORD v139[4]; // [rsp+260h] [rbp+158h] BYREF
  _QWORD v140[36]; // [rsp+280h] [rbp+178h] BYREF
  _DWORD v141[2]; // [rsp+3A0h] [rbp+298h] BYREF
  __int64 v142; // [rsp+3A8h] [rbp+2A0h]
  __int64 v143; // [rsp+3B0h] [rbp+2A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+3C8h] [rbp+2C0h] BYREF
  unsigned __int8 *v146; // [rsp+3D8h] [rbp+2D0h]
  __int64 v147; // [rsp+3E0h] [rbp+2D8h]
  unsigned __int16 *v148; // [rsp+3E8h] [rbp+2E0h]
  __int64 v149; // [rsp+3F0h] [rbp+2E8h]
  int *v150; // [rsp+3F8h] [rbp+2F0h]
  __int64 v151; // [rsp+400h] [rbp+2F8h]
  int *v152; // [rsp+408h] [rbp+300h]
  __int64 v153; // [rsp+410h] [rbp+308h]
  int *v154; // [rsp+418h] [rbp+310h]
  __int64 v155; // [rsp+420h] [rbp+318h]
  int *v156; // [rsp+428h] [rbp+320h]
  __int64 v157; // [rsp+430h] [rbp+328h]
  int *v158; // [rsp+438h] [rbp+330h]
  __int64 v159; // [rsp+440h] [rbp+338h]
  int *v160; // [rsp+448h] [rbp+340h]
  __int64 v161; // [rsp+450h] [rbp+348h]
  int *v162; // [rsp+458h] [rbp+350h]
  __int64 v163; // [rsp+460h] [rbp+358h]
  unsigned int *v164; // [rsp+468h] [rbp+360h]
  __int64 v165; // [rsp+470h] [rbp+368h]
  unsigned int *v166; // [rsp+478h] [rbp+370h]
  __int64 v167; // [rsp+480h] [rbp+378h]
  _DWORD *v168; // [rsp+488h] [rbp+380h]
  __int64 v169; // [rsp+490h] [rbp+388h]
  char *v170; // [rsp+498h] [rbp+390h]
  _DWORD v171[2]; // [rsp+4A0h] [rbp+398h] BYREF
  int *v172; // [rsp+4A8h] [rbp+3A0h]
  __int64 v173; // [rsp+4B0h] [rbp+3A8h]
  _DWORD *v174; // [rsp+4B8h] [rbp+3B0h]
  __int64 v175; // [rsp+4C0h] [rbp+3B8h]
  char *v176; // [rsp+4C8h] [rbp+3C0h]
  _DWORD v177[2]; // [rsp+4D0h] [rbp+3C8h] BYREF
  WCHAR v178[4]; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int16 v179; // [rsp+4E0h] [rbp+3D8h]
  WCHAR pwsz[4]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v70 = a2;
  EtwActivityIdControl(3u, &ActivityId);
  v6 = 0;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v66 = v7;
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_14;
  v9 = *(__int64 ***)(a1 + 136);
  if ( !v9 )
    goto LABEL_14;
  v10 = *v9;
  if ( !v10 )
    goto LABEL_14;
  do
  {
    if ( *((_DWORD *)v10 + 2) == 2 )
      break;
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v11 = (__int64)(v10 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v10 + 24);
    v16 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v8 = v11;
      LODWORD(v16) = 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v11;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdWarning(v17);
      MonitorLogBadEDID(v11, v16);
    }
    if ( (int)v16 >= 0 )
    {
      v18 = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8);
      v19 = (unsigned __int8)v19;
      if ( v18 >= 0 )
        v19 = 1;
      v66 = v19;
    }
  }
  else
  {
LABEL_14:
    v20 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdWarning(v20);
  }
  v21 = 0LL;
  LOBYTE(v64) = 0;
  LODWORD(v99) = 0;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v22 = (char *)operator new[](*(unsigned int *)(a1 + 176), 0x4D677844u, PagedPool);
    v21 = v22;
    if ( v22 )
    {
      v26 = *(unsigned int *)(a1 + 176);
      v27 = *(const void **)(a1 + 168);
      LOBYTE(v64) = 1;
      v99 = v26;
      memmove(v22, v27, v26);
      DisplayID_Initialize((struct DisplayIDObj *)&v100, v21, *(_DWORD *)(a1 + 176));
      DisplayID_UpdateForTelemetry((struct DisplayIDObj *)&v100);
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      WdLogEvent5_WdWarning(v28);
    }
  }
  v29 = (*(_DWORD *)(a1 + 40) & 0x400) == 0;
  LOBYTE(v30) = 0;
  v31 = *(_OWORD *)(a1 + 588);
  v32 = *(_OWORD *)(a1 + 632);
  v104 = *(_DWORD *)(a1 + 604);
  v33 = *(_QWORD *)(a1 + 608);
  v103 = v31;
  v102 = v33;
  v34 = *(_OWORD *)(a1 + 616);
  v106[1] = v32;
  v106[0] = v34;
  if ( v29 )
  {
    v67 = 0;
  }
  else
  {
    v35 = *(_QWORD *)(a1 + 464);
    v101 = *(_DWORD *)(a1 + 472);
    v100 = v35;
    v67 = 1;
    v30 = (HIDWORD(v35) >> 1) & 1;
    if ( (v35 & 0x400000000LL) != 0 )
    {
      v68 = 1;
      goto LABEL_24;
    }
  }
  v68 = 0;
LABEL_24:
  v61 = 0;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)a1);
  MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, (char *)&v61, (bool *)&v61 + 1);
  v62 = 0;
  v37 = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)a1);
  MonitorIsMonitorAndDriverWCGCapable(v37, (char *)&v62);
  v63 = 0;
  *(_QWORD *)pwsz = 0LL;
  *(_QWORD *)v178 = 0LL;
  v179 = 0;
  v65[0] = 0;
  v38 = 0LL;
  v77 = 0;
  v78 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v39 = (unsigned __int8 *)operator new[](0x80uLL, 0x4D677844u, PagedPool);
  if ( v39 )
  {
    if ( v8 )
    {
      EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)v8, pwsz);
      EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)v8, v178);
      EDIDV1_ObtainMonitorManufactureDate((unsigned __int8 *)v8, &v63, v65);
      EDID_V1_GetPhysicalSize(v40, (unsigned __int8 *)v8, &v77, &v78);
      *(_OWORD *)v39 = *(_OWORD *)v8;
      *((_OWORD *)v39 + 1) = *(_OWORD *)(v8 + 16);
      *((_OWORD *)v39 + 2) = *(_OWORD *)(v8 + 32);
      *((_OWORD *)v39 + 3) = *(_OWORD *)(v8 + 48);
      *((_OWORD *)v39 + 4) = *(_OWORD *)(v8 + 64);
      *((_OWORD *)v39 + 5) = *(_OWORD *)(v8 + 80);
      *((_OWORD *)v39 + 6) = *(_OWORD *)(v8 + 96);
      *((_OWORD *)v39 + 7) = *(_OWORD *)(v8 + 112);
      EDID_V1_RemovePII(v41, v39);
      v42 = *(_DWORD **)(a1 + 232);
      if ( v42 )
      {
        v71 = v42[5];
        v72 = v42[6];
        v73 = v42[2];
        v74 = v42[14];
        v75 = v42[7];
        v76 = v42[8];
      }
      v43 = *(_DWORD *)(a1 + 128);
      if ( v43 > 1 )
      {
        if ( v43 < 4 )
          v6 = v43 - 1;
        else
          v6 = 3;
        v44 = 136LL * v6;
        if ( !is_mul_ok(v6, 0x88uLL) )
          v44 = -1LL;
        v38 = (char *)operator new[](v44, 0x4D677844u, PagedPool);
        if ( v38 )
        {
          for ( i = 0; i < v6; *(_OWORD *)&v38[v46 + 120] = *(_OWORD *)(v49 + 136) )
          {
            v46 = 136LL * i;
            v47 = i++;
            v48 = (unsigned int)(v47 + 1);
            *(_DWORD *)&v38[v46] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8 * v48) + 8LL);
            *(_DWORD *)&v38[v46 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)v48) + 12LL);
            v49 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)v48);
            *(_OWORD *)&v38[v46 + 8] = *(_OWORD *)(v49 + 24);
            *(_OWORD *)&v38[v46 + 24] = *(_OWORD *)(v49 + 40);
            *(_OWORD *)&v38[v46 + 40] = *(_OWORD *)(v49 + 56);
            *(_OWORD *)&v38[v46 + 56] = *(_OWORD *)(v49 + 72);
            *(_OWORD *)&v38[v46 + 72] = *(_OWORD *)(v49 + 88);
            *(_OWORD *)&v38[v46 + 88] = *(_OWORD *)(v49 + 104);
            *(_OWORD *)&v38[v46 + 104] = *(_OWORD *)(v49 + 120);
          }
        }
        else
        {
          v6 = 0;
        }
      }
    }
    if ( dword_1C0079090 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x800000000020uLL) )
    {
      v109 = 2LL;
      LOWORD(v69) = 8;
      v111 = 4LL;
      v108 = &v69;
      v79 = gDISeqId;
      gDISeqId += v50;
      v110 = &v79;
      v51 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079090, 0, 0x400000000000uLL);
      v114 = 0;
      v80 = v51;
      v112 = &v80;
      v113 = 4;
      v52 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079090, 0, 0x200000000000uLL);
      v54 = *(_QWORD *)(a1 + 32);
      v115 = &v81;
      v117 = &v70;
      v82 = *(_DWORD *)(a1 + 48);
      v119 = &v82;
      v121 = v124;
      v123 = *(_QWORD *)(a1 + 96);
      v124[0] = *(unsigned __int16 *)(a1 + 88);
      v66 = (unsigned __int8)v66;
      v125 = &v66;
      v127 = a1 + 44;
      v81 = v52;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 4LL;
      v122 = 2LL;
      v124[1] = 0;
      v126 = 4LL;
      v128 = 4LL;
      v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 268LL);
      v129 = &v100;
      v130 = 8LL;
      v55 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 1344LL);
      v131 = v134;
      v132 = 2LL;
      v56 = *v55;
      v133 = *((_QWORD *)v55 + 1);
      v135 = v138;
      v134[0] = v56;
      v134[1] = 0;
      v136 = 2LL;
      v137 = &v103;
      v138[1] = v139;
      v138[3] = &v102;
      v139[1] = v140;
      v139[3] = v106;
      v83 = *(_DWORD *)(a1 + 648);
      v140[1] = &v83;
      v84 = *(_DWORD *)(a1 + 652);
      v140[3] = &v84;
      v85 = *(_DWORD *)(a1 + 656);
      v140[5] = &v85;
      v86 = *(_DWORD *)(a1 + 660);
      v140[7] = &v86;
      v87 = *(unsigned __int8 *)(a1 + 668);
      v140[9] = &v87;
      v88 = *(unsigned __int8 *)(a1 + 676);
      v140[11] = &v88;
      v140[13] = &v67;
      v89 = (unsigned __int8)v30;
      v140[15] = &v89;
      v140[17] = &v68;
      v90 = (unsigned __int8)v61;
      v140[19] = &v90;
      v91 = HIBYTE(v61);
      v140[21] = &v91;
      v92 = v62;
      v140[23] = &v92;
      LOBYTE(v55) = ~(unsigned __int8)(*(_DWORD *)(a1 + 40) >> 11);
      v138[0] = 20LL;
      v138[2] = 2LL;
      v93 = (unsigned __int8)v55 & 1;
      v140[25] = &v93;
      v139[0] = 8LL;
      v139[2] = 2LL;
      v140[0] = 32LL;
      v140[2] = 4LL;
      v140[4] = 4LL;
      v140[6] = 4LL;
      v140[8] = 4LL;
      v140[10] = 4LL;
      v140[12] = 4LL;
      v140[14] = 4LL;
      v140[16] = 4LL;
      v140[18] = 4LL;
      v140[20] = 4LL;
      v140[22] = 4LL;
      v140[24] = 4LL;
      v94 = *(unsigned __int8 *)(a1 + 677);
      v140[27] = &v94;
      v95 = *(_DWORD *)(a1 + 664);
      v140[29] = &v95;
      v96 = *(_DWORD *)(a1 + 472);
      v140[31] = &v96;
      v140[33] = v141;
      v140[26] = 4LL;
      v57 = 0LL;
      v140[28] = 4LL;
      v140[30] = 4LL;
      v140[32] = 4LL;
      v141[0] = v8 != 0 ? 0x80 : 0;
      v140[34] = 2LL;
      v141[1] = 0;
      if ( v8 )
        v57 = v39;
      v142 = v53;
      v140[35] = v57;
      v143 = 4LL;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v145, v178);
      v29 = *(_QWORD *)(a1 + 232) == v58;
      v148 = v65;
      v59 = v58;
      v146 = &v63;
      LOBYTE(v59) = !v29;
      v147 = 1LL;
      v97 = v59;
      v150 = &v97;
      v152 = &v71;
      v154 = &v72;
      v156 = &v73;
      v158 = &v74;
      v160 = &v75;
      v162 = &v76;
      v164 = &v77;
      v166 = &v78;
      v168 = v171;
      v149 = 2LL;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 4LL;
      v163 = 4LL;
      v165 = 4LL;
      v167 = 4LL;
      v169 = 2LL;
      v170 = v38;
      v98 = (unsigned __int8)v64;
      v172 = &v98;
      v174 = v177;
      v177[0] = v99;
      v171[0] = 136 * v6;
      v171[1] = v58;
      v173 = 4LL;
      v175 = 2LL;
      v176 = v21;
      v177[1] = v58;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C0059974, &ActivityId, v60, 0x3Au, &pData);
    }
    operator delete[](v39);
    if ( v38 )
      operator delete[](v38);
  }
  if ( v21 )
    operator delete[](v21);
}
