/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FA358 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C019D780 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000AD3C (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C009EEE0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009F778 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C00E5A14 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E61C8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00E6BEC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E9590 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C00E9650 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00FB9A8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0171AB0 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C019C694 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C019CDA4 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 v8; // rax
  void *v9; // r15
  struct SESSION_VIEW *v10; // r13
  const struct _DXGKARG_SETPOINTERSHAPE *v11; // rsi
  __int64 v12; // rdi
  const struct _DXGKARG_SETPOINTERPOSITION *v13; // r12
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 Width; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v32; // r13d
  unsigned int Height; // ecx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // r15
  void *pPixels; // rcx
  int v36; // eax
  UINT YHot; // eax
  int v38; // r11d
  __int64 v39; // r8
  unsigned __int128 v40; // xmm0
  int v41; // r9d
  int v42; // r10d
  char v43; // cl
  unsigned int v44; // r12d
  int v45; // ebx
  LONG v46; // ebx
  LONG v47; // r12d
  INT X; // eax
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  int v52; // r10d
  INT v53; // edx
  INT v54; // r8d
  int v55; // r9d
  __int64 v56; // r8
  __int64 v57; // rcx
  bool v58; // r15
  __int64 v59; // r8
  __int64 v60; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v67; // ecx
  _QWORD *v68; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v69; // rcx
  __int64 v70; // rbx
  INT v71; // eax
  __int64 v72; // rax
  UINT v73; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v75; // rbx
  __int64 v76; // r8
  struct _DXGKARG_SETPOINTERSHAPE *v77; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v78; // rbx
  void *v79; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v80; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v81; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v82; // [rsp+30h] [rbp-D0h]
  int *v83; // [rsp+38h] [rbp-C8h]
  char v84; // [rsp+50h] [rbp-B0h] BYREF
  char v85; // [rsp+51h] [rbp-AFh] BYREF
  int v86; // [rsp+54h] [rbp-ACh] BYREF
  int v87; // [rsp+58h] [rbp-A8h]
  int v88; // [rsp+5Ch] [rbp-A4h]
  int v89; // [rsp+60h] [rbp-A0h]
  _BYTE v90[12]; // [rsp+64h] [rbp-9Ch]
  int v91; // [rsp+70h] [rbp-90h]
  unsigned int v92; // [rsp+74h] [rbp-8Ch]
  SESSION_VIEW *v93; // [rsp+78h] [rbp-88h]
  unsigned __int128 v94; // [rsp+80h] [rbp-80h] BYREF
  const struct _DXGKARG_SETPOINTERPOSITION *v95; // [rsp+90h] [rbp-70h]
  void *v96; // [rsp+98h] [rbp-68h]
  _BYTE v97[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v98[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v99[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-40h]
  __int64 v101; // [rsp+C8h] [rbp-38h]
  char v102; // [rsp+D0h] [rbp-30h]
  _BYTE v103[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v104; // [rsp+E0h] [rbp-20h]
  __int64 v105; // [rsp+E8h] [rbp-18h]
  char v106; // [rsp+F0h] [rbp-10h]
  _BYTE v107[20]; // [rsp+100h] [rbp+0h] BYREF
  int v108; // [rsp+114h] [rbp+14h]
  struct _DXGKARG_SETPOINTERPOSITION v109; // [rsp+118h] [rbp+18h] BYREF

  v8 = *((_QWORD *)this + 1);
  v9 = a5;
  v10 = a4;
  v109 = *a2;
  v93 = a4;
  v11 = a3;
  v12 = *(_QWORD *)(v8 + 16);
  v13 = a2;
  v95 = a2;
  v96 = a5;
  if ( !v12 )
  {
    v63 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v63 + 24) = 1021LL;
    WdLogEvent5_WdAssertion(v63);
  }
  if ( !*(_QWORD *)(v12 + 2280) )
  {
    v64 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v64 + 24) = 1022LL;
    WdLogEvent5_WdAssertion(v64);
  }
  v101 = v12;
  v102 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(v12 + 24), 1uLL);
  v105 = v12;
  v100 = -1LL;
  v106 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(v12 + 24), 1uLL);
  v104 = -1LL;
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v98);
  if ( v15 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v97,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(v12 + 2280) + 280LL),
      v16,
      v17);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
    if ( a8 )
    {
      if ( *(_DWORD *)(v12 + 1504) < 0x7000u )
      {
        v65 = WdLogNewEntry5_WdAssertion(v19, Width, v20, v21);
        *(_QWORD *)(v65 + 24) = 1041LL;
        WdLogEvent5_WdAssertion(v65);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
      v11 = PristineCursor;
      if ( !PristineCursor->pPixels )
      {
        v15 = -1073741811;
        goto LABEL_55;
      }
      Width = PristineCursor->Width;
      v67 = (PristineCursor->Flags.Value & 1) + 1;
      v92 = PristineCursor->Width;
      v91 = PristineCursor->Height * v67;
    }
    else
    {
      v91 = a7;
      v92 = a6;
    }
    if ( (*(_DWORD *)(v12 + 300) & 0x100) == 0 && (*(_DWORD *)(v12 + 3868) & 8) != 0 )
      goto LABEL_66;
    v109.VidPnSourceId = *((_DWORD *)this + 4);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v12 + 2280), v109.VidPnSourceId, v20, v21) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v15 = -1073741823;
      v62[3] = -1073741823LL;
      v62[4] = *((unsigned int *)this + 4);
      v62[5] = v11->Flags.Value;
      v62[6] = a5;
      WdLogEvent5_WdError(v62);
      goto LABEL_55;
    }
    if ( (*(_DWORD *)(v12 + 300) & 0x20) != 0 && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v12 + 2280)) )
      goto LABEL_66;
    v24 = *((unsigned int *)this + 257);
    v84 = 1;
    v85 = 1;
    v25 = IsVirtualizationDisabledForTarget(v12, v24, (bool *)&v84, (bool *)&v85);
    v30 = v25;
    if ( v25 < 0 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v68[3] = *((unsigned int *)this + 4);
      v68[4] = *(int *)(v12 + 272);
      v68[5] = *(unsigned int *)(v12 + 268);
      v68[6] = v30;
      WdLogEvent5_WdError(v68);
    }
    if ( v84 )
    {
      if ( v85 && !*((_BYTE *)this + 668) )
      {
        v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2280), v11, v28);
        if ( v15 < 0 )
          goto LABEL_55;
        goto LABEL_48;
      }
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)this + 1),
                                           *((unsigned int *)this + 4),
                                           1LL,
                                           v29);
    }
    else
    {
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                           *((_QWORD *)this + 1),
                                           *((unsigned int *)this + 4),
                                           0LL,
                                           v29);
    }
    v32 = CurrentOrientation;
    v20 = *(unsigned int *)(v12 + 1632);
    if ( v11->Width > (unsigned int)v20
      || (Height = v11->Height, Width = *(unsigned int *)(v12 + 1636), Height > (unsigned int)Width)
      || (Width = (unsigned int)(v20 * Width),
          v11->Pitch * ((v11->Flags.Value & 1) + 1) * Height > 4 * (unsigned __int64)(unsigned int)Width) )
    {
LABEL_66:
      v15 = -1073741823;
      goto LABEL_55;
    }
    SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 1);
    pPixels = (void *)SavedCursor->pPixels;
    if ( !pPixels )
      goto LABEL_92;
    memset(pPixels, 0, 4 * *(unsigned int *)(v12 + 1636) * (unsigned __int64)*(unsigned int *)(v12 + 1632));
    Width = (__int64)DISPLAY_SOURCE::GetClippedCursor(this, 1);
    *(_QWORD *)&v90[4] = Width;
    if ( !*(_QWORD *)(Width + 24) )
      goto LABEL_92;
    v86 = 0;
    if ( *((_BYTE *)this + 668) )
    {
      v94 = 0uLL;
      *((_QWORD *)&v94 + 1) = *((_QWORD *)this + 84);
      v36 = ScaleCursorShape(
              (const struct tagRECT *)&v94,
              (const struct tagRECT *)((char *)v93 + 24),
              v32,
              v11,
              (struct _DXGKARG_SETPOINTERSHAPE *)Width,
              SavedCursor,
              (const struct _DXGK_DRIVERCAPS *)(v12 + 1608),
              &v86);
    }
    else
    {
      v36 = ScaleCursorShape(
              (const struct tagRECT *)((char *)this + 652),
              (const struct tagRECT *)((char *)v93 + 24),
              v32,
              v11,
              (struct _DXGKARG_SETPOINTERSHAPE *)Width,
              SavedCursor,
              (const struct _DXGK_DRIVERCAPS *)(v12 + 1608),
              &v86);
    }
    v15 = v36;
    if ( v36 < 0 )
      goto LABEL_55;
    if ( v86 )
    {
      if ( v32 != D3DKMDT_VPPR_IDENTITY && !v84 )
      {
        v69 = *(const struct _DXGKARG_SETPOINTERSHAPE **)&v90[4];
LABEL_79:
        RotateCursorShape(v69, SavedCursor, v32, (const struct _DXGK_DRIVERCAPS *)(v12 + 1608));
LABEL_28:
        v38 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
        v39 = (unsigned int)(*((_DWORD *)this + 166) - *((_DWORD *)this + 164));
        v40 = *(_OWORD *)((char *)this + 652);
        v41 = *((_DWORD *)v93 + 8) - *((_DWORD *)v93 + 6);
        v42 = *((_DWORD *)v93 + 9) - *((_DWORD *)v93 + 7);
        v43 = *((_BYTE *)this + 668);
        v44 = *((_DWORD *)this + 169);
        v45 = *((_DWORD *)this + 168);
        *(_DWORD *)&v90[4] = v44;
        *(_DWORD *)v90 = v45;
        v87 = v38;
        v86 = v39;
        v94 = v40;
        if ( v43 )
        {
          v39 = v44;
          v86 = v44;
          v47 = 0;
          v87 = v45;
          v38 = v45;
          v46 = 0;
        }
        else
        {
          v46 = DWORD1(v94);
          v47 = v94;
          *(_QWORD *)v90 = *((_QWORD *)&v94 + 1);
        }
        X = v95->X;
        if ( ((v32 - 1) & 0xFFFFFFFD) != 0 )
        {
          v49 = (unsigned int)((int)v39 * X / v41);
          v50 = v38 * v95->Y;
        }
        else
        {
          v49 = (unsigned int)(v38 * X / v41);
          v50 = v39 * v95->Y;
        }
        v51 = (unsigned int)(v50 >> 31);
        v88 = v49;
        LODWORD(v51) = v50 % v42;
        v52 = v50 / v42;
        v89 = v52;
        if ( v84 )
        {
          v109.X = v49 + v47;
          v71 = v52 + v46;
          goto LABEL_88;
        }
        if ( v32 == D3DKMDT_VPPR_ROTATE90 )
        {
          v53 = v52 + v47;
          v109.X = v52 + v47;
          v73 = v46 - SavedCursor->Height - v49;
        }
        else
        {
          if ( v32 != D3DKMDT_VPPR_ROTATE180 )
          {
            if ( v32 == D3DKMDT_VPPR_ROTATE270 )
            {
              v54 = v49 + v46;
              v53 = v38 + v47 - SavedCursor->Width - v52;
            }
            else
            {
              if ( v32 != D3DKMDT_VPPR_IDENTITY )
              {
                v72 = WdLogNewEntry5_WdAssertion((unsigned int)(v32 - 3), v51, v39, v49);
                *(_QWORD *)(v72 + 24) = 666LL;
                WdLogEvent5_WdAssertion(v72);
                v38 = v87;
              }
              v53 = v47 + v88;
              v54 = v46 + v89;
            }
            v55 = v86;
            v109.X = v53;
            goto LABEL_40;
          }
          v53 = v38 + v47 - SavedCursor->Width - v49;
          v109.X = v53;
          v73 = v46 - SavedCursor->Height - v52;
        }
        v55 = v86;
        v54 = v86 + v73;
LABEL_40:
        v109.Y = v54;
        if ( (signed int)(v53 + SavedCursor->Width) >= v47
          && v53 <= *(int *)v90
          && (signed int)(v54 + SavedCursor->Height) >= v46
          && v54 <= *(int *)&v90[4] )
        {
          goto LABEL_44;
        }
        v109.X = v47 + v38 / 2;
        v71 = v46 + v55 / 2;
LABEL_88:
        v109.Y = v71;
LABEL_44:
        FillClipParams(SavedCursor, this, &v109, (struct CURSOR_CLIP_PARAMS *)v107);
        if ( !v108 )
        {
          SavedCursor->VidPnSourceId = *((_DWORD *)this + 4);
          v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2280), SavedCursor, v56);
          if ( v15 < 0 )
            goto LABEL_55;
          *((_BYTE *)this + 725) = 0;
LABEL_47:
          v10 = v93;
          v9 = v96;
          v13 = v95;
LABEL_48:
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v83) = v109.Flags.0;
            LODWORD(v82) = v109.Y;
            LODWORD(v81) = v109.X;
            LODWORD(v80) = v109.VidPnSourceId;
            Template_pdqqq(v57, &EventSetPointerPosition, v20, v9, v80, v81, v82, v83);
          }
          v15 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v12 + 2280), &v109, v20);
          if ( v15 < 0 )
            goto LABEL_55;
          v58 = this == SESSION_VIEW::GetPrimaryDisplaySource(v10);
          LOBYTE(v59) = *(_BYTE *)&v109.Flags.0 & 1;
          ADAPTER_DISPLAY::SavePointerInfo(
            *(ADAPTER_DISPLAY **)(v12 + 2280),
            v109.VidPnSourceId,
            v59,
            (unsigned int)v109.X,
            v109.Y,
            v13->X,
            v13->Y);
          if ( a8 || *(_DWORD *)(v12 + 1504) < 0x7000u )
            goto LABEL_52;
          v77 = DISPLAY_SOURCE::GetPristineCursor(this, v11->Pitch * v11->Height * ((v11->Flags.Value & 1) + 1));
          v78 = v77;
          v79 = (void *)v77->pPixels;
          if ( v79 )
          {
            v77->Flags.Value = v11->Flags.Value;
            v77->Width = v11->Width;
            v77->Height = v11->Height;
            v77->Pitch = v11->Pitch;
            memmove(v79, v11->pPixels, v11->Pitch * v11->Height * ((v11->Flags.Value & 1) + 1));
            v78->XHot = v11->XHot;
            v78->YHot = v11->YHot;
LABEL_52:
            if ( v58 )
            {
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97, Width, v20, v21);
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v98);
              OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
                v12,
                v60,
                v13->VidPnSourceId);
            }
            v15 = 0;
            goto LABEL_55;
          }
          v15 = -1073741801;
LABEL_55:
          if ( v97[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97, Width, v20, v21);
          goto LABEL_57;
        }
        ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
        v75 = ClippedCursor;
        if ( ClippedCursor->pPixels )
        {
          ClipCurrentCursor(SavedCursor, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)v107);
          v75->VidPnSourceId = *((_DWORD *)this + 4);
          v15 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v12 + 2280), v75, v76);
          if ( v15 < 0 )
            goto LABEL_55;
          *((_BYTE *)this + 725) = 1;
          goto LABEL_47;
        }
LABEL_92:
        v15 = -1073741801;
        goto LABEL_55;
      }
      v70 = *(_QWORD *)&v90[4];
      SavedCursor->Flags.Value = **(_DWORD **)&v90[4];
      SavedCursor->Width = *(_DWORD *)(v70 + 4);
      SavedCursor->Height = *(_DWORD *)(v70 + 8);
      SavedCursor->Pitch = *(_DWORD *)(v70 + 12);
      memmove(
        (void *)SavedCursor->pPixels,
        *(const void **)(v70 + 24),
        *(_DWORD *)(v70 + 12) * *(_DWORD *)(v70 + 8) * ((*(_DWORD *)v70 & 1u) + 1));
      SavedCursor->XHot = *(_DWORD *)(v70 + 32);
      YHot = *(_DWORD *)(v70 + 36);
    }
    else
    {
      if ( v32 != D3DKMDT_VPPR_IDENTITY && !v84 )
      {
        v69 = v11;
        goto LABEL_79;
      }
      SavedCursor->Flags.Value = v11->Flags.Value;
      SavedCursor->Width = v11->Width;
      SavedCursor->Height = v11->Height;
      SavedCursor->Pitch = v11->Pitch;
      memmove((void *)SavedCursor->pPixels, v11->pPixels, v11->Pitch * v11->Height * ((v11->Flags.Value & 1) + 1));
      SavedCursor->XHot = v11->XHot;
      YHot = v11->YHot;
    }
    SavedCursor->YHot = YHot;
    goto LABEL_28;
  }
LABEL_57:
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  COREACCESS::~COREACCESS((COREACCESS *)v99);
  return (unsigned int)v15;
}
