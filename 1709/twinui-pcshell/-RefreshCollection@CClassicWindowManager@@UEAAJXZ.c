/*
 * XREFs of ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x180038430
 * Callers:
 *     <none>
 * Callees:
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180037648 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::RefreshCollection(CClassicWindowManager *this)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 i; // rdi
  struct IClassicWindow *v4; // rbx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_QWORD *)this + 12);
  for ( i = 0LL; i < v2; ++i )
  {
    v4 = *(struct IClassicWindow **)(*((_QWORD *)this + 11) + 8 * i);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i));
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType((CClassicWindowManager *)((char *)this - 112), v4, 0);
    if ( v4 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
