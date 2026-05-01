/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020
 * Callers:
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800678F0 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180067B10 (-ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180084EE0 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180066450 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180084DBC (-InternalRelease@-$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Mi.c)
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180084E50 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ?EnableNotifications@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085440 (-EnableNotifications@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // r14d
  __int64 (__fastcall *v8)(__int64 *, int, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rax
  int PositionerByType; // eax
  unsigned int v10; // ebx
  int v11; // eax
  CortanaExperienceManagerNotification *v12; // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(CortanaExperienceManagerNotification *__hidden); // rax
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v24; // [rsp+70h] [rbp+30h] BYREF
  char v25; // [rsp+78h] [rbp+38h] BYREF
  UAPViewWrapper *v26; // [rsp+88h] [rbp+48h] BYREF

  v22[1] = -2LL;
  v6 = a1[6];
  if ( a2 == v6 )
    return 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease((__int64 *)&v24);
  v8 = *(__int64 (__fastcall **)(__int64 *, int, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)a1 + 16LL);
  if ( v8 == TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType )
    PositionerByType = TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType((__int64 *)a1, a2, &v24);
  else
    PositionerByType = v8((__int64 *)a1, a2, &v24);
  v10 = PositionerByType;
  if ( PositionerByType < 0 )
  {
    v17 = (unsigned int)PositionerByType;
    v18 = 111LL;
  }
  else
  {
    v25 = 0;
    v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, _QWORD, char *))(*(_QWORD *)v24 + 56LL))(
            v24,
            a3,
            v6,
            &v25);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( !v25 )
      {
LABEL_16:
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease((__int64 *)&v24);
        return 0LL;
      }
      v26 = 0LL;
      if ( !v6 )
      {
LABEL_9:
        v12 = (CortanaExperienceManagerNotification *)*((_QWORD *)a1 + 5);
        v13 = *(_QWORD *)v12;
        if ( a2 == 1 )
        {
          v14 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(v13 + 136);
          if ( v14 == CortanaExperienceManagerNotification::EnableNotifications )
          {
            CortanaExperienceManagerNotification::EnableNotifications(v12);
LABEL_12:
            a1[6] = a2;
            v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 72LL);
            if ( v15 == CortanaDesktopExperienceView::ControlGained )
              v16 = CortanaDesktopExperienceView::ControlGained((__int64)v24, a3);
            else
              v16 = ((__int64 (__fastcall *)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, _QWORD, UAPViewWrapper *))v15)(
                      v24,
                      a3,
                      v6,
                      v26);
            v10 = v16;
            if ( v16 >= 0 )
            {
              Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v26);
              goto LABEL_16;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x89,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
              (const char *)(unsigned int)v16);
            goto LABEL_31;
          }
        }
        else
        {
          v14 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(v13 + 144);
        }
        ((void (*)(void))v14)();
        goto LABEL_12;
      }
      v22[0] = 0LL;
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(v22);
      v19 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, v6, v22);
      v10 = v19;
      if ( v19 >= 0 )
      {
        v21 = v22[0];
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v26);
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, UAPViewWrapper **))(*(_QWORD *)v21 + 64LL))(
                v21,
                a3,
                a2,
                &v26);
        v10 = v19;
        if ( v19 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(v22);
          goto LABEL_9;
        }
        v20 = 122LL;
      }
      else
      {
        v20 = 121LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(v22);
LABEL_31:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v26);
      goto LABEL_32;
    }
    v17 = (unsigned int)v11;
    v18 = 114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)v17);
LABEL_32:
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease((__int64 *)&v24);
  return v10;
}
