/*
 * XREFs of ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x18011A790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

__int64 __fastcall CClassicWindowManager::RefreshCollection(CClassicWindowManager *this)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 i; // rdi
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_QWORD *)this + 12);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    v4 = v6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType((char *)this - 104, v4, 0LL);
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
