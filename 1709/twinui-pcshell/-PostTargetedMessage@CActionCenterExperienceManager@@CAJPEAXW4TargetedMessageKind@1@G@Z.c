/*
 * XREFs of ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180096218
 * Callers:
 *     _lambda_5de898d0b4538391f376d563c0bb2176_::_lambda_invoker_cdecl_ @ 0x180096C10 (_lambda_5de898d0b4538391f376d563c0bb2176_--_lambda_invoker_cdecl_.c)
 *     _lambda_748a048480ae588c86e82d4d271aeef7_::_lambda_invoker_cdecl_ @ 0x180097740 (_lambda_748a048480ae588c86e82d4d271aeef7_--_lambda_invoker_cdecl_.c)
 *     ?ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180097780 (-ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAX.c)
 *     ?NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800977C0 (-NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180097800 (-CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@K.c)
 *     ?DisplayContextChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180097840 (-DisplayContextChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TY.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PostTargetedMessage(
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
      (void *)0x201,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
