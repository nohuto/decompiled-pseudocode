/*
 * XREFs of ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x18012C084
 * Callers:
 *     ??$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMonitorFrame@@@12@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1801314C8 (--$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitaskin.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_79cd3f6b551d9350708e82439cb1951b___ @ 0x180130BF8 (Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experiences--Multitaski.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall MonitorFrame::MonitorFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  void *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h]

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_DWORD *)(a1 + 28) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &MonitorFrame::`vftable';
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_QWORD *)(a1 + 48) = a3;
  v9 = (__int64)a5;
  if ( a5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a5 + 8LL))(a5);
  *(_QWORD *)(a1 + 56) = v9;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_QWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  v18 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  a5 = v11;
  v16 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12 = Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_79cd3f6b551d9350708e82439cb1951b___(
          v11,
          &v16);
  a5 = (void *)v12;
  v13 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, v12, &v17);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  *(_QWORD *)(a1 + 72) = v17;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return a1;
}
