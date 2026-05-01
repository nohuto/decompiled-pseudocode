/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180005BE0
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180005508 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?GetOwner@CClassicWindow@@UEBAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180007F80 (-GetOwner@CClassicWindow@@UEBAAEBV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  unsigned __int64 v5; // rbp
  unsigned __int64 i; // rsi
  CClassicWindow *v7; // rbx
  __int64 v8; // r15
  __int64 (__fastcall *v9)(CClassicWindow *); // rax
  __int64 *Owner; // rax
  __int64 v11; // rdi
  void (__fastcall *v12)(CClassicWindow *); // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  CClassicWindow *v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v7 = *(CClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v16 = v7;
    if ( v7 )
      (*(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = **(_QWORD **)(a2 + 8);
    v9 = *(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v7 + 96LL);
    if ( (char *)v9 == (char *)CClassicWindow::GetOwner )
      Owner = (__int64 *)CClassicWindow::GetOwner(v7);
    else
      Owner = (__int64 *)v9(v7);
    v11 = *Owner;
    v15 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      while ( v11 )
      {
        if ( v7 == (CClassicWindow *)v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          break;
        }
        if ( v11 == v8 )
        {
          Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v15);
          v4 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(**(_QWORD ***)(a2 + 16), &v16);
          goto LABEL_9;
        }
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
        Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v15, v14);
        v11 = v15;
      }
    }
    v4 = 1;
LABEL_9:
    if ( v7 )
    {
      v12 = *(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v7);
      else
        v12(v7);
    }
  }
  return v4;
}
