/*
 * XREFs of ?PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802160E8
 * Callers:
 *     _lambda_2d2fadc52317ec55899deb772019028a_::operator() @ 0x180207CB4 (_lambda_2d2fadc52317ec55899deb772019028a_--operator().c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18021C5C8 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::PinUnPinSwitchItemToAllDesktops(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
