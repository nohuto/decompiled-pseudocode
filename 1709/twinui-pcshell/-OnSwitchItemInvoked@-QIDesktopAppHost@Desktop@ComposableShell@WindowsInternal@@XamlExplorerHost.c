/*
 * XREFs of ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1801487D4
 * Callers:
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x180149770 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@Xam_ea_180149770.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180147778 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _OnSwitchItemInvoked__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXPE_AAUISwitchItem_Multitasking_3Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  AppViewDataSourceHelpers::GetApplicationViewForItem(&v6, a2);
  v2 = v6;
  if ( !v6 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
