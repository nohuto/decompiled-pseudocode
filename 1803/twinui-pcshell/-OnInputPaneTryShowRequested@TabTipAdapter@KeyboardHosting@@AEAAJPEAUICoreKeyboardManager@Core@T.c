/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18024B770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x180252320 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU-$IVectorView@UCoreKeyb.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18030B910 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  IhmNotification *v6; // rcx
  bool v7; // r8
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v9[1] = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    (__int64)a3);
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(*((_QWORD *)this + 12), v9, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v11 == 1 )
    {
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))(
        (char *)this + 8,
        *(unsigned int *)(*((_QWORD *)this + 12) + 516LL));
      LOBYTE(v6) = 1;
      IhmNotification::SendKeyboardSetVisible(v6, 0, v7);
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return v5;
}
