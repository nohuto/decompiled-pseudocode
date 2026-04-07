/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ??0CSlideIn@@QEAA@XZ @ 0x180001474 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x18000149C (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x180001940 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x180001970 (--0CFade@@IEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800023C0 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800026F4 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18000340C (--0CFadeIn@@QEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000529C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180005F74 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x180095ADC (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x180095B20 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x180095B48 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x180095BB0 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x180095BE8 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x180095C10 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  CStoryboard *v7; // rcx
  __int64 v8; // rcx
  void **v9; // rax
  int v10; // eax
  int v11; // edi
  int v13; // ecx
  CLauncherAnimationBase *v14; // rcx
  int v15; // ecx
  int v16; // ecx
  CFadeIn *v17; // rax
  struct CStoryboard *v18; // rax
  int v19; // ecx
  CLauncherAnimationBase *v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  CSlideOut *v25; // rcx
  void **v26; // rax
  void **v27; // r10
  CSlideIn *v28; // rax
  CSlideIn *v29; // rsi
  void **v30; // rax
  void **v31; // rcx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  CFlyoutPopup *v37; // rcx
  void **v38; // r9
  CSlideOut *v39; // rcx
  CSlideOut *v40; // rax
  CSlideIn *v41; // rax
  CSlideIn *v42; // rax
  CSlideIn *v43; // rsi
  CFadeOut *v44; // rax
  CSlide *v45; // rcx
  CFlyoutPopup *v46; // rcx
  int v47; // ecx
  int v48; // ecx
  CStoryboard *v49; // rcx
  CLaunchSwitchBase *v50; // rcx
  CLaunchSwitchBase *v51; // rcx
  CCrossFade *v52; // rax
  CSlideIn *v53; // rax
  void **v54; // rcx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  CSlideIn *v61; // rax
  CPanelAnimation *v62; // rcx
  void **v63; // r10
  CPanelAnimation *v64; // rcx
  CSlideIn *v65; // rax
  CStoryboard *v66; // rcx
  void **v67; // rdx
  CAppArrangementBase *v68; // rcx
  void **v69; // r10
  CAppArrangementBase *v70; // rcx
  CStoryboard *v71; // rcx
  int v72; // ecx
  int v73; // ecx
  CStoryboard *v74; // rcx
  CStoryboard *v75; // rcx
  CVirtualDesktopSwitch *v76; // rax
  CSlideIn *v77; // rax
  CSlideIn *v78; // rax

  *a3 = 0LL;
  if ( a1 <= 66 )
  {
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
            v7 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
            if ( v7 )
            {
              CStoryboard::CStoryboard(v7, 0);
              *(_QWORD *)v8 = &CWindowClose::`vftable'{for `CBaseObject'};
              v9 = &CSlide::`vftable'{for `IAnimationListener'};
LABEL_8:
              *(_QWORD *)(v8 + 16) = v9;
LABEL_9:
              *a3 = (struct CStoryboard *)v8;
              goto LABEL_10;
            }
            goto LABEL_50;
          }
          v13 = v6 - 6;
          if ( !v13 )
          {
            v14 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                              WPF::g_pProcessHeap,
                                              136LL);
            if ( v14 )
            {
              CLauncherAnimationBase::CLauncherAnimationBase(v14);
              *(_QWORD *)v8 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
              v9 = &CSlide::`vftable'{for `IAnimationListener'};
              goto LABEL_8;
            }
LABEL_50:
            v8 = 0LL;
            goto LABEL_9;
          }
          v19 = v13 - 1;
          if ( !v19 )
          {
            v20 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                              WPF::g_pProcessHeap,
                                              144LL);
            if ( v20 )
            {
              CLauncherAnimationBase::CLauncherAnimationBase(v20);
              *(_BYTE *)(v8 + 136) = 0;
              *(_QWORD *)(v8 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v8 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
              goto LABEL_9;
            }
            goto LABEL_50;
          }
          v47 = v19 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              if ( v48 == 5 )
              {
                v49 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                if ( v49 )
                {
                  CStoryboard::CStoryboard(v49, 0);
                  *(_QWORD *)v8 = &CNoAnimation::`vftable'{for `CBaseObject'};
                  v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  goto LABEL_8;
                }
                goto LABEL_50;
              }
            }
            else if ( a2 )
            {
              v50 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           176LL);
              if ( v50 )
              {
                CLaunchSwitchBase::CLaunchSwitchBase(v50);
                *(_BYTE *)(v8 + 168) = 1;
                *(_QWORD *)(v8 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
                *(_QWORD *)v8 = &CAppSwitch::`vftable'{for `CBaseObject'};
                goto LABEL_9;
              }
              goto LABEL_50;
            }
          }
          else if ( a2 )
          {
            v51 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         176LL);
            if ( v51 )
            {
              CLaunchSwitchBase::CLaunchSwitchBase(v51);
              *(_BYTE *)(v8 + 168) = 0;
              *(_QWORD *)(v8 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
              *(_QWORD *)v8 = &CAppLaunch::`vftable'{for `CBaseObject'};
              goto LABEL_9;
            }
            goto LABEL_50;
          }
          return (unsigned int)-2147024809;
        }
        v52 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
        if ( v52 )
        {
          v18 = CCrossFade::CCrossFade(v52);
          goto LABEL_24;
        }
        goto LABEL_55;
      }
      if ( a1 == 19 )
      {
        v46 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                120LL);
        if ( !v46 )
          goto LABEL_50;
        CFlyoutPopup::CFlyoutPopup(v46);
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v38 = &CHidePopup::`vftable'{for `CBaseObject'};
        goto LABEL_49;
      }
      v15 = a1 - 3;
      if ( !v15 )
      {
        v45 = (CSlide *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
        if ( !v45 )
          goto LABEL_50;
        CSlide::CSlide(v45);
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v38 = &CReposition::`vftable'{for `CBaseObject'};
        goto LABEL_49;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v17 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
        if ( v17 )
        {
          v18 = CFadeIn::CFadeIn(v17);
LABEL_24:
          *a3 = v18;
          goto LABEL_10;
        }
        goto LABEL_55;
      }
      v32 = v16 - 1;
      if ( !v32 )
      {
        v44 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
        if ( v44 )
        {
          v18 = CFadeOut::CFadeOut(v44);
          goto LABEL_24;
        }
        goto LABEL_55;
      }
      v33 = v32 - 9;
      if ( !v33 )
      {
        v42 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
        v43 = v42;
        if ( v42 )
        {
          memset_0(v42, 0, 0x80uLL);
          v18 = CSlideIn::CSlideIn(v43);
          goto LABEL_24;
        }
        goto LABEL_55;
      }
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
        {
          v40 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               136LL);
          if ( v40 )
          {
            v18 = CSlideOut::CSlideOut(v40);
            goto LABEL_24;
          }
LABEL_55:
          v18 = 0LL;
          goto LABEL_24;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            return (unsigned int)-2147024809;
          v37 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
          if ( !v37 )
            goto LABEL_50;
          CFlyoutPopup::CFlyoutPopup(v37);
          v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          v38 = &CShowPopup::`vftable'{for `CBaseObject'};
LABEL_49:
          *(_QWORD *)v8 = v38;
          goto LABEL_8;
        }
        v39 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v39 )
          goto LABEL_50;
        CSlideOut::CSlideOut(v39);
        v26 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v27 = &CSlideOutLong::`vftable'{for `CBaseObject'};
LABEL_35:
        *(_QWORD *)v8 = v27;
        *(_QWORD *)(v8 + 16) = v26;
        *(_BYTE *)(v8 + 68) = 1;
        goto LABEL_9;
      }
      v41 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v29 = v41;
      if ( v41 )
      {
        memset_0(v41, 0, 0x80uLL);
        CSlideIn::CSlideIn(v29);
        v30 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v31 = &CSlideInLong::`vftable'{for `CBaseObject'};
        goto LABEL_38;
      }
LABEL_40:
      v29 = 0LL;
      goto LABEL_39;
    }
    v53 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        120LL);
    v29 = v53;
    if ( !v53 )
      goto LABEL_40;
    memset_0(v53, 0, 0x78uLL);
    CFadeIn::CFadeIn(v29);
    v54 = &CTDBN::`vftable'{for `CBaseObject'};
    goto LABEL_82;
  }
  if ( a1 <= 77 )
  {
    if ( a1 == 77 )
    {
      v71 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      if ( v71 )
      {
        CStoryboard::CStoryboard(v71, 0);
        *(_QWORD *)v8 = &CInplaceResize::`vftable'{for `CBaseObject'};
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        goto LABEL_8;
      }
      goto LABEL_50;
    }
    v55 = a1 - 67;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( v58 )
          {
            v59 = v58 - 1;
            if ( v59 )
            {
              v60 = v59 - 1;
              if ( v60 )
              {
                if ( v60 != 3 )
                  return (unsigned int)-2147024809;
                v61 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    120LL);
                v29 = v61;
                if ( !v61 )
                  goto LABEL_40;
                memset_0(v61, 0, 0x78uLL);
                CCrossFade::CCrossFade(v29);
                v54 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                goto LABEL_82;
              }
              v62 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v62 )
                goto LABEL_50;
              CPanelAnimation::CPanelAnimation(v62);
              v63 = &CShrinkPanel::`vftable'{for `CBaseObject'};
            }
            else
            {
              v64 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         152LL);
              if ( !v64 )
                goto LABEL_50;
              CPanelAnimation::CPanelAnimation(v64);
              v63 = &CGrowPanel::`vftable'{for `CBaseObject'};
            }
            *(_QWORD *)v8 = v63;
            *(_QWORD *)(v8 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *(_BYTE *)(v8 + 128) = 0;
            *(_QWORD *)(v8 + 132) = 0LL;
            *(_QWORD *)(v8 + 140) = 0LL;
            goto LABEL_9;
          }
          v65 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
          v29 = v65;
          if ( !v65 )
            goto LABEL_40;
          memset_0(v65, 0, 0x78uLL);
          CFade::CFade(v29);
          v54 = &CChangePanel::`vftable'{for `CBaseObject'};
LABEL_82:
          *(_QWORD *)v29 = v54;
          *((_QWORD *)v29 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_39;
        }
        v66 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        if ( !v66 )
          goto LABEL_50;
        CStoryboard::CStoryboard(v66, 0);
        v67 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
LABEL_102:
        *(_QWORD *)v8 = v67;
        *(_QWORD *)(v8 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *(_BYTE *)(v8 + 120) = 0;
        goto LABEL_9;
      }
      v68 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      if ( !v68 )
        goto LABEL_50;
      CAppArrangementBase::CAppArrangementBase(v68, 1);
      v69 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v70 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      if ( !v70 )
        goto LABEL_50;
      CAppArrangementBase::CAppArrangementBase(v70, 0);
      v69 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *(_QWORD *)v8 = v69;
    *(_QWORD *)(v8 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v8 + 184) = 0LL;
    goto LABEL_9;
  }
  v21 = a1 - 78;
  if ( !v21 )
  {
    v78 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
    v29 = v78;
    if ( v78 )
    {
      memset_0(v78, 0, 0x80uLL);
      CSlideIn::CSlideIn(v29);
      v30 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v31 = &CDialogSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_38;
    }
    goto LABEL_40;
  }
  v22 = v21 - 3;
  if ( !v22 )
  {
    v77 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        120LL);
    v29 = v77;
    if ( !v77 )
      goto LABEL_40;
    memset_0(v77, 0, 0x78uLL);
    CFadeOut::CFadeOut(v29);
    v54 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
    goto LABEL_82;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( !v24 )
    {
      v25 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      if ( !v25 )
        goto LABEL_50;
      CSlideOut::CSlideOut(v25);
      v26 = &CSlide::`vftable'{for `IAnimationListener'};
      v27 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
      goto LABEL_35;
    }
    v72 = v24 - 7;
    if ( !v72 )
    {
      v76 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       184LL);
      if ( v76 )
      {
        v18 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v76);
        goto LABEL_24;
      }
      goto LABEL_55;
    }
    v73 = v72 - 1;
    if ( v73 )
    {
      if ( v73 == 1 )
      {
        v74 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        if ( v74 )
        {
          CStoryboard::CStoryboard(v74, 0);
          *(_BYTE *)(v8 + 120) = 1;
          *(_QWORD *)v8 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
          v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          goto LABEL_8;
        }
        goto LABEL_50;
      }
      return (unsigned int)-2147024809;
    }
    v75 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    if ( !v75 )
      goto LABEL_50;
    CStoryboard::CStoryboard(v75, 0);
    v67 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    goto LABEL_102;
  }
  v28 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      128LL);
  v29 = v28;
  if ( !v28 )
    goto LABEL_40;
  memset_0(v28, 0, 0x80uLL);
  CSlideIn::CSlideIn(v29);
  v30 = &CSlide::`vftable'{for `IAnimationListener'};
  v31 = &CSlideInCharm::`vftable'{for `CBaseObject'};
LABEL_38:
  *(_QWORD *)v29 = v31;
  *((_QWORD *)v29 + 2) = v30;
  *((_BYTE *)v29 + 68) = 1;
LABEL_39:
  *a3 = v29;
LABEL_10:
  if ( !*a3 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1818u);
LABEL_124:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v11;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x181Au);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v11 < 0 )
    goto LABEL_124;
  return (unsigned int)v11;
}
