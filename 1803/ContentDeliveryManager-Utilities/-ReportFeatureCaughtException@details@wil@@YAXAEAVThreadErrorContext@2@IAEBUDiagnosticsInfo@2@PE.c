/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x18004A320
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18004A3A0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000B8C4 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x18004910C (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
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
  memset_0(v8, 0, sizeof(v8));
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(this, (struct wil::FailureInfo *)v8, a3) )
    wil::details::RecordFeatureError((wil::details *)v5, (__int64)v8, (const struct wil::FailureInfo *)a3, v7);
}
