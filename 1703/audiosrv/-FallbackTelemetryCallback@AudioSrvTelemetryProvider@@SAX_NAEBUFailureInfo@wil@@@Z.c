/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180080B60
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

void __fastcall AudioSrvTelemetryProvider::FallbackTelemetryCallback(__int64 a1, const struct wil::FailureInfo *a2)
{
  char v3; // di
  LPVOID v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  LOBYTE(v5) = v3;
  (*(void (__fastcall **)(LPVOID, __int64, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL))(v4, v5, a2);
}
