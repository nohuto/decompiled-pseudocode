/*
 * XREFs of ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180045414
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180046668 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 * Callees:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800452A4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 */

char __fastcall wil::ThreadErrorContext::GetCaughtExceptionError(
        wil::ThreadErrorContext *this,
        struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3)
{
  if ( *(_QWORD *)this )
    return wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
             *(wil::details_abi::ThreadLocalData **)this,
             a2,
             *((_DWORD *)this + 2),
             a3);
  else
    return 0;
}
