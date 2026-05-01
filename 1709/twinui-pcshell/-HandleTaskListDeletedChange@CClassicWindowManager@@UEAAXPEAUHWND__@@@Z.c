/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1800384D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800374DC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  unsigned int PropW; // eax
  struct IClassicWindow *v5; // rcx
  struct IClassicWindow *v6; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)((char *)this - 120), a2, &v6, 0LL) >= 0 )
  {
    PropW = (unsigned int)GetPropW(a2, L"ITaskList_Deleted");
    CClassicWindowManager::_ChangeWindowType((CClassicWindowManager *)((char *)this - 120), v6, PropW != 0 ? 512 : 1024);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
