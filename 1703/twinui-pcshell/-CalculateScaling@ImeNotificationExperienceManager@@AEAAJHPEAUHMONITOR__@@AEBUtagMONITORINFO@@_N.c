/*
 * XREFs of ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18009F7BC
 * Callers:
 *     ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18009F860 (-OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 *     _lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator() @ 0x18009FC58 (_lambda_0cfb79e9f82d4b070b46ace9fa651aa3_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C3DC (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::CalculateScaling(
        ImeNotificationExperienceManager *this,
        int a2,
        HMONITOR a3,
        const struct tagMONITORINFO *a4,
        bool a5,
        int *a6)
{
  int v7; // eax
  ExperienceManagerUtils *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = a4->rcMonitor.bottom - a4->rcMonitor.top;
  if ( a4->rcMonitor.right - a4->rcMonitor.left < v7 )
    v7 = a4->rcMonitor.right - a4->rcMonitor.left;
  v8 = (ExperienceManagerUtils *)(unsigned int)(int)((double)v7 * 0.15);
  *a6 = (int)v8;
  if ( a5 )
    *a6 = ExperienceManagerUtils::UnscaleByPerMonitorDPI(v8, (int)a3, a3);
  if ( (double)*a6 / (double)a2 < 1.0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  return 0LL;
}
