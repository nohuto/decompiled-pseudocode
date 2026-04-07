/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180001EB4
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180003E9C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180001A44 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180002034 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800041EC (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000426C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180004E48 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x180092630 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180092674 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18009269C (--0CFade@@IEAA@XZ.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800926C4 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800926EC (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x180092754 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x18009278C (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800927B4 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800927E0 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180092808 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x180092838 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  CLauncherAnimationBase *v8; // rcx
  __int64 v9; // rcx
  void **v10; // rax
  CStoryboard *v11; // rcx
  int v12; // eax
  int v13; // edi
  int v15; // ecx
  CLauncherAnimationBase *v16; // rcx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  CFlyoutPopup *v24; // rcx
  void **v25; // r9
  CSlideOut *v26; // rcx
  void **v27; // r10
  CSlideOut *v28; // rax
  struct CStoryboard *v29; // rax
  CFade *v30; // rax
  CFade *v31; // rsi
  void **v32; // rcx
  CSlideIn *v33; // rax
  CSlideIn *v34; // rsi
  CFadeOut *v35; // rax
  CFadeIn *v36; // rax
  CSlide *v37; // rcx
  CFlyoutPopup *v38; // rcx
  int v39; // ecx
  int v40; // ecx
  CStoryboard *v41; // rcx
  CLaunchSwitchBase *v42; // rcx
  CLaunchSwitchBase *v43; // rcx
  CCrossFade *v44; // rax
  CFade *v45; // rax
  void **v46; // rcx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  CFade *v53; // rax
  CPanelAnimation *v54; // rcx
  void **v55; // r10
  CPanelAnimation *v56; // rcx
  CFade *v57; // rax
  CStoryboard *v58; // rcx
  void **v59; // rdx
  CAppArrangementBase *v60; // rcx
  void **v61; // r10
  CAppArrangementBase *v62; // rcx
  CStoryboard *v63; // rcx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  CStoryboard *v70; // rcx
  CStoryboard *v71; // rcx
  CVirtualDesktopSwitch *v72; // rax
  CSlideOut *v73; // rcx
  CFade *v74; // rax
  CFade *v75; // rax
  CFade *v76; // rax

  *a3 = 0LL;
  if ( a1 > 66 )
  {
    if ( a1 <= 77 )
    {
      if ( a1 == 77 )
      {
        v63 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               120LL);
        if ( v63 )
        {
          CStoryboard::CStoryboard(v63, 0);
          *(_QWORD *)v9 = &CInplaceResize::`vftable'{for `CBaseObject'};
          v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_11;
        }
        goto LABEL_22;
      }
      v47 = a1 - 67;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( !v50 )
            {
              v57 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               120LL);
              v31 = v57;
              if ( v57 )
              {
                memset_0(v57, 0, 0x78uLL);
                CFade::CFade(v31);
                v46 = &CChangePanel::`vftable'{for `CBaseObject'};
                goto LABEL_71;
              }
              goto LABEL_118;
            }
            v51 = v50 - 1;
            if ( v51 )
            {
              v52 = v51 - 1;
              if ( v52 )
              {
                if ( v52 != 3 )
                  return (unsigned int)-2147024809;
                v53 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 120LL);
                v31 = v53;
                if ( v53 )
                {
                  memset_0(v53, 0, 0x78uLL);
                  CCrossFade::CCrossFade(v31);
                  v46 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                  goto LABEL_71;
                }
                goto LABEL_118;
              }
              v54 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v54 )
                goto LABEL_22;
              CPanelAnimation::CPanelAnimation(v54);
              v55 = &CShrinkPanel::`vftable'{for `CBaseObject'};
            }
            else
            {
              v56 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v56 )
                goto LABEL_22;
              CPanelAnimation::CPanelAnimation(v56);
              v55 = &CGrowPanel::`vftable'{for `CBaseObject'};
            }
            *(_QWORD *)v9 = v55;
            *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_BYTE *)(v9 + 128) = 0;
            *(_QWORD *)(v9 + 132) = 0LL;
            *(_QWORD *)(v9 + 140) = 0LL;
            goto LABEL_12;
          }
          v58 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          if ( !v58 )
            goto LABEL_22;
          CStoryboard::CStoryboard(v58, 0);
          v59 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_92;
        }
        v60 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v60 )
          goto LABEL_22;
        CAppArrangementBase::CAppArrangementBase(v60, 1);
        v61 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
      }
      else
      {
        v62 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       192LL);
        if ( !v62 )
          goto LABEL_22;
        CAppArrangementBase::CAppArrangementBase(v62, 0);
        v61 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
      }
      *(_QWORD *)v9 = v61;
      *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *(_QWORD *)(v9 + 184) = 0LL;
      goto LABEL_12;
    }
    v64 = a1 - 78;
    if ( !v64 )
    {
      v76 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       128LL);
      v31 = v76;
      if ( v76 )
      {
        memset_0(v76, 0, 0x80uLL);
        CSlideIn::CSlideIn(v31);
        v32 = &CDialogSwitch::`vftable'{for `CBaseObject'};
        goto LABEL_122;
      }
      goto LABEL_118;
    }
    v65 = v64 - 3;
    if ( !v65 )
    {
      v75 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       120LL);
      v31 = v75;
      if ( v75 )
      {
        memset_0(v75, 0, 0x78uLL);
        CFadeOut::CFadeOut(v31);
        v46 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
        goto LABEL_71;
      }
LABEL_118:
      v31 = 0LL;
      goto LABEL_119;
    }
    v66 = v65 - 1;
    if ( !v66 )
    {
      v74 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       128LL);
      v31 = v74;
      if ( v74 )
      {
        memset_0(v74, 0, 0x80uLL);
        CSlideIn::CSlideIn(v31);
        v32 = &CSlideInCharm::`vftable'{for `CBaseObject'};
        goto LABEL_122;
      }
      goto LABEL_118;
    }
    v67 = v66 - 1;
    if ( !v67 )
    {
      v73 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( !v73 )
        goto LABEL_22;
      CSlideOut::CSlideOut(v73);
      v27 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
      goto LABEL_37;
    }
    v68 = v67 - 7;
    if ( !v68 )
    {
      v72 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       184LL);
      if ( v72 )
      {
        v29 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v72);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v69 = v68 - 1;
    if ( v69 )
    {
      if ( v69 == 1 )
      {
        v70 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        if ( v70 )
        {
          CStoryboard::CStoryboard(v70, 0);
          *(_BYTE *)(v9 + 120) = 1;
          *(_QWORD *)v9 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
          v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_11;
        }
        goto LABEL_22;
      }
      return (unsigned int)-2147024809;
    }
    v71 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    if ( !v71 )
      goto LABEL_22;
    CStoryboard::CStoryboard(v71, 0);
    v59 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
LABEL_92:
    *(_QWORD *)v9 = v59;
    *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *(_BYTE *)(v9 + 120) = 0;
    goto LABEL_12;
  }
  if ( a1 != 66 )
  {
    if ( a1 > 19 )
    {
      v5 = a1 - 34;
      if ( v5 )
      {
        v6 = v5 - 16;
        if ( !v6 )
        {
          v11 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 120LL);
          if ( v11 )
          {
            CStoryboard::CStoryboard(v11, 0);
            *(_QWORD *)v9 = &CWindowClose::`vftable'{for `CBaseObject'};
            v10 = &CStoryboard::`vftable'{for `IAnimationListener'};
            goto LABEL_11;
          }
LABEL_22:
          v9 = 0LL;
          goto LABEL_12;
        }
        v7 = v6 - 6;
        if ( !v7 )
        {
          v8 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           136LL);
          if ( v8 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v8);
            *(_QWORD *)v9 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
            v10 = &CStoryboard::`vftable'{for `IAnimationListener'};
LABEL_11:
            *(_QWORD *)(v9 + 16) = v10;
LABEL_12:
            *a3 = (struct CStoryboard *)v9;
            goto LABEL_13;
          }
          goto LABEL_22;
        }
        v15 = v7 - 1;
        if ( !v15 )
        {
          v16 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
          if ( v16 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v16);
            *(_BYTE *)(v9 + 136) = 0;
            *(_QWORD *)(v9 + 16) = &CStoryboard::`vftable'{for `IAnimationListener'};
            *(_QWORD *)v9 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
            goto LABEL_12;
          }
          goto LABEL_22;
        }
        v39 = v15 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 == 5 )
            {
              v41 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     120LL);
              if ( v41 )
              {
                CStoryboard::CStoryboard(v41, 0);
                *(_QWORD *)v9 = &CNoAnimation::`vftable'{for `CBaseObject'};
                v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                goto LABEL_11;
              }
              goto LABEL_22;
            }
          }
          else if ( a2 )
          {
            v42 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         176LL);
            if ( v42 )
            {
              CLaunchSwitchBase::CLaunchSwitchBase(v42);
              *(_BYTE *)(v9 + 168) = 1;
              *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v9 = &CAppSwitch::`vftable'{for `CBaseObject'};
              goto LABEL_12;
            }
            goto LABEL_22;
          }
        }
        else if ( a2 )
        {
          v43 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          if ( v43 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v43);
            *(_BYTE *)(v9 + 168) = 0;
            *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_QWORD *)v9 = &CAppLaunch::`vftable'{for `CBaseObject'};
            goto LABEL_12;
          }
          goto LABEL_22;
        }
        return (unsigned int)-2147024809;
      }
      v44 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( v44 )
      {
        v29 = CCrossFade::CCrossFade(v44);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    if ( a1 == 19 )
    {
      v38 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
      if ( !v38 )
        goto LABEL_22;
      CFlyoutPopup::CFlyoutPopup(v38);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v25 = &CHidePopup::`vftable'{for `CBaseObject'};
      goto LABEL_34;
    }
    v17 = a1 - 3;
    if ( !v17 )
    {
      v37 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
      if ( !v37 )
        goto LABEL_22;
      CSlide::CSlide(v37);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v25 = &CReposition::`vftable'{for `CBaseObject'};
      goto LABEL_34;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v36 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
      if ( v36 )
      {
        v29 = CFadeIn::CFadeIn(v36);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v35 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( v35 )
      {
        v29 = CFadeOut::CFadeOut(v35);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v20 = v19 - 9;
    if ( !v20 )
    {
      v33 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v34 = v33;
      if ( v33 )
      {
        memset_0(v33, 0, 0x80uLL);
        v29 = CSlideIn::CSlideIn(v34);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 != 1 )
            return (unsigned int)-2147024809;
          v24 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
          if ( !v24 )
            goto LABEL_22;
          CFlyoutPopup::CFlyoutPopup(v24);
          v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          v25 = &CShowPopup::`vftable'{for `CBaseObject'};
LABEL_34:
          *(_QWORD *)v9 = v25;
          goto LABEL_11;
        }
        v26 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v26 )
          goto LABEL_22;
        CSlideOut::CSlideOut(v26);
        v27 = &CSlideOutLong::`vftable'{for `CBaseObject'};
LABEL_37:
        *(_QWORD *)v9 = v27;
        *(_QWORD *)(v9 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *(_BYTE *)(v9 + 68) = 1;
        goto LABEL_12;
      }
      v28 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( v28 )
      {
        v29 = CSlideOut::CSlideOut(v28);
LABEL_41:
        *a3 = v29;
        goto LABEL_13;
      }
LABEL_40:
      v29 = 0LL;
      goto LABEL_41;
    }
    v30 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     128LL);
    v31 = v30;
    if ( v30 )
    {
      memset_0(v30, 0, 0x80uLL);
      CSlideIn::CSlideIn(v31);
      v32 = &CSlideInLong::`vftable'{for `CBaseObject'};
LABEL_122:
      *(_QWORD *)v31 = v32;
      *((_QWORD *)v31 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *((_BYTE *)v31 + 68) = 1;
      goto LABEL_119;
    }
    goto LABEL_118;
  }
  v45 = (CFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   120LL);
  v31 = v45;
  if ( !v45 )
    goto LABEL_118;
  memset_0(v45, 0, 0x78uLL);
  CFadeIn::CFadeIn(v31);
  v46 = &CTDBN::`vftable'{for `CBaseObject'};
LABEL_71:
  *(_QWORD *)v31 = v46;
  *((_QWORD *)v31 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
LABEL_119:
  *a3 = v31;
LABEL_13:
  if ( !*a3 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x180Fu);
LABEL_124:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v13;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1811u);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v13 < 0 )
    goto LABEL_124;
  return (unsigned int)v13;
}
