/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00AC648 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     McTemplateK0xxqqqqqqqqx @ 0x1C000D4D0 (McTemplateK0xxqqqqqqqqx.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000D7D8 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000D80C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00AED34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E5B54 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C01A33A8 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01CAA4C (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        struct DXGK_STEREO_PARAMS *a5)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 VidPnSourceId; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct _DXGDMM_INTERFACE *v15; // r13
  struct D3DKMDT_HVIDPN__ *v16; // r14
  __int64 (__fastcall *v17)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rcx
  unsigned __int64 v23; // rdi
  int **SessionViewOwner; // rax
  SESSION_VIEW *v25; // r12
  int v26; // r11d
  struct _DXGDMM_VIDPN_INTERFACE *v27; // r9
  unsigned int *v28; // rdi
  __int64 i; // rcx
  char v30; // r12
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r15
  unsigned int *p_ModeCount; // r13
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  struct DXGGLOBAL *v39; // rdi
  __int64 v40; // rcx
  struct DXGGLOBAL *v41; // rbx
  __int64 v42; // rcx
  struct DXGGLOBAL *v43; // rsi
  __int64 v44; // rcx
  struct DXGGLOBAL *v45; // r14
  __int64 v46; // rcx
  struct DXGGLOBAL *v47; // r15
  __int64 v48; // rcx
  struct DXGGLOBAL *v49; // r13
  __int64 v50; // rcx
  struct DXGGLOBAL *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct DXGGLOBAL *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  char v63; // r13
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r15
  __int64 v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // r14d
  __int64 v76; // r12
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r8
  PVOID v80; // rcx
  __int64 v81; // r15
  _QWORD *v82; // rax
  PVOID v83; // r15
  __int64 v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  _QWORD *v88; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v89; // [rsp+28h] [rbp-D8h]
  unsigned int v90[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v91[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v92[8]; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v93[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v94; // [rsp+50h] [rbp-B0h]
  unsigned int *v95; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v98; // [rsp+78h] [rbp-88h]
  int v99; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v100; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v101; // [rsp+90h] [rbp-70h] BYREF
  bool *v102; // [rsp+98h] [rbp-68h]
  struct _DXGDMM_INTERFACE *v103; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v104; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v105; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v106; // [rsp+B8h] [rbp-48h]
  struct DXGGLOBAL *v107; // [rsp+C0h] [rbp-40h]
  __int64 v108; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v109; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v110[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct D3DKMDT_HVIDPN__ *v111; // [rsp+E0h] [rbp-20h]
  void (__fastcall *v112)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E8h] [rbp-18h]
  __int64 v113; // [rsp+F0h] [rbp-10h]
  int v114; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v115; // [rsp+100h] [rbp+0h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v116; // [rsp+108h] [rbp+8h]
  int v117; // [rsp+10Ch] [rbp+Ch]
  __int64 v118; // [rsp+110h] [rbp+10h]
  PVOID v119; // [rsp+118h] [rbp+18h]
  __int64 v120; // [rsp+120h] [rbp+20h]
  int v121; // [rsp+128h] [rbp+28h]
  _QWORD v122[5]; // [rsp+130h] [rbp+30h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v123; // [rsp+158h] [rbp+58h]
  bool v124; // [rsp+15Ch] [rbp+5Ch]
  int v125; // [rsp+160h] [rbp+60h]
  int v126; // [rsp+164h] [rbp+64h]
  char v127; // [rsp+168h] [rbp+68h]
  __int64 v128; // [rsp+170h] [rbp+70h]
  PVOID P; // [rsp+178h] [rbp+78h]
  __int64 v130; // [rsp+180h] [rbp+80h]
  int v131; // [rsp+188h] [rbp+88h]
  __int64 v132; // [rsp+190h] [rbp+90h]
  PVOID v133; // [rsp+198h] [rbp+98h]
  __int64 v134; // [rsp+1A0h] [rbp+A0h]
  int v135; // [rsp+1A8h] [rbp+A8h]
  _BYTE v136[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v137[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v138[16]; // [rsp+200h] [rbp+100h] BYREF

  v102 = (bool *)a5;
  v107 = (struct DXGGLOBAL *)a4;
  v106 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v136,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v136);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v103 = 0LL;
  v12 = DxgkQueryDmmInterface(a1, v11, &v103);
  v14 = v12;
  if ( v12 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v60[3] = v14;
    v60[4] = a3->hAdapter;
    v60[5] = a1;
    v60[6] = VidPnSourceId;
    WdLogEvent5_WdError(v60);
    return (unsigned int)v14;
  }
  v15 = v103;
  v100 = 0LL;
  v108 = 0LL;
  v16 = 0LL;
  v111 = 0LL;
  v17 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v103 + 6);
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0;
  v110[0] = 0;
  v18 = v17(a1, &v108, &v100);
  v14 = v18;
  if ( v18 < 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v61[3] = a1;
    v61[4] = v14;
    goto LABEL_51;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v110,
    v108,
    *((_QWORD *)v15 + 8),
    (__int64)a1);
  v16 = v111;
  v104 = 0LL;
  v105 = 0LL;
  v20 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v100)(
          v111,
          &v104,
          &v105);
  v14 = v20;
  if ( v20 < 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v61[3] = v14;
    v61[4] = v16;
    v61[5] = a1;
    v61[6] = VidPnSourceId;
    v61[7] = v100;
    goto LABEL_51;
  }
  v22 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 288);
  v23 = 0LL;
  v101 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v22, VidPnSourceId);
  v25 = (SESSION_VIEW *)SessionViewOwner;
  v26 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v25),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 288) + 112LL)
                                                        + 3760 * VidPnSourceId)) )
  {
LABEL_6:
    v27 = v100;
    v28 = v137;
    for ( i = 16LL; i; --i )
      *v28++ = v26;
    v30 = 0;
    v31 = PrepareUnpinnedPathsFromSource(
            v15,
            a1,
            v16,
            v27,
            v104,
            v105,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v101,
            (unsigned int (*)[16])v137,
            0LL);
    v14 = v31;
    LODWORD(v33) = -1071774925;
    if ( v31 == -1071774925 || (LODWORD(v33) = -1071774886, v31 == -1071774886) )
    {
      v73 = WdLogNewEntry5_WdDmmEvent(v32);
      *(_QWORD *)(v73 + 24) = VidPnSourceId;
      *(_QWORD *)(v73 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v73);
LABEL_53:
      LODWORD(v14) = v33;
      goto LABEL_22;
    }
    if ( v31 >= 0 )
    {
      v23 = v101;
      goto LABEL_13;
    }
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v61[3] = VidPnSourceId;
    v61[5] = v14;
LABEL_50:
    v61[4] = a1;
LABEL_51:
    WdLogEvent5_WdError(v61);
    goto LABEL_22;
  }
  v63 = 0;
  do
  {
    v64 = *((_QWORD *)PrimaryDisplaySource + 1);
    LOBYTE(v97) = 0;
    if ( *(DXGADAPTER **)(v64 + 16) != a1 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v65 + 24) = 4552LL;
      WdLogEvent5_WdAssertion(v65);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                a1,
                *((_DWORD *)PrimaryDisplaySource + 267),
                0LL,
                0LL,
                0LL,
                &v97,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66);
      *(_QWORD *)(v67 + 24) = 4567LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( v23 )
    {
      if ( v63 != (_BYTE)v97 )
        goto LABEL_43;
      v68 = *(unsigned int *)(*((_QWORD *)a1 + 288) + 80LL);
      if ( v23 >= v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v68);
        *(_QWORD *)(v69 + 24) = 4578LL;
        WdLogEvent5_WdAssertion(v69);
      }
      v137[v23++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v23 = 1LL;
      v63 = v97;
      v138[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v137[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v101 = v23;
LABEL_43:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v23 <= 1 )
  {
    v15 = v103;
    v26 = -1;
    goto LABEL_6;
  }
  v30 = 1;
  v70 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v137, v23, v16, v138);
  v72 = v70;
  if ( v70 < 0 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v71);
    LODWORD(v14) = -1071775483;
    v61[3] = VidPnSourceId;
    v61[5] = v72;
    v61[6] = -1071775483LL;
    goto LABEL_50;
  }
LABEL_13:
  v124 = *((_QWORD *)a1 + 289) == 0LL;
  v126 = 0;
  p_ModeCount = &v106->ModeCount;
  v122[2] = v100;
  v122[3] = v104;
  v122[4] = v105;
  v123 = v106->VidPnSourceId;
  v125 = -1;
  v131 = 0;
  v135 = 0;
  v128 = 0LL;
  P = 0LL;
  v130 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v122[0] = a1;
  v122[1] = v16;
  v127 = 0;
  v98 = (struct DXGGLOBAL *)&v106->ModeCount;
  v33 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (__int64)v122,
               &v106->pModeList,
               &v106->ModeCount,
               v102,
               (PVOID *)(((unsigned __int64)v107 + 8) & -(__int64)(v107 != 0LL)),
               (unsigned int *)(((unsigned __int64)v107 + 16) & -(__int64)(v107 != 0LL)));
  if ( v133 )
    ExFreePoolWithTag(v133, 0);
  v37 = (__int64)P;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (int)v33 < 0 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v35, v36);
    v74[3] = v33;
    v74[4] = v16;
    v74[5] = a1;
    v74[6] = VidPnSourceId;
    v74[7] = v23;
    WdLogEvent5_WdWarning(v74);
    goto LABEL_53;
  }
  if ( v30 )
  {
    if ( !v102 )
    {
      v75 = 0;
      if ( v23 )
      {
        v37 = 0LL;
        do
        {
          v76 = v138[v37];
          v109 = 0LL;
          v99 = 0;
          v115 = a1;
          v116 = v106->VidPnSourceId;
          v121 = 0;
          v118 = 0LL;
          v119 = 0LL;
          v120 = 0LL;
          v117 = v76;
          v77 = OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v115, &v109, &v99);
          v80 = v119;
          v81 = v77;
          if ( v119 )
            ExFreePoolWithTag(v119, 0);
          if ( (int)v81 >= 0 )
          {
            v83 = v109;
            if ( v109 )
            {
              v84 = (int)CombineModeList((_DWORD)p_ModeCount, (int)v106 + 8, v99, (_DWORD)v109, 0);
              ExFreePoolWithTag(v83, 0);
              if ( (int)v84 < 0 )
              {
                v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                v88[3] = VidPnSourceId;
                v88[4] = v76;
                v88[5] = a1;
                v88[6] = v84;
                WdLogEvent5_WdWarning(v88);
              }
              p_ModeCount = (unsigned int *)v98;
            }
          }
          else
          {
            v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v78, v79);
            v82[3] = VidPnSourceId;
            v82[4] = v76;
            v82[5] = a1;
            v82[6] = v81;
            WdLogEvent5_WdWarning(v82);
          }
          v37 = ++v75;
        }
        while ( v75 < v23 );
      }
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v37) + 1, *p_ModeCount);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
  {
    v39 = DXGGLOBAL::GetGlobal(v38);
    v41 = DXGGLOBAL::GetGlobal(v40);
    v43 = DXGGLOBAL::GetGlobal(v42);
    v45 = DXGGLOBAL::GetGlobal(v44);
    v47 = DXGGLOBAL::GetGlobal(v46);
    v49 = DXGGLOBAL::GetGlobal(v48);
    v51 = DXGGLOBAL::GetGlobal(v50);
    v107 = DXGGLOBAL::GetGlobal(v52);
    v98 = DXGGLOBAL::GetGlobal(v53);
    v102 = (bool *)DXGGLOBAL::GetGlobal(v54);
    v56 = DXGGLOBAL::GetGlobal(v55);
    LODWORD(v96) = *((_DWORD *)v41 + 19);
    LODWORD(v95) = *((_DWORD *)v43 + 18);
    LODWORD(v94) = *((_DWORD *)v45 + 15);
    *(_DWORD *)v93 = *((_DWORD *)v47 + 14);
    *(_DWORD *)v92 = *((_DWORD *)v49 + 11);
    *(_DWORD *)v91 = *((_DWORD *)v51 + 10);
    v90[0] = *((_DWORD *)v107 + 9);
    LODWORD(v89) = *((_DWORD *)v98 + 6);
    McTemplateK0xxqqqqqqqqx(
      *(unsigned int *)v91,
      v57,
      v58,
      *((_QWORD *)v56 + 1),
      *((_QWORD *)v102 + 2),
      v89,
      *(_QWORD *)v90,
      *(_QWORD *)v91,
      *(_QWORD *)v92,
      *(_QWORD *)v93,
      v94,
      v95,
      v96,
      *((_QWORD *)v39 + 10));
  }
  v16 = v111;
  LODWORD(v14) = 0;
LABEL_22:
  if ( v110[0] )
    v112(v113, v16);
  return (unsigned int)v14;
}
