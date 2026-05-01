/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079090 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800797F0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180230BE0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802314C0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067880 (-get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800678F0 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067A20 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067FB0 (-CanTransitionFromStart@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetIsFullScreen@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180076A70 (-GetIsFullScreen@CStartExperienceManager@@UEAAJPEAE@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086548 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_N.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180094A68 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180184F2C (CortanaHelpers--AllowCortanaAboveLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  _DWORD *v4; // r15
  CStartExperienceManager *v5; // rcx
  __int64 (__fastcall *v6)(CStartExperienceManager *, unsigned __int8 *); // rax
  int IsFullScreen; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  CortanaSharedExperienceManager *v10; // rcx
  __int64 (__fastcall *v11)(CortanaSharedExperienceManager *, unsigned __int8 *); // rax
  int LockCurtainShowing; // eax
  bool v13; // si
  __int64 v14; // rcx
  CortanaSharedExperienceManager *v15; // rcx
  __int64 (__fastcall *v16)(CortanaSharedExperienceManager *, unsigned __int8 *); // rax
  int CanTransitionFromStart; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, unsigned int); // rax
  int v21; // eax
  CStartExperienceManager *v22; // rcx
  __int64 (__fastcall *v23)(CStartExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  int v24; // eax
  CortanaSharedExperienceManager *v25; // rcx
  __int64 (__fastcall *v26)(CortanaSharedExperienceManager *); // rax
  int v27; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v35; // [rsp+30h] [rbp-18h]
  char v36; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned __int8 v38; // [rsp+80h] [rbp+38h] BYREF
  HSTRING v39; // [rsp+88h] [rbp+40h] BYREF
  unsigned __int8 v40; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int8 v41; // [rsp+98h] [rbp+50h] BYREF

  v39 = a2;
  v4 = (_DWORD *)((char *)this + 64);
  v34 = *((_DWORD *)this + 16);
  v35 = this;
  v36 = 1;
  v38 = 0;
  v5 = (CStartExperienceManager *)*((_QWORD *)this + 10);
  v6 = *(__int64 (__fastcall **)(CStartExperienceManager *, unsigned __int8 *))(*(_QWORD *)v5 + 120LL);
  if ( v6 == CStartExperienceManager::GetIsFullScreen )
    IsFullScreen = CStartExperienceManager::GetIsFullScreen(v5, &v38);
  else
    IsFullScreen = v6(v5, &v38);
  v9 = IsFullScreen;
  if ( IsFullScreen < 0 )
  {
    v29 = 1974LL;
    goto LABEL_52;
  }
  v13 = (*((_BYTE *)this + 968)
      || ((v10 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11),
           v11 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, unsigned __int8 *))(*(_QWORD *)v10 + 400LL),
           v11 != CortanaSharedExperienceManager::get_LockCurtainShowing)
        ? (LockCurtainShowing = v11(v10, &v41))
        : (LockCurtainShowing = CortanaSharedExperienceManager::get_LockCurtainShowing(v10, &v41)),
          LockCurtainShowing >= 0 && v41))
     && (unsigned __int8)CortanaHelpers::AllowCortanaAboveLock(v8)
     && XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24));
  WindowsGetStringRawBuffer(a2, 0LL);
  wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsageToService(v14);
  if ( !v38 && !v13 )
  {
    v40 = 0;
    v15 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11);
    v16 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, unsigned __int8 *))(*(_QWORD *)v15 + 120LL);
    if ( v16 == CortanaSharedExperienceManager::CanTransitionFromStart )
      CanTransitionFromStart = CortanaSharedExperienceManager::CanTransitionFromStart(v15, &v40);
    else
      CanTransitionFromStart = v16(v15, &v40);
    v9 = CanTransitionFromStart;
    if ( CanTransitionFromStart < 0 )
    {
      v29 = 1994LL;
      goto LABEL_52;
    }
    if ( v40 )
    {
      if ( !a2 || (v18 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 124, &v39), v9 = v18, v18 >= 0) )
      {
        *v4 = 12;
        v19 = *((_QWORD *)this + 11);
        v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 112LL);
        if ( v20 == CortanaSharedExperienceManager::PrepareForAppTransition )
          v21 = CortanaSharedExperienceManager::PrepareForAppTransition(v19, 2u);
        else
          v21 = v20(v19, 2u);
        v9 = v21;
        if ( v21 < 0 )
        {
          v29 = 2003LL;
        }
        else
        {
          v22 = (CStartExperienceManager *)*((_QWORD *)this + 10);
          v23 = *(__int64 (__fastcall **)(CStartExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v22 + 112LL);
          if ( v23 == CStartExperienceManager::PlayTransitionToCortana )
            v24 = CStartExperienceManager::PlayTransitionToCortana(
                    v22,
                    (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)CStartExperienceManager::PlayTransitionToCortana);
          else
            v24 = ((__int64 (__fastcall *)(CStartExperienceManager *))v23)(v22);
          v9 = v24;
          if ( v24 >= 0 )
            goto LABEL_24;
          v29 = 2004LL;
        }
LABEL_52:
        v30 = v9;
        goto LABEL_53;
      }
      v30 = (unsigned int)v18;
      v29 = 2000LL;
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)v30,
        -2);
      goto LABEL_28;
    }
    *v4 = 14;
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v9 = v31;
    if ( v31 < 0 )
    {
      v30 = (unsigned int)v31;
      v29 = 2011LL;
      goto LABEL_53;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
            *((_QWORD *)this + 11),
            a2,
            1LL);
    v9 = v32;
    if ( v32 < 0 )
    {
      v30 = (unsigned int)v32;
      v29 = 2013LL;
      goto LABEL_53;
    }
LABEL_24:
    v25 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11);
    v26 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *))(*(_QWORD *)v25 + 104LL);
    if ( v26 == CortanaSharedExperienceManager::TakeKeyboardFocus )
      v27 = CortanaSharedExperienceManager::TakeKeyboardFocus(v25);
    else
      v27 = v26(v25);
    v9 = v27;
    if ( v27 >= 0 )
      goto LABEL_27;
    v29 = 2020LL;
    goto LABEL_52;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
          *((_QWORD *)this + 11),
          a2,
          1LL);
  v9 = v33;
  if ( v33 < 0 )
  {
    v30 = (unsigned int)v33;
    v29 = 1989LL;
    goto LABEL_53;
  }
  if ( !v13 )
    goto LABEL_24;
LABEL_27:
  v9 = 0;
LABEL_28:
  v36 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v34,
    v4);
  return v9;
}
