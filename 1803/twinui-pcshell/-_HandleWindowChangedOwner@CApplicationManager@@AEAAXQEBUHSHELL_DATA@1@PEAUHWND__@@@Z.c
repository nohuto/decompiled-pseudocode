/*
 * XREFs of ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18003D2A4
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F0F34 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180110020 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowChangedOwner(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64 *, HWND); // rax
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  struct IImmersiveMonitor *v11; // [rsp+38h] [rbp-10h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 == 1 )
  {
    v9 = *((_QWORD *)a2 + 1);
    v10 = 16;
    v11 = 0LL;
    v7 = *((_QWORD *)this + 66);
    v8 = *(void (__fastcall **)(__int64, __int64 *, HWND))(*(_QWORD *)v7 + 80LL);
    if ( (char *)v8 == (char *)CClassicWindowManager::HandleOwnerSwitch )
      CClassicWindowManager::HandleOwnerSwitch(v7, &v9);
    else
      v8(v7, &v9, a3);
    if ( v5 != 27 && IsWindowVisible(*((HWND *)a2 + 1)) )
      CApplicationManager::_TryPresentDesktopExperience(this, *((HWND *)a2 + 1), 3, v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
  }
  else if ( (unsigned int)(v6 - 2) <= 1 )
  {
    CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a2, a3);
  }
  if ( v5 == 27 )
  {
    if ( v6 == 1 )
      CApplicationManager::_HandleActivation2(this, a2, 3LL);
    else
      CApplicationManager::_HandleActivation(this, a2);
  }
}
