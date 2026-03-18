/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01B4120 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0007A8C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00AABA4 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00AB678 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00AC394 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00AF3E0 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00AF4A0 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C00AF530 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00B524C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00B53F8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C00B5500 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01B313C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C01B384C (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  __int64 v9; // rax
  __int64 v12; // rdi
  int v15; // ebx
  __int64 XHot; // rcx
  char *SavedCursor; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  bool v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rcx
  struct _FAST_MUTEX *v25; // rcx
  int MonitorInstance; // eax
  unsigned __int8 IsVirtualModeSuportDisabled; // r12
  int v28; // ebx
  bool v29; // zf
  int v30; // ebx
  int v31; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v33; // r8d
  UINT v34; // ecx
  UINT v35; // edx
  void *v36; // rcx
  int v37; // eax
  void *v38; // rcx
  UINT v39; // eax
  int v40; // r11d
  int v41; // r8d
  unsigned __int128 v42; // xmm0
  int v43; // r9d
  int v44; // r10d
  char v45; // cl
  int v46; // r12d
  LONG v47; // ebx
  LONG v48; // ebx
  LONG v49; // r12d
  INT X; // eax
  int v51; // r9d
  int v52; // eax
  int v53; // r10d
  INT v54; // edx
  INT v55; // r8d
  int v56; // r9d
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  const struct _DXGKARG_SETPOINTERPOSITION *v62; // rbx
  __int64 v63; // rdx
  struct _DXGKARG_SETPOINTERSHAPE *v65; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v66; // rbx
  void *pPixels; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  UINT Width; // edx
  UINT Height; // r8d
  UINT YHot; // eax
  signed int v74; // edx
  _QWORD *v75; // rax
  __int64 v76; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v89; // rcx
  struct DXGMONITOR *v90; // rbx
  void *v91; // rcx
  INT v92; // eax
  __int64 v93; // rax
  int v94; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *v95; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v96; // rbx
  __int64 v97; // r8
  struct _DXGKARG_SETPOINTERSHAPE *v98; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v99; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v100; // [rsp+30h] [rbp-D0h]
  int *v101; // [rsp+38h] [rbp-C8h]
  bool v102; // [rsp+50h] [rbp-B0h]
  int v103; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v104; // [rsp+58h] [rbp-A8h]
  char v105; // [rsp+59h] [rbp-A7h]
  struct DXGMONITOR *ClippedCursor; // [rsp+60h] [rbp-A0h] BYREF
  int v107; // [rsp+68h] [rbp-98h]
  int v108; // [rsp+6Ch] [rbp-94h]
  int v109; // [rsp+70h] [rbp-90h]
  LONG v110; // [rsp+74h] [rbp-8Ch]
  int v111; // [rsp+78h] [rbp-88h]
  unsigned int v112; // [rsp+7Ch] [rbp-84h]
  unsigned __int128 v113; // [rsp+80h] [rbp-80h] BYREF
  SESSION_VIEW *v114; // [rsp+90h] [rbp-70h]
  const struct _DXGKARG_SETPOINTERPOSITION *v115; // [rsp+98h] [rbp-68h]
  _BYTE v116[16]; // [rsp+A0h] [rbp-60h] BYREF
  void *v117; // [rsp+B0h] [rbp-50h]
  _BYTE v118[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v119[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-30h]
  __int64 v121; // [rsp+D8h] [rbp-28h]
  char v122; // [rsp+E0h] [rbp-20h]
  _BYTE v123[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h]
  char v126; // [rsp+100h] [rbp+0h]
  _BYTE v127[20]; // [rsp+110h] [rbp+10h] BYREF
  int v128; // [rsp+124h] [rbp+24h]
  _DXGKARG_SETPOINTERPOSITION v129; // [rsp+128h] [rbp+28h] BYREF

  v9 = *((_QWORD *)a1 + 1);
  v129 = *a2;
  v114 = a4;
  v12 = *(_QWORD *)(v9 + 16);
  v115 = a2;
  v117 = a5;
  if ( !v12 )
  {
    v69 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v69 + 24) = 1070LL;
    WdLogEvent5_WdAssertion(v69);
  }
  if ( !*(_QWORD *)(v12 + 2304) )
  {
    v70 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v70 + 24) = 1071LL;
    WdLogEvent5_WdAssertion(v70);
  }
  v121 = v12;
  v122 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
  v125 = v12;
  v120 = -1LL;
  v126 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
  v124 = -1LL;
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v118);
  if ( v15 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v116, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v12 + 2304) + 280LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v116);
    if ( a9 )
    {
      if ( a3->Flags.Value != 2 )
        goto LABEL_104;
      Width = a3->Width;
      XHot = *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
      if ( Width > *(_DWORD *)(XHot + 1656) )
        goto LABEL_104;
      Height = a3->Height;
      if ( Height > *(_DWORD *)(XHot + 1660) )
        goto LABEL_104;
      if ( a3->Pitch != 4 * Width )
        goto LABEL_104;
      XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2304) + 80LL);
      if ( a3->VidPnSourceId >= (unsigned int)XHot )
        goto LABEL_104;
      if ( !a3->pPixels )
        goto LABEL_104;
      XHot = a3->XHot;
      if ( (unsigned int)XHot >= Width )
        goto LABEL_104;
      YHot = a3->YHot;
      if ( YHot >= Height )
        goto LABEL_104;
      *((_DWORD *)a1 + 937) = XHot;
      *((_DWORD *)a1 + 938) = YHot;
      if ( (_DWORD)XHot == -1 && YHot == -1 )
        goto LABEL_104;
      XHot = (unsigned int)(a2->X + XHot);
      if ( (int)XHot < *((_DWORD *)a4 + 6)
        || (int)XHot >= *((_DWORD *)a4 + 8)
        || (v74 = YHot + a2->Y, v74 < *((_DWORD *)a4 + 7))
        || v74 >= *((_DWORD *)a4 + 9) )
      {
LABEL_104:
        v75 = (_QWORD *)WdLogNewEntry5_WdError(XHot);
        v75[3] = *(int *)(v12 + 272);
        v75[4] = *(unsigned int *)(v12 + 268);
        v75[5] = *((unsigned int *)a1 + 4);
        WdLogEvent5_WdError(v75);
LABEL_105:
        v15 = -1073741811;
        goto LABEL_81;
      }
    }
    LODWORD(SavedCursor) = 0;
    if ( a8 )
    {
      if ( *(_DWORD *)(v12 + 1528) < 0x7000u )
      {
        v76 = WdLogNewEntry5_WdAssertion(XHot);
        *(_QWORD *)(v76 + 24) = 1117LL;
        WdLogEvent5_WdAssertion(v76);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(a1, 0);
      a3 = PristineCursor;
      if ( !PristineCursor->pPixels )
        goto LABEL_105;
      v78 = (PristineCursor->Flags.Value & 1) + 1;
      v112 = PristineCursor->Width;
      v111 = PristineCursor->Height * v78;
    }
    else
    {
      v111 = a7;
      v112 = a6;
    }
    if ( (*(_DWORD *)(v12 + 300) & 0x100) == 0 && (*(_DWORD *)(v12 + 3884) & 8) != 0 )
      goto LABEL_148;
    v129.VidPnSourceId = *((_DWORD *)a1 + 4);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v12 + 2304), v129.VidPnSourceId) )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v15 = -1073741823;
      v68[3] = -1073741823LL;
      v68[4] = *((unsigned int *)a1 + 4);
      v68[5] = a3->Flags.Value;
      v68[6] = a5;
      WdLogEvent5_WdError(v68);
      goto LABEL_81;
    }
    if ( (*(_DWORD *)(v12 + 300) & 0x20) != 0 && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v12 + 2304)) )
      goto LABEL_148;
    v20 = *((unsigned int *)a1 + 267);
    v21 = 1;
    v102 = 1;
    v105 = 1;
    if ( (_DWORD)v20 == -1 )
    {
      v30 = -1073741811;
      goto LABEL_36;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v12) )
    {
      v79 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v79 + 24) = 7392LL;
      WdLogEvent5_WdAssertion(v79);
    }
    v23 = *(_QWORD *)(v12 + 2304);
    if ( !v23 )
    {
      v80 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v80 + 24) = 7397LL;
      WdLogEvent5_WdError(v80);
      v30 = -1073741811;
LABEL_111:
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v81[3] = *((unsigned int *)a1 + 4);
      v81[4] = *(int *)(v12 + 272);
      v81[5] = *(unsigned int *)(v12 + 268);
      v81[6] = v30;
      WdLogEvent5_WdError(v81);
LABEL_37:
      if ( v102 )
      {
        if ( v21 && !*((_BYTE *)a1 + 668) )
        {
          v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2304), a3, v19);
          if ( v15 >= 0 )
            goto LABEL_70;
          goto LABEL_81;
        }
        v31 = 1;
      }
      else
      {
        v31 = 0;
      }
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)a1 + 1),
                                           *((_DWORD *)a1 + 4),
                                           v31);
      v33 = *(_DWORD *)(v12 + 1656);
      if ( a3->Width > v33
        || (v34 = a3->Height, v35 = *(_DWORD *)(v12 + 1660), v34 > v35)
        || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v34 > 4 * (unsigned __int64)(v33 * v35) )
      {
LABEL_148:
        v15 = -1073741823;
        goto LABEL_81;
      }
      SavedCursor = (char *)DISPLAY_SOURCE::GetSavedCursor(a1, 1);
      v36 = (void *)*((_QWORD *)SavedCursor + 3);
      if ( !v36
        || (memset(v36, 0, 4 * *(unsigned int *)(v12 + 1660) * (unsigned __int64)*(unsigned int *)(v12 + 1656)),
            ClippedCursor = (struct DXGMONITOR *)DISPLAY_SOURCE::GetClippedCursor(a1, 1),
            !*((_QWORD *)ClippedCursor + 3)) )
      {
LABEL_146:
        v15 = -1073741801;
        goto LABEL_81;
      }
      v103 = 0;
      if ( *((_BYTE *)a1 + 668) )
      {
        v113 = 0uLL;
        *((_QWORD *)&v113 + 1) = *((_QWORD *)a1 + 84);
        v37 = ScaleCursorShape(
                (const struct tagRECT *)&v113,
                (const struct tagRECT *)((char *)v114 + 24),
                CurrentOrientation,
                a3,
                (struct _DXGKARG_SETPOINTERSHAPE *)ClippedCursor,
                (struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor,
                (const struct _DXGK_DRIVERCAPS *)(v12 + 1632),
                &v103);
      }
      else
      {
        v37 = ScaleCursorShape(
                (const struct tagRECT *)((char *)a1 + 652),
                (const struct tagRECT *)((char *)v114 + 24),
                CurrentOrientation,
                a3,
                (struct _DXGKARG_SETPOINTERSHAPE *)ClippedCursor,
                (struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor,
                (const struct _DXGK_DRIVERCAPS *)(v12 + 1632),
                &v103);
      }
      v15 = v37;
      if ( v37 < 0 )
        goto LABEL_81;
      if ( v103 )
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v102 )
        {
          v89 = (const struct _DXGKARG_SETPOINTERSHAPE *)ClippedCursor;
LABEL_133:
          RotateCursorShape(
            v89,
            (struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor,
            CurrentOrientation,
            (const struct _DXGK_DRIVERCAPS *)(v12 + 1632));
LABEL_51:
          v40 = *((_DWORD *)a1 + 165) - *((_DWORD *)a1 + 163);
          v41 = *((_DWORD *)a1 + 166) - *((_DWORD *)a1 + 164);
          v42 = *(_OWORD *)((char *)a1 + 652);
          v43 = *((_DWORD *)v114 + 8) - *((_DWORD *)v114 + 6);
          v44 = *((_DWORD *)v114 + 9) - *((_DWORD *)v114 + 7);
          v45 = *((_BYTE *)a1 + 668);
          v46 = *((_DWORD *)a1 + 169);
          v47 = *((_DWORD *)a1 + 168);
          LODWORD(ClippedCursor) = v46;
          v110 = v47;
          v107 = v40;
          v103 = v41;
          v113 = v42;
          if ( v45 )
          {
            v41 = v46;
            v103 = v46;
            v49 = 0;
            v107 = v47;
            v40 = v47;
            v48 = 0;
          }
          else
          {
            v48 = DWORD1(v113);
            v49 = v113;
            LODWORD(ClippedCursor) = HIDWORD(v113);
            v110 = DWORD2(v113);
          }
          X = v115->X;
          if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
          {
            v51 = v41 * X / v43;
            v52 = v40 * v115->Y;
          }
          else
          {
            v51 = v40 * X / v43;
            v52 = v41 * v115->Y;
          }
          v108 = v51;
          v109 = v52 / v44;
          v53 = v52 / v44;
          if ( v102 )
          {
            v129.X = v51 + v49;
            v92 = v53 + v48;
            goto LABEL_142;
          }
          if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
          {
            v54 = v53 + v49;
            v129.X = v53 + v49;
            v94 = v48 - *((_DWORD *)SavedCursor + 2) - v51;
          }
          else
          {
            if ( CurrentOrientation != D3DKMDT_VPPR_ROTATE180 )
            {
              if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE270 )
              {
                v55 = v51 + v48;
                v54 = v40 + v49 - *((_DWORD *)SavedCursor + 1) - v53;
              }
              else
              {
                if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
                {
                  v93 = WdLogNewEntry5_WdAssertion((unsigned int)(CurrentOrientation - 3));
                  *(_QWORD *)(v93 + 24) = 666LL;
                  WdLogEvent5_WdAssertion(v93);
                  v40 = v107;
                }
                v54 = v49 + v108;
                v55 = v48 + v109;
              }
              v56 = v103;
              v129.X = v54;
              goto LABEL_63;
            }
            v54 = v40 + v49 - *((_DWORD *)SavedCursor + 1) - v51;
            v129.X = v54;
            v94 = v48 - *((_DWORD *)SavedCursor + 2) - v53;
          }
          v56 = v103;
          v55 = v103 + v94;
LABEL_63:
          v129.Y = v55;
          if ( v54 + *((_DWORD *)SavedCursor + 1) >= v49
            && v54 <= v110
            && v55 + *((_DWORD *)SavedCursor + 2) >= v48
            && v55 <= (int)ClippedCursor )
          {
            goto LABEL_67;
          }
          v129.X = v49 + v40 / 2;
          v92 = v48 + v56 / 2;
LABEL_142:
          v129.Y = v92;
LABEL_67:
          FillClipParams((struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor, a1, &v129, (struct CURSOR_CLIP_PARAMS *)v127);
          if ( !v128 )
          {
            *((_DWORD *)SavedCursor + 4) = *((_DWORD *)a1 + 4);
            v58 = ADAPTER_DISPLAY::DdiSetPointerShape(
                    *(ADAPTER_DISPLAY **)(v12 + 2304),
                    (const struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor,
                    v57);
            LOBYTE(SavedCursor) = 0;
            v15 = v58;
            if ( v58 >= 0 )
            {
              *((_BYTE *)a1 + 725) = 0;
LABEL_70:
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v101) = v129.Flags.0;
                LODWORD(v100) = v129.Y;
                LODWORD(v99) = v129.X;
                LODWORD(v98) = v129.VidPnSourceId;
                McTemplateK0pqqqq(v59, &EventSetPointerPosition, v60, v117, v98, v99, v100, v101);
              }
              v15 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v12 + 2304), &v129, v60);
              if ( v15 < 0 )
                goto LABEL_81;
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v114);
              v62 = v115;
              if ( a1 == PrimaryDisplaySource )
                LOBYTE(SavedCursor) = 1;
              ADAPTER_DISPLAY::SavePointerInfo(
                *(ADAPTER_DISPLAY **)(v12 + 2304),
                v129.VidPnSourceId,
                *(_BYTE *)&v129.Flags.0 & 1,
                v129.X,
                v129.Y,
                v115->X,
                v115->Y);
              if ( !a8 && *(_DWORD *)(v12 + 1528) >= 0x7000u )
              {
                v65 = DISPLAY_SOURCE::GetPristineCursor(a1, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
                v66 = v65;
                pPixels = (void *)v65->pPixels;
                if ( !pPixels )
                {
                  v15 = -1073741801;
                  goto LABEL_81;
                }
                v65->Flags.Value = a3->Flags.Value;
                v65->Width = a3->Width;
                v65->Height = a3->Height;
                v65->Pitch = a3->Pitch;
                memmove(pPixels, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
                v66->XHot = a3->XHot;
                v66->YHot = a3->YHot;
                v62 = v115;
              }
              if ( (_BYTE)SavedCursor )
              {
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)v118);
                OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
                  v12,
                  v63,
                  v62->VidPnSourceId);
              }
              v15 = 0;
            }
LABEL_81:
            if ( v116[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
            goto LABEL_83;
          }
          v95 = DISPLAY_SOURCE::GetClippedCursor(a1, 1);
          v96 = v95;
          if ( v95->pPixels )
          {
            ClipCurrentCursor(
              (const struct _DXGKARG_SETPOINTERSHAPE *)SavedCursor,
              v95,
              (struct CURSOR_CLIP_PARAMS *)v127);
            v96->VidPnSourceId = *((_DWORD *)a1 + 4);
            LOBYTE(SavedCursor) = 0;
            v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2304), v96, v97);
            if ( v15 >= 0 )
            {
              *((_BYTE *)a1 + 725) = 1;
              goto LABEL_70;
            }
            goto LABEL_81;
          }
          goto LABEL_146;
        }
        v90 = ClippedCursor;
        v91 = (void *)*((_QWORD *)SavedCursor + 3);
        *(_DWORD *)SavedCursor = *(_DWORD *)ClippedCursor;
        *((_DWORD *)SavedCursor + 1) = *((_DWORD *)v90 + 1);
        *((_DWORD *)SavedCursor + 2) = *((_DWORD *)v90 + 2);
        *((_DWORD *)SavedCursor + 3) = *((_DWORD *)v90 + 3);
        memmove(
          v91,
          *((const void **)v90 + 3),
          *((_DWORD *)v90 + 2) * *((_DWORD *)v90 + 3) * ((*(_DWORD *)v90 & 1u) + 1));
        *((_DWORD *)SavedCursor + 8) = *((_DWORD *)v90 + 8);
        v39 = *((_DWORD *)v90 + 9);
      }
      else
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v102 )
        {
          v89 = a3;
          goto LABEL_133;
        }
        v38 = (void *)*((_QWORD *)SavedCursor + 3);
        *(_DWORD *)SavedCursor = a3->Flags.Value;
        *((_DWORD *)SavedCursor + 1) = a3->Width;
        *((_DWORD *)SavedCursor + 2) = a3->Height;
        *((_DWORD *)SavedCursor + 3) = a3->Pitch;
        memmove(v38, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
        *((_DWORD *)SavedCursor + 8) = a3->XHot;
        v39 = a3->YHot;
      }
      *((_DWORD *)SavedCursor + 9) = v39;
      goto LABEL_51;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v12) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v82);
    }
    if ( !*(_QWORD *)(v12 + 2304) )
    {
      v83 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v83);
    }
    v25 = *(struct _FAST_MUTEX **)(*(_QWORD *)(v12 + 2304) + 96LL);
    if ( v25 )
    {
      ClippedCursor = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v25, v20, 1, (ULONG **)&ClippedCursor);
      if ( MonitorInstance == -1073741275 )
      {
        v85 = WdLogNewEntry5_WdDmmEvent(v18);
        *(_QWORD *)(v85 + 24) = v20;
        *(_QWORD *)(v85 + 32) = v12;
        WdLogEvent5_WdDmmEvent(v85);
        v28 = -1073741632;
      }
      else
      {
        if ( MonitorInstance < 0 )
        {
          IsVirtualModeSuportDisabled = v104;
          v28 = MonitorInstance;
        }
        else
        {
          SavedCursor = (char *)ClippedCursor;
          if ( !ClippedCursor || *((_DWORD *)ClippedCursor + 104) != 1 )
          {
            v86 = WdLogNewEntry5_WdAssertion(v18);
            WdLogEvent5_WdAssertion(v86);
          }
          if ( !SavedCursor )
          {
            v87 = WdLogNewEntry5_WdAssertion(v18);
            WdLogEvent5_WdAssertion(v87);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(SavedCursor + 280), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled((DXGMONITOR *)SavedCursor);
          ExReleaseResourceLite((PERESOURCE)(SavedCursor + 280));
          KeLeaveCriticalRegion();
          LODWORD(SavedCursor) = 0;
          v28 = 0;
        }
        v29 = v28 == -1073741632;
        if ( v28 != -1073741632 )
          goto LABEL_30;
      }
      IsVirtualModeSuportDisabled = 0;
    }
    else
    {
      v84 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v84 + 24) = v12;
      WdLogEvent5_WdError(v84);
      IsVirtualModeSuportDisabled = v104;
      v28 = -1073741811;
    }
    v29 = v28 == -1073741632;
LABEL_30:
    if ( !v29 )
      LODWORD(SavedCursor) = v28;
    if ( (int)SavedCursor < 0 )
    {
      v88 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v88 + 24) = (int)SavedCursor;
      WdLogEvent5_WdAssertion(v88);
      v21 = v105;
    }
    else if ( IsVirtualModeSuportDisabled )
    {
      v102 = 1;
      v21 = 1;
    }
    else
    {
      v102 = *(_BYTE *)(v23 + 132) == 0;
      v21 = *(_BYTE *)(v23 + 133) == 0;
    }
    v30 = (int)SavedCursor;
    LOBYTE(SavedCursor) = 0;
LABEL_36:
    if ( v30 >= 0 )
      goto LABEL_37;
    goto LABEL_111;
  }
LABEL_83:
  COREACCESS::~COREACCESS((COREACCESS *)v123);
  COREACCESS::~COREACCESS((COREACCESS *)v119);
  return (unsigned int)v15;
}
