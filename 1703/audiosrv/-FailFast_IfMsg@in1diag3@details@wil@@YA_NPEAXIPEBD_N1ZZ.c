/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C5A38
 * Callers:
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C64CC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800C6584 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

bool wil::details::in1diag3::FailFast_IfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        bool a5,
        const char *a6,
        ...)
{
  if ( (_BYTE)a4 )
  {
    wil::details::ReportFailure_HrMsg(this, a2);
    __debugbreak();
  }
  return 0;
}
