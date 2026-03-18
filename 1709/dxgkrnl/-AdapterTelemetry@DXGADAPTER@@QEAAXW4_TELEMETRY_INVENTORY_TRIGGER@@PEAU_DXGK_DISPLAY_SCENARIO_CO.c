/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112FA0
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026800 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D494 (_TlgCreateWsz.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C0012468 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C0013E68 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int16 DriverVersion; // ax
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int v9; // r12d
  __int16 v10; // r14
  __int64 v11; // r10
  __int64 v12; // rdx
  BOOLEAN v13; // al
  int v14; // r11d
  BOOLEAN v15; // al
  const WCHAR *v16; // rdx
  int v17; // r10d
  unsigned __int16 *v18; // rax
  __int64 v19; // r11
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r11
  const GUID *v23; // r9
  int v24; // r10d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  GUID *p_ActivityId; // r8
  __int16 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v30; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v32; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v33; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v34; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  volatile unsigned int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  int v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v47; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v49; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v50; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v51; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+A4h] [rbp-5Ch] BYREF
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v59[24]; // [rsp+D8h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int16 *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  int *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  volatile unsigned int *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  int *v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  int v70; // [rsp+15Ch] [rbp+5Ch]
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  _DWORD *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  _DWORD v76[2]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  __int64 v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  __int64 v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h]
  __int16 *v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  __int64 v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  unsigned int *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  int *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  int *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  int *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  int *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  int *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  unsigned int *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  unsigned int *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  unsigned int *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  unsigned int *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  unsigned int *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  __int16 *v118; // [rsp+2E0h] [rbp+1E0h]
  __int64 v119; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v120; // [rsp+2F0h] [rbp+1F0h]
  __int64 v121; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v122; // [rsp+300h] [rbp+200h]
  __int64 v123; // [rsp+308h] [rbp+208h]
  __int16 *v124; // [rsp+310h] [rbp+210h]
  __int64 v125; // [rsp+318h] [rbp+218h]
  int *v126; // [rsp+320h] [rbp+220h]
  __int64 v127; // [rsp+328h] [rbp+228h]
  unsigned __int64 *v128; // [rsp+330h] [rbp+230h]
  __int64 v129; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v130; // [rsp+340h] [rbp+240h]
  __int64 v131; // [rsp+348h] [rbp+248h]
  unsigned __int64 *v132; // [rsp+350h] [rbp+250h]
  __int64 v133; // [rsp+358h] [rbp+258h]
  __int16 *v134; // [rsp+360h] [rbp+260h]
  __int64 v135; // [rsp+368h] [rbp+268h]
  __int16 *v136; // [rsp+370h] [rbp+270h]
  __int64 v137; // [rsp+378h] [rbp+278h]

  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v8 = *(_QWORD *)(v7 + 776);
  v9 = *(_DWORD *)(v7 + 248);
  v10 = DriverVersion;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)v7, (int *)&v36);
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)v59);
  v11 = *(_QWORD *)(a1 + 2312);
  if ( v11 || *(_QWORD *)(a1 + 2304) )
  {
    v12 = *(_QWORD *)(a1 + 2304);
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v29 = 0;
    v30 = 0;
    if ( v12 )
    {
      v29 = *(_WORD *)(*(_QWORD *)(v12 + 16) + 1184LL);
      v30 = *(_WORD *)(*(_QWORD *)(v12 + 16) + 1188LL);
    }
    if ( v11 && !*(_BYTE *)(a1 + 185) )
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v11 + 528),
        *(struct VIDMM_GLOBAL **)(v11 + 536),
        0,
        &v54,
        &v54,
        &v54,
        &v55,
        &v56,
        &v57);
    ++DXGADAPTER::sTelemetrySeqId;
    if ( dword_1C005F850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F850, 0x800000000004uLL) )
    {
      v31 = 3;
      v62 = &v31;
      v63 = 2LL;
      v37 = MEMORY[0xFFFFF780000002C4];
      v65 = 4LL;
      v64 = &v37;
      v38 = DXGADAPTER::sTelemetrySeqId;
      v66 = &v38;
      v67 = 4LL;
      v13 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C005F850, 0, 0x400000000000uLL);
      v70 = 0;
      v39 = v13;
      v68 = &v39;
      v69 = v14;
      v15 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C005F850, 0, 0x200000000000uLL);
      v16 = *(const WCHAR **)(a1 + 1320);
      v17 = v15;
      v71 = &v40;
      v18 = *(unsigned __int16 **)(a1 + 1248);
      v40 = v17;
      v73 = v76;
      v72 = v19;
      v74 = 2LL;
      v20 = *v18;
      v75 = *((_QWORD *)v18 + 1);
      v77 = a1 + 276;
      v79 = a1 + 280;
      v81 = a1 + 284;
      v83 = a1 + 288;
      v32 = *(_WORD *)(a1 + 292);
      v76[0] = v20;
      v85 = &v32;
      v76[1] = 0;
      v78 = v19;
      v80 = v19;
      v82 = v19;
      v84 = v19;
      v86 = 2LL;
      TlgCreateWsz(&pDesc, v16);
      v21 = *(_DWORD *)(a1 + 300);
      v90 = a1 + 1336;
      v23 = (const GUID *)(unsigned int)(v22 - 3);
      v89 = 8LL;
      v88 = a1 + 1328;
      v41 = (unsigned int)v23 & (v21 >> 6);
      v92 = &v41;
      v25 = v24;
      v91 = v22;
      v93 = v22;
      LOBYTE(v25) = v59[8] == (unsigned __int8)v24;
      v95 = v22;
      v42 = v25;
      v97 = v22;
      v94 = &v42;
      v43 = *(unsigned __int8 *)(a1 + 2175);
      v96 = &v43;
      v44 = *(unsigned __int8 *)(a1 + 2180);
      v98 = &v44;
      v26 = v24;
      LOBYTE(v26) = v8 != 0;
      v99 = v22;
      v45 = v26;
      v101 = v22;
      v100 = &v45;
      v27 = v24;
      LOBYTE(v27) = v9 > (unsigned int)v23;
      v103 = v22;
      v46 = v27;
      v102 = &v46;
      v47 = (unsigned int)v23 & (v21 >> 7);
      v104 = &v47;
      v105 = v22;
      v48 = (unsigned int)v23 & (v36 >> 3);
      v106 = &v48;
      v107 = v22;
      v49 = (unsigned int)v23 & (v36 >> 2);
      v108 = &v49;
      v50 = (unsigned int)v23 & v36;
      v51 = (unsigned int)v23 & (v36 >> 1);
      v109 = v22;
      v112 = &v51;
      v110 = &v50;
      v114 = &v36;
      v116 = &v52;
      v118 = &v33;
      v58 = *(_QWORD *)(a1 + 268);
      v120 = &v58;
      v111 = v22;
      v113 = v22;
      v115 = v22;
      v52 = (unsigned int)v23 & (v21 >> 17);
      v117 = v22;
      v33 = v10;
      v119 = 2LL;
      v121 = 8LL;
      v34 = *(_WORD *)(a1 + 2160);
      v122 = &v34;
      v35 = *(_WORD *)(a1 + 2164);
      v124 = &v35;
      v126 = &v53;
      v128 = &v55;
      v130 = &v56;
      v132 = &v57;
      v134 = &v29;
      v136 = &v30;
      v123 = 2LL;
      v125 = 2LL;
      v53 = a2;
      v127 = v22;
      v129 = 8LL;
      v131 = 8LL;
      v133 = 8LL;
      v135 = 2LL;
      v137 = 2LL;
      p_ActivityId = (GUID *)(a3 + 8);
      if ( !a3 )
        p_ActivityId = &ActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_1C005F850, &unk_1C00403D1, p_ActivityId, v23, 0x28u, &pData);
    }
  }
}
