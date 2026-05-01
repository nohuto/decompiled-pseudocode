/*
 * XREFs of ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A1450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800A2D24 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::PrepareForAppTransition(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  void (*v8)(void); // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 400) + 32LL))(
         *(_QWORD *)(a1 + 400),
         1LL,
         *(_QWORD *)(a1 + 480));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(a1, &v13);
  if ( !v13 )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)0x80004005LL);
    v7 = v13;
    if ( !v13 )
      return v5;
    v13 = 0LL;
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
LABEL_7:
    v8();
    return v5;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, a2);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1FB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    v10 = v13;
    if ( !v13 )
      return v5;
    v13 = 0LL;
    v8 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    goto LABEL_7;
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
