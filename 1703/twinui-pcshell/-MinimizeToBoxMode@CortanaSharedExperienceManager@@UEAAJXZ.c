/*
 * XREFs of ?MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800BC718 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::MinimizeToBoxMode(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rcx
  void (*v6)(void); // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 50) + 32LL))(
         *((_QWORD *)this + 50),
         1LL,
         *((_QWORD *)this + 60));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v11);
  if ( !v11 )
  {
    v3 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)0x80004005LL);
    v5 = v11;
    if ( !v11 )
      return v3;
    v11 = 0LL;
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
LABEL_7:
    v6();
    return v3;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1CD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    v8 = v11;
    if ( !v11 )
      return v3;
    v11 = 0LL;
    v6 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    goto LABEL_7;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
