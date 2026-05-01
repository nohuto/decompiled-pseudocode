/*
 * XREFs of ??$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMonitorFrame@@@12@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1801314C8
 * Callers:
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180130FBC (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Mult.c)
 * Callees:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x18012C084 (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Common@Multitasking@Exper.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<MonitorFrame,IImmersiveMonitor * &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        void **a5)
{
  void *v9; // rax
  __int64 v10; // rdi

  *a1 = 0LL;
  v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = MonitorFrame::MonitorFrame((__int64)v9, *a2, *a3, *a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v10;
  }
  return a1;
}
