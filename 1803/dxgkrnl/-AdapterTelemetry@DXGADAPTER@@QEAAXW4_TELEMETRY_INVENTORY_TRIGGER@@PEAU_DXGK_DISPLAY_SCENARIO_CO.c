/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147E6C
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030480 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0007C58 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C001ABBC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C003EE4C (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

char __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int16 DriverVersion; // ax
  __int64 v7; // rcx
  __int64 v8; // r12
  __int16 v9; // r15
  unsigned int v10; // r13d
  int v11; // edi
  char result; // al
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r11
  int v16; // r10d
  unsigned __int16 *v17; // rax
  __int64 v18; // r11
  int v19; // ecx
  const WCHAR *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r11
  const GUID *v23; // r9
  GUID *p_ActivityId; // r8
  __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v26; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v28; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v29; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v30; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  volatile unsigned int v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v38; // [rsp+78h] [rbp-88h] BYREF
  BOOL v39; // [rsp+7Ch] [rbp-84h] BYREF
  int v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v42; // [rsp+88h] [rbp-78h] BYREF
  BOOL v43; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v44; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v45; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v46; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v47; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A4h] [rbp-5Ch] BYREF
  int v50; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[24]; // [rsp+D8h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int16 *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  volatile unsigned int *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  int *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  int *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  _DWORD *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  __int64 v71; // [rsp+180h] [rbp+80h]
  _DWORD v72[2]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  __int64 v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  __int64 v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  __int64 v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  __int16 *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v84; // [rsp+1F0h] [rbp+F0h]
  __int64 v85; // [rsp+1F8h] [rbp+F8h]
  __int64 v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]
  unsigned int *v88; // [rsp+210h] [rbp+110h]
  __int64 v89; // [rsp+218h] [rbp+118h]
  BOOL *v90; // [rsp+220h] [rbp+120h]
  __int64 v91; // [rsp+228h] [rbp+128h]
  int *v92; // [rsp+230h] [rbp+130h]
  __int64 v93; // [rsp+238h] [rbp+138h]
  int *v94; // [rsp+240h] [rbp+140h]
  __int64 v95; // [rsp+248h] [rbp+148h]
  BOOL *v96; // [rsp+250h] [rbp+150h]
  __int64 v97; // [rsp+258h] [rbp+158h]
  BOOL *v98; // [rsp+260h] [rbp+160h]
  __int64 v99; // [rsp+268h] [rbp+168h]
  unsigned int *v100; // [rsp+270h] [rbp+170h]
  __int64 v101; // [rsp+278h] [rbp+178h]
  unsigned int *v102; // [rsp+280h] [rbp+180h]
  __int64 v103; // [rsp+288h] [rbp+188h]
  unsigned int *v104; // [rsp+290h] [rbp+190h]
  __int64 v105; // [rsp+298h] [rbp+198h]
  unsigned int *v106; // [rsp+2A0h] [rbp+1A0h]
  __int64 v107; // [rsp+2A8h] [rbp+1A8h]
  unsigned int *v108; // [rsp+2B0h] [rbp+1B0h]
  __int64 v109; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v110; // [rsp+2C0h] [rbp+1C0h]
  __int64 v111; // [rsp+2C8h] [rbp+1C8h]
  int *v112; // [rsp+2D0h] [rbp+1D0h]
  __int64 v113; // [rsp+2D8h] [rbp+1D8h]
  __int16 *v114; // [rsp+2E0h] [rbp+1E0h]
  __int64 v115; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v116; // [rsp+2F0h] [rbp+1F0h]
  __int64 v117; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v118; // [rsp+300h] [rbp+200h]
  __int64 v119; // [rsp+308h] [rbp+208h]
  __int16 *v120; // [rsp+310h] [rbp+210h]
  __int64 v121; // [rsp+318h] [rbp+218h]
  __int16 *v122; // [rsp+320h] [rbp+220h]
  __int64 v123; // [rsp+328h] [rbp+228h]
  int *v124; // [rsp+330h] [rbp+230h]
  __int64 v125; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v126; // [rsp+340h] [rbp+240h]
  __int64 v127; // [rsp+348h] [rbp+248h]
  unsigned __int64 *v128; // [rsp+350h] [rbp+250h]
  __int64 v129; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v130; // [rsp+360h] [rbp+260h]
  __int64 v131; // [rsp+368h] [rbp+268h]
  __int16 *v132; // [rsp+370h] [rbp+270h]
  __int64 v133; // [rsp+378h] [rbp+278h]
  __int16 *v134; // [rsp+380h] [rbp+280h]
  __int64 v135; // [rsp+388h] [rbp+288h]

  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v8 = *(_QWORD *)(v7 + 776);
  v9 = DriverVersion;
  v10 = *(_DWORD *)(v7 + 248);
  if ( (*(_DWORD *)(v7 + 300) & 0x20000) != 0 || (v11 = 0, (*(_DWORD *)(v7 + 2344) & 2) != 0) )
    v11 = 1;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v33);
  EtwActivityIdControl(3u, &ActivityId);
  result = DxgkMiracastQueryMiracastSupportNoLock((__int64)v56);
  v13 = *(_QWORD *)(a1 + 2464);
  if ( v13 || *(_QWORD *)(a1 + 2456) )
  {
    v14 = *(_QWORD *)(a1 + 2456);
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v25 = 0;
    v26 = 0;
    if ( v14 )
    {
      v25 = *(_WORD *)(*(_QWORD *)(v14 + 16) + 1280LL);
      v26 = *(_WORD *)(*(_QWORD *)(v14 + 16) + 1284LL);
    }
    if ( v13 && !*(_BYTE *)(a1 + 185) )
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v13 + 544),
        *(struct VIDMM_GLOBAL **)(v13 + 552),
        0,
        &v51,
        &v51,
        &v51,
        &v52,
        &v53,
        &v54);
    result = ++DXGADAPTER::sTelemetrySeqId;
    if ( dword_1C0079BB0 > 5u )
    {
      result = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079BB0, 0x800000000004uLL);
      if ( result )
      {
        v60 = 2LL;
        v27 = 4;
        v59 = &v27;
        v34 = MEMORY[0xFFFFF780000002C4];
        v62 = 4LL;
        v61 = &v34;
        v35 = DXGADAPTER::sTelemetrySeqId;
        v63 = &v35;
        v64 = 4LL;
        v36 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079BB0, 0, 0x400000000000uLL);
        v65 = &v36;
        v66 = v15;
        v16 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0079BB0, 0, 0x200000000000uLL);
        v69 = v72;
        v67 = &v37;
        v17 = *(unsigned __int16 **)(a1 + 1344);
        v37 = v16;
        v68 = v18;
        v70 = 2LL;
        v19 = *v17;
        v71 = *((_QWORD *)v17 + 1);
        v73 = a1 + 276;
        v75 = a1 + 280;
        v77 = a1 + 284;
        v79 = a1 + 288;
        v28 = *(_WORD *)(a1 + 292);
        v72[0] = v19;
        v72[1] = 0;
        v20 = *(const WCHAR **)(a1 + 1416);
        v81 = &v28;
        v74 = v18;
        v76 = v18;
        v78 = v18;
        v80 = v18;
        v82 = 2LL;
        TlgCreateWsz(&pDesc, v20);
        v85 = 8LL;
        v86 = a1 + 1432;
        v84 = a1 + 1424;
        v21 = *(_DWORD *)(a1 + 300);
        v23 = (const GUID *)(unsigned int)(v22 - 3);
        v87 = v22;
        v89 = v22;
        v38 = (unsigned int)v23 & (v21 >> 6);
        v88 = &v38;
        v91 = v22;
        v39 = v56[8] == 0;
        v93 = v22;
        v90 = &v39;
        v40 = *(unsigned __int8 *)(a1 + 2311);
        v92 = &v40;
        v41 = *(unsigned __int8 *)(a1 + 2316);
        v94 = &v41;
        v95 = v22;
        v42 = v8 != 0;
        v97 = v22;
        v96 = &v42;
        v99 = v22;
        v43 = v10 > (unsigned int)v23;
        v98 = &v43;
        v44 = (unsigned int)v23 & (v21 >> 7);
        v100 = &v44;
        v101 = v22;
        v45 = (unsigned int)v23 & (v33 >> 3);
        v102 = &v45;
        v103 = v22;
        v46 = (unsigned int)v23 & (v33 >> 2);
        v104 = &v46;
        v47 = (unsigned int)v23 & v33;
        v48 = (unsigned int)v23 & (v33 >> 1);
        v105 = v22;
        v108 = &v48;
        v110 = &v33;
        v112 = &v49;
        v29 = *(_WORD *)(a1 + 1472);
        v114 = &v29;
        v116 = &v30;
        v55 = *(_QWORD *)(a1 + 268);
        v106 = &v47;
        v107 = v22;
        v109 = v22;
        v111 = v22;
        v49 = v11;
        v113 = v22;
        v115 = 2LL;
        v30 = v9;
        v117 = 2LL;
        v118 = &v55;
        v31 = *(_WORD *)(a1 + 2296);
        v120 = &v31;
        v32 = *(_WORD *)(a1 + 2300);
        v122 = &v32;
        v124 = &v50;
        v126 = &v52;
        v128 = &v53;
        v130 = &v54;
        v132 = &v25;
        v134 = &v26;
        v119 = 8LL;
        v121 = 2LL;
        v123 = 2LL;
        v50 = a2;
        v125 = v22;
        v127 = 8LL;
        v129 = 8LL;
        v131 = 8LL;
        v133 = 2LL;
        v135 = 2LL;
        p_ActivityId = (GUID *)(a3 + 8);
        if ( !a3 )
          p_ActivityId = &ActivityId;
        return TlgWrite((TraceLoggingHProvider)&dword_1C0079BB0, &unk_1C0057E01, p_ActivityId, v23, 0x29u, &pData);
      }
    }
  }
  return result;
}
