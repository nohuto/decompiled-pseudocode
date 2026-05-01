/*
 * XREFs of ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180091DE8
 * Callers:
 *     _lambda_1da3a53773f13b4b73946ed3ad9c3c5d_::_lambda_invoker_cdecl_ @ 0x1800926B0 (_lambda_1da3a53773f13b4b73946ed3ad9c3c5d_--_lambda_invoker_cdecl_.c)
 *     _lambda_593eee64f63e5738afc2923b81d8d64a_::_lambda_invoker_cdecl_ @ 0x1800930B0 (_lambda_593eee64f63e5738afc2923b81d8d64a_--_lambda_invoker_cdecl_.c)
 *     ?ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800930F0 (-ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAX.c)
 *     ?NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180093130 (-NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180093170 (-CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18018C864 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
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
      (void *)0x1B9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
