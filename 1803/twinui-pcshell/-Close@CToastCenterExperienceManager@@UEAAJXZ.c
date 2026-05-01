/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180162830
 * Callers:
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x180162008 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180166278 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Close(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 96));
    if ( v3 >= 0 )
      *((_DWORD *)this + 96) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        308LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 102));
    if ( v5 >= 0 )
      *((_DWORD *)this + 102) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        316LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 54) + 32LL))(
           *((_QWORD *)this + 54),
           *((unsigned int *)this + 103));
    if ( v6 >= 0 )
      *((_DWORD *)this + 102) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        321LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 55);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 104));
    if ( v8 >= 0 )
      *((_DWORD *)this + 104) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        329LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = *((_QWORD *)this + 41);
  if ( v9 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v9);
    *((_QWORD *)this + 41) = 0LL;
  }
  v10 = *((_QWORD *)this + 39);
  if ( v10 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v10);
    *((_QWORD *)this + 39) = 0LL;
  }
  v11 = *((_QWORD *)this + 40);
  if ( v11 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v11);
    *((_QWORD *)this + 40) = 0LL;
  }
  v12 = *((_QWORD *)this + 59);
  if ( v12 && *((_QWORD *)this + 60) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 64LL))(v12, *((_QWORD *)this + 60));
    *((_QWORD *)this + 60) = 0LL;
  }
  return 0LL;
}
