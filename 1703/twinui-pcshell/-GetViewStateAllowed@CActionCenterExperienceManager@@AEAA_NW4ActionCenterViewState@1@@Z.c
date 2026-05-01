/*
 * XREFs of ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x1800931A8
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180091B50 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092398 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CActionCenterExperienceManager::GetViewStateAllowed(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 1;
  if ( *(_BYTE *)(a1 + 444) )
  {
    v2 = *(_QWORD *)(a1 + 480);
    v7 = 0;
    if ( v2 )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 32LL))(v2, 2LL, &v7);
          if ( v3 < 0 )
          {
            v4 = 993LL;
LABEL_9:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v4,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v3);
          }
        }
      }
      else
      {
        v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 32LL))(v2, 5LL, &v7);
        if ( v3 < 0 )
        {
          v4 = 989LL;
          goto LABEL_9;
        }
      }
    }
  }
  return v7 != 0;
}
