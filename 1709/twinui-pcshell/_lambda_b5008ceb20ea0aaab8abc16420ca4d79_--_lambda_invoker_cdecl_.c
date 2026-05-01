/*
 * XREFs of _lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_ @ 0x18018A590
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x18018DD20 (--$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  lpVtbl = (int)Context[8].lpVtbl;
  v8 = 1000 * HIDWORD(Context[8].lpVtbl);
  CommonStartTelemetry::StartDidntOpenInSpecifiedTime<unsigned long,unsigned int>(&v8, &lpVtbl, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)2, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x430,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
