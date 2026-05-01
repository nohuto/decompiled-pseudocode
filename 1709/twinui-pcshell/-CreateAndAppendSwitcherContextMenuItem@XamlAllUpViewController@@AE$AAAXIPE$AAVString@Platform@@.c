/*
 * XREFs of ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801718E8
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitch.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180171838 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0SwitcherContextMenuItem@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVString@Platform@@IPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180172F74 (--0SwitcherContextMenuItem@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSt.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherContextMenuItem::SwitcherContextMenuItem(
         a1,
         a3,
         a2);
  v6 = v5;
  v10 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v6)(
           v6,
           &_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__,
           &v10);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v7 = v10;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 104LL))(a4, v7);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v7 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
