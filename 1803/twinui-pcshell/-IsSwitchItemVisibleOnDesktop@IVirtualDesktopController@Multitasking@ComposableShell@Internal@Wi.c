/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@PE$AAUIVirtualDesktop@2345@@Z @ 0x18020D564
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x18020C910 (Platform--Details--__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows--.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18021CB0C (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

char __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)a1 + 72LL))(a1, a2, a3, &v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return v5;
}
