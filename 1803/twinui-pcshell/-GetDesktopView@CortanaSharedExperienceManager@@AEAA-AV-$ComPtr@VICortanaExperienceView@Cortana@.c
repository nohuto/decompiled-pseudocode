/*
 * XREFs of ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18006743C
 * Callers:
 *     ?get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067880 (-get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?Close@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18015B7E0 (-Close@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180084DBC (-InternalRelease@-$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Mi.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x180084DF8 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180084E50 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CortanaSharedExperienceManager::GetDesktopView(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, __int64 *); // rax
  int PositionerByType; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  *a2 = 0LL;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 400);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(&v7);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 16LL);
  if ( (char *)v4 == (char *)TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType )
    PositionerByType = TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(v3, 1LL, &v7);
  else
    PositionerByType = v4(v3, 1LL, &v7);
  if ( PositionerByType >= 0 )
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
      &v7,
      a2);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(&v7);
  return a2;
}
