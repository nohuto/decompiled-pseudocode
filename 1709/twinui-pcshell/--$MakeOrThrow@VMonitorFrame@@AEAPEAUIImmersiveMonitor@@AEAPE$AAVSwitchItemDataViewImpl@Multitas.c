/*
 * XREFs of ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x18015F250
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801599A4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008CDC4 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180156F14 (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4,
        void **a5)
{
  void *v9; // rax
  const char *v10; // r9
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v9 = operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = MonitorFrame::MonitorFrame((__int64)v9, *a2, (*a3 + 8LL) & -(__int64)(*a3 != 0LL), *a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v11;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v10);
    __debugbreak();
  }
  return a1;
}
