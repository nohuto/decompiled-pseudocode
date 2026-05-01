/*
 * XREFs of ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18003D358
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x1800F0CC0 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F0F34 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180110020 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleWindowBecameOwned(
        CApplicationManager *this,
        HWND a2,
        const struct CApplicationManager::HSHELL_DATA *const a3)
{
  __int64 v6; // r15
  int v7; // eax
  bool v8; // al
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, HWND *); // rax
  int v11; // eax
  __int64 v12; // r9
  int v13; // r14d
  void *v14; // rbx
  __int64 v15[2]; // [rsp+30h] [rbp-30h] BYREF
  HWND v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+50h] [rbp-10h] BYREF
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF
  void *ppv; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 1 )
  {
    v8 = *((_BYTE *)a3 + 21) && IsWindowVisible(*((HWND *)a3 + 1));
    v16 = (HWND)*((_QWORD *)a3 + 1);
    LODWORD(v17) = (4 * !v8 + 4) | 1;
    v18 = 0LL;
    v9 = *((_QWORD *)this + 66);
    v10 = *(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 80LL);
    if ( (char *)v10 == (char *)CClassicWindowManager::HandleOwnerSwitch )
      v11 = CClassicWindowManager::HandleOwnerSwitch(v9, &v16);
    else
      v11 = v10(v9, &v16);
    v13 = v11;
    if ( v11 == 1 )
    {
      LOBYTE(v12) = 1;
      CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        this,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 1),
        v12,
        *((_DWORD *)a3 + 6));
    }
    if ( v6 == 25 )
    {
      CApplicationManager::_HandleActivation2(this, a3, 3LL);
    }
    else if ( !v13 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, *((HWND *)a3 + 1), 3, v18);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
  }
  else if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v6 == 25 )
      CApplicationManager::_HandleActivation(this, a3);
    else
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a3, a2);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v16 = a2;
    LODWORD(v17) = 1;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                (__int64)this,
                (int)&v16,
                &punk,
                0LL) >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      if ( IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
      {
        v15[0] = 0LL;
        v16 = a2;
        v17 = 0LL;
        v14 = ppv;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
        (*(void (__fastcall **)(void *, IUnknown *, HWND *, __int64 *))(*(_QWORD *)v14 + 56LL))(v14, punk, &v16, v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  }
  else
  {
    CApplicationManager::_HandleActivation(this, a3);
  }
}
