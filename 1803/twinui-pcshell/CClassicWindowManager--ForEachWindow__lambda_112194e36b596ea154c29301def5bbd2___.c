/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180007E40 (-IsOwned@CClassicWindow@@UEBA_NXZ.c)
 *     ?GetOwner@CClassicWindow@@UEBAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180007F80 (-GetOwner@CClassicWindow@@UEBAAEBV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 i; // rdi
  CClassicWindow *v6; // rbx
  __int64 (__fastcall *v7)(CClassicWindow *); // rax
  _QWORD *Owner; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  bool (__fastcall *v11)(CClassicWindow *__hidden); // rax
  void (__fastcall *v13)(CClassicWindow *); // rax
  __int64 v15; // rax
  _QWORD *ClassicWindowOwner; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  CClassicWindow *v18; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(CClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v18 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 96LL);
    if ( (char *)v7 == (char *)CClassicWindow::GetOwner )
      Owner = (_QWORD *)CClassicWindow::GetOwner(v6);
    else
      Owner = (_QWORD *)v7(v6);
    if ( *Owner == **(_QWORD **)a2 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( !**(_QWORD **)v9 || v6 != **(CClassicWindow ***)v9 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v6 + 160LL);
        if ( v11 == CClassicWindow::IsOwned ? CClassicWindow::IsOwned(v6) : v11(v6) )
        {
          v15 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 24LL))(v6);
          ClassicWindowOwner = (_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v10, &v17, v15);
          (*(void (__fastcall **)(CClassicWindow *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, *ClassicWindowOwner);
          Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v17);
        }
      }
    }
    v13 = *(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v6);
    else
      v13(v6);
  }
  return 1;
}
