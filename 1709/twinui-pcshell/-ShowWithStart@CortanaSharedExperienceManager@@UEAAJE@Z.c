/*
 * XREFs of ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1800A1070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800A2D24 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShowWithStart(CortanaSharedExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 50) + 32LL))(
         *((_QWORD *)this + 50),
         1LL,
         *((_QWORD *)this + 60));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1BD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v14);
  if ( !v14 )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)0x80004005LL);
    v8 = v14;
    if ( !v14 )
      return v5;
    v14 = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
LABEL_7:
    v9();
    return v5;
  }
  LOBYTE(v7) = a2;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 88LL))(v14, v7);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    v11 = v14;
    if ( !v14 )
      return v5;
    v14 = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    goto LABEL_7;
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
