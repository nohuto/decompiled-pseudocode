/*
 * XREFs of ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180007BF4
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180006360 (-GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180119F10 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?GetOwner@CClassicWindow@@UEBAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180007F80 (-GetOwner@CClassicWindow@@UEBAAEBV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall CClassicWindowManager::GetRootOwner(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 *Owner; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  *a2 = a3;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    a3 = *a2;
  }
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 96LL);
  if ( v4 == CClassicWindow::GetOwner )
    Owner = (__int64 *)CClassicWindow::GetOwner(a3);
  else
    Owner = (__int64 *)v4(a3);
  v6 = *Owner;
  v9 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    while ( v6 )
    {
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2, &v9);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v9, v8);
      v6 = v9;
    }
  }
  return a2;
}
