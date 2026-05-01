/*
 * XREFs of ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802074B0
 * Callers:
 *     ??$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z @ 0x180203CA4 (--$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18020D42C (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z @ 0x18021A9F4 (--$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802158BC (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)(wil::details::static_lazy<XamlSwitcherLogging>::get(
                          a1,
                          lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)
                      + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
