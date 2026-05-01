/*
 * XREFs of ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800149E4
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013184 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013450 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowBecameUnowned(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r14
  bool v5; // al
  CApplicationManager *v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  int v8; // [rsp+30h] [rbp-10h]
  CApplicationManager *v9; // [rsp+38h] [rbp-8h]
  CApplicationManager *v10; // [rsp+58h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v5 = *((_BYTE *)a2 + 21) && IsWindowVisible(*((HWND *)a2 + 1));
    v7 = *((_QWORD *)a2 + 1);
    v8 = v5 ? 6 : 10;
    v9 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 59) + 80LL))(*((_QWORD *)this + 59), &v7);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation2((unsigned __int64)this, (__int64)a2, 1);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
LABEL_19:
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    CApplicationManager::_HandleWindowCreation(this, (HWND *)a2);
    if ( v4 == 26 )
    {
      v10 = 0LL;
      v7 = *((_QWORD *)a2 + 1);
      v8 = 3;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v7, &v10, 0LL) >= 0
        && (((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v10 + 280LL))(v10) & 1) != 0
         || ((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v10 + 280LL))(v10) & 8) != 0)
        && ((*(__int64 (__fastcall **)(CApplicationManager *))(*(_QWORD *)v10 + 280LL))(v10) & 2) == 0 )
      {
        CApplicationManager::_HandleActivation(this, a2);
      }
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        goto LABEL_19;
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
