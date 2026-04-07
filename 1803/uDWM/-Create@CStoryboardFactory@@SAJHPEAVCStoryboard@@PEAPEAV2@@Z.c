/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000BCDC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180001338 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800015BC (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180009FE4 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000A04C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000A0CC (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18004825C (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x180048284 (--0CFade@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x18009ADB8 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x18009ADFC (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x18009AE24 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x18009AE8C (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x18009AEC4 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x18009AEEC (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x18009AF18 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x18009AF40 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x18009AF70 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  CLauncherAnimationBase *v8; // rax
  CStoryboard *v9; // rbx
  void **v10; // rax
  void **v11; // rcx
  CStoryboard *v12; // rax
  int v13; // eax
  int v14; // ebx
  int v16; // ecx
  CLauncherAnimationBase *v17; // rax
  int v18; // ecx
  int v19; // ecx
  CFadeIn *v20; // rax
  CFadeIn *v21; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  CFlyoutPopup *v27; // rax
  CSlideOut *v28; // rax
  CSlideOut *v29; // rax
  CStoryboard *v30; // rax
  CSlideIn *v31; // rax
  CSlideIn *v32; // rbx
  CFadeOut *v33; // rax
  CSlide *v34; // rax
  CFlyoutPopup *v35; // rax
  int v36; // ecx
  int v37; // ecx
  CStoryboard *v38; // rax
  CLaunchSwitchBase *v39; // rax
  CLaunchSwitchBase *v40; // rax
  CCrossFade *v41; // rax
  CStoryboard *v42; // rax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  CStoryboard *v50; // rax
  CStoryboard *v51; // rax
  CPanelAnimation *v52; // rax
  CPanelAnimation *v53; // rax
  CStoryboard *v54; // rax
  CStoryboard *v55; // rax
  CAppArrangementBase *v56; // rax
  CAppArrangementBase *v57; // rax
  CStoryboard *v58; // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  CStoryboard *v65; // rax
  CStoryboard *v66; // rax
  __int64 v67; // rcx
  CStoryboard *v68; // rax
  CVirtualDesktopSwitch *v69; // rax
  CSlideOut *v70; // rax
  CStoryboard *v71; // rax
  CStoryboard *v72; // rax

  *a3 = 0LL;
  if ( a1 <= 66 )
  {
    if ( a1 == 66 )
    {
      v42 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      v9 = v42;
      if ( v42 )
      {
        memset_0(v42, 0, 0x78uLL);
        CFadeIn::CFadeIn(v9);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_11;
      }
      goto LABEL_27;
    }
    if ( a1 > 19 )
    {
      v5 = a1 - 34;
      if ( v5 )
      {
        v6 = v5 - 16;
        if ( !v6 )
        {
          v12 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 120LL);
          v9 = v12;
          if ( v12 )
          {
            CStoryboard::CStoryboard(v12, 0);
            v10 = &CStoryboard::`vftable'{for `IAnimationListener'};
            v11 = &CWindowClose::`vftable'{for `CBaseObject'};
            goto LABEL_11;
          }
          goto LABEL_27;
        }
        v7 = v6 - 6;
        if ( !v7 )
        {
          v8 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           136LL);
          v9 = v8;
          if ( v8 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v8);
            v10 = &CStoryboard::`vftable'{for `IAnimationListener'};
            v11 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
LABEL_11:
            *((_QWORD *)v9 + 2) = v10;
            *(_QWORD *)v9 = v11;
            goto LABEL_12;
          }
          goto LABEL_27;
        }
        v16 = v7 - 1;
        if ( !v16 )
        {
          v17 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
          v9 = v17;
          if ( v17 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v17);
            v10 = &CStoryboard::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 136) = 0;
            v11 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
            goto LABEL_11;
          }
          goto LABEL_27;
        }
        v36 = v16 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 == 5 )
            {
              v38 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     120LL);
              v9 = v38;
              if ( v38 )
              {
                CStoryboard::CStoryboard(v38, 0);
                v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                v11 = &CNoAnimation::`vftable'{for `CBaseObject'};
                goto LABEL_11;
              }
              goto LABEL_27;
            }
            return (unsigned int)-2147024809;
          }
          if ( !a2 )
            return (unsigned int)-2147024809;
          v39 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v9 = v39;
          if ( v39 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v39);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 168) = 1;
            v11 = &CAppSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_11;
          }
        }
        else
        {
          if ( !a2 )
            return (unsigned int)-2147024809;
          v40 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v9 = v40;
          if ( v40 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v40);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v9 + 168) = 0;
            v11 = &CAppLaunch::`vftable'{for `CBaseObject'};
            goto LABEL_11;
          }
        }
        goto LABEL_27;
      }
      v41 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( !v41 )
        goto LABEL_27;
      v21 = CCrossFade::CCrossFade(v41);
LABEL_26:
      v9 = v21;
      goto LABEL_12;
    }
    if ( a1 == 19 )
    {
      v35 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
      v9 = v35;
      if ( v35 )
      {
        CFlyoutPopup::CFlyoutPopup(v35);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CHidePopup::`vftable'{for `CBaseObject'};
        goto LABEL_11;
      }
      goto LABEL_27;
    }
    v18 = a1 - 3;
    if ( !v18 )
    {
      v34 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
      v9 = v34;
      if ( v34 )
      {
        CSlide::CSlide(v34);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CReposition::`vftable'{for `CBaseObject'};
        goto LABEL_11;
      }
      goto LABEL_27;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v20 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
      if ( !v20 )
        goto LABEL_27;
      v21 = CFadeIn::CFadeIn(v20);
      goto LABEL_26;
    }
    v22 = v19 - 1;
    if ( !v22 )
    {
      v33 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( !v33 )
        goto LABEL_27;
      v21 = CFadeOut::CFadeOut(v33);
      goto LABEL_26;
    }
    v23 = v22 - 9;
    if ( !v23 )
    {
      v31 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v32 = v31;
      if ( !v31 )
        goto LABEL_27;
      memset_0(v31, 0, 0x80uLL);
      v21 = CSlideIn::CSlideIn(v32);
      goto LABEL_26;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        v29 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v29 )
          goto LABEL_27;
        v21 = CSlideOut::CSlideOut(v29);
        goto LABEL_26;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v27 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
          v9 = v27;
          if ( v27 )
          {
            CFlyoutPopup::CFlyoutPopup(v27);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_11;
          }
          goto LABEL_27;
        }
        return (unsigned int)-2147024809;
      }
      v28 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      v9 = v28;
      if ( !v28 )
      {
LABEL_27:
        v9 = 0LL;
        goto LABEL_12;
      }
      CSlideOut::CSlideOut(v28);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CSlideOutLong::`vftable'{for `CBaseObject'};
    }
    else
    {
      v30 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v9 = v30;
      if ( !v30 )
        goto LABEL_27;
      memset_0(v30, 0, 0x80uLL);
      CSlideIn::CSlideIn(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CSlideInLong::`vftable'{for `CBaseObject'};
    }
LABEL_38:
    *((_BYTE *)v9 + 68) = 1;
    goto LABEL_11;
  }
  if ( a1 <= 78 )
  {
    if ( a1 == 78 )
    {
      v58 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v9 = v58;
      if ( !v58 )
        goto LABEL_27;
      memset_0(v58, 0, 0x80uLL);
      CSlideIn::CSlideIn(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CDialogSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_38;
    }
    v43 = a1 - 67;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( !v46 )
          {
            v54 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   120LL);
            v9 = v54;
            if ( v54 )
            {
              memset_0(v54, 0, 0x78uLL);
              CFade::CFade(v9);
              v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v11 = &CChangePanel::`vftable'{for `CBaseObject'};
              goto LABEL_11;
            }
            goto LABEL_27;
          }
          v47 = v46 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              v49 = v48 - 3;
              if ( v49 )
              {
                if ( v49 != 2 )
                  return (unsigned int)-2147024809;
                v50 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v9 = v50;
                if ( v50 )
                {
                  CStoryboard::CStoryboard(v50, 0);
                  v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v11 = &CInplaceResize::`vftable'{for `CBaseObject'};
                  goto LABEL_11;
                }
              }
              else
              {
                v51 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v9 = v51;
                if ( v51 )
                {
                  memset_0(v51, 0, 0x78uLL);
                  CCrossFade::CCrossFade(v9);
                  v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v11 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                  goto LABEL_11;
                }
              }
              goto LABEL_27;
            }
            v52 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v9 = v52;
            if ( !v52 )
              goto LABEL_27;
            CPanelAnimation::CPanelAnimation(v52);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CShrinkPanel::`vftable'{for `CBaseObject'};
          }
          else
          {
            v53 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v9 = v53;
            if ( !v53 )
              goto LABEL_27;
            CPanelAnimation::CPanelAnimation(v53);
            v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v11 = &CGrowPanel::`vftable'{for `CBaseObject'};
          }
          *((_BYTE *)v9 + 128) = 0;
          *(_QWORD *)((char *)v9 + 132) = 0LL;
          *(_QWORD *)((char *)v9 + 140) = 0LL;
          goto LABEL_11;
        }
        v55 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        v9 = v55;
        if ( !v55 )
          goto LABEL_27;
        CStoryboard::CStoryboard(v55, 0);
        v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v11 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
LABEL_90:
        *((_BYTE *)v9 + 120) = 0;
        goto LABEL_11;
      }
      v56 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v9 = v56;
      if ( !v56 )
        goto LABEL_27;
      CAppArrangementBase::CAppArrangementBase(v56, 1);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v57 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v9 = v57;
      if ( !v57 )
        goto LABEL_27;
      CAppArrangementBase::CAppArrangementBase(v57, 0);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *((_QWORD *)v9 + 23) = 0LL;
    goto LABEL_11;
  }
  v59 = a1 - 81;
  if ( !v59 )
  {
    v72 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v9 = v72;
    if ( v72 )
    {
      memset_0(v72, 0, 0x78uLL);
      CFadeOut::CFadeOut(v9);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
      goto LABEL_11;
    }
    goto LABEL_27;
  }
  v60 = v59 - 1;
  if ( !v60 )
  {
    v71 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v9 = v71;
    if ( !v71 )
      goto LABEL_27;
    memset_0(v71, 0, 0x80uLL);
    CSlideIn::CSlideIn(v9);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v11 = &CSlideInCharm::`vftable'{for `CBaseObject'};
    goto LABEL_38;
  }
  v61 = v60 - 1;
  if ( !v61 )
  {
    v70 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         136LL);
    v9 = v70;
    if ( !v70 )
      goto LABEL_27;
    CSlideOut::CSlideOut(v70);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v11 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
    goto LABEL_38;
  }
  v62 = v61 - 7;
  if ( !v62 )
  {
    v69 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     184LL);
    if ( !v69 )
      goto LABEL_27;
    v21 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v69);
    goto LABEL_26;
  }
  v63 = v62 - 1;
  if ( !v63 )
  {
    v68 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v9 = v68;
    if ( !v68 )
      goto LABEL_27;
    CStoryboard::CStoryboard(v68, 0);
    v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v11 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    goto LABEL_90;
  }
  v64 = v63 - 1;
  if ( v64 )
  {
    if ( v64 != 1 )
      return (unsigned int)-2147024809;
    v65 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v9 = v65;
    if ( v65 )
    {
      CStoryboard::CStoryboard(v65, 0);
      v10 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v11 = &CTabSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_11;
    }
    goto LABEL_27;
  }
  v66 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         128LL);
  v9 = v66;
  if ( !v66 )
    goto LABEL_27;
  CStoryboard::CStoryboard(v66, 0);
  *(_BYTE *)(v67 + 120) = 1;
  *(_QWORD *)v67 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v67 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
LABEL_12:
  *a3 = v9;
  if ( !v9 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1859u);
LABEL_120:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v14;
  }
  v13 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v9 + 8LL))(v9);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x185Bu);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v14 < 0 )
    goto LABEL_120;
  return (unsigned int)v14;
}
