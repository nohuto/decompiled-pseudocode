/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180036C20
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, HWND a2, int a3, char a4)
{
  int ClassicWindow; // ebx
  struct IClassicWindow *v9; // rcx
  struct IClassicWindow *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[1] = (struct IClassicWindow *)-2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11[0] = 0LL;
  if ( (a4 & 1) == 0
    || (ClassicWindow = CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)(a1 - 80), a2, v11, 0LL),
        ClassicWindow >= 0) )
  {
    ClassicWindow = (*(__int64 (__fastcall **)(PVOID, HWND, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                                 + 24LL))(
                      CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
                      a2,
                      a3 != 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)ClassicWindow;
}
