/*
 * XREFs of ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18001597C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013F2C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180013FE8 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180015A64 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180015C7C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 == 1 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = 16;
    v10 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *, HWND))(**((_QWORD **)this + 68) + 80LL))(*((_QWORD *)this + 68), &v8, a3);
    if ( v5 != 27 && IsWindowVisible(*((HWND *)a2 + 1)) )
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a2 + 1), 3LL, v10);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else if ( (unsigned int)(v6 - 2) <= 1 )
  {
    CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a2, a3);
  }
  if ( v5 == 27 )
  {
    if ( v6 == 1 )
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 3);
    else
      CApplicationManager::_HandleActivation(this, a2);
  }
}
