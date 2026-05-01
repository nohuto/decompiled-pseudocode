/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@UEAAJUTextRect@@@Z @ 0x18016B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z @ 0x18016B734 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(__int64 a1, int *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  TouchKeyboardExperienceManager *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    v10[0] = *a2;
    v10[1] = a2[1];
    v10[2] = a2[2];
    v10[3] = a2[3];
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 64LL))(v3, v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x130,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *(_OWORD *)(a1 + 232) = *(_OWORD *)v10;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 40LL))(*(_QWORD *)(a1 + 192), 0LL);
  if ( v8 < 0 )
  {
    v9 = 310LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(v7, 1, 0);
  if ( v8 < 0 )
  {
    v9 = 312LL;
    goto LABEL_7;
  }
  return 0LL;
}
