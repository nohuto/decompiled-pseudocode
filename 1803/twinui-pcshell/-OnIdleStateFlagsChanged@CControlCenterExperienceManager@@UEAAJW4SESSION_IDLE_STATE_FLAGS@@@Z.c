/*
 * XREFs of ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180157CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801576B0 (-Hide@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a2 & 2) == 0 )
    return 0LL;
  v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(a1 - 40));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
