/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18016B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z @ 0x18016B734 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v1; // rcx
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24), 1LL);
  if ( v2 < 0 )
  {
    v3 = 319LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(v1, 0, 0);
  if ( v2 < 0 )
  {
    v3 = 321LL;
    goto LABEL_3;
  }
  return 0LL;
}
