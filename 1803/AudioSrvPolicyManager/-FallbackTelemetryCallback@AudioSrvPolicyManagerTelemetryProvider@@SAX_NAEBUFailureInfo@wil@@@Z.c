/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180008240
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x180008278 (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

void __fastcall AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback(
        char a1,
        const struct wil::FailureInfo *a2)
{
  struct AudioSrvPolicyManagerTelemetryProvider *v4; // rax
  __int64 v5; // rdx

  v4 = AudioSrvPolicyManagerTelemetryProvider::Instance();
  LOBYTE(v5) = a1;
  (*(void (__fastcall **)(struct AudioSrvPolicyManagerTelemetryProvider *, __int64, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL))(
    v4,
    v5,
    a2);
}
