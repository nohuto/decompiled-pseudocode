/*
 * XREFs of ?OnViewCreated@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2CB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?ApplyPriorityBoostIfNeeded@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B2F6C (-ApplyPriorityBoostIfNeeded@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 *     ?PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B38A0 (-PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180183448 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::OnViewCreated(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v8; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 72, 3LL);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CWelcomeScreenExperienceManager::ApplyPriorityBoostIfNeeded((CWelcomeScreenExperienceManager *)((char *)this - 64));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CWelcomeScreenExperienceManager::PositionApplicationOnPrimaryMonitor((CWelcomeScreenExperienceManager *)((char *)this - 64));
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = WelcomeScreenExperienceManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
      TlgWrite(v8, &unk_1801FBD26, 0LL, 0LL, 2u, &pData);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
