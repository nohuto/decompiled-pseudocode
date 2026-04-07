/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@W4NCAREA_FLAGS@@@Z @ 0x1800072A4 (-SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@W4NCAREA_FLAGS@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180014F44 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180015640 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x180019220 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x1800194C4 (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019A90 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019D60 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019E30 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x180019F10 (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A5C0 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B440 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001B868 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001B8E8 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001B940 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?IsTaskbarWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001ED98 (-IsTaskbarWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18001FD24 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?IsVisible@CVisual@@QEBA_NXZ @ 0x1800258E0 (-IsVisible@CVisual@@QEBA_NXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180026B30 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceil_0 @ 0x18004B330 (ceil_0.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F6B4 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180081C8C (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x180082638 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180082B48 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800A3FA8 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  char v3; // si
  char v4; // r13
  int v5; // ecx
  int v6; // r8d
  int v7; // r14d
  int v8; // r12d
  int v9; // r15d
  int v10; // edi
  bool v11; // zf
  _DWORD *v12; // rax
  char v13; // r12
  int v14; // r14d
  int v15; // esi
  int v16; // edi
  int v17; // r11d
  int v18; // ecx
  int v19; // ecx
  int v20; // r8d
  _DWORD *v21; // rdx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // r10d
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // r11d
  char v30; // r15
  int v31; // edx
  char v32; // r15
  int v33; // esi
  char v34; // r12
  int CurrentStyle; // edi
  float *v36; // rax
  __int64 v37; // rcx
  int v38; // r14d
  char v39; // si
  int v40; // esi
  bool v41; // al
  bool v42; // r14
  int v43; // eax
  bool v44; // cl
  char v45; // di
  bool v46; // r14
  int v47; // eax
  int v48; // r12d
  unsigned int v49; // r13d
  CAccent *v50; // rcx
  int v51; // r15d
  char v52; // al
  int v53; // eax
  __int64 v55; // r15
  __int64 v56; // rsi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  bool v61; // si
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // r8
  __int64 v65; // rdi
  int v66; // ecx
  int v67; // esi
  int v68; // r14d
  int v69; // r9d
  int v70; // r10d
  int v71; // ebx
  double v72; // xmm0_8
  double v73; // xmm0_8
  double v74; // xmm0_8
  double v75; // xmm0_8
  double v76; // xmm0_8
  double v77; // xmm0_8
  double v78; // xmm0_8
  double v79; // xmm0_8
  int v80; // eax
  __int64 (__fastcall *v81)(CTopLevelWindow *, char); // rax
  int v82; // eax
  __int64 (__fastcall *v83)(CVisual *__hidden); // rax
  int v84; // eax
  int v85; // ecx
  __int64 v86; // r8
  __int64 v87; // rax
  int v88; // eax
  struct CWindowData *v89; // rdx
  CProjectionBorderVisual *v90; // rcx
  int updated; // eax
  char v92; // al
  struct CWindowData *v93; // rdx
  CProjectionBorderVisual *v94; // rcx
  __int64 v95; // r9
  bool v96; // al
  __int64 (*v97)(void); // rax
  int v98; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // r13d
  CDesktopManager *v101; // r15
  unsigned int v102; // r12d
  unsigned int v103; // r8d
  __int64 v104; // rcx
  unsigned int v105; // edx
  __int64 v106; // rcx
  CTopLevelWindow *v107; // rcx
  int v108; // eax
  int v109; // r9d
  __int64 v110; // r10
  int v111; // r9d
  int v112; // eax
  double v113; // xmm0_8
  double v114; // xmm0_8
  double v115; // xmm0_8
  double v116; // xmm0_8
  HRGN v117; // r15
  unsigned int v118; // [rsp+20h] [rbp-49h]
  unsigned int v119; // [rsp+20h] [rbp-49h]
  unsigned int v120; // [rsp+20h] [rbp-49h]
  int v121; // [rsp+30h] [rbp-39h]
  unsigned int v122; // [rsp+30h] [rbp-39h]
  char v123; // [rsp+34h] [rbp-35h]
  char v124; // [rsp+35h] [rbp-34h]
  int v125; // [rsp+38h] [rbp-31h]
  int v126; // [rsp+3Ch] [rbp-2Dh]
  int v127; // [rsp+40h] [rbp-29h]
  int v128; // [rsp+44h] [rbp-25h] BYREF
  int v129; // [rsp+48h] [rbp-21h]
  int v130; // [rsp+4Ch] [rbp-1Dh]
  __int128 v131; // [rsp+50h] [rbp-19h]
  int v132; // [rsp+60h] [rbp-9h] BYREF
  RECT *p_rc1; // [rsp+68h] [rbp-1h]
  int v134; // [rsp+70h] [rbp+7h]
  RECT rc1; // [rsp+78h] [rbp+Fh] BYREF

  v1 = *((_DWORD *)this + 20);
  v3 = 0;
  v4 = 0;
  v123 = 0;
  v5 = v1 & 2;
  v124 = 0;
  v127 = v5;
  v6 = v1 & 8;
  v125 = v6;
  v130 = v1 & 0x4000;
  v7 = v1 & 0x100000;
  v8 = v1 & 0x200000;
  v128 = v1 & 0x100000;
  v126 = v1 & 0x200000;
  v9 = v1 & 0x1000000;
  LOBYTE(v10) = 0;
  v11 = (*((_BYTE *)this + 240) & 0x10) == 0;
  v129 = v1 & 0x1000000;
  if ( v11 )
  {
    if ( (v1 & 0x40000) != 0 )
    {
      CTopLevelWindow::UpdateWindowScale(this);
      *((_DWORD *)this + 20) &= ~0x40000u;
      v1 = *((_DWORD *)this + 20);
      v5 = v127;
      v6 = v125;
      v124 = 1;
    }
    if ( (v1 & 0x40E000) == 0 && !v8 && !v5 && !v6 && !v9 && !v7 )
      goto LABEL_63;
    v12 = (_DWORD *)*((_QWORD *)this + 90);
    v13 = 0;
    v121 = 0;
    v14 = v12[16];
    v15 = v12[18];
    v16 = v12[17];
    v17 = v12[19];
    if ( v14 != *((_DWORD *)this + 147) )
    {
      *((_DWORD *)this + 147) = v14;
      v13 = 1;
    }
    if ( v16 != *((_DWORD *)this + 148) )
    {
      *((_DWORD *)this + 148) = v16;
      v13 = 1;
    }
    if ( v15 != *((_DWORD *)this + 149) )
    {
      *((_DWORD *)this + 149) = v15;
      v13 = 1;
    }
    if ( v17 != *((_DWORD *)this + 150) )
    {
      *((_DWORD *)this + 150) = v17;
      v13 = 1;
    }
    v18 = v12[14] - v12[12];
    if ( v18 < 0 )
      v18 = 0;
    v19 = v18 - v16 - v14;
    v20 = v12[15] - v12[13];
    if ( v20 < 0 )
      v20 = 0;
    v21 = (_DWORD *)*((_QWORD *)this + 90);
    v22 = v20 - v17 - v15;
    v23 = v21[20];
    if ( *((_QWORD *)v21 + 10) == 0x7FFFFFFF7FFFFFFFLL && v21[22] == 0x7FFFFFFF && v21[23] == 0x7FFFFFFF )
    {
      v23 = v19 / 2;
      v25 = v22 / 2;
      v24 = (v19 + 1) / 2;
      v26 = (v22 + 1) / 2;
    }
    else
    {
      if ( v19 < v23 )
        v23 = v19;
      v24 = v19 - v23;
      if ( v24 >= v21[21] )
        v24 = v21[21];
      v25 = v22;
      v26 = v21[23];
      if ( v22 >= v21[22] )
        v25 = v21[22];
      v27 = v22 - v25;
      if ( v27 < v26 )
      {
LABEL_26:
        v28 = v24 + v16;
        v29 = v27 + v17;
        v30 = 0;
        v31 = v25 + v15;
        if ( v23 + v14 != *((_DWORD *)this + 151) )
        {
          *((_DWORD *)this + 151) = v23 + v14;
          v30 = 1;
        }
        if ( v28 != *((_DWORD *)this + 152) )
        {
          *((_DWORD *)this + 152) = v28;
          v30 = 1;
        }
        if ( v31 != *((_DWORD *)this + 153) )
        {
          *((_DWORD *)this + 153) = v31;
          v30 = 1;
        }
        if ( v29 != *((_DWORD *)this + 154) )
        {
          *((_DWORD *)this + 154) = v29;
          v30 = 1;
        }
        v32 = v13 | v30;
        if ( v32 )
        {
          v93 = (struct CWindowData *)*((_QWORD *)this + 90);
          v94 = (CProjectionBorderVisual *)*((_QWORD *)v93 + 51);
          if ( v94 )
            CProjectionBorderVisual::UpdateRectFromWindow(v94, v93);
        }
        v33 = *((_DWORD *)this + 146);
        v34 = (unsigned __int8)IsOpenThemeDataPresent() && (v33 & 6) != 0;
        v4 = 0;
        v123 = 0;
        CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 90));
        if ( CurrentStyle != *((_DWORD *)this + 146) )
        {
          if ( CVisual::IsVisible(*((CVisual **)this + 32))
            && CTopLevelWindow::IsTaskbarWindow(this)
            && (CurrentStyle & 0xFFF90F9F) != (*((_DWORD *)this + 146) & 0xFFF90F9F) )
          {
            CTopLevelWindow::SendWindowStyleChangedEvent(*((_QWORD *)this + 90), CurrentStyle & 0xFFF90F9F);
          }
          v4 = 1;
          *((_DWORD *)this + 146) = CurrentStyle;
          v123 = 1;
        }
        if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0 )
        {
          v36 = (float *)*((_QWORD *)this + 72);
          if ( v36 )
          {
            v37 = *((_QWORD *)this + 90);
            if ( v37 )
            {
              if ( (*(_BYTE *)(v37 + 592) & 8) != 0
                && (*((_DWORD *)this + 151)
                 || *((_DWORD *)this + 153)
                 || *((_DWORD *)this + 152)
                 || *((_DWORD *)this + 154))
                && (1.0 != *((float *)this + 178)
                 || (float)(v36[8] * v36[4]) != *((float *)this + 175)
                 || (float)(v36[8] * v36[5]) != *((float *)this + 176)
                 || (float)(v36[8] * v36[6]) != *((float *)this + 177)) )
              {
                v4 = 1;
                v123 = 1;
              }
            }
          }
        }
        v38 = *((_DWORD *)this + 146);
        v39 = v33 ^ v38;
        v10 = v39 & 0x40;
        v40 = v39 & 0x20;
        v41 = 0;
        if ( v4 )
        {
          v92 = (unsigned __int8)IsOpenThemeDataPresent() && (v38 & 6) != 0;
          if ( v34 != v92 )
            v41 = 1;
        }
        v8 = v126;
        if ( v40 || v10 || v126 || v41 )
          LOBYTE(v10) = 1;
        v42 = !*((_QWORD *)this + 59) && *(_DWORD *)(*((_QWORD *)this + 90) + 128LL);
        v3 = v32 | CTopLevelWindow::UpdateMarginsDependentOnStyle(this);
        v9 = v129;
        if ( v129 || v3 || v4 || (_BYTE)v10 || v42 )
        {
          v89 = (struct CWindowData *)*((_QWORD *)this + 90);
          v90 = (CProjectionBorderVisual *)*((_QWORD *)v89 + 51);
          if ( v90 )
          {
            if ( v3 )
              CProjectionBorderVisual::UpdateRectFromWindow(v90, v89);
            if ( v126 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 90) + 408LL) + 24LL))(
                *(_QWORD *)(*((_QWORD *)this + 90) + 408LL),
                0x4000LL);
          }
          updated = CTopLevelWindow::UpdateWindowVisuals(this);
          v121 = updated;
          if ( updated >= 0 )
          {
LABEL_62:
            *((_DWORD *)this + 20) &= 0xFE9F1FFF;
            v1 = *((_DWORD *)this + 20);
            v7 = v128;
LABEL_63:
            if ( (v1 & 0x4000000) != 0 )
            {
              v43 = CTopLevelWindow::UpdateClientAreaBounds(this);
              v121 = v43;
              if ( v43 < 0 )
              {
                v118 = 4365;
                goto LABEL_252;
              }
              *((_DWORD *)this + 20) &= ~0x4000000u;
              v1 = *((_DWORD *)this + 20);
            }
            if ( (v1 & 0x2000000) != 0 )
            {
              v85 = 0;
              v121 = 0;
              v86 = *(_QWORD *)(*((_QWORD *)this + 90) + 376LL);
              if ( v86 )
              {
                v87 = *((_QWORD *)this + 59);
                if ( v87 )
                {
                  v88 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v87 + 16) + 16LL)
                                                                          + 568LL))(
                          *(_QWORD *)(*(_QWORD *)(v87 + 16) + 16LL),
                          *(unsigned int *)(*(_QWORD *)(v87 + 16) + 24LL),
                          *(unsigned int *)(v86 + 24));
                  v121 = v88;
                  v85 = v88;
                  if ( v88 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0x13EAu);
                    v85 = v121;
                  }
                }
              }
              if ( v85 < 0 )
              {
                v118 = 4372;
                v109 = v85;
                goto LABEL_254;
              }
              *((_DWORD *)this + 20) &= ~0x2000000u;
              v1 = *((_DWORD *)this + 20);
            }
            v44 = v7 || v8;
            v45 = v44 | v10;
            if ( (v1 & 0x10000) != 0 )
            {
              v43 = CTopLevelWindow::UpdateTitle((CText **)this);
              v121 = v43;
              if ( v43 < 0 )
              {
                v118 = 4383;
                goto LABEL_252;
              }
              *((_DWORD *)this + 20) &= ~0x10000u;
              v1 = *((_DWORD *)this + 20);
            }
            if ( (v1 & 0x20000) == 0 )
              goto LABEL_70;
            v43 = CTopLevelWindow::UpdateIcon(this);
            v121 = v43;
            if ( v43 >= 0 )
            {
              *((_DWORD *)this + 20) &= ~0x20000u;
LABEL_70:
              v46 = v3 || v127;
              if ( !(unsigned __int8)IsOpenThemeDataPresent()
                || (*((_DWORD *)this + 20) & 0x1000) == 0 && !v4 && !v3 && !v124 && !v9 )
              {
LABEL_79:
                if ( *((_QWORD *)this + 64) && v45 )
                {
                  CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(
                                                                this,
                                                                &v128);
                  WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                              this,
                                              *CurrentDefaultColorizationFlags | 8u);
                  CText::SetBackgroundColor(*((CText **)this + 64), WindowColorizationColor);
                  v101 = CDesktopManager::s_pDesktopManagerInstance;
                  v102 = 0;
                  v103 = 0;
                  v104 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
                  v105 = *(_DWORD *)(v104 + 360);
                  if ( v105 )
                  {
                    v110 = *(_QWORD *)(v104 + 336);
                    while ( *(_QWORD *)(v110 + 48LL * v103 + 8) != *((_QWORD *)this + 90) )
                    {
                      if ( ++v103 >= v105 )
                        goto LABEL_217;
                    }
                    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
                      *(CTopLevelWindow **)(v110 + 48LL * v103),
                      WindowColorizationColor);
                    v101 = CDesktopManager::s_pDesktopManagerInstance;
                  }
LABEL_217:
                  if ( *((_DWORD *)v101 + 184) )
                  {
                    do
                      CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
                        *(CDesktopThumbnailBase **)(*((_QWORD *)v101 + 89) + 8LL * v102++),
                        this,
                        WindowColorizationColor);
                    while ( v102 < *((_DWORD *)v101 + 184) );
                  }
                  v106 = *(_QWORD *)(*((_QWORD *)this + 90) + 424LL);
                  if ( v106 )
                  {
                    v107 = *(CTopLevelWindow **)(v106 + 24);
                    if ( v107 )
                      CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v107, WindowColorizationColor);
                  }
                }
                v47 = *((_DWORD *)this + 20);
                v48 = 0;
                v122 = 0;
                if ( (v47 & 2) != 0 )
                {
                  v81 = *(__int64 (__fastcall **)(CTopLevelWindow *, char))(*(_QWORD *)this + 72LL);
                  if ( v81 == CTopLevelWindow::UpdateLayout )
                    v82 = CTopLevelWindow::UpdateLayout(this, 0);
                  else
                    v82 = v81(this, 0);
                  v122 = v82;
                  if ( v82 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x83u);
                    goto LABEL_268;
                  }
                  *((_DWORD *)this + 20) &= ~2u;
                  v47 = *((_DWORD *)this + 20);
                }
                if ( (v47 & 8) == 0 )
                  goto LABEL_83;
                v83 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
                if ( v83 == CVisual::UpdateOffset )
                  v84 = CVisual::UpdateOffset(this);
                else
                  v84 = v83(this);
                v122 = v84;
                if ( v84 >= 0 )
                {
                  *((_DWORD *)this + 20) &= ~8u;
                  v47 = *((_DWORD *)this + 20);
LABEL_83:
                  if ( (v47 & 0x10) != 0 )
                  {
                    v108 = CVisual::UpdateTransform(this);
                    v49 = v108;
                    if ( v108 < 0 )
                    {
                      v119 = 145;
                      goto LABEL_273;
                    }
                    *((_DWORD *)this + 20) &= ~0x10u;
                    v47 = *((_DWORD *)this + 20);
                  }
                  else
                  {
                    v49 = v122;
                  }
                  if ( (v47 & 0x20) == 0 )
                  {
LABEL_86:
                    if ( (v47 & 0x40) == 0 )
                      goto LABEL_87;
                    v112 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 408LL))(
                             *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                             *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
                             (char *)this + 196);
                    v49 = v112;
                    if ( v112 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v112, 0x3D9u);
                    if ( (v49 & 0x80000000) == 0 )
                    {
                      *((_DWORD *)this + 20) &= ~0x40u;
LABEL_87:
                      if ( (v49 & 0x80000000) != 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x115Au);
                        return v49;
                      }
                      if ( v45 || v46 || v130 )
                      {
                        v80 = CTopLevelWindow::UpdateNCAreaBackground(this);
                        v49 = v80;
                        if ( v80 < 0 )
                        {
                          v120 = 4449;
                          goto LABEL_242;
                        }
                        *((_DWORD *)this + 20) &= ~0x100000u;
                      }
                      if ( (*((_DWORD *)this + 20) & 0x80000) != 0 || v46 )
                      {
                        v80 = CTopLevelWindow::UpdateClientBlur(this);
                        v49 = v80;
                        if ( v80 < 0 )
                        {
                          v120 = 4456;
                          goto LABEL_242;
                        }
                        *((_DWORD *)this + 20) &= ~0x80000u;
                      }
                      if ( v45 || v46 )
                      {
                        v80 = CTopLevelWindow::UpdateOcclusionHints(this);
                        v49 = v80;
                        if ( v80 < 0 )
                        {
                          v120 = 4463;
LABEL_242:
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, v120);
                          return v49;
                        }
                      }
                      if ( v3 )
                        CWindowData::NotifySWROfMarginOrSizeChange(
                          *((CWindowData **)this + 90),
                          (*((_BYTE *)this + 240) & 0x40) == 0,
                          (*((_BYTE *)this + 240) & 0x40) != 0);
                      v50 = (CAccent *)*((_QWORD *)this + 33);
                      if ( v50 )
                      {
                        v95 = *((_QWORD *)this + 90);
                        v96 = (*(_BYTE *)(v95 + 156) & 2) == 0 && v45 && *(_DWORD *)(v95 + 152) == 2;
                        v51 = v125;
                        if ( v46 || v125 || v96 )
                        {
                          if ( v96 )
                          {
                            *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
                            v95 = *((_QWORD *)this + 90);
                            v50 = (CAccent *)*((_QWORD *)this + 33);
                          }
                          v80 = CAccent::UpdateAccentPolicy(
                                  v50,
                                  (const struct tagRECT *)(v95 + 48),
                                  (__m128i *)(v95 + 152),
                                  *(struct CResource **)(v95 + 360));
                          v49 = v80;
                          if ( v80 < 0 )
                          {
                            v120 = 4489;
                            goto LABEL_242;
                          }
                          v50 = (CAccent *)*((_QWORD *)this + 33);
                        }
                        v97 = *(__int64 (**)(void))(*(_QWORD *)v50 + 48LL);
                        if ( (char *)v97 == (char *)CAccent::ValidateVisual )
                          v98 = CAccent::ValidateVisual(v50);
                        else
                          v98 = v97();
                        v49 = v98;
                        if ( v98 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x118Bu);
                          return v49;
                        }
                      }
                      else
                      {
                        v51 = v125;
                      }
                      v52 = *((_BYTE *)this + 240);
                      if ( (v52 & 0x40) != 0 || !v3 && !v51 && !v127 )
                        goto LABEL_103;
                      v55 = *((_QWORD *)this + 90);
                      if ( !*(_QWORD *)(v55 + 40) )
                        goto LABEL_103;
                      rc1 = *(RECT *)(v55 + 180);
                      v56 = v52 & 8 | 0x136LL;
                      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v55 + 304) - 0.0)) & _xmm) > 0.0000011920929 )
                      {
                        v57 = *(_DWORD *)((char *)this + 2 * v56);
                        if ( v57 < 0 )
                        {
                          v113 = floor_0((float)((float)v57 / *(float *)(v55 + 304)) + 0.5);
                          rc1.left += (int)v113;
                        }
                        v58 = *(_DWORD *)((char *)this + 2 * v56 + 4);
                        if ( v58 < 0 )
                        {
                          v114 = floor_0((float)((float)v58 / *(float *)(v55 + 304)) + 0.5);
                          rc1.right -= (int)v114;
                        }
                        v59 = *(_DWORD *)((char *)this + 2 * v56 + 8);
                        if ( v59 < 0 )
                        {
                          v115 = floor_0((float)((float)v59 / *(float *)(v55 + 304)) + 0.5);
                          rc1.top += (int)v115;
                        }
                        v60 = *(_DWORD *)((char *)this + 2 * v56 + 12);
                        if ( v60 < 0 )
                        {
                          v116 = floor_0((float)((float)v60 / *(float *)(v55 + 304)) + 0.5);
                          rc1.bottom -= (int)v116;
                        }
                      }
                      v61 = EqualRect(&rc1, (const RECT *)(v55 + 180));
                      if ( (*((_BYTE *)this + 240) & 4) != 0 )
                      {
                        if ( v61 )
                        {
LABEL_103:
                          v53 = *((_DWORD *)this + 20);
                          if ( (v53 & 0x800000) != 0 )
                          {
                            CTopLevelWindow::UpdateLivePreviewAnimation(this);
                            *((_DWORD *)this + 20) &= ~0x800000u;
                            v53 = *((_DWORD *)this + 20);
                          }
                          if ( (v53 & 0x8000000) != 0 )
                          {
                            CTopLevelWindow::UpdateDCompVisuals(this);
                            *((_DWORD *)this + 20) &= ~0x8000000u;
                          }
                          if ( v45 || v46 || v123 )
                          {
                            v62 = *((_QWORD *)this + 90);
                            if ( v62 )
                            {
                              if ( *(_QWORD *)(v62 + 40) )
                              {
                                v63 = *((_DWORD *)this + 146);
                                if ( (v63 & 0x40020) == 0 )
                                {
                                  v131 = 0uLL;
                                  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v63 & 6) != 0
                                    || (*((_DWORD *)this + 146) & 0x200000) != 0 )
                                  {
                                    v64 = 620LL;
                                    if ( (*((_BYTE *)this + 240) & 8) != 0 )
                                      v64 = 636LL;
                                    v65 = *((_QWORD *)this + 90);
                                    v66 = *(_DWORD *)((char *)this + v64);
                                    v67 = *(_DWORD *)((char *)this + v64 + 4);
                                    v68 = *(_DWORD *)((char *)this + v64 + 12);
                                    if ( !v65 || (*(_BYTE *)(v65 + 592) & 8) != 0 )
                                    {
                                      v69 = *((_DWORD *)this + 151) - v66 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
                                      if ( v69 < 0 )
                                        v69 = 0;
                                      v70 = *((_DWORD *)this + 152) - v67 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
                                      if ( v70 < 0 )
                                        v70 = 0;
                                      if ( *((_DWORD *)this + 154) - v68 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL) >= 0 )
                                        v48 = *((_DWORD *)this + 154) - v68 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
                                      v66 += v69;
                                      v67 += v70;
                                      v68 += v48;
                                    }
                                    v71 = *(_DWORD *)((char *)this + v64 + 8);
                                  }
                                  else
                                  {
                                    v65 = *((_QWORD *)this + 90);
                                    v71 = DWORD2(v131);
                                    v68 = HIDWORD(v131);
                                    v67 = DWORD1(v131);
                                    v66 = v131;
                                  }
                                  *(_QWORD *)&rc1.left = 0LL;
                                  *(_QWORD *)&rc1.right = 0LL;
                                  v72 = (double)v66 / *(double *)(v65 + 296);
                                  if ( v72 < 0.0 )
                                    v73 = ceil_0(v72 - 0.5);
                                  else
                                    v73 = floor_0(v72 + 0.5);
                                  rc1.left = (int)v73;
                                  v74 = (double)v67 / *(double *)(v65 + 296);
                                  if ( v74 < 0.0 )
                                    v75 = ceil_0(v74 - 0.5);
                                  else
                                    v75 = floor_0(v74 + 0.5);
                                  rc1.right = (int)v75;
                                  v76 = (double)v68 / *(double *)(v65 + 296);
                                  if ( v76 < 0.0 )
                                    v77 = ceil_0(v76 - 0.5);
                                  else
                                    v77 = floor_0(v76 + 0.5);
                                  rc1.bottom = (int)v77;
                                  v78 = (double)v71 / *(double *)(v65 + 296);
                                  if ( v78 < 0.0 )
                                    v79 = ceil_0(v78 - 0.5);
                                  else
                                    v79 = floor_0(v78 + 0.5);
                                  v132 = 8;
                                  v134 = 16;
                                  rc1.top = (int)v79;
                                  p_rc1 = &rc1;
                                  SetWindowCompositionAttribute(*(_QWORD *)(v65 + 40), &v132);
                                }
                              }
                            }
                          }
                          return v49;
                        }
                      }
                      else if ( v61 )
                      {
                        v117 = 0LL;
                        goto LABEL_288;
                      }
                      v117 = CreateRectRgnIndirect(&rc1);
LABEL_288:
                      if ( !(unsigned int)SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 90) + 40LL), v117, 1LL) && v117 )
                        DeleteObject(v117);
                      *((_BYTE *)this + 240) &= ~4u;
                      *((_BYTE *)this + 240) |= 4 * v61;
                      goto LABEL_103;
                    }
                    v119 = 159;
                    v111 = v49;
LABEL_275:
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v111, v119);
                    goto LABEL_87;
                  }
                  v108 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 144LL))(this);
                  v49 = v108;
                  if ( v108 >= 0 )
                  {
                    *((_DWORD *)this + 20) &= ~0x20u;
                    v47 = *((_DWORD *)this + 20);
                    goto LABEL_86;
                  }
                  v119 = 152;
LABEL_273:
                  v111 = v108;
                  goto LABEL_275;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x8Au);
LABEL_268:
                v49 = v122;
                goto LABEL_87;
              }
              v43 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
              v121 = v43;
              if ( v43 >= 0 )
              {
                *((_DWORD *)this + 20) &= ~0x1000u;
                goto LABEL_79;
              }
              v118 = 4404;
              goto LABEL_252;
            }
            v118 = 4389;
LABEL_252:
            v109 = v43;
LABEL_254:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v109, v118);
            return (unsigned int)v121;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x106Cu);
        }
        v43 = v121;
        if ( v121 < 0 )
        {
          v118 = 4358;
          goto LABEL_252;
        }
        goto LABEL_62;
      }
    }
    v27 = v26;
    goto LABEL_26;
  }
  v80 = CVisual::ValidateVisual(this);
  v49 = v80;
  if ( v80 < 0 )
  {
    v120 = 4328;
    goto LABEL_242;
  }
  if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
  {
    CTopLevelWindow::UpdateLivePreviewAnimation(this);
    *((_DWORD *)this + 20) &= ~0x800000u;
  }
  return v49;
}
