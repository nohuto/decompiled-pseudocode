/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0152404 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C00300E0 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0030114 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     McTemplateK0xxqqqqqqqqx @ 0x1C0030364 (McTemplateK0xxqqqqqqqqx.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00C79F4 (DxgkQueryDmmInterface.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E21E8 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01926A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     _CombineModeList @ 0x1C0193C64 (_CombineModeList.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01CFEA0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0212078 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  __int64 VidPnSourceId; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rax
  struct _DXGDMM_INTERFACE *v15; // r13
  struct D3DKMDT_HVIDPN__ *v16; // r14
  __int64 (__fastcall *v17)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  ADAPTER_DISPLAY *v23; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v25; // r12
  int v26; // r11d
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  char v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // r15
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r12
  _QWORD *v39; // rax
  struct _DXGDMM_VIDPN_INTERFACE *v40; // r9
  unsigned int *v41; // rdi
  __int64 i; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // r15d
  __int64 v46; // rax
  struct DXGGLOBAL *v47; // r13
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  unsigned int v53; // r14d
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  void *v60; // r15
  __int64 v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // rcx
  struct DXGGLOBAL *v67; // rdi
  __int64 v68; // rcx
  struct DXGGLOBAL *v69; // rbx
  __int64 v70; // rcx
  struct DXGGLOBAL *v71; // rsi
  __int64 v72; // rcx
  struct DXGGLOBAL *v73; // r14
  __int64 v74; // rcx
  struct DXGGLOBAL *v75; // r15
  __int64 v76; // rcx
  struct DXGGLOBAL *v77; // r13
  __int64 v78; // rcx
  struct DXGGLOBAL *v79; // r12
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  struct DXGGLOBAL *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v88; // [rsp+28h] [rbp-D8h]
  unsigned int v89[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v90[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v91[8]; // [rsp+40h] [rbp-C0h]
  __int64 v92; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v93; // [rsp+50h] [rbp-B0h]
  unsigned int *v94; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v95; // [rsp+60h] [rbp-A0h]
  __int64 v96; // [rsp+70h] [rbp-90h] BYREF
  struct DXGGLOBAL *v97; // [rsp+78h] [rbp-88h]
  unsigned int v98; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v99; // [rsp+88h] [rbp-78h] BYREF
  struct DXGGLOBAL *v100; // [rsp+90h] [rbp-70h]
  unsigned __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v102; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v103; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v104; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGGLOBAL *v105; // [rsp+B8h] [rbp-48h]
  __int64 v106; // [rsp+C0h] [rbp-40h] BYREF
  void *v107; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v108[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMDT_HVIDPN__ *v109; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v110)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+E0h] [rbp-20h]
  __int64 v111; // [rsp+E8h] [rbp-18h]
  int v112; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v113; // [rsp+F8h] [rbp-8h] BYREF
  int v114; // [rsp+100h] [rbp+0h]
  int v115; // [rsp+104h] [rbp+4h]
  __int64 v116; // [rsp+108h] [rbp+8h]
  void *v117; // [rsp+110h] [rbp+10h]
  __int64 v118; // [rsp+118h] [rbp+18h]
  int v119; // [rsp+120h] [rbp+20h]
  _QWORD v120[5]; // [rsp+128h] [rbp+28h] BYREF
  int v121; // [rsp+150h] [rbp+50h]
  bool v122; // [rsp+154h] [rbp+54h]
  int v123; // [rsp+158h] [rbp+58h]
  int v124; // [rsp+15Ch] [rbp+5Ch]
  char v125; // [rsp+160h] [rbp+60h]
  __int64 v126; // [rsp+168h] [rbp+68h]
  void *v127; // [rsp+170h] [rbp+70h]
  __int64 v128; // [rsp+178h] [rbp+78h]
  int v129; // [rsp+180h] [rbp+80h]
  __int64 v130; // [rsp+188h] [rbp+88h]
  void *v131; // [rsp+190h] [rbp+90h]
  __int64 v132; // [rsp+198h] [rbp+98h]
  int v133; // [rsp+1A0h] [rbp+A0h]
  _BYTE v134[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v135[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v136[16]; // [rsp+200h] [rbp+100h] BYREF

  v105 = (struct DXGGLOBAL *)a4;
  v100 = (struct DXGGLOBAL *)a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v134,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v134);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v8) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v102 = 0LL;
  v11 = DxgkQueryDmmInterface(a1, v10, &v102);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = v13;
    v14[4] = a3->hAdapter;
    v14[5] = a1;
    v14[6] = VidPnSourceId;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  v15 = v102;
  v99 = 0LL;
  v106 = 0LL;
  v16 = 0LL;
  v109 = 0LL;
  v17 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v102 + 6);
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v108[0] = 0;
  v18 = v17(a1, &v106, &v99);
  v13 = v18;
  if ( v18 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v20[3] = a1;
    v20[4] = v13;
    goto LABEL_37;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v108,
    v106,
    *((_QWORD *)v15 + 8),
    (__int64)a1);
  v16 = v109;
  v103 = 0LL;
  v104 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v99)(
          v109,
          &v103,
          &v104);
  v13 = v21;
  if ( v21 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v20[3] = v13;
    v20[4] = v16;
    v20[5] = a1;
    v20[6] = VidPnSourceId;
    v20[7] = v99;
    goto LABEL_37;
  }
  v23 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 307);
  v13 = 0LL;
  v101 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v23, VidPnSourceId);
  v25 = (SESSION_VIEW *)SessionViewOwner;
  v26 = -1;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v25),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 307) + 112LL)
                                                        + 3760 * VidPnSourceId)) )
  {
LABEL_29:
    v40 = v99;
    v41 = v135;
    for ( i = 16LL; i; --i )
      *v41++ = v26;
    v43 = PrepareUnpinnedPathsFromSource(
            v15,
            a1,
            v16,
            v40,
            v103,
            v104,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v101,
            (unsigned int (*)[16])v135,
            0LL);
    v13 = v43;
    v45 = -1071774925;
    if ( v43 == -1071774925 || (v45 = -1071774886, v43 == -1071774886) )
    {
      v46 = WdLogNewEntry5_WdDmmEvent(v44);
      *(_QWORD *)(v46 + 24) = VidPnSourceId;
      *(_QWORD *)(v46 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v46);
      LODWORD(v13) = v45;
      goto LABEL_54;
    }
    v35 = 0;
    if ( v43 >= 0 )
    {
      v13 = v101;
      goto LABEL_39;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v20[3] = VidPnSourceId;
    v20[4] = a1;
    v20[5] = v13;
LABEL_37:
    WdLogEvent5_WdError(v20);
    goto LABEL_54;
  }
  v28 = 0;
  do
  {
    v29 = *((_QWORD *)PrimaryDisplaySource + 1);
    LOBYTE(v96) = 0;
    if ( *(DXGADAPTER **)(v29 + 16) != a1 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v30 + 24) = 4500LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                a1,
                *((_DWORD *)PrimaryDisplaySource + 267),
                0LL,
                (__int64)&v96,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v32 + 24) = 4514LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v13 )
    {
      if ( v28 != (_BYTE)v96 )
        goto LABEL_24;
      v33 = *(unsigned int *)(*((_QWORD *)a1 + 307) + 80LL);
      if ( v13 >= v33 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v34 + 24) = 4525LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v135[v13++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v13 = 1LL;
      v28 = v96;
      v136[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v135[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v101 = v13;
LABEL_24:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v13 <= 1 )
  {
    v15 = v102;
    v26 = -1;
    goto LABEL_29;
  }
  v35 = 1;
  v36 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v135, v13, v16, v136);
  v38 = v36;
  if ( v36 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    LODWORD(v13) = -1071775483;
    v39[3] = VidPnSourceId;
    v39[4] = a1;
    v39[5] = v38;
    v39[6] = -1071775483LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_54;
  }
LABEL_39:
  v122 = *((_QWORD *)a1 + 308) == 0LL;
  v120[2] = v99;
  v47 = (struct DXGGLOBAL *)((char *)v100 + 16);
  v120[3] = v103;
  v120[4] = v104;
  v121 = *((_DWORD *)v100 + 1);
  v123 = -1;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v120[0] = a1;
  v120[1] = v16;
  v124 = 0;
  v125 = 0;
  v129 = 0;
  v133 = 0;
  v97 = (struct DXGGLOBAL *)((char *)v100 + 16);
  v48 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (__int64)v120,
               (struct _D3DKMT_DISPLAYMODE **)v100 + 1,
               (unsigned int *)v100 + 4,
               (void **)(((unsigned __int64)v105 + 8) & -(__int64)(v105 != 0LL)),
               (unsigned int *)(((unsigned __int64)v105 + 16) & -(__int64)(v105 != 0LL)));
  operator delete[](v131);
  operator delete[](v127);
  if ( (int)v48 >= 0 )
  {
    if ( v35 )
    {
      v53 = 0;
      if ( v13 )
      {
        v50 = 0LL;
        do
        {
          v54 = v136[v50];
          v107 = 0LL;
          v98 = 0;
          v113 = a1;
          v114 = *((_DWORD *)v100 + 1);
          v119 = 0;
          v116 = 0LL;
          v117 = 0LL;
          v118 = 0LL;
          v115 = v54;
          v55 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
                       (__int64)&v113,
                       (struct _D3DKMT_DISPLAYMODE **)&v107,
                       &v98);
          operator delete[](v117);
          if ( (int)v55 >= 0 )
          {
            v60 = v107;
            if ( v107 )
            {
              v61 = (int)CombineModeList((_DWORD)v47, (int)v100 + 8, v98, (_DWORD)v107, 0);
              operator delete[](v60);
              if ( (int)v61 < 0 )
              {
                v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
                v65[3] = VidPnSourceId;
                v65[4] = v54;
                v65[5] = a1;
                v65[6] = v61;
                WdLogEvent5_WdWarning(v65);
              }
              v47 = v97;
            }
          }
          else
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
            v59[3] = VidPnSourceId;
            v59[4] = v54;
            v59[5] = a1;
            v59[6] = v55;
            WdLogEvent5_WdWarning(v59);
          }
          v50 = ++v53;
        }
        while ( v53 < v13 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v50) + 1, *(unsigned int *)v47);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v67 = DXGGLOBAL::GetGlobal(v66);
      v69 = DXGGLOBAL::GetGlobal(v68);
      v71 = DXGGLOBAL::GetGlobal(v70);
      v73 = DXGGLOBAL::GetGlobal(v72);
      v75 = DXGGLOBAL::GetGlobal(v74);
      v77 = DXGGLOBAL::GetGlobal(v76);
      v79 = DXGGLOBAL::GetGlobal(v78);
      v105 = DXGGLOBAL::GetGlobal(v80);
      v97 = DXGGLOBAL::GetGlobal(v81);
      v100 = DXGGLOBAL::GetGlobal(v82);
      v84 = DXGGLOBAL::GetGlobal(v83);
      LODWORD(v95) = *((_DWORD *)v69 + 19);
      LODWORD(v94) = *((_DWORD *)v71 + 18);
      LODWORD(v93) = *((_DWORD *)v73 + 15);
      LODWORD(v92) = *((_DWORD *)v75 + 14);
      *(_DWORD *)v91 = *((_DWORD *)v77 + 11);
      *(_DWORD *)v90 = *((_DWORD *)v79 + 10);
      v89[0] = *((_DWORD *)v105 + 9);
      LODWORD(v88) = *((_DWORD *)v97 + 6);
      McTemplateK0xxqqqqqqqqx(
        *(unsigned int *)v90,
        v85,
        v86,
        *((_QWORD *)v84 + 1),
        *((_QWORD *)v100 + 2),
        v88,
        *(_QWORD *)v89,
        *(_QWORD *)v90,
        *(_QWORD *)v91,
        v92,
        v93,
        v94,
        v95,
        *((_QWORD *)v67 + 10));
    }
    v16 = v109;
    LODWORD(v13) = 0;
  }
  else
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
    v52[3] = v48;
    v52[4] = v16;
    v52[5] = a1;
    v52[6] = VidPnSourceId;
    v52[7] = v13;
    WdLogEvent5_WdWarning(v52);
    LODWORD(v13) = v48;
  }
LABEL_54:
  if ( v108[0] )
    v110(v111, v16);
  return (unsigned int)v13;
}
