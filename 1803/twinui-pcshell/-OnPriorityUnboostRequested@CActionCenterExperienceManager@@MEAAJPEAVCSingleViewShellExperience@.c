/*
 * XREFs of ?OnPriorityUnboostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B8A0
 * Callers:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069ADC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnPriorityUnboostRequested(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v2 + 56LL))(v2, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35D,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
