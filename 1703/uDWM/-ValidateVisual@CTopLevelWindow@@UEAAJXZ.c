/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z @ 0x180013BDC (-SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180014170 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014F00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4Rep.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800164CC (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001C314 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?IsVisible@CVisual@@QEBA_NXZ @ 0x1800237F0 (-IsVisible@CVisual@@QEBA_NXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180024660 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x1800248D8 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x18002491C (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800251CC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x1800252E4 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x1800253C0 (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180025A90 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x1800268E0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026D5C (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180026EDC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026F30 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180028460 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002A488 (-IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x1800368A8 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ceil_0 @ 0x18004DE60 (ceil_0.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F038 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180080744 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x1800813FC (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180081EA8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x18009DAE8 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  char v3; // si
  char v4; // r12
  int v5; // ecx
  int v6; // r8d
  int v7; // r14d
  int v8; // r15d
  int v9; // r13d
  int v10; // edi
  _DWORD *v11; // rax
  int v12; // ecx
  int v13; // r11d
  int v14; // esi
  int v15; // r14d
  int v16; // edi
  bool v17; // r12
  int v18; // ecx
  int v19; // ecx
  int v20; // r8d
  _DWORD *v21; // rax
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // r10d
  int v26; // r8d
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  int v31; // r8d
  bool v32; // r15
  bool v33; // r15
  int v34; // edi
  bool v35; // r14
  int CurrentStyle; // esi
  float *v37; // rax
  __int64 v38; // rcx
  int v39; // ecx
  char v40; // si
  int v41; // esi
  bool v42; // al
  bool v43; // r14
  bool v44; // al
  char v45; // di
  bool v46; // r14
  HRGN v47; // r12
  int v48; // eax
  int v49; // r13d
  char v50; // al
  __int64 v51; // r15
  unsigned int v52; // edi
  int updated; // eax
  __int64 v55; // r13
  __int64 v56; // rsi
  float v57; // xmm2_4
  float v58; // xmm1_4
  int v59; // eax
  int v60; // eax
  float v61; // xmm2_4
  int v62; // eax
  int v63; // eax
  bool v64; // si
  __int64 v65; // rax
  int v66; // edi
  int v67; // r9d
  int v68; // edi
  int v69; // esi
  __int64 v70; // rax
  int v71; // edx
  int v72; // r8d
  int v73; // r14d
  __int64 v74; // rbx
  double v75; // xmm0_8
  double v76; // xmm0_8
  double v77; // xmm0_8
  double v78; // xmm0_8
  double v79; // xmm0_8
  double v80; // xmm0_8
  double v81; // xmm0_8
  double v82; // xmm0_8
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 (__fastcall *v86)(CTopLevelWindow *, char); // rax
  __int64 (__fastcall *v87)(CVisual *); // rax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  struct CWindowData *v96; // rdx
  CProjectionBorderVisual *v97; // rcx
  __int64 v98; // rax
  bool v99; // al
  int v100; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // r13d
  CDesktopManager *v103; // r15
  unsigned int v104; // r12d
  unsigned int v105; // r8d
  __int64 v106; // rcx
  unsigned int v107; // edx
  __int64 v108; // rcx
  CTopLevelWindow *v109; // rcx
  int v110; // eax
  int v111; // eax
  __int64 v112; // r10
  double v113; // xmm0_8
  double v114; // xmm0_8
  double v115; // xmm0_8
  double v116; // xmm0_8
  unsigned int v117; // [rsp+30h] [rbp-49h]
  char v118; // [rsp+34h] [rbp-45h]
  char v119; // [rsp+35h] [rbp-44h]
  int v120; // [rsp+38h] [rbp-41h]
  int v121; // [rsp+3Ch] [rbp-3Dh]
  int v122; // [rsp+40h] [rbp-39h] BYREF
  int v123; // [rsp+44h] [rbp-35h]
  int v124; // [rsp+48h] [rbp-31h]
  __int64 v125; // [rsp+50h] [rbp-29h]
  __int64 v126; // [rsp+58h] [rbp-21h]
  int v127; // [rsp+60h] [rbp-19h] BYREF
  RECT *p_rc1; // [rsp+68h] [rbp-11h]
  int v129; // [rsp+70h] [rbp-9h]
  RECT rc1; // [rsp+78h] [rbp-1h] BYREF

  v1 = *((_DWORD *)this + 20);
  v3 = 0;
  v4 = 0;
  v118 = 0;
  v5 = v1 & 2;
  v119 = 0;
  v121 = v5;
  v6 = v1 & 8;
  v120 = v6;
  v124 = v1 & 0x4000;
  v7 = v1 & 0x100000;
  v122 = v1 & 0x100000;
  v8 = v1 & 0x1000000;
  v9 = v1 & 0x200000;
  LOBYTE(v10) = 0;
  v123 = v1 & 0x1000000;
  if ( (*((_BYTE *)this + 240) & 0x10) == 0 )
  {
    if ( (v1 & 0x40000) != 0 )
    {
      CTopLevelWindow::UpdateWindowScale(this);
      *((_DWORD *)this + 20) &= ~0x40000u;
      v5 = v121;
      v6 = v120;
      v119 = 1;
    }
    if ( (*((_DWORD *)this + 20) & 0x40E000) == 0 && !v9 && !v5 && !v6 && !v8 && !v7 )
    {
LABEL_63:
      if ( (*((_DWORD *)this + 20) & 0x4000000) != 0 )
      {
        updated = CTopLevelWindow::UpdateClientAreaBounds(this);
        v117 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x10C6u);
          return v117;
        }
        *((_DWORD *)this + 20) &= ~0x4000000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x2000000) != 0 )
      {
        v88 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 59) + 16LL)
                                                                              + 16LL)
                                                                + 552LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 59) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 59) + 16LL) + 24LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 90) + 384LL) + 24LL));
        v117 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x13A6u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x10CDu);
          return v117;
        }
        *((_DWORD *)this + 20) &= ~0x2000000u;
      }
      v44 = v7 || v9;
      v45 = v44 | v10;
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
      {
        v91 = CTopLevelWindow::UpdateTitle((CText **)this);
        v117 = v91;
        if ( v91 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0x10D8u);
          return v117;
        }
        *((_DWORD *)this + 20) &= ~0x10000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x20000) != 0 )
      {
        v95 = CTopLevelWindow::UpdateIcon(this);
        v117 = v95;
        if ( v95 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x10DEu);
          return v117;
        }
        *((_DWORD *)this + 20) &= ~0x20000u;
      }
      v46 = v3 || v121;
      if ( (unsigned __int8)IsOpenThemeDataPresent()
        && ((*((_DWORD *)this + 20) & 0x1000) != 0 || v4 || v3 || v119 || v8) )
      {
        v89 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
        v117 = v89;
        if ( v89 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x10EDu);
          return v117;
        }
        *((_DWORD *)this + 20) &= ~0x1000u;
      }
      if ( *((_QWORD *)this + 64) && v45 )
      {
        CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v122);
        WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                    this,
                                    *CurrentDefaultColorizationFlags | 8u);
        CText::SetBackgroundColor(*((CText **)this + 64), WindowColorizationColor);
        v103 = CDesktopManager::s_pDesktopManagerInstance;
        v104 = 0;
        v105 = 0;
        v106 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
        v107 = *(_DWORD *)(v106 + 360);
        if ( v107 )
        {
          v112 = *(_QWORD *)(v106 + 336);
          while ( *(_QWORD *)(v112 + 48LL * v105 + 8) != *((_QWORD *)this + 90) )
          {
            if ( ++v105 >= v107 )
              goto LABEL_207;
          }
          CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
            *(CTopLevelWindow **)(v112 + 48LL * v105),
            WindowColorizationColor);
          v103 = CDesktopManager::s_pDesktopManagerInstance;
        }
LABEL_207:
        if ( *((_DWORD *)v103 + 174) )
        {
          do
            CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
              *(CDesktopThumbnailBase **)(*((_QWORD *)v103 + 84) + 8LL * v104++),
              this,
              WindowColorizationColor);
          while ( v104 < *((_DWORD *)v103 + 174) );
        }
        v108 = *(_QWORD *)(*((_QWORD *)this + 90) + 424LL);
        if ( v108 )
        {
          v109 = *(CTopLevelWindow **)(v108 + 24);
          if ( v109 )
            CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v109, WindowColorizationColor);
        }
      }
      v47 = 0LL;
      v48 = 0;
      v117 = 0;
      if ( (*((_BYTE *)this + 80) & 2) != 0 )
      {
        v86 = *(__int64 (__fastcall **)(CTopLevelWindow *, char))(*(_QWORD *)this + 72LL);
        if ( v86 == CTopLevelWindow::UpdateLayout )
          v48 = CTopLevelWindow::UpdateLayout(this, 0);
        else
          v48 = v86(this, 0);
        v117 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xB8u);
          goto LABEL_250;
        }
        *((_DWORD *)this + 20) &= ~2u;
      }
      if ( (*((_BYTE *)this + 80) & 8) != 0 )
      {
        v87 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL);
        if ( v87 == CVisual::UpdateOffset )
          v48 = CVisual::UpdateOffset(this);
        else
          v48 = v87(this);
        v117 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xBFu);
          goto LABEL_250;
        }
        *((_DWORD *)this + 20) &= ~8u;
      }
      if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
      {
        v48 = CVisual::UpdateTransform(this);
        v117 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC6u);
          goto LABEL_250;
        }
        *((_DWORD *)this + 20) &= ~0x10u;
      }
      if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
      {
        v48 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 144LL))(this);
        v117 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xCDu);
          goto LABEL_250;
        }
        *((_DWORD *)this + 20) &= ~0x20u;
      }
      if ( (*((_BYTE *)this + 80) & 0x40) == 0 )
        goto LABEL_86;
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
              (char *)this + 196);
      v117 = v48;
      if ( v48 >= 0 )
      {
        *((_DWORD *)this + 20) &= ~0x40u;
LABEL_86:
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x1113u);
          return v117;
        }
        if ( v45 || v46 || v124 )
        {
          v83 = CTopLevelWindow::UpdateNCAreaBackground(this);
          v117 = v83;
          if ( v83 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x111Au);
            return v117;
          }
          *((_DWORD *)this + 20) &= ~0x100000u;
        }
        if ( (*((_DWORD *)this + 20) & 0x80000) != 0 || v46 )
        {
          v85 = CTopLevelWindow::UpdateClientBlur(this);
          v117 = v85;
          if ( v85 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x1121u);
            return v117;
          }
          *((_DWORD *)this + 20) &= ~0x80000u;
        }
        if ( v45 || v46 )
        {
          v84 = CTopLevelWindow::UpdateOcclusionHints(this);
          v117 = v84;
          if ( v84 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0x1128u);
            return v117;
          }
        }
        if ( v3 )
          CWindowData::NotifySWROfMarginOrSizeChange(
            *((CWindowData **)this + 90),
            (*((_BYTE *)this + 240) & 0x40) == 0,
            (*((_BYTE *)this + 240) & 0x40) != 0);
        if ( !*((_QWORD *)this + 33) )
        {
          v49 = v120;
          goto LABEL_98;
        }
        v98 = *((_QWORD *)this + 90);
        v99 = (*(_BYTE *)(v98 + 156) & 2) == 0 && v45 && *(_DWORD *)(v98 + 152) == 2;
        v49 = v120;
        if ( v46 || v120 )
        {
          if ( !v99 )
            goto LABEL_222;
        }
        else if ( !v99 )
        {
          goto LABEL_204;
        }
        *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
LABEL_222:
        v111 = CAccent::UpdateAccentPolicy(
                 *((CAccent **)this + 33),
                 (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                 (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                 *(struct CResource **)(*((_QWORD *)this + 90) + 368LL));
        v117 = v111;
        if ( v111 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0x1142u);
          return v117;
        }
LABEL_204:
        v100 = CAccent::ValidateVisual(*((CAccent **)this + 33));
        v117 = v100;
        if ( v100 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v100, 0x1144u);
          return v117;
        }
LABEL_98:
        v50 = *((_BYTE *)this + 240);
        v51 = 636LL;
        if ( (v50 & 0x40) == 0 && (v3 || v49 || v121) )
        {
          v55 = *((_QWORD *)this + 90);
          if ( *(_QWORD *)(v55 + 40) )
          {
            rc1 = *(RECT *)(v55 + 188);
            if ( (v50 & 8) != 0 )
              v56 = 636LL;
            else
              v56 = 620LL;
            v57 = *(float *)(v55 + 172);
            v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v57) & _xmm);
            if ( v58 > 0.0000011920929 )
            {
              v59 = *(_DWORD *)((char *)this + v56);
              if ( v59 < 0 )
              {
                v113 = floor_0((float)((float)v59 / v57) + 0.5);
                rc1.left += (int)v113;
              }
              v60 = *(_DWORD *)((char *)this + v56 + 4);
              if ( v60 < 0 )
              {
                v114 = floor_0((float)((float)v60 / *(float *)(v55 + 172)) + 0.5);
                rc1.right -= (int)v114;
              }
            }
            v61 = *(float *)(v55 + 176);
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v61) & _xmm) > 0.0000011920929 )
            {
              v62 = *(_DWORD *)((char *)this + v56 + 8);
              if ( v62 < 0 )
              {
                v115 = floor_0((float)((float)v62 / v61) + 0.5);
                rc1.top += (int)v115;
              }
              v63 = *(_DWORD *)((char *)this + v56 + 12);
              if ( v63 < 0 )
              {
                v116 = floor_0((float)((float)v63 / *(float *)(v55 + 176)) + 0.5);
                rc1.bottom -= (int)v116;
              }
            }
            v64 = EqualRect(&rc1, (const RECT *)(v55 + 188));
            if ( (*((_BYTE *)this + 240) & 4) == 0 )
            {
              if ( v64 )
                goto LABEL_266;
              goto LABEL_265;
            }
            if ( !v64 )
            {
LABEL_265:
              v47 = CreateRectRgnIndirect(&rc1);
LABEL_266:
              if ( !(unsigned int)SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 90) + 40LL), v47, 1LL) && v47 )
                DeleteObject(v47);
              *((_BYTE *)this + 240) &= ~4u;
              *((_BYTE *)this + 240) |= 4 * v64;
              LODWORD(v47) = 0;
            }
          }
        }
        if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
        {
          CTopLevelWindow::UpdateLivePreviewAnimation(this);
          *((_DWORD *)this + 20) &= ~0x800000u;
        }
        if ( (*((_DWORD *)this + 20) & 0x8000000) != 0 )
        {
          CTopLevelWindow::UpdateDCompVisuals(this);
          *((_DWORD *)this + 20) &= ~0x8000000u;
        }
        if ( v45 || v46 || v118 )
        {
          v65 = *((_QWORD *)this + 90);
          if ( v65 )
          {
            if ( *(_QWORD *)(v65 + 40) )
            {
              v66 = *((_DWORD *)this + 146);
              if ( (v66 & 0x40020) == 0 )
              {
                v125 = 0LL;
                v126 = 0LL;
                if ( (unsigned __int8)IsOpenThemeDataPresent() && (v66 & 6) != 0
                  || (*((_DWORD *)this + 146) & 0x200000) != 0 )
                {
                  if ( (*((_BYTE *)this + 240) & 8) == 0 )
                    v51 = 620LL;
                  v67 = *(_DWORD *)((char *)this + v51);
                  v68 = *(_DWORD *)((char *)this + v51 + 4);
                  v69 = *(_DWORD *)((char *)this + v51 + 12);
                  v70 = *((_QWORD *)this + 90);
                  if ( v70 && (*(_BYTE *)(v70 + 592) & 8) == 0 )
                  {
                    v73 = *(_DWORD *)((char *)this + v51 + 8);
                  }
                  else
                  {
                    v71 = *((_DWORD *)this + 151) - v67 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
                    if ( v71 < 0 )
                      v71 = 0;
                    v72 = *((_DWORD *)this + 152) - v68 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
                    if ( v72 < 0 )
                      v72 = 0;
                    if ( *((_DWORD *)this + 154) - v69 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL) >= 0 )
                      LODWORD(v47) = *((_DWORD *)this + 154) - v69 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
                    v73 = *(_DWORD *)((char *)this + v51 + 8);
                    v67 += v71;
                    v68 += v72;
                    v69 += (int)v47;
                  }
                }
                else
                {
                  v69 = HIDWORD(v126);
                  v73 = v126;
                  v68 = HIDWORD(v125);
                  v67 = v125;
                }
                v74 = *((_QWORD *)this + 90);
                *(_QWORD *)&rc1.left = 0LL;
                *(_QWORD *)&rc1.right = 0LL;
                v75 = (double)v67 / *(double *)(v74 + 304);
                if ( v75 < 0.0 )
                  v76 = ceil_0(v75 - 0.5);
                else
                  v76 = floor_0(v75 + 0.5);
                rc1.left = (int)v76;
                v77 = (double)v68 / *(double *)(v74 + 304);
                if ( v77 < 0.0 )
                  v78 = ceil_0(v77 - 0.5);
                else
                  v78 = floor_0(v77 + 0.5);
                rc1.right = (int)v78;
                v79 = (double)v69 / *(double *)(v74 + 312);
                if ( v79 < 0.0 )
                  v80 = ceil_0(v79 - 0.5);
                else
                  v80 = floor_0(v79 + 0.5);
                rc1.bottom = (int)v80;
                v81 = (double)v73 / *(double *)(v74 + 312);
                if ( v81 < 0.0 )
                  v82 = ceil_0(v81 - 0.5);
                else
                  v82 = floor_0(v81 + 0.5);
                v127 = 8;
                v129 = 16;
                rc1.top = (int)v82;
                p_rc1 = &rc1;
                SetWindowCompositionAttribute(*(_QWORD *)(v74 + 40), &v127);
              }
            }
          }
        }
        return v117;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x53Fu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0xD4u);
LABEL_250:
      v48 = v117;
      goto LABEL_86;
    }
    v11 = (_DWORD *)*((_QWORD *)this + 90);
    v12 = *((_DWORD *)this + 147);
    v117 = 0;
    v13 = v11[16];
    v14 = v11[18];
    v15 = v11[17];
    v16 = v11[19];
    if ( v13 != v12 )
      *((_DWORD *)this + 147) = v13;
    v17 = v13 != v12;
    if ( v15 != *((_DWORD *)this + 148) )
    {
      *((_DWORD *)this + 148) = v15;
      v17 = 1;
    }
    if ( v14 != *((_DWORD *)this + 149) )
    {
      *((_DWORD *)this + 149) = v14;
      v17 = 1;
    }
    if ( v16 != *((_DWORD *)this + 150) )
    {
      *((_DWORD *)this + 150) = v16;
      v17 = 1;
    }
    v18 = v11[14] - v11[12];
    if ( v18 < 0 )
      v18 = 0;
    v19 = v18 - v15 - v13;
    v20 = v11[15] - v11[13];
    if ( v20 < 0 )
      v20 = 0;
    v21 = (_DWORD *)*((_QWORD *)this + 90);
    v22 = v20 - v16 - v14;
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
      v25 = v21[22];
      if ( v22 < v25 )
        v25 = v22;
      v26 = v22 - v25;
      if ( v26 >= v21[23] )
        v26 = v21[23];
    }
    v27 = v26 + v16;
    v28 = v24 + v15;
    v29 = *((_DWORD *)this + 151);
    v30 = v23 + v13;
    v31 = v25 + v14;
    if ( v23 + v13 != v29 )
      *((_DWORD *)this + 151) = v30;
    v32 = v30 != v29;
    if ( v28 != *((_DWORD *)this + 152) )
    {
      *((_DWORD *)this + 152) = v28;
      v32 = 1;
    }
    if ( v31 != *((_DWORD *)this + 153) )
    {
      *((_DWORD *)this + 153) = v31;
      v32 = 1;
    }
    if ( v27 != *((_DWORD *)this + 154) )
    {
      *((_DWORD *)this + 154) = v27;
      v32 = 1;
    }
    v33 = v17 || v32;
    if ( v33 )
    {
      v96 = (struct CWindowData *)*((_QWORD *)this + 90);
      v97 = (CProjectionBorderVisual *)*((_QWORD *)v96 + 52);
      if ( v97 )
        CProjectionBorderVisual::UpdateRectFromWindow(v97, v96);
    }
    v34 = *((_DWORD *)this + 146);
    v35 = (unsigned __int8)IsOpenThemeDataPresent() && (v34 & 6) != 0;
    v4 = 0;
    v118 = 0;
    CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((const struct CWindowData **)this + 90));
    if ( CurrentStyle != *((_DWORD *)this + 146) )
    {
      if ( CVisual::IsVisible(*((CVisual **)this + 32)) )
      {
        wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::ReportUsageToService(v93, v92, v94);
        if ( CTopLevelWindow::IsTaskbarWindow(this)
          && (CurrentStyle & 0xFFF90F9F) != (*((_DWORD *)this + 146) & 0xFFF90F9F) )
        {
          CTopLevelWindow::SendWindowStyleChangedEvent(*((struct CWindowData **)this + 90), CurrentStyle & 0xFFF90F9F);
        }
      }
      v4 = 1;
      *((_DWORD *)this + 146) = CurrentStyle;
      v118 = 1;
    }
    if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0 )
    {
      v37 = (float *)*((_QWORD *)this + 72);
      if ( v37 )
      {
        v38 = *((_QWORD *)this + 90);
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 592) & 8) != 0
            && (*((_DWORD *)this + 151) || *((_DWORD *)this + 153) || *((_DWORD *)this + 152) || *((_DWORD *)this + 154))
            && (1.0 != *((float *)this + 178)
             || (float)(v37[8] * v37[4]) != *((float *)this + 175)
             || (float)(v37[8] * v37[5]) != *((float *)this + 176)
             || (float)(v37[8] * v37[6]) != *((float *)this + 177)) )
          {
            v4 = 1;
            v118 = 1;
          }
        }
      }
    }
    v39 = *((_DWORD *)this + 146);
    v40 = v39 ^ v34;
    v10 = ((unsigned __int8)v39 ^ (unsigned __int8)v34) & 0x40;
    v41 = v40 & 0x20;
    v42 = v4 && v35 != CTopLevelWindow::HasRenderedBorder(v39);
    if ( v41 || v10 || v9 || v42 )
      LOBYTE(v10) = 1;
    v43 = !*((_QWORD *)this + 59) && *(_DWORD *)(*((_QWORD *)this + 90) + 128LL);
    v3 = v33 | CTopLevelWindow::UpdateMarginsDependentOnStyle(this);
    v8 = v123;
    if ( v123 || v3 || v4 || (_BYTE)v10 || v43 )
    {
      v90 = CTopLevelWindow::UpdateWindowVisuals(this);
      v117 = v90;
      if ( v90 >= 0 )
      {
LABEL_62:
        *((_DWORD *)this + 20) &= 0xFE9F1FFF;
        v7 = v122;
        goto LABEL_63;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x1025u);
    }
    if ( (v117 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x10BFu);
      return v117;
    }
    goto LABEL_62;
  }
  v110 = CVisual::ValidateVisual(this);
  v52 = v110;
  if ( v110 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x10A1u);
  }
  else if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
  {
    CTopLevelWindow::UpdateLivePreviewAnimation(this);
    *((_DWORD *)this + 20) &= ~0x800000u;
  }
  return v52;
}
