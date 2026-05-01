/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NXZ @ 0x180152C78
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180155FB0 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char StartWindowTelemetry::IsEnabled(void)
{
  char v0; // bl
  _DWORD *v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v0 = 1;
  if ( fPending )
  {
    qword_180244DD8 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180244DD8;
    atexit(lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
    qword_180244DE0 = (__int64)CommonStartTelemetryLogging::Provider();
    byte_180244DE8 = 0;
    dword_180244DEC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244DD8 + 8))(&qword_180244DD8);
    InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &qword_180244DD8);
  }
  v1 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( !v1 || !*v1 )
    return 0;
  return v0;
}
