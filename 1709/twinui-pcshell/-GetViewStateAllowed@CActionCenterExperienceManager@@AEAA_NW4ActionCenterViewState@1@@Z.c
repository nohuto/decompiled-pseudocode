/*
 * XREFs of ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x180097878
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180095F00 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CActionCenterExperienceManager::GetViewStateAllowed(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 532) == 0;
  v8 = 1;
  if ( !v2 )
  {
    v8 = 0;
    v3 = *(_QWORD *)(a1 + 568);
    if ( v3 )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 32LL))(v3, 2LL, &v8);
          if ( v4 < 0 )
          {
            v5 = 1115LL;
LABEL_9:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v5,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v4);
          }
        }
      }
      else
      {
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 32LL))(v3, 5LL, &v8);
        if ( v4 < 0 )
        {
          v5 = 1111LL;
          goto LABEL_9;
        }
      }
    }
  }
  return v8 != 0;
}
