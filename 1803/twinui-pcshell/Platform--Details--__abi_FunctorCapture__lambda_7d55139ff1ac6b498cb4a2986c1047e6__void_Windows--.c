/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x18020C910
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ @ 0x18020B230 (-Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ.c)
 *     ?IsSwitchItemVisibleOnDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@PE$AAUIVirtualDesktop@2345@@Z @ 0x18020D564 (-IsSwitchItemVisibleOnDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x180215DF4 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_7d55139ff1ac6b498cb4a2986c1047e6__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi

  v5 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(*(_QWORD *)(a1 + 16));
  v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
  Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::IsSwitchItemVisibleOnDesktop(
    *(_QWORD *)(a1 + 8),
    v6,
    v5);
  Windows::UI::Xaml::IWindowPrivate::Show(a3);
  __abi_winrt_ptr_dtor(v6);
  return __abi_winrt_ptr_dtor(v5);
}
