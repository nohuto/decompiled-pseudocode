/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801717D8
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180170370 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180171140 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180171400 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800B4054 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800B4EFC (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180169410 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
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
  signed int ManipulationManager; // eax
  DWORD v13; // edi
  CManipulationManager *v14; // rbx
  __int64 v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int128 v24; // xmm0
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  CManipulationManager *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  CManipulation *v35; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-10h]
  __int128 v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  _OWORD v48[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v49[64]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  CManipulation **v51; // [rsp+1D0h] [rbp+D0h]
  __int64 v52; // [rsp+1D8h] [rbp+D8h]
  char *v53; // [rsp+1E0h] [rbp+E0h]
  const GUID *v54; // [rsp+1E8h] [rbp+E8h]
  char *v55; // [rsp+1F0h] [rbp+F0h]
  const GUID *v56; // [rsp+1F8h] [rbp+F8h]
  char *v57; // [rsp+200h] [rbp+100h]
  const GUID *v58; // [rsp+208h] [rbp+108h]
  char *v59; // [rsp+210h] [rbp+110h]
  const GUID *v60; // [rsp+218h] [rbp+118h]
  char *v61; // [rsp+220h] [rbp+120h]
  const GUID *v62; // [rsp+228h] [rbp+128h]
  char *v63; // [rsp+230h] [rbp+130h]
  const GUID *v64; // [rsp+238h] [rbp+138h]
  char *v65; // [rsp+240h] [rbp+140h]
  const GUID *v66; // [rsp+248h] [rbp+148h]
  char *v67; // [rsp+250h] [rbp+150h]
  const GUID *v68; // [rsp+258h] [rbp+158h]
  char *v69; // [rsp+260h] [rbp+160h]
  const GUID *v70; // [rsp+268h] [rbp+168h]
  char *v71; // [rsp+270h] [rbp+170h]
  const GUID *v72; // [rsp+278h] [rbp+178h]
  char *v73; // [rsp+280h] [rbp+180h]
  const GUID *v74; // [rsp+288h] [rbp+188h]
  char *v75; // [rsp+290h] [rbp+190h]
  const GUID *v76; // [rsp+298h] [rbp+198h]
  char *v77; // [rsp+2A0h] [rbp+1A0h]
  const GUID *v78; // [rsp+2A8h] [rbp+1A8h]
  char *v79; // [rsp+2B0h] [rbp+1B0h]
  const GUID *v80; // [rsp+2B8h] [rbp+1B8h]
  char *v81; // [rsp+2C0h] [rbp+1C0h]
  const GUID *v82; // [rsp+2C8h] [rbp+1C8h]
  char *v83; // [rsp+2D0h] [rbp+1D0h]
  const GUID *v84; // [rsp+2D8h] [rbp+1D8h]
  char *v85; // [rsp+2E0h] [rbp+1E0h]
  const GUID *v86; // [rsp+2E8h] [rbp+1E8h]
  char *v87; // [rsp+2F0h] [rbp+1F0h]
  const GUID *v88; // [rsp+2F8h] [rbp+1F8h]
  char *v89; // [rsp+300h] [rbp+200h]
  const GUID *v90; // [rsp+308h] [rbp+208h]
  char *v91; // [rsp+310h] [rbp+210h]
  const GUID *v92; // [rsp+318h] [rbp+218h]
  char *v93; // [rsp+320h] [rbp+220h]
  const GUID *v94; // [rsp+328h] [rbp+228h]
  char *v95; // [rsp+330h] [rbp+230h]
  const GUID *v96; // [rsp+338h] [rbp+238h]
  char *v97; // [rsp+340h] [rbp+240h]
  const GUID *v98; // [rsp+348h] [rbp+248h]
  char *v99; // [rsp+350h] [rbp+250h]
  const GUID *v100; // [rsp+358h] [rbp+258h]
  char *v101; // [rsp+360h] [rbp+260h]
  const GUID *v102; // [rsp+368h] [rbp+268h]
  char *v103; // [rsp+370h] [rbp+270h]
  const GUID *v104; // [rsp+378h] [rbp+278h]
  char *v105; // [rsp+380h] [rbp+280h]
  const GUID *v106; // [rsp+388h] [rbp+288h]
  char *v107; // [rsp+390h] [rbp+290h]
  const GUID *v108; // [rsp+398h] [rbp+298h]
  char *v109; // [rsp+3A0h] [rbp+2A0h]
  const GUID *v110; // [rsp+3A8h] [rbp+2A8h]
  char *v111; // [rsp+3B0h] [rbp+2B0h]
  const GUID *v112; // [rsp+3B8h] [rbp+2B8h]
  int *v113; // [rsp+3C0h] [rbp+2C0h]
  const GUID *v114; // [rsp+3C8h] [rbp+2C8h]
  int *v115; // [rsp+3D0h] [rbp+2D0h]
  const GUID *v116; // [rsp+3D8h] [rbp+2D8h]
  int *v117; // [rsp+3E0h] [rbp+2E0h]
  const GUID *v118; // [rsp+3E8h] [rbp+2E8h]
  int *v119; // [rsp+3F0h] [rbp+2F0h]
  const GUID *v120; // [rsp+3F8h] [rbp+2F8h]
  int *v121; // [rsp+400h] [rbp+300h]
  const GUID *v122; // [rsp+408h] [rbp+308h]
  __int64 *v123; // [rsp+410h] [rbp+310h]
  const GUID *v124; // [rsp+418h] [rbp+318h]
  CManipulationManager **v125; // [rsp+420h] [rbp+320h]
  const GUID *v126; // [rsp+428h] [rbp+328h]
  struct IMessageCallSendHost **v127; // [rsp+430h] [rbp+330h]
  const GUID *v128; // [rsp+438h] [rbp+338h]

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 124),
      (struct D2DMatrix *)v49);
    D2DMatrixMultiply((struct D2DMatrix *)v48, (CManipulation *)((char *)this + 136), (const struct D2DMatrix *)v49);
    v5 = v48[1];
    v6 = v48[2];
    *v7 = v48[0];
    v7[1] = v5;
    v8 = v48[3];
    v7[2] = v6;
    v7[3] = v8;
  }
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v35 = this;
    v51 = &v35;
    v53 = (char *)this + 72;
    v55 = (char *)this + 76;
    v57 = (char *)this + 80;
    v59 = (char *)this + 96;
    v61 = (char *)this + 100;
    v63 = (char *)this + 104;
    v65 = (char *)this + 120;
    v67 = (char *)this + 200;
    v69 = (char *)this + 204;
    v71 = (char *)this + 208;
    v73 = (char *)this + 212;
    v75 = (char *)this + 216;
    v77 = (char *)this + 220;
    v79 = (char *)this + 224;
    v81 = (char *)this + 136;
    v83 = (char *)this + 140;
    v85 = (char *)this + 144;
    v87 = (char *)this + 148;
    v89 = (char *)this + 152;
    v91 = (char *)this + 156;
    v93 = (char *)this + 160;
    v95 = (char *)this + 164;
    v97 = (char *)this + 168;
    v99 = (char *)this + 172;
    v101 = (char *)this + 176;
    v103 = (char *)this + 180;
    v52 = 8LL;
    v54 = v10;
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
    v11 = *((unsigned __int8 *)this + 240);
    v105 = (char *)this + 184;
    v107 = (char *)this + 188;
    v109 = (char *)this + 192;
    v111 = (char *)this + 196;
    v29 = *((_DWORD *)this + 57);
    v113 = &v29;
    v104 = v10;
    v30 = v11 & 1;
    v115 = &v30;
    v106 = v10;
    v31 = (v11 >> 1) & 1;
    v117 = &v31;
    v108 = v10;
    v32 = (v11 >> 2) & 1;
    v119 = &v32;
    v33 = *((_DWORD *)this + 58);
    v121 = &v33;
    LODWORD(v34) = (v11 >> 3) & 1;
    v110 = v10;
    v123 = &v34;
    v125 = &v27;
    LODWORD(v28) = *((_DWORD *)this + 105);
    v127 = &v28;
    v112 = v10;
    v114 = v10;
    v116 = v10;
    v118 = v10;
    v120 = v10;
    v122 = v10;
    v124 = v10;
    LODWORD(v27) = (v11 >> 4) & 1;
    v126 = v10;
    v128 = v10;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213C9C, v9, v10, 0x29u, &pData);
  }
  v27 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v27);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &v27);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 333;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  v14 = v27;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v27, &v28);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 335;
    goto LABEL_15;
  }
  v15 = *((_QWORD *)v14 + 44);
  v13 = v15 == 0 ? 0x80004005 : 0;
  if ( !v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x152u);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
  v35 = this;
  v16 = *(_OWORD *)((char *)this + 72);
  v17 = *(_OWORD *)((char *)this + 88);
  v34 = v15;
  v36 = v16;
  v18 = *(_OWORD *)((char *)this + 104);
  v37 = v17;
  v19 = *(_OWORD *)((char *)this + 120);
  v38 = v18;
  v20 = *(_OWORD *)((char *)this + 136);
  v39 = v19;
  v21 = *(_OWORD *)((char *)this + 152);
  v40 = v20;
  v22 = *(_OWORD *)((char *)this + 168);
  v41 = v21;
  v42 = v22;
  v43 = *(_OWORD *)((char *)this + 184);
  v23 = *((_QWORD *)this + 29);
  v24 = *(_OWORD *)((char *)this + 216);
  v44 = *(_OWORD *)((char *)this + 200);
  v45 = v24;
  v46 = v23;
  v47 = *((_DWORD *)this + 60);
  ManipulationManager = CoreUICallSend(v28, &v34, 1LL, 5LL, 0, &unk_1801F053A);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 347;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ManipulationManager, cData);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
    0LL,
    0x4000LL);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v27);
  return v13;
}
