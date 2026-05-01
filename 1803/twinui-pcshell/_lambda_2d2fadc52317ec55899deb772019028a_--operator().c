/*
 * XREFs of _lambda_2d2fadc52317ec55899deb772019028a_::operator() @ 0x180207CB4
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_2d2fadc52317ec55899deb772019028a__void_::Invoke @ 0x18020C8B0 (Platform--Details--__abi_FunctorCapture__lambda_2d2fadc52317ec55899deb772019028a__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?remove@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180216074 (-remove@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInterna.c)
 *     ?remove@LightDismiss@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180216098 (-remove@LightDismiss@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE.c)
 *     ?remove@SwitchItemContextMenuInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x1802160C0 (-remove@SwitchItemContextMenuInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 *     ?PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802160E8 (-PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal.c)
 *     ?remove@TaskViewContainerNavigation@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18021610C (-remove@TaskViewContainerNavigation@ISwitcherViewModel@Switcher@Experiences@ComposableShell@Wind.c)
 *     ?remove@ViewLoaded@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180216134 (-remove@ViewLoaded@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$A.c)
 *     ?Append@?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802161D4 (-Append@-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2d2fadc52317ec55899deb772019028a_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 168LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD **)(a1 + 8);
  v4 = v3[12];
  if ( v4 )
  {
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::TaskViewContainerNavigation::remove(
      v4,
      v3[13]);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) = 0LL;
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::remove(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = 0LL;
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::LightDismiss::remove(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = 0LL;
    Windows::Foundation::Collections::IVector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::Append(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) = 0LL;
    Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::PinUnPinSwitchItemToAllDesktops(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = 0LL;
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuInvoked::remove(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
    WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::ViewLoaded::remove(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
  }
  v5 = v3[11];
  if ( v5 )
  {
    Windows::Foundation::Collections::IVector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::Append(
      v5,
      v3[19]);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL) = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
  }
  v6 = v3[6];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
