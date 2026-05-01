/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800830E0
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180083160 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180082EC8 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180082EF4 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

void __fastcall wil::details::ReportFeatureCaughtException(
        wil::details *this,
        struct wil::ThreadErrorContext *a2,
        struct DiagnosticsInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v5; // esi
  const struct DiagnosticsInfo *v7; // r9
  unsigned int v8[36]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (unsigned int)a2;
  memset(v8, 0, sizeof(v8));
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(this, (struct wil::FailureInfo *)v8, a3) )
    wil::details::RecordFeatureError((wil::details *)v5, (__int64)v8, (const struct wil::FailureInfo *)a3, v7);
}
