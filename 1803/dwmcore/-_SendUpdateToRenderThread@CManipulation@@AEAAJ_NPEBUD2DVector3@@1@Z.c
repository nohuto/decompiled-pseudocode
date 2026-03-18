/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x18019A670
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180199070 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180199FC0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x18019A280 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001AD08 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BCEAC (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180191CAC (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
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
  __int64 v9; // r9
  unsigned int v10; // ecx
  int ManipulationManager; // eax
  unsigned int v12; // edi
  CManipulationManager *v13; // rbx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
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
  __int128 v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+30h]
  _OWORD v48[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v49[64]; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  CManipulation **v51; // [rsp+1E0h] [rbp+E0h]
  __int64 v52; // [rsp+1E8h] [rbp+E8h]
  char *v53; // [rsp+1F0h] [rbp+F0h]
  __int64 v54; // [rsp+1F8h] [rbp+F8h]
  char *v55; // [rsp+200h] [rbp+100h]
  __int64 v56; // [rsp+208h] [rbp+108h]
  char *v57; // [rsp+210h] [rbp+110h]
  __int64 v58; // [rsp+218h] [rbp+118h]
  char *v59; // [rsp+220h] [rbp+120h]
  __int64 v60; // [rsp+228h] [rbp+128h]
  char *v61; // [rsp+230h] [rbp+130h]
  __int64 v62; // [rsp+238h] [rbp+138h]
  char *v63; // [rsp+240h] [rbp+140h]
  __int64 v64; // [rsp+248h] [rbp+148h]
  char *v65; // [rsp+250h] [rbp+150h]
  __int64 v66; // [rsp+258h] [rbp+158h]
  char *v67; // [rsp+260h] [rbp+160h]
  __int64 v68; // [rsp+268h] [rbp+168h]
  char *v69; // [rsp+270h] [rbp+170h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  char *v71; // [rsp+280h] [rbp+180h]
  __int64 v72; // [rsp+288h] [rbp+188h]
  char *v73; // [rsp+290h] [rbp+190h]
  __int64 v74; // [rsp+298h] [rbp+198h]
  char *v75; // [rsp+2A0h] [rbp+1A0h]
  __int64 v76; // [rsp+2A8h] [rbp+1A8h]
  char *v77; // [rsp+2B0h] [rbp+1B0h]
  __int64 v78; // [rsp+2B8h] [rbp+1B8h]
  char *v79; // [rsp+2C0h] [rbp+1C0h]
  __int64 v80; // [rsp+2C8h] [rbp+1C8h]
  char *v81; // [rsp+2D0h] [rbp+1D0h]
  __int64 v82; // [rsp+2D8h] [rbp+1D8h]
  char *v83; // [rsp+2E0h] [rbp+1E0h]
  __int64 v84; // [rsp+2E8h] [rbp+1E8h]
  char *v85; // [rsp+2F0h] [rbp+1F0h]
  __int64 v86; // [rsp+2F8h] [rbp+1F8h]
  char *v87; // [rsp+300h] [rbp+200h]
  __int64 v88; // [rsp+308h] [rbp+208h]
  char *v89; // [rsp+310h] [rbp+210h]
  __int64 v90; // [rsp+318h] [rbp+218h]
  char *v91; // [rsp+320h] [rbp+220h]
  __int64 v92; // [rsp+328h] [rbp+228h]
  char *v93; // [rsp+330h] [rbp+230h]
  __int64 v94; // [rsp+338h] [rbp+238h]
  char *v95; // [rsp+340h] [rbp+240h]
  __int64 v96; // [rsp+348h] [rbp+248h]
  char *v97; // [rsp+350h] [rbp+250h]
  __int64 v98; // [rsp+358h] [rbp+258h]
  char *v99; // [rsp+360h] [rbp+260h]
  __int64 v100; // [rsp+368h] [rbp+268h]
  char *v101; // [rsp+370h] [rbp+270h]
  __int64 v102; // [rsp+378h] [rbp+278h]
  char *v103; // [rsp+380h] [rbp+280h]
  __int64 v104; // [rsp+388h] [rbp+288h]
  char *v105; // [rsp+390h] [rbp+290h]
  __int64 v106; // [rsp+398h] [rbp+298h]
  char *v107; // [rsp+3A0h] [rbp+2A0h]
  __int64 v108; // [rsp+3A8h] [rbp+2A8h]
  char *v109; // [rsp+3B0h] [rbp+2B0h]
  __int64 v110; // [rsp+3B8h] [rbp+2B8h]
  char *v111; // [rsp+3C0h] [rbp+2C0h]
  __int64 v112; // [rsp+3C8h] [rbp+2C8h]
  int *v113; // [rsp+3D0h] [rbp+2D0h]
  __int64 v114; // [rsp+3D8h] [rbp+2D8h]
  int *v115; // [rsp+3E0h] [rbp+2E0h]
  __int64 v116; // [rsp+3E8h] [rbp+2E8h]
  int *v117; // [rsp+3F0h] [rbp+2F0h]
  __int64 v118; // [rsp+3F8h] [rbp+2F8h]
  int *v119; // [rsp+400h] [rbp+300h]
  __int64 v120; // [rsp+408h] [rbp+308h]
  int *v121; // [rsp+410h] [rbp+310h]
  __int64 v122; // [rsp+418h] [rbp+318h]
  __int64 *v123; // [rsp+420h] [rbp+320h]
  __int64 v124; // [rsp+428h] [rbp+328h]
  CManipulationManager **v125; // [rsp+430h] [rbp+330h]
  __int64 v126; // [rsp+438h] [rbp+338h]
  struct IMessageCallSendHost **v127; // [rsp+440h] [rbp+340h]
  __int64 v128; // [rsp+448h] [rbp+348h]

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
  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
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
    v54 = v9;
    v56 = v9;
    v58 = v9;
    v60 = v9;
    v62 = v9;
    v64 = v9;
    v66 = v9;
    v68 = v9;
    v70 = v9;
    v72 = v9;
    v74 = v9;
    v76 = v9;
    v78 = v9;
    v80 = v9;
    v82 = v9;
    v84 = v9;
    v86 = v9;
    v88 = v9;
    v90 = v9;
    v92 = v9;
    v94 = v9;
    v96 = v9;
    v98 = v9;
    v100 = v9;
    v102 = v9;
    v10 = *((unsigned __int8 *)this + 252);
    v105 = (char *)this + 184;
    v107 = (char *)this + 188;
    v109 = (char *)this + 192;
    v111 = (char *)this + 196;
    v29 = *((_DWORD *)this + 57);
    v113 = &v29;
    v30 = *((_DWORD *)this + 60);
    v115 = &v30;
    v31 = *((_DWORD *)this + 61);
    v117 = &v31;
    v32 = *((_DWORD *)this + 62);
    v119 = &v32;
    v33 = *((_DWORD *)this + 58);
    v121 = &v33;
    LODWORD(v34) = v10 & 1;
    v104 = v9;
    v123 = &v34;
    v125 = &v27;
    LODWORD(v28) = *((_DWORD *)this + 111);
    v127 = &v28;
    v106 = v9;
    v108 = v9;
    v110 = v9;
    v112 = v9;
    v114 = v9;
    v116 = v9;
    v118 = v9;
    v120 = v9;
    v122 = v9;
    v124 = v9;
    LODWORD(v27) = (v10 >> 1) & 1;
    v126 = v9;
    v128 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8895, 0LL, 0LL, 0x29u, &pData);
  }
  v27 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v27);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &v27);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 315;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  v13 = v27;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v27, &v28);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 317;
    goto LABEL_15;
  }
  v14 = *((_QWORD *)v13 + 44);
  v12 = v14 == 0 ? 0x80004005 : 0;
  if ( !v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x140u);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
  v35 = this;
  v15 = *(_OWORD *)((char *)this + 72);
  v16 = *(_OWORD *)((char *)this + 88);
  v34 = v14;
  v36 = v15;
  v17 = *(_OWORD *)((char *)this + 104);
  v37 = v16;
  v18 = *(_OWORD *)((char *)this + 120);
  v38 = v17;
  v19 = *(_OWORD *)((char *)this + 136);
  v39 = v18;
  v20 = *(_OWORD *)((char *)this + 152);
  v40 = v19;
  v21 = *(_OWORD *)((char *)this + 168);
  v41 = v20;
  v42 = v21;
  v43 = *(_OWORD *)((char *)this + 184);
  v22 = *(_OWORD *)((char *)this + 216);
  v44 = *(_OWORD *)((char *)this + 200);
  v23 = *(_OWORD *)((char *)this + 232);
  v24 = *((_QWORD *)this + 31);
  v45 = v22;
  v46 = v23;
  v47 = v24;
  ManipulationManager = CoreUICallSend(v28, &v34, 1LL, 9LL, 0, &unk_180239CAF);
  v12 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 329;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, cData);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
    0LL,
    0x4000LL);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v27);
  return v12;
}
