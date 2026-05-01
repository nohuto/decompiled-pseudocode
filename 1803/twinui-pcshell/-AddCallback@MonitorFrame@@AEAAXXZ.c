/*
 * XREFs of ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x180208C30
 * Callers:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180205D54 (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_b17e8ea3ce422613d156e832a7d26e56___ @ 0x1800A0258 (Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitch.c)
 *     _lambda_b17e8ea3ce422613d156e832a7d26e56_::_lambda_b17e8ea3ce422613d156e832a7d26e56_ @ 0x1800A0340 (_lambda_b17e8ea3ce422613d156e832a7d26e56_--_lambda_b17e8ea3ce422613d156e832a7d26e56_.c)
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@3456@@Z @ 0x18021535C (-add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MonitorFrame::AddCallback(MonitorFrame *this)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rax
  _QWORD *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+18h]

  v6 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
  v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v8 = v2;
  v3 = lambda_b17e8ea3ce422613d156e832a7d26e56_::_lambda_b17e8ea3ce422613d156e832a7d26e56_(&v7, &v6);
  v4 = Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_b17e8ea3ce422613d156e832a7d26e56___(
         v2,
         v3);
  v8 = v4;
  *((_QWORD *)this + 10) = *(_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::add(
                                        *((_QWORD *)this + 7),
                                        v5,
                                        v4);
  __abi_winrt_ptr_dtor((__int64)v4);
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(&v6);
}
