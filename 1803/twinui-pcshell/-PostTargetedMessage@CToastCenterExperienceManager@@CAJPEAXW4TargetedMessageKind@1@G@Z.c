/*
 * XREFs of ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801658A8
 * Callers:
 *     _lambda_347a29f3d0e985631b4daedaf659f519_::_lambda_invoker_cdecl_ @ 0x180161630 (_lambda_347a29f3d0e985631b4daedaf659f519_--_lambda_invoker_cdecl_.c)
 *     ?CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180162A50 (-CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KP.c)
 *     ?DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180162B30 (-DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 *     ?NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180163AD0 (-NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_.c)
 *     ?ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801667A0 (-ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803094E8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::PostTargetedMessage(
        struct IUnknown *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
