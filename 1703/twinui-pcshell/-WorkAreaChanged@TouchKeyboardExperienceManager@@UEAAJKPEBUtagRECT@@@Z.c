/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18016C380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScaleRectFromRegistry@@YAXPEAUtagRECT@@@Z @ 0x18016B7F0 (-ScaleRectFromRegistry@@YAXPEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        struct tagRECT *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  struct tagRECT *v3; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 15;
  this[15] = *a3;
  ScaleRectFromRegistry(this + 15);
  v5 = *(_QWORD *)&this[12].right;
  if ( !v5 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v5 + 64LL))(v5, v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x275,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
