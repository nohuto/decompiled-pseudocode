/*
 * XREFs of _lambda_5e1669f70f5e626cb13f0ae9b344f394_::operator() @ 0x1800A1804
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394___::Run @ 0x1800A2310 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D284 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18023E028 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802412EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802415C0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CAX_NW.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18030B910 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5e1669f70f5e626cb13f0ae9b344f394_::operator()(
        Microsoft::WRL::Details::WeakReferenceImpl **a1)
{
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *v4; // rcx
  unsigned int v5; // ebx
  int ViewInfo; // eax
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v14; // rcx
  bool v15; // r8
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rcx
  std::_Ref_count_base *v20[2]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IInspectable *v23; // [rsp+70h] [rbp+20h] BYREF

  v23 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 1, &v23);
  v4 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      333LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v23 )
  {
    v5 = 0;
    goto LABEL_27;
  }
  *(_OWORD *)v20 = 0LL;
  LOBYTE(v3) = 3;
  wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(v4, v3);
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[2], *(unsigned int *)a1, v20);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 344LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_25;
  }
  v8 = v20[0];
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v20[0] + 1) + 128LL))(
               *((_QWORD *)v20[0] + 1),
               2LL);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 350LL;
    goto LABEL_23;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v8 + 1) + 40LL))(*((_QWORD *)v8 + 1), 1LL);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 352LL;
    goto LABEL_23;
  }
  wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v9);
  v21 = 0uLL;
  *(_OWORD *)((char *)v8 + 40) = 0uLL;
  v10 = *(_QWORD *)(*((_QWORD *)a1[2] + 83) + 32LL);
  ViewInfo = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, 0LL);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 362LL;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)a1 )
  {
    FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow(v11);
    Ancestor = GetAncestor(FocusedWindow, 2u);
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)a1[2] + 41) + 32LL))(
                 *((_QWORD *)a1[2] + 41),
                 Ancestor,
                 *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1[2] + 83) + 96LL) + 396LL));
    v5 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v7 = 370LL;
      goto LABEL_23;
    }
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v14);
    if ( *((_BYTE *)a1 + 4) )
      IhmNotification::SendKeyboardSetVisible(0LL, 1, v15);
  }
  wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::ReportUsageToService(v11);
  v16 = *(_QWORD *)v8;
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(**(_QWORD **)v8 + 336LL);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1[2] + 83) + 96LL) + 500LL) )
  {
    ViewInfo = v17(v16, 3LL);
    v5 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v7 = 392LL;
      goto LABEL_23;
    }
  }
  else
  {
    ViewInfo = v17(v16, 1LL);
    v5 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v7 = 398LL;
      goto LABEL_23;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::ReportUsageToService(v18);
  v5 = 0;
LABEL_25:
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
LABEL_27:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v23);
  return v5;
}
