/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6FA4 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 * Callees:
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000380C (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0003840 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     Template_xxqqqqqqqqx @ 0x1C00038FC (Template_xxqqqqqqqqx.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkQueryDmmInterface @ 0x1C00A7230 (DxgkQueryDmmInterface.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00A7D84 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C018EB64 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01B0C8C (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        struct DXGK_STEREO_PARAMS *a5)
{
  union _LARGE_INTEGER *Global; // rax
  __int64 VidPnSourceId; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct _DXGDMM_INTERFACE *v16; // r13
  struct D3DKMDT_HVIDPN__ *v17; // r14
  __int64 (__fastcall *v18)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  unsigned __int64 v26; // rdi
  char v27; // r13
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v29; // r12
  int v30; // r11d
  unsigned int *v31; // rdi
  struct _DXGDMM_VIDPN_INTERFACE *v32; // r9
  __int64 i; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r15
  struct _D3DKMT_GETDISPLAYMODELIST *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  PVOID v42; // rcx
  struct DXGGLOBAL *v43; // rdi
  struct DXGGLOBAL *v44; // rbx
  struct DXGGLOBAL *v45; // rsi
  struct DXGGLOBAL *v46; // r14
  struct DXGGLOBAL *v47; // r15
  struct DXGGLOBAL *v48; // r13
  struct DXGGLOBAL *v49; // r12
  struct DXGGLOBAL *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  __int64 v59; // rdx
  char v60; // r13
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r15
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // r14d
  __int64 v77; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v78; // eax
  __int64 v79; // r12
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  PVOID v84; // rcx
  __int64 v85; // r15
  _QWORD *v86; // rax
  PVOID v87; // r15
  __int64 v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v93; // [rsp+28h] [rbp-D8h]
  unsigned int v94[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v95[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v96[8]; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v97[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v98; // [rsp+50h] [rbp-B0h]
  unsigned int *v99; // [rsp+58h] [rbp-A8h]
  __int64 v100; // [rsp+60h] [rbp-A0h]
  char v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+74h] [rbp-8Ch] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v103; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v104; // [rsp+80h] [rbp-80h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v105; // [rsp+88h] [rbp-78h]
  struct DXGGLOBAL *v106; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v107; // [rsp+98h] [rbp-68h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v108; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v109; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGGLOBAL *v110; // [rsp+B0h] [rbp-50h]
  struct DXGGLOBAL *v111; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v113; // [rsp+C8h] [rbp-38h] BYREF
  char v114[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v115; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v116)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  int v118; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v119; // [rsp+F8h] [rbp-8h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v120; // [rsp+100h] [rbp+0h]
  int v121; // [rsp+104h] [rbp+4h]
  __int64 v122; // [rsp+108h] [rbp+8h]
  PVOID v123; // [rsp+110h] [rbp+10h]
  __int64 v124; // [rsp+118h] [rbp+18h]
  int v125; // [rsp+120h] [rbp+20h]
  _QWORD v126[5]; // [rsp+128h] [rbp+28h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v127; // [rsp+150h] [rbp+50h]
  bool v128; // [rsp+154h] [rbp+54h]
  int v129; // [rsp+158h] [rbp+58h]
  int v130; // [rsp+15Ch] [rbp+5Ch]
  char v131; // [rsp+160h] [rbp+60h]
  __int64 v132; // [rsp+168h] [rbp+68h]
  PVOID P; // [rsp+170h] [rbp+70h]
  __int64 v134; // [rsp+178h] [rbp+78h]
  int v135; // [rsp+180h] [rbp+80h]
  __int64 v136; // [rsp+188h] [rbp+88h]
  PVOID v137; // [rsp+190h] [rbp+90h]
  __int64 v138; // [rsp+198h] [rbp+98h]
  int v139; // [rsp+1A0h] [rbp+A0h]
  _BYTE v140[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v141[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v142[16]; // [rsp+200h] [rbp+100h] BYREF

  v106 = a5;
  v111 = (struct DXGGLOBAL *)a4;
  v105 = a3;
  Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v140, Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v140);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v107 = 0LL;
  v12 = DxgkQueryDmmInterface(a1, v10, &v107, v11);
  v15 = v12;
  if ( v12 < 0 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v54[3] = v15;
    v54[4] = a3->hAdapter;
    v54[5] = a1;
    v54[6] = VidPnSourceId;
    WdLogEvent5_WdError(v54);
    return (unsigned int)v15;
  }
  v103 = 0LL;
  v16 = v107;
  v17 = 0LL;
  v112 = 0LL;
  v116 = 0LL;
  v18 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v107 + 6);
  v117 = 0LL;
  v118 = 0;
  v115 = 0LL;
  v114[0] = 0;
  v19 = v18(a1, &v112, &v103);
  v15 = v19;
  if ( v19 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v55[3] = a1;
    v55[4] = v15;
    goto LABEL_51;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v114,
    v112,
    *((_QWORD *)v16 + 8),
    (__int64)a1);
  v108 = 0LL;
  v109 = 0LL;
  v17 = v115;
  v22 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v103)(
          v115,
          &v108,
          &v109);
  v15 = v22;
  if ( v22 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v55[3] = v15;
    v55[4] = v17;
    v55[5] = a1;
    v55[6] = VidPnSourceId;
    v55[7] = v103;
    goto LABEL_51;
  }
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 285);
  v26 = 0LL;
  v104 = 0LL;
  v27 = 0;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v25, VidPnSourceId);
  v29 = SessionViewOwner;
  v30 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v29),
        v59 = *(_QWORD *)(*((_QWORD *)a1 + 285) + 112LL) + 3208 * VidPnSourceId,
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)v59) )
  {
LABEL_6:
    v31 = v141;
    v32 = v103;
    for ( i = 16LL; i; --i )
      *v31++ = v30;
    v34 = PrepareUnpinnedPathsFromSource(
            v107,
            a1,
            v17,
            v32,
            v108,
            v109,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v104,
            (unsigned int (*)[16])v141,
            0LL);
    v15 = v34;
    LODWORD(v37) = -1071774925;
    if ( v34 == -1071774925 || (LODWORD(v37) = -1071774886, v34 == -1071774886) )
    {
      v74 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v74 + 24) = VidPnSourceId;
      *(_QWORD *)(v74 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v74);
LABEL_53:
      LODWORD(v15) = v37;
      goto LABEL_22;
    }
    if ( v34 >= 0 )
    {
      v26 = v104;
      goto LABEL_13;
    }
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v55[3] = VidPnSourceId;
    v55[5] = v15;
LABEL_50:
    v55[4] = a1;
LABEL_51:
    WdLogEvent5_WdError(v55);
    goto LABEL_22;
  }
  v60 = 0;
  do
  {
    v61 = *((_QWORD *)PrimaryDisplaySource + 1);
    v101 = 0;
    if ( *(DXGADAPTER **)(v61 + 16) != a1 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v61, v59, v56, v57);
      *(_QWORD *)(v62 + 24) = 4557LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                a1,
                *((_DWORD *)PrimaryDisplaySource + 257),
                0LL,
                0LL,
                0LL,
                &v101,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v64, v63, v65, v66);
      *(_QWORD *)(v67 + 24) = 4572LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( v26 )
    {
      if ( v60 != v101 )
        goto LABEL_43;
      v68 = *(unsigned int *)(*((_QWORD *)a1 + 285) + 80LL);
      if ( v26 >= v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v68, v63, v65, v66);
        *(_QWORD *)(v69 + 24) = 4583LL;
        WdLogEvent5_WdAssertion(v69);
      }
      v141[v26++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v26 = 1LL;
      v60 = v101;
      v142[0] = *((_DWORD *)PrimaryDisplaySource + 257);
      v141[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v104 = v26;
LABEL_43:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v29, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v26 <= 1 )
  {
    v27 = 0;
    v30 = -1;
    goto LABEL_6;
  }
  v27 = 1;
  v70 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v141, v26, v17, v142);
  v73 = v70;
  if ( v70 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
    LODWORD(v15) = -1071775483;
    v55[3] = VidPnSourceId;
    v55[5] = v73;
    v55[6] = -1071775483LL;
    goto LABEL_50;
  }
LABEL_13:
  v38 = v105;
  v128 = *((_QWORD *)a1 + 286) == 0LL;
  v126[2] = v103;
  v126[3] = v108;
  v126[4] = v109;
  v127 = v105->VidPnSourceId;
  v129 = -1;
  v130 = 0;
  v131 = 0;
  v135 = 0;
  v139 = 0;
  v132 = 0LL;
  P = 0LL;
  v134 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v126[0] = a1;
  v126[1] = v17;
  v37 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (unsigned int)v126,
               (int)v105 + 8,
               (int)v105 + 16,
               (_DWORD)v106,
               ((unsigned __int64)v111 + 8) & -(__int64)(v111 != 0LL),
               ((unsigned __int64)v111 + 16) & -(__int64)(v111 != 0LL));
  if ( v137 )
    ExFreePoolWithTag(v137, 0);
  v42 = P;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (int)v37 < 0 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v39, v40, v41);
    v75[3] = v37;
    v75[4] = v17;
    v75[5] = a1;
    v75[6] = VidPnSourceId;
    v75[7] = v26;
    WdLogEvent5_WdWarning(v75);
    goto LABEL_53;
  }
  if ( v27 )
  {
    if ( !v106 )
    {
      v76 = 0;
      if ( v26 )
      {
        v77 = 0LL;
        do
        {
          v78 = v38->VidPnSourceId;
          v79 = v142[v77];
          v113 = 0LL;
          v102 = 0;
          v120 = v78;
          v125 = 0;
          v122 = 0LL;
          v123 = 0LL;
          v124 = 0LL;
          v119 = a1;
          v121 = v79;
          v80 = OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v119, &v113, &v102);
          v84 = v123;
          v85 = v80;
          if ( v123 )
            ExFreePoolWithTag(v123, 0);
          if ( (int)v85 >= 0 )
          {
            v87 = v113;
            if ( !v113 )
              goto LABEL_65;
            v88 = (int)CombineModeList((int)v105 + 16, (int)v105 + 8, v102, (_DWORD)v113, 0);
            ExFreePoolWithTag(v87, 0);
            if ( (int)v88 >= 0 )
              goto LABEL_65;
            v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
            v86[6] = v88;
          }
          else
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v81, v82, v83);
            v86[6] = v85;
          }
          v86[3] = VidPnSourceId;
          v86[4] = v79;
          v86[5] = a1;
          WdLogEvent5_WdWarning(v86);
LABEL_65:
          v38 = v105;
          v77 = ++v76;
        }
        while ( v76 < v26 );
      }
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 1, v38->ModeCount);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
  {
    v43 = DXGGLOBAL::GetGlobal();
    v44 = DXGGLOBAL::GetGlobal();
    v45 = DXGGLOBAL::GetGlobal();
    v46 = DXGGLOBAL::GetGlobal();
    v47 = DXGGLOBAL::GetGlobal();
    v48 = DXGGLOBAL::GetGlobal();
    v49 = DXGGLOBAL::GetGlobal();
    v111 = DXGGLOBAL::GetGlobal();
    v110 = DXGGLOBAL::GetGlobal();
    v106 = DXGGLOBAL::GetGlobal();
    v50 = DXGGLOBAL::GetGlobal();
    LODWORD(v100) = *((_DWORD *)v44 + 19);
    LODWORD(v99) = *((_DWORD *)v45 + 18);
    LODWORD(v98) = *((_DWORD *)v46 + 15);
    *(_DWORD *)v97 = *((_DWORD *)v47 + 14);
    *(_DWORD *)v96 = *((_DWORD *)v48 + 11);
    *(_DWORD *)v95 = *((_DWORD *)v49 + 10);
    v94[0] = *((_DWORD *)v111 + 9);
    LODWORD(v93) = *((_DWORD *)v110 + 6);
    Template_xxqqqqqqqqx(
      *(unsigned int *)v95,
      v51,
      v52,
      *((_QWORD *)v50 + 1),
      *((_QWORD *)v106 + 2),
      v93,
      *(_QWORD *)v94,
      *(_QWORD *)v95,
      *(_QWORD *)v96,
      *(_QWORD *)v97,
      v98,
      v99,
      v100,
      *((_QWORD *)v43 + 10));
  }
  v17 = v115;
  LODWORD(v15) = 0;
LABEL_22:
  if ( v114[0] )
    v116(v117, v17);
  return (unsigned int)v15;
}
