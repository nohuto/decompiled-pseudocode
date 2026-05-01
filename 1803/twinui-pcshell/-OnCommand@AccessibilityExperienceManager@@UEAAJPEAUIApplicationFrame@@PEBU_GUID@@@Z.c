/*
 * XREFs of ?OnCommand@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x1802591D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnCommand(
        AccessibilityExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 33);
  if ( !v5 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v5 + 24LL))(v5, a2) )
    return 2147942487LL;
  v6 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v6 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( v6 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 40LL))(*((_QWORD *)this + 33), 1LL);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x102,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
