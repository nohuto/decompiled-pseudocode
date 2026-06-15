/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003A108
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009AE0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$01@@AEAAJPEA_N@Z @ 0x140039BA8 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$01@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x140039D30 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
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
