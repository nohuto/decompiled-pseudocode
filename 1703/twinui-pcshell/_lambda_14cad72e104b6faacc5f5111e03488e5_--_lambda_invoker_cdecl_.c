/*
 * XREFs of _lambda_14cad72e104b6faacc5f5111e03488e5_::_lambda_invoker_cdecl_ @ 0x180156640
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CortanaDidntOpenInSpecifiedTime@KI@StartWindowTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x180159D5C (--$CortanaDidntOpenInSpecifiedTime@KI@StartWindowTelemetry@@SAX$$QEAK$$QEAI@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18018C864 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_14cad72e104b6faacc5f5111e03488e5_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int lpVtbl; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  lpVtbl = (int)Context[7].lpVtbl;
  v8 = 1000 * HIDWORD(Context[7].lpVtbl);
  StartWindowTelemetry::CortanaDidntOpenInSpecifiedTime<unsigned long,unsigned int>(&v8, &lpVtbl, Timer);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)4, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
}
