/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003B6C8
 * Callers:
 *     ?ProcessHasBeenRunningLongEnough@CWatchdogTimer@@AEAAJPEA_N@Z @ 0x14003B1B8 (-ProcessHasBeenRunningLongEnough@CWatchdogTimer@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x14003B33C (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(1LL, (unsigned int)a4);
  wil::details::ReportFailure_HrMsg();
}
