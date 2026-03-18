/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01AFE14 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0014C0C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00ACA68 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00AD1BC (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C00AD2D0 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00E0EE8 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E1408 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E2618 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E26D8 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0154F5C (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C015505C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01AEE2C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C01AF53C (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
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
  SESSION_VIEW *v10; // r15
  void *v11; // r13
  const struct _DXGKARG_SETPOINTERPOSITION *v13; // r12
  __int64 v14; // r14
  int v16; // ebx
  __int64 XHot; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v23; // r8d
  UINT v24; // ecx
  UINT v25; // edx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // r15
  void *pPixels; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  const struct tagRECT *v29; // rcx
  void *v30; // rcx
  UINT v31; // eax
  int v32; // r11d
  int v33; // r8d
  __int128 v34; // xmm0
  int v35; // r9d
  int v36; // r10d
  bool v37; // zf
  int v38; // r12d
  int v39; // ebx
  int v40; // ebx
  int v41; // r12d
  INT X; // eax
  int v43; // r9d
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  int v48; // edx
  int v49; // r13d
  char v50; // r15
  __int64 v51; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  UINT Width; // edx
  UINT Height; // r8d
  UINT YHot; // eax
  int v58; // edx
  signed int v59; // edx
  _QWORD *v60; // rax
  __int64 v61; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v63; // ecx
  _QWORD *v64; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v65; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v66; // rbx
  struct _DXGKARG_SETPOINTERSHAPE *v67; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v68; // rbx
  void *v69; // rcx
  _QWORD *v70; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v71; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v72; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v73; // [rsp+30h] [rbp-D0h]
  int *v74; // [rsp+38h] [rbp-C8h]
  int v75; // [rsp+54h] [rbp-ACh] BYREF
  int v76; // [rsp+58h] [rbp-A8h]
  int v77; // [rsp+5Ch] [rbp-A4h]
  int v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+6Ch] [rbp-94h]
  unsigned int v81; // [rsp+70h] [rbp-90h]
  SESSION_VIEW *v82; // [rsp+78h] [rbp-88h]
  const struct _DXGKARG_SETPOINTERPOSITION *v83; // [rsp+80h] [rbp-80h]
  __int128 v84; // [rsp+88h] [rbp-78h] BYREF
  int v85; // [rsp+9Ch] [rbp-64h]
  void *v86; // [rsp+A0h] [rbp-60h]
  _BYTE v87[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v88[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v89[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v90[40]; // [rsp+E8h] [rbp-18h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v91; // [rsp+110h] [rbp+10h] BYREF

  v9 = *((_QWORD *)this + 1);
  v10 = a4;
  v11 = a5;
  v91 = *a2;
  v82 = a4;
  v13 = a2;
  v14 = *(_QWORD *)(v9 + 16);
  v83 = a2;
  v86 = a5;
  if ( !v14 )
  {
    v53 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v53 + 24) = 1070LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !*(_QWORD *)(v14 + 2456) )
  {
    v54 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v54 + 24) = 1071LL;
    WdLogEvent5_WdAssertion(v54);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, (struct DXGADAPTER *const)v14, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88);
  if ( v16 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v87, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v14 + 2456) + 280LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v87);
    if ( a9 )
    {
      if ( a3->Flags.Value != 2 )
        goto LABEL_65;
      Width = a3->Width;
      XHot = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      if ( Width > *(_DWORD *)(XHot + 1792) )
        goto LABEL_65;
      Height = a3->Height;
      if ( Height > *(_DWORD *)(XHot + 1796) )
        goto LABEL_65;
      if ( a3->Pitch != 4 * Width )
        goto LABEL_65;
      XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2456) + 80LL);
      if ( a3->VidPnSourceId >= (unsigned int)XHot )
        goto LABEL_65;
      if ( !a3->pPixels )
        goto LABEL_65;
      XHot = a3->XHot;
      if ( (unsigned int)XHot >= Width )
        goto LABEL_65;
      YHot = a3->YHot;
      if ( YHot >= Height )
        goto LABEL_65;
      *((_DWORD *)this + 937) = XHot;
      *((_DWORD *)this + 938) = YHot;
      if ( (_DWORD)XHot == -1 && YHot == -1 )
        goto LABEL_65;
      v58 = XHot + v13->X;
      if ( v58 < *((_DWORD *)v10 + 6)
        || v58 >= *((_DWORD *)v10 + 8)
        || (v59 = YHot + v13->Y, v59 < *((_DWORD *)v10 + 7))
        || v59 >= *((_DWORD *)v10 + 9) )
      {
LABEL_65:
        v60 = (_QWORD *)WdLogNewEntry5_WdError(XHot);
        v60[3] = *(int *)(v14 + 272);
        v60[4] = *(unsigned int *)(v14 + 268);
        v60[5] = *((unsigned int *)this + 4);
        WdLogEvent5_WdError(v60);
LABEL_66:
        v16 = -1073741811;
        goto LABEL_45;
      }
    }
    if ( a8 )
    {
      if ( *(_DWORD *)(v14 + 1664) < 0x7000u )
      {
        v61 = WdLogNewEntry5_WdAssertion(XHot);
        *(_QWORD *)(v61 + 24) = 1117LL;
        WdLogEvent5_WdAssertion(v61);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
      a3 = PristineCursor;
      if ( !PristineCursor->pPixels )
        goto LABEL_66;
      v63 = (PristineCursor->Flags.Value & 1) + 1;
      v81 = PristineCursor->Width;
      v80 = PristineCursor->Height * v63;
    }
    else
    {
      v80 = a7;
      v81 = a6;
    }
    if ( (*(_DWORD *)(v14 + 300) & 0x100) == 0 && (*(_DWORD *)(v14 + 4044) & 8) != 0 )
      goto LABEL_72;
    v91.VidPnSourceId = *((_DWORD *)this + 4);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 2456), v91.VidPnSourceId) )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v16 = -1073741823;
      v70[3] = -1073741823LL;
      v70[4] = *((unsigned int *)this + 4);
      v70[5] = a3->Flags.Value;
      v70[6] = a5;
      WdLogEvent5_WdError(v70);
      goto LABEL_45;
    }
    if ( (*(_DWORD *)(v14 + 300) & 0x20) != 0
      && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 2456)) )
    {
      goto LABEL_72;
    }
    v19 = IsVirtualizationDisabledForTarget((DXGADAPTER *)v14, *((_DWORD *)this + 267));
    v21 = v19;
    if ( v19 < 0 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v64[3] = *((unsigned int *)this + 4);
      v64[4] = *(int *)(v14 + 272);
      v64[5] = *(unsigned int *)(v14 + 268);
      v64[6] = v21;
      WdLogEvent5_WdError(v64);
    }
    if ( *((_BYTE *)this + 668) )
    {
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)this + 1),
                                           *((unsigned int *)this + 4),
                                           1LL);
      v23 = *(_DWORD *)(v14 + 1792);
      if ( a3->Width > v23
        || (v24 = a3->Height, v25 = *(_DWORD *)(v14 + 1796), v24 > v25)
        || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v24 > 4 * (unsigned __int64)(v23 * v25) )
      {
LABEL_72:
        v16 = -1073741823;
        goto LABEL_45;
      }
      SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 1);
      pPixels = (void *)SavedCursor->pPixels;
      if ( !pPixels )
        goto LABEL_82;
      memset(pPixels, 0, 4 * *(unsigned int *)(v14 + 1796) * (unsigned __int64)*(unsigned int *)(v14 + 1792));
      ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
      if ( !ClippedCursor->pPixels )
        goto LABEL_82;
      v75 = 0;
      if ( *((_BYTE *)this + 668) )
      {
        v84 = 0uLL;
        v29 = (const struct tagRECT *)&v84;
        *((_QWORD *)&v84 + 1) = *((_QWORD *)this + 84);
      }
      else
      {
        v29 = (const struct tagRECT *)((char *)this + 652);
      }
      v16 = ScaleCursorShape(
              v29,
              (const struct tagRECT *)((char *)v82 + 24),
              CurrentOrientation,
              a3,
              ClippedCursor,
              SavedCursor,
              (const struct _DXGK_DRIVERCAPS *)(v14 + 1768),
              &v75);
      if ( v16 < 0 )
        goto LABEL_45;
      v30 = (void *)SavedCursor->pPixels;
      if ( v75 )
      {
        SavedCursor->Flags.Value = ClippedCursor->Flags.Value;
        SavedCursor->Width = ClippedCursor->Width;
        SavedCursor->Height = ClippedCursor->Height;
        SavedCursor->Pitch = ClippedCursor->Pitch;
        memmove(
          v30,
          ClippedCursor->pPixels,
          ClippedCursor->Pitch * ClippedCursor->Height * ((ClippedCursor->Flags.Value & 1) + 1));
        SavedCursor->XHot = ClippedCursor->XHot;
        v31 = ClippedCursor->YHot;
      }
      else
      {
        SavedCursor->Flags.Value = a3->Flags.Value;
        SavedCursor->Width = a3->Width;
        SavedCursor->Height = a3->Height;
        SavedCursor->Pitch = a3->Pitch;
        memmove(v30, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
        SavedCursor->XHot = a3->XHot;
        v31 = a3->YHot;
      }
      SavedCursor->YHot = v31;
      v32 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
      v33 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
      v34 = *(_OWORD *)((char *)this + 652);
      v35 = *((_DWORD *)v82 + 8) - *((_DWORD *)v82 + 6);
      v36 = *((_DWORD *)v82 + 9) - *((_DWORD *)v82 + 7);
      v37 = *((_BYTE *)this + 668) == 0;
      v38 = *((_DWORD *)this + 169);
      v39 = *((_QWORD *)this + 84);
      v79 = *((_QWORD *)this + 84);
      v84 = v34;
      v76 = v32;
      v75 = v33;
      if ( v37 )
      {
        v40 = DWORD1(v84);
        v41 = v84;
        v79 = *((_QWORD *)&v84 + 1);
      }
      else
      {
        v33 = v38;
        v75 = v38;
        v41 = 0;
        v76 = v39;
        v32 = v39;
        v40 = 0;
      }
      X = v83->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v43 = v33 * X / v35;
        v44 = v32 * v83->Y;
      }
      else
      {
        v43 = v32 * X / v35;
        v44 = v33 * v83->Y;
      }
      v77 = v43;
      v78 = v44 / v36;
      v91.X = v43 + v41;
      v91.Y = v44 / v36 + v40;
      FillClipParams(SavedCursor, this, &v91, (struct CURSOR_CLIP_PARAMS *)&v84);
      if ( v85 )
      {
        v65 = DISPLAY_SOURCE::GetClippedCursor(this, 1);
        v66 = v65;
        if ( !v65->pPixels )
          goto LABEL_82;
        ClipCurrentCursor(SavedCursor, v65, (struct CURSOR_CLIP_PARAMS *)&v84);
        v66->VidPnSourceId = *((_DWORD *)this + 4);
        v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2456), v66);
        if ( v16 < 0 )
          goto LABEL_45;
        *((_BYTE *)this + 726) = 1;
      }
      else
      {
        SavedCursor->VidPnSourceId = *((_DWORD *)this + 4);
        v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2456), SavedCursor);
        if ( v16 < 0 )
          goto LABEL_45;
        *((_BYTE *)this + 726) = 0;
      }
      v11 = v86;
      v10 = v82;
      v13 = v83;
    }
    else
    {
      v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2456), a3);
      if ( v16 < 0 )
      {
LABEL_45:
        if ( v87[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87);
        goto LABEL_47;
      }
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v74) = v91.Flags.0;
      LODWORD(v73) = v91.Y;
      LODWORD(v72) = v91.X;
      LODWORD(v71) = v91.VidPnSourceId;
      McTemplateK0pqqqq(v45, &EventSetPointerPosition, v46, v11, v71, v72, v73, v74);
    }
    v16 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v14 + 2456), &v91);
    if ( v16 < 0 )
      goto LABEL_45;
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v10);
    v49 = v48 + 1;
    v50 = v48;
    if ( this == PrimaryDisplaySource )
      v50 = v48 + 1;
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v14 + 2456),
      v91.VidPnSourceId,
      v49 & *(_BYTE *)&v91.Flags.0,
      v91.X,
      v91.Y,
      v13->X,
      v13->Y);
    if ( a8 || *(_DWORD *)(v14 + 1664) < 0x7000u )
      goto LABEL_42;
    v67 = DISPLAY_SOURCE::GetPristineCursor(this, a3->Height * a3->Pitch * (v49 + (v49 & a3->Flags.Value)));
    v68 = v67;
    v69 = (void *)v67->pPixels;
    if ( v69 )
    {
      v67->Flags.Value = a3->Flags.Value;
      v67->Width = a3->Width;
      v67->Height = a3->Height;
      v67->Pitch = a3->Pitch;
      memmove(v69, a3->pPixels, a3->Height * a3->Pitch * (v49 + (v49 & a3->Flags.Value)));
      v68->XHot = a3->XHot;
      v68->YHot = a3->YHot;
LABEL_42:
      if ( v50 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v88);
        OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
          v14,
          v51,
          v13->VidPnSourceId);
      }
      v16 = 0;
      goto LABEL_45;
    }
LABEL_82:
    v16 = -1073741801;
    goto LABEL_45;
  }
LABEL_47:
  COREACCESS::~COREACCESS((COREACCESS *)v90);
  COREACCESS::~COREACCESS((COREACCESS *)v89);
  return (unsigned int)v16;
}
