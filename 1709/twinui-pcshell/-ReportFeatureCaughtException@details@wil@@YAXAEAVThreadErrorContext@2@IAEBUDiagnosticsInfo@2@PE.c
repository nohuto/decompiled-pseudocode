/*
 * XREFs of ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180087C28
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180087CA0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180087A3C (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x18008D10C (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall wil::details::ReportFeatureCaughtException(
        wil::details *this,
        struct wil::ThreadErrorContext *a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  unsigned int v5; // esi
  int v7; // r9d
  const struct DiagnosticsInfo *v8; // r9
  unsigned int v9[36]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (unsigned int)a2;
  memset(v9, 0, sizeof(v9));
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(
         this,
         (struct wil::FailureInfo *)v9,
         (const struct DiagnosticsInfo *)a3,
         v7) )
  {
    wil::details::RecordFeatureError((wil::details *)v5, (__int64)v9, a3, v8);
  }
}
