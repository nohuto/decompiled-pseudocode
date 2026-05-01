/*
 * XREFs of ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180110020
 * Callers:
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18003D2A4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18003D358 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180112A04 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v6; // rbx
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 115) )
  {
    SetPropW(a3, L"IAM.IsUncloakedXamlIslandPopup", HANDLE_FLAG_INHERIT);
    SetWindowLongPtrW(a3, -8, 0LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                         + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL,
      5LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL);
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    if ( *((_DWORD *)a2 + 4) == 2
      && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9),
          v7 = *((_QWORD *)a2 + 1),
          v8 = 2,
          (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, (int)&v7, &v9, 0LL) >= 0) )
    {
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 280LL))(v9);
      v6 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 464LL))(v6, &v10);
    }
    else if ( *((_DWORD *)a2 + 4) == 3 )
    {
      (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 56LL))(*((_QWORD *)this + 73));
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      a3,
      *((unsigned int *)a2 + 6));
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
}
