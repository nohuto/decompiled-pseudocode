/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180029894
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x18002C468 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002C868 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002C944 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1800297A8 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32(
    (__int64)this,
    (unsigned int)a2,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\offershealthtracker.h",
    (__int64)a4,
    v4,
    retaddr,
    2,
    (int)a4);
}
