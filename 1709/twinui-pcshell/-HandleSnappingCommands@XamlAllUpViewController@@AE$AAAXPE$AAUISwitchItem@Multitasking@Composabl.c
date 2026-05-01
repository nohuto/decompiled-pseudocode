/*
 * XREFs of ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180171264
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1801711D0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x18017A968 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAllUpViewController::HandleSnappingCommands(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int AppViewFromSwitchItem; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  void *v16; // rcx
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-30h] BYREF
  int v19[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v18[1] = -2LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  XamlBaseViewController::DismissView(a1 + 8);
  v18[0] = 0LL;
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v7, a2, v18);
  if ( AppViewFromSwitchItem < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
    __debugbreak();
  }
  v9 = 2;
  v10 = a3 - 1501;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
LABEL_9:
      v9 = 1;
      goto LABEL_11;
    }
    v12 = v11 - 7;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_11;
      goto LABEL_9;
    }
  }
  v9 = 0;
LABEL_11:
  v17 = 0LL;
  v13 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 160), &GUID_fff59320_db70_4865_8fed_8b502d692f12, &v17);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = v18[0];
  v15 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v17 + 24LL))(
          v17,
          v18[0],
          v9,
          0LL,
          v19);
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v15);
  v16 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
