/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18016C210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z @ 0x18016B734 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rcx
  TouchKeyboardExperienceManager *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 26);
  if ( !v5 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v5 + 24LL))(v5, a2) )
    return 2147942487LL;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 40LL))(*((_QWORD *)this + 26), 1LL);
    if ( v7 < 0 )
    {
      v8 = 595LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(v6, 0, 1);
    if ( v7 < 0 )
    {
      v8 = 596LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
