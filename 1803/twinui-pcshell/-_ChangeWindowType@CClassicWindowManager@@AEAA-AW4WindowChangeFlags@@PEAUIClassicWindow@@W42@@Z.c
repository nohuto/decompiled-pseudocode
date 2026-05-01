/*
 * XREFs of ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44
 * Callers:
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1800063F0 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180006E64 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180007E70 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180007E90 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180007EA0 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?GetOwner@CClassicWindow@@UEBAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180007F80 (-GetOwner@CClassicWindow@@UEBAAEBV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1800F48F8 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180119174 (CClassicWindowManager--ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18011A728 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18011A904 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

__int64 __fastcall CClassicWindowManager::_ChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        unsigned int a3)
{
  __int64 (__fastcall *v6)(struct IClassicWindow *); // rax
  __int64 *Owner; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(struct IClassicWindow *, _QWORD); // rax
  unsigned int v10; // eax
  CClassicWindowManager *v11; // rcx
  unsigned int v12; // esi
  int v13; // r14d
  bool (__fastcall *v14)(CClassicWindow *__hidden); // rax
  bool HaveAppView; // al
  bool (__fastcall *v16)(CClassicWindow *__hidden); // rax
  bool ShouldShowInSwitchers; // al
  __int128 *v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  __int128 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF
  struct IClassicWindow *v26; // [rsp+98h] [rbp+48h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL);
  if ( (char *)v6 == (char *)CClassicWindow::GetOwner )
    Owner = (__int64 *)CClassicWindow::GetOwner(a2);
  else
    Owner = (__int64 *)v6(a2);
  v8 = *Owner;
  v25 = *Owner;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v25);
  v9 = *(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)a2 + 112LL);
  if ( (char *)v9 == (char *)CClassicWindow::ChangeWindowType )
    v10 = CClassicWindow::ChangeWindowType(a2, a3);
  else
    v10 = v9(a2, a3);
  v12 = v10;
  v13 = v10 & 0x80;
  if ( (v10 & 0x80) != 0 )
  {
    CClassicWindowManager::AddApplicationView(v11, a2);
  }
  else if ( (v10 & 0x100) != 0 )
  {
    CClassicWindowManager::RemoveApplicationView(v11, a2, 0LL);
  }
  if ( (v12 & 0x11) != 0 )
    CClassicWindowManager::RecomputeOwner(a1, a2);
  v14 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)a2 + 120LL);
  if ( v14 == CClassicWindow::ShouldHaveAppView )
    HaveAppView = CClassicWindow::ShouldHaveAppView(a2);
  else
    HaveAppView = v14(a2);
  if ( HaveAppView && (v12 & 0xC) != 0 && !v13 )
    RaiseApplicationViewChangeNotification(a2, 16LL);
  if ( (v12 & 0x800) != 0 )
  {
    if ( !v13 )
      RaiseApplicationViewChangeNotification(a2, 10LL);
    *((_QWORD *)&v23 + 1) = a1;
    *(_QWORD *)&v23 = &v26;
    v19 = &v23;
    v20 = v23;
    *(_QWORD *)&v23 = &v22;
    *((_QWORD *)&v23 + 1) = &v24;
    v24 = v20;
    *(_QWORD *)&v22 = v8;
    goto LABEL_35;
  }
  if ( (v12 & 0x1000) != 0 )
  {
    if ( (v12 & 0x100) == 0 )
      RaiseApplicationViewChangeNotification(a2, 11LL);
    v26 = a2;
    *(_QWORD *)&v23 = &v26;
    *(_QWORD *)&v22 = a2;
    *(_QWORD *)&v24 = &v22;
    *((_QWORD *)&v24 + 1) = &v23;
    CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___(a1, &v24);
  }
  else
  {
    v16 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)a2 + 128LL);
    if ( v16 == CClassicWindow::ShouldShowInSwitchers )
      ShouldShowInSwitchers = CClassicWindow::ShouldShowInSwitchers(a2);
    else
      ShouldShowInSwitchers = v16(a2);
    if ( !ShouldShowInSwitchers
      && *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2) != v8 )
    {
      *((_QWORD *)&v24 + 1) = a1;
      *(_QWORD *)&v24 = &v26;
      v19 = &v24;
      v21 = v24;
      *(_QWORD *)&v24 = &v23;
      *((_QWORD *)&v24 + 1) = &v22;
      v22 = v21;
      *(_QWORD *)&v23 = v8;
LABEL_35:
      v26 = a2;
      CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___((__int64)a1, (__int64)v19);
    }
  }
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v25);
  return v12;
}
