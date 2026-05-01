/*
 * XREFs of ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015584
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013B18 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013F2C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180013FE8 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowBecameUnowned(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r14
  BOOL v5; // eax
  int v6; // ecx
  CApplicationManager *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  int v9; // [rsp+30h] [rbp-10h]
  CApplicationManager *v10; // [rsp+38h] [rbp-8h]
  CApplicationManager *v11; // [rsp+58h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( !*((_BYTE *)a2 + 21) || (v5 = IsWindowVisible(*((HWND *)a2 + 1)), v6 = 6, !v5) )
      v6 = 10;
    v8 = *((_QWORD *)a2 + 1);
    v9 = v6;
    v10 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 68) + 80LL))(*((_QWORD *)this + 68), &v8);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 1);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
LABEL_18:
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    CApplicationManager::_HandleWindowCreation((int **)this, (HWND *)a2);
    if ( v4 == 26 )
    {
      v11 = 0LL;
      v8 = *((_QWORD *)a2 + 1);
      v9 = 3;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v8, &v11, 0LL) >= 0
        && (((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 280LL))(v11) & 1) != 0
         || ((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 280LL))(v11) & 8) != 0)
        && ((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 280LL))(v11) & 2) == 0 )
      {
        CApplicationManager::_HandleActivation(this, a2);
      }
      v7 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        goto LABEL_18;
      }
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 4) == 3 )
      (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                     + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
        *((_QWORD *)a2 + 1),
        1LL);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation(this, a2);
  }
}
