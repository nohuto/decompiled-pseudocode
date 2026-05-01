/*
 * XREFs of ?OnViewShowing@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2D90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B38A0 (-PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::OnViewShowing(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  const struct _TlgProvider_t *v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CWelcomeScreenExperienceManager::PositionApplicationOnPrimaryMonitor((CWelcomeScreenExperienceManager *)((char *)this - 64));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = WelcomeScreenExperienceManagerLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
      TlgWrite(v5, &unk_1801FBCCC, 0LL, 0LL, 2u, &pData);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x74,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
