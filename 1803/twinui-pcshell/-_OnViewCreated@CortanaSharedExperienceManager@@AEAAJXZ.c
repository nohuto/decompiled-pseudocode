/*
 * XREFs of ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E6FC
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800666C0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066824 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066AA0 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015EA38 (-_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015EB88 (-_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnViewCreated(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int started; // eax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 504) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 104LL))(*((_QWORD *)this + 59), 3LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1062LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1064LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1065LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  started = CortanaSharedExperienceManager::_StartActivationTimeoutPolicy(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1066LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)started);
  v6 = CortanaSharedExperienceManager::_RegisterViewPresentationChanged(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
