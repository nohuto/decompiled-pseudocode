/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x1800F496C
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___ @ 0x180119018 (CClassicWindowManager--ForEachWindow__lambda_1900c775d3efe93f4ad9d34de0e88848___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v5; // rbx
  char v6; // di
  __int64 v7; // rax
  CClassicWindowManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v5 = *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v9 = v5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  v6 = 0;
  while ( v5 && a2 != v5 )
  {
    if ( v5 == a3 )
    {
      v6 = 1;
      break;
    }
    v7 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v9, v7);
    v5 = v9;
  }
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v9);
  return v6;
}
