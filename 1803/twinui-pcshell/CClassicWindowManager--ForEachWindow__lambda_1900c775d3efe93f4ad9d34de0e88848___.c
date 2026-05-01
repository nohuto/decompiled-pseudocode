/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___ @ 0x180119018
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180119F10 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x1800F496C (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     _lambda_36b1a8f5cea738043b5d752cc09148d6_::operator() @ 0x180119C2C (_lambda_36b1a8f5cea738043b5d752cc09148d6_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rdi
  struct IClassicWindow *v7; // rbx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v7 = v10;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    v4 = CClassicWindowManager::IsWindowOwnedBy(v8, v7, **(struct IClassicWindow ***)(a2 + 8))
       ? lambda_36b1a8f5cea738043b5d752cc09148d6_::operator()(*(_QWORD *)(a2 + 16), &v10)
       : 1;
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v10);
  }
  return v4;
}
