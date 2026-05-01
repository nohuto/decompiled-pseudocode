/*
 * XREFs of ?OnCommand@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x1801B0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnCommand(
        AccessibilityExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 33);
  if ( !v5 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v5 + 24LL))(v5, a2) )
    return 2147942487LL;
  if ( *(_QWORD *)&a3->Data1 != ApplicationFrameCloseCommand )
    return 0LL;
  if ( *(_QWORD *)a3->Data4 != 0x575B26E93947F081LL )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 40LL))(*((_QWORD *)this + 33), 1LL);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF4,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
