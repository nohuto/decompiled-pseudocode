/*
 * XREFs of ?NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800977C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180096218 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::NotificationStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct IUnknown *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CActionCenterExperienceManager::PostTargetedMessage(a4, 1u, (__int64)a3, (__int64)a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x416,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
