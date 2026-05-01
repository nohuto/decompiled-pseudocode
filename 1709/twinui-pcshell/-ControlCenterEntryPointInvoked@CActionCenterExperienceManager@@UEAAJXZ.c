/*
 * XREFs of ?ControlCenterEntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::ControlCenterEntryPointInvoked(CActionCenterExperienceManager *this)
{
  int v2; // edi
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 15) )
  {
    if ( *((_DWORD *)this + 78) <= 1u )
    {
      v2 = CActionCenterExperienceManager::TransitionToState((char *)this - 24, 2LL);
      if ( v2 < 0 )
      {
        v3 = 433LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v3,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
        return (unsigned int)v2;
      }
    }
    v2 = CActionCenterExperienceManager::RaiseApplicationEvent(
           (CActionCenterExperienceManager *)((char *)this - 24),
           L"ControlCenterInvoked",
           1);
    if ( v2 < 0 )
    {
      v3 = 436LL;
      goto LABEL_5;
    }
  }
  else
  {
    *((_DWORD *)this + 80) = 4;
  }
  v5 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)((char *)this - 24));
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
