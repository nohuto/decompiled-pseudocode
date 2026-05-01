/*
 * XREFs of ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180014B94
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013450 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180014E9C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180014FE8 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800150B4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // r9
  int v10; // r14d
  void *v11; // rcx
  IUnknown *v12; // rbx
  void **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  HWND v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  CApplicationManager *v20; // [rsp+50h] [rbp-10h]
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 1 )
  {
    v8 = *((_BYTE *)a3 + 21) && IsWindowVisible(*((HWND *)a3 + 1));
    v18 = (HWND)*((_QWORD *)a3 + 1);
    LODWORD(v19) = v8 ? 5 : 9;
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 59) + 80LL))(*((_QWORD *)this + 59), &v18);
    if ( v10 == 1 )
    {
      LOBYTE(v9) = 1;
      CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        this,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 1),
        v9,
        *((_DWORD *)a3 + 6));
    }
    if ( v6 == 25 )
    {
      CApplicationManager::_HandleActivation2((unsigned __int64)this, (__int64)a3, 3);
    }
    else if ( !v10 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a3 + 1), 3LL, v20);
    }
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
LABEL_29:
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    if ( (unsigned int)(v7 - 2) > 1 )
    {
      CApplicationManager::_HandleActivation(this, a3);
      return;
    }
    if ( v6 == 25 )
      CApplicationManager::_HandleActivation(this, a3);
    else
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a3, a2);
    punk = 0LL;
    v18 = a2;
    LODWORD(v19) = 1;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v18, &punk, 0LL) >= 0 )
    {
      v22 = 0LL;
      v12 = punk;
      v13 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
      if ( IUnknown_GetSite(v12, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v13) >= 0 )
      {
        v17[0] = 0LL;
        v18 = a2;
        v19 = 0LL;
        (*(void (__fastcall **)(__int64, IUnknown *, HWND *, _QWORD *))(*(_QWORD *)v22 + 56LL))(v22, punk, &v18, v17);
        v14 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v17[0];
        if ( v17[0] )
        {
          v17[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      v16 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v11 = punk;
    if ( punk )
    {
      punk = 0LL;
      goto LABEL_29;
    }
  }
}
