/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x1800C0A90
 * Callers:
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800C0930 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1800C08C0 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // r12d
  int PositionerByType; // eax
  unsigned int v8; // esi
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  void (*v16)(void); // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF
  char v24; // [rsp+88h] [rbp+48h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v25; // [rsp+98h] [rbp+58h] BYREF

  v21[1] = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)-2LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( a2 == v6 )
    return 0LL;
  v25 = 0LL;
  PositionerByType = TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
                       (TwinUI::Cortana::CortanaPositionerSelector *)a1,
                       a2,
                       &v25);
  v8 = PositionerByType;
  v9 = v25;
  if ( PositionerByType >= 0 )
  {
    v24 = 0;
    PositionerByType = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, _QWORD, char *))(*(_QWORD *)v25 + 56LL))(
                         v25,
                         a3,
                         v6,
                         &v24);
    v8 = PositionerByType;
    if ( PositionerByType < 0 )
    {
      v10 = 113LL;
      goto LABEL_6;
    }
    if ( v24 )
    {
      v23 = 0LL;
      if ( v6 )
      {
        v21[0] = 0LL;
        v11 = TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
                (TwinUI::Cortana::CortanaPositionerSelector *)a1,
                v6,
                v21);
        v8 = v11;
        v12 = v21[0];
        if ( v11 < 0 )
        {
          v13 = 120LL;
          goto LABEL_15;
        }
        v14 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 64LL))(
                v12,
                a3,
                a2,
                &v23);
        v8 = v11;
        if ( v11 < 0 )
        {
          v13 = 121LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
            (const char *)(unsigned int)v11);
          if ( v12 )
            (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v12 + 16LL))(v12);
          goto LABEL_24;
        }
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v15 = **(_QWORD **)(a1 + 40);
      if ( a2 == 1 )
        v16 = *(void (**)(void))(v15 + 136);
      else
        v16 = *(void (**)(void))(v15 + 144);
      v16();
      *(_DWORD *)(a1 + 24) = a2;
      v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, _QWORD, __int64))(*(_QWORD *)v9 + 72LL))(
              v9,
              a3,
              v6,
              v23);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x88,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
          (const char *)(unsigned int)v17);
LABEL_24:
        v18 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_26;
      }
      v20 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
  v10 = 110LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)PositionerByType);
LABEL_26:
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
