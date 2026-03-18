/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x180168D1C
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180167BA0 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180168680 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180168940 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800291A0 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BEF38 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180166940 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *v7; // rdx
  __int128 v8; // xmm0
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // ecx
  struct IMessageCallSendHost *v12; // rbx
  int ManipulationManager; // eax
  unsigned int v14; // edi
  struct CManipulationManager *v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int128 v26; // xmm0
  int v27; // eax
  struct CManipulationManager *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  CManipulation *v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+F0h] [rbp-10h]
  __int128 v46; // [rsp+100h] [rbp+0h]
  __int128 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  _OWORD v50[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v51[64]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  CManipulation **v53; // [rsp+1D0h] [rbp+D0h]
  __int64 v54; // [rsp+1D8h] [rbp+D8h]
  char *v55; // [rsp+1E0h] [rbp+E0h]
  const GUID *v56; // [rsp+1E8h] [rbp+E8h]
  char *v57; // [rsp+1F0h] [rbp+F0h]
  const GUID *v58; // [rsp+1F8h] [rbp+F8h]
  char *v59; // [rsp+200h] [rbp+100h]
  const GUID *v60; // [rsp+208h] [rbp+108h]
  char *v61; // [rsp+210h] [rbp+110h]
  const GUID *v62; // [rsp+218h] [rbp+118h]
  char *v63; // [rsp+220h] [rbp+120h]
  const GUID *v64; // [rsp+228h] [rbp+128h]
  char *v65; // [rsp+230h] [rbp+130h]
  const GUID *v66; // [rsp+238h] [rbp+138h]
  char *v67; // [rsp+240h] [rbp+140h]
  const GUID *v68; // [rsp+248h] [rbp+148h]
  char *v69; // [rsp+250h] [rbp+150h]
  const GUID *v70; // [rsp+258h] [rbp+158h]
  char *v71; // [rsp+260h] [rbp+160h]
  const GUID *v72; // [rsp+268h] [rbp+168h]
  char *v73; // [rsp+270h] [rbp+170h]
  const GUID *v74; // [rsp+278h] [rbp+178h]
  char *v75; // [rsp+280h] [rbp+180h]
  const GUID *v76; // [rsp+288h] [rbp+188h]
  char *v77; // [rsp+290h] [rbp+190h]
  const GUID *v78; // [rsp+298h] [rbp+198h]
  char *v79; // [rsp+2A0h] [rbp+1A0h]
  const GUID *v80; // [rsp+2A8h] [rbp+1A8h]
  char *v81; // [rsp+2B0h] [rbp+1B0h]
  const GUID *v82; // [rsp+2B8h] [rbp+1B8h]
  char *v83; // [rsp+2C0h] [rbp+1C0h]
  const GUID *v84; // [rsp+2C8h] [rbp+1C8h]
  char *v85; // [rsp+2D0h] [rbp+1D0h]
  const GUID *v86; // [rsp+2D8h] [rbp+1D8h]
  char *v87; // [rsp+2E0h] [rbp+1E0h]
  const GUID *v88; // [rsp+2E8h] [rbp+1E8h]
  char *v89; // [rsp+2F0h] [rbp+1F0h]
  const GUID *v90; // [rsp+2F8h] [rbp+1F8h]
  char *v91; // [rsp+300h] [rbp+200h]
  const GUID *v92; // [rsp+308h] [rbp+208h]
  char *v93; // [rsp+310h] [rbp+210h]
  const GUID *v94; // [rsp+318h] [rbp+218h]
  char *v95; // [rsp+320h] [rbp+220h]
  const GUID *v96; // [rsp+328h] [rbp+228h]
  char *v97; // [rsp+330h] [rbp+230h]
  const GUID *v98; // [rsp+338h] [rbp+238h]
  char *v99; // [rsp+340h] [rbp+240h]
  const GUID *v100; // [rsp+348h] [rbp+248h]
  char *v101; // [rsp+350h] [rbp+250h]
  const GUID *v102; // [rsp+358h] [rbp+258h]
  char *v103; // [rsp+360h] [rbp+260h]
  const GUID *v104; // [rsp+368h] [rbp+268h]
  char *v105; // [rsp+370h] [rbp+270h]
  const GUID *v106; // [rsp+378h] [rbp+278h]
  char *v107; // [rsp+380h] [rbp+280h]
  const GUID *v108; // [rsp+388h] [rbp+288h]
  char *v109; // [rsp+390h] [rbp+290h]
  const GUID *v110; // [rsp+398h] [rbp+298h]
  char *v111; // [rsp+3A0h] [rbp+2A0h]
  const GUID *v112; // [rsp+3A8h] [rbp+2A8h]
  char *v113; // [rsp+3B0h] [rbp+2B0h]
  const GUID *v114; // [rsp+3B8h] [rbp+2B8h]
  int *v115; // [rsp+3C0h] [rbp+2C0h]
  const GUID *v116; // [rsp+3C8h] [rbp+2C8h]
  int *v117; // [rsp+3D0h] [rbp+2D0h]
  const GUID *v118; // [rsp+3D8h] [rbp+2D8h]
  int *v119; // [rsp+3E0h] [rbp+2E0h]
  const GUID *v120; // [rsp+3E8h] [rbp+2E8h]
  int *v121; // [rsp+3F0h] [rbp+2F0h]
  const GUID *v122; // [rsp+3F8h] [rbp+2F8h]
  int *v123; // [rsp+400h] [rbp+300h]
  const GUID *v124; // [rsp+408h] [rbp+308h]
  __int64 *v125; // [rsp+410h] [rbp+310h]
  const GUID *v126; // [rsp+418h] [rbp+318h]
  struct CManipulationManager **v127; // [rsp+420h] [rbp+320h]
  const GUID *v128; // [rsp+428h] [rbp+328h]
  struct IMessageCallSendHost **v129; // [rsp+430h] [rbp+330h]
  const GUID *v130; // [rsp+438h] [rbp+338h]

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 116),
      (struct D2DMatrix *)v51);
    D2DMatrixMultiply((struct D2DMatrix *)v50, (CManipulation *)((char *)this + 128), (const struct D2DMatrix *)v51);
    v5 = v50[1];
    v6 = v50[2];
    *v7 = v50[0];
    v7[1] = v5;
    v8 = v50[3];
    v7[2] = v6;
    v7[3] = v8;
  }
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v37 = this;
    v53 = &v37;
    v55 = (char *)this + 64;
    v57 = (char *)this + 68;
    v59 = (char *)this + 72;
    v61 = (char *)this + 88;
    v63 = (char *)this + 92;
    v65 = (char *)this + 96;
    v67 = (char *)this + 112;
    v69 = (char *)this + 192;
    v71 = (char *)this + 196;
    v73 = (char *)this + 200;
    v75 = (char *)this + 204;
    v77 = (char *)this + 208;
    v79 = (char *)this + 212;
    v81 = (char *)this + 216;
    v83 = (char *)this + 128;
    v85 = (char *)this + 132;
    v87 = (char *)this + 136;
    v89 = (char *)this + 140;
    v91 = (char *)this + 144;
    v93 = (char *)this + 148;
    v95 = (char *)this + 152;
    v97 = (char *)this + 156;
    v99 = (char *)this + 160;
    v101 = (char *)this + 164;
    v103 = (char *)this + 168;
    v105 = (char *)this + 172;
    v54 = 8LL;
    v56 = v10;
    v58 = v10;
    v60 = v10;
    v62 = v10;
    v64 = v10;
    v66 = v10;
    v68 = v10;
    v70 = v10;
    v72 = v10;
    v74 = v10;
    v76 = v10;
    v78 = v10;
    v80 = v10;
    v82 = v10;
    v84 = v10;
    v86 = v10;
    v88 = v10;
    v90 = v10;
    v92 = v10;
    v94 = v10;
    v96 = v10;
    v98 = v10;
    v100 = v10;
    v102 = v10;
    v104 = v10;
    v11 = *((unsigned __int8 *)this + 232);
    v107 = (char *)this + 176;
    v109 = (char *)this + 180;
    v111 = (char *)this + 184;
    v113 = (char *)this + 188;
    v31 = *((_DWORD *)this + 55);
    v115 = &v31;
    v106 = v10;
    v32 = v11 & 1;
    v117 = &v32;
    v108 = v10;
    v33 = (v11 >> 1) & 1;
    v119 = &v33;
    v110 = v10;
    v34 = (v11 >> 2) & 1;
    v121 = &v34;
    v35 = *((_DWORD *)this + 56);
    v123 = &v35;
    LODWORD(v36) = (v11 >> 3) & 1;
    v112 = v10;
    v125 = &v36;
    v127 = &v29;
    LODWORD(v30) = *((_DWORD *)this + 103);
    v129 = &v30;
    v114 = v10;
    v116 = v10;
    v118 = v10;
    v120 = v10;
    v122 = v10;
    v124 = v10;
    v126 = v10;
    LODWORD(v29) = (v11 >> 4) & 1;
    v128 = v10;
    v130 = v10;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6CF3, v9, v10, 0x29u, &pData);
  }
  v12 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v29);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v29);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x144u);
    goto LABEL_16;
  }
  v15 = v29;
  v16 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v29, &v30);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x146u);
    goto LABEL_14;
  }
  v17 = *((unsigned int *)v15 + 88);
  v14 = (_DWORD)v17 == 0 ? 0x80004005 : 0;
  if ( !(_DWORD)v17 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x149u);
LABEL_14:
    v12 = v30;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
  v36 = v17;
  v18 = *((_OWORD *)this + 4);
  v12 = v30;
  v19 = *((_OWORD *)this + 5);
  v37 = this;
  v38 = v18;
  v20 = *((_OWORD *)this + 6);
  v39 = v19;
  v21 = *((_OWORD *)this + 7);
  v40 = v20;
  v22 = *((_OWORD *)this + 8);
  v41 = v21;
  v23 = *((_OWORD *)this + 9);
  v42 = v22;
  v24 = *((_OWORD *)this + 10);
  v43 = v23;
  v44 = v24;
  v45 = *((_OWORD *)this + 11);
  v25 = *((_QWORD *)this + 28);
  v26 = *((_OWORD *)this + 13);
  v46 = *((_OWORD *)this + 12);
  v47 = v26;
  v48 = v25;
  v49 = *((_DWORD *)this + 58);
  v27 = CoreUICallSend(v30, &v36, 1LL, 5LL, 0, &unk_1801D53FA);
  v14 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x152u);
  else
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 560LL));
LABEL_16:
  if ( v12 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v12 + 16LL))(v12);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v29);
  return v14;
}
