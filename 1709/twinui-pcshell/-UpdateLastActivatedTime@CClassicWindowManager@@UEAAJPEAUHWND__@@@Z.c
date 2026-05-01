/*
 * XREFs of ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800382C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::UpdateLastActivatedTime(CClassicWindowManager *this, HWND a2)
{
  int ClassicWindow; // ebx
  struct IClassicWindow *v5; // rcx
  struct IClassicWindow *v7; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)((char *)this - 96), a2, &v7, 0LL);
  if ( ClassicWindow >= 0 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 72LL))(v7);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)ClassicWindow;
}
