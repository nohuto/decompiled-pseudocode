/*
 * XREFs of ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095CA0
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009581C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x18009ACFC (wil--details--ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___--_ScopeExitFn__lambda_d721.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Close(CActionCenterExperienceManager *this)
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
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 58);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 118));
    if ( v3 >= 0 )
      *((_DWORD *)this + 118) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x170,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_QWORD *)this + 66);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 126));
    if ( v5 >= 0 )
      *((_DWORD *)this + 126) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x178,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 66) + 32LL))(
           *((_QWORD *)this + 66),
           *((unsigned int *)this + 127));
    if ( v6 >= 0 )
      *((_DWORD *)this + 126) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 67);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 128));
    if ( v8 >= 0 )
      *((_DWORD *)this + 128) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = *((_QWORD *)this + 53);
  if ( v9 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v9);
    *((_QWORD *)this + 53) = 0LL;
  }
  v10 = *((_QWORD *)this + 51);
  if ( v10 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v10);
    *((_QWORD *)this + 51) = 0LL;
  }
  v11 = *((_QWORD *)this + 52);
  if ( v11 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v11);
    *((_QWORD *)this + 52) = 0LL;
  }
  return 0LL;
}
