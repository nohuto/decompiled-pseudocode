/*
 * XREFs of ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1400404C4
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140007700 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x14003B33C (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg_NoOriginate(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  wil::details::ReportFailure_HrMsg();
}
