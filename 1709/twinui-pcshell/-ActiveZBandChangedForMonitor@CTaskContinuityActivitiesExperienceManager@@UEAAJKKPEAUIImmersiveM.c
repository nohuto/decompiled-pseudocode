/*
 * XREFs of ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800AB5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x1800AB460 (-Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) != 2 || ((a3 - 1) & 0xFFFFFFFB) != 0 && (unsigned int)(a3 - 8) > 4 && a3 != 13 )
    return 0LL;
  v3 = CTaskContinuityActivitiesExperienceManager::Hide((CTaskContinuityActivitiesExperienceManager *)(a1 - 24));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xE2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
