/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x1801997BC
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1801A38E0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180198938 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18019E6D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        int a2)
{
  int ViewInfo; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  unsigned int v8; // edx
  bool v9; // r8
  bool v10; // r9
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v13; // rbx
  __int16 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-34h]
  _OWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19 = -2LL;
  v18[0] = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, 0LL, v18);
  v5 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v7 = *(_QWORD **)&v18[0];
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)&v18[0] + 8LL) + 128LL))(
                 *(_QWORD *)(*(_QWORD *)&v18[0] + 8LL),
                 2LL);
    v5 = ViewInfo;
    if ( ViewInfo >= 0 )
    {
      ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7[1] + 40LL))(v7[1], 1LL);
      v5 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        if ( a2
          || (LOBYTE(v8) = 1,
              ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(0LL, v8, v9, v10),
              v5 = ViewInfo,
              ViewInfo >= 0) )
        {
          v18[1] = 0uLL;
          *(_OWORD *)(v7 + 5) = 0uLL;
          if ( !a2 )
          {
            ViewInfo = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 79) + 32LL) + 72LL))(
                         *(_QWORD *)(*((_QWORD *)this + 79) + 32LL),
                         0LL);
            v5 = ViewInfo;
            if ( ViewInfo < 0 )
            {
              v6 = 328LL;
              goto LABEL_19;
            }
            FocusedWindow = anonymous_namespace_::GetFocusedWindow();
            Ancestor = GetAncestor(FocusedWindow, 2u);
            ViewInfo = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 37) + 32LL))(
                         *((_QWORD *)this + 37),
                         Ancestor,
                         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 79) + 96LL) + 364LL));
            v5 = ViewInfo;
            if ( ViewInfo < 0 )
            {
              v6 = 332LL;
              goto LABEL_19;
            }
          }
          if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetCachedFeatureEnabledState();
          LOBYTE(v15) = 0;
          v16 = 0;
          v17 = v15;
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &`wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::GetFeaturePropertyCache'::`2'::data,
            0xBCFA15u,
            (const struct FEATURE_LOGGED_TRAITS *)&v16,
            0,
            3);
          ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 336LL))(*v7, 3LL);
          v5 = ViewInfo;
          if ( ViewInfo >= 0 )
          {
            v5 = 0;
            goto LABEL_21;
          }
          v6 = 344LL;
        }
        else
        {
          v6 = 322LL;
        }
      }
      else
      {
        v6 = 319LL;
      }
    }
    else
    {
      v6 = 301LL;
    }
  }
  else
  {
    v6 = 300LL;
  }
LABEL_19:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_21:
  if ( *((_QWORD *)&v18[0] + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18[0] + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v18[0] + 1);
      (***((void (__fastcall ****)(_QWORD))&v18[0] + 1))(*((_QWORD *)&v18[0] + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18[0] + 1) + 8LL))(*((_QWORD *)&v18[0] + 1));
    }
  }
  return v5;
}
