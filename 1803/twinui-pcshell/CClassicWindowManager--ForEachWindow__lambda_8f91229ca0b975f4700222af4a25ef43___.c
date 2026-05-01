/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x180005DE4
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180007E40 (-IsOwned@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 i; // rsi
  CClassicWindow *v6; // rbx
  bool (__fastcall *v7)(CClassicWindow *__hidden); // rax
  bool IsOwned; // al
  void (__fastcall *v9)(CClassicWindow *); // rax
  __int64 v11; // rax
  _QWORD *ClassicWindowOwner; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(CClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i));
    v7 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v6 + 160LL);
    if ( v7 == CClassicWindow::IsOwned )
      IsOwned = CClassicWindow::IsOwned(v6);
    else
      IsOwned = v7(v6);
    if ( IsOwned )
    {
      v11 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 24LL))(v6);
      ClassicWindowOwner = (_QWORD *)CClassicWindowManager::GetClassicWindowOwner(a2, &v13, v11);
      (*(void (__fastcall **)(CClassicWindow *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, *ClassicWindowOwner);
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v13);
    }
    v9 = *(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v6);
    else
      v9(v6);
  }
  return 1;
}
