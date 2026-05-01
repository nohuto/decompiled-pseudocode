/*
 * XREFs of ?OnStoryboardCompleted@CStartExperienceManager@@UEAAXXZ @ 0x1800777D0
 * Callers:
 *     ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180075E60 (-v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStartExperienceManager::OnStoryboardCompleted(
        CStartExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 56LL))(*((_QWORD *)this + 59));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x101,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      a5);
}
