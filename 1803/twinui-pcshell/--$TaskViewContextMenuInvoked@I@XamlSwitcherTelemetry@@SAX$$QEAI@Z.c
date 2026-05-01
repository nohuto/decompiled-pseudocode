/*
 * XREFs of ??$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z @ 0x18021A9F4
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18021C5C8 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802074B0 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18020D42C (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z @ 0x18021F2F0 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int>(unsigned int *a1)
{
  XamlSwitcherTelemetry *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v3 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_180438988;
        qword_180438988 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v3);
      }
    }
    XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(v2, *a1);
  }
}
