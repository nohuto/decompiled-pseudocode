/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800051EC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x180005240 (-PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV-$ComPtr@UIClassicWindo.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18000569C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180006E64 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180006EB4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180006F2C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180007E90 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180008F70 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC5C (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___ @ 0x1801190C4 (CClassicWindowManager--ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18011A904 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleCreation(_QWORD *a1, CClassicWindow *a2, __int64 a3, int a4, __int64 a5)
{
  CClassicWindowManager *v8; // r14
  HWND v9; // rdx
  int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // esi
  CClassicWindow **ClassicWindowOwner; // rax
  char v14; // r15
  CClassicWindow *v15; // rbx
  char v16; // al
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 (__fastcall *v22)(_QWORD *, __int64 *); // rax
  int v23; // eax
  CClassicWindow *v24; // rbx
  bool (__fastcall *v25)(CClassicWindow *__hidden); // rax
  bool HaveAppView; // al
  CClassicWindowManager *v27; // rcx
  __int64 *v28; // rcx
  CClassicWindow *v30; // r15
  __int64 v31; // rcx
  CApplicationManagerUtility *v32; // rax
  HWND v33; // rdx
  CClassicWindow *v34; // rbx
  __int64 v35; // rdi
  __int128 v36; // [rsp+30h] [rbp-50h] BYREF
  __int128 v37; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+50h] [rbp-30h]
  __int128 v39; // [rsp+60h] [rbp-20h] BYREF
  __int128 v40; // [rsp+70h] [rbp-10h] BYREF
  CClassicWindow *v41; // [rsp+C0h] [rbp+40h] BYREF
  CClassicWindow *v42; // [rsp+C8h] [rbp+48h] BYREF

  v38 = -2LL;
  v8 = (CClassicWindowManager *)(a1 - 9);
  v41 = a2;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              (int)a1 - 72 + 184,
              (int)&v41,
              a3,
              (int)&v42) >= 0
    && (v30 = v42,
        v31 = *(_QWORD *)(a1[15] + 8LL * (_QWORD)v42),
        v32 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31),
        CApplicationManagerUtility::IsValidWindow(v32, v33)) )
  {
    v19 = -2147024713;
    v34 = *(CClassicWindow **)(a1[15] + 8LL * (_QWORD)v30);
    v41 = v34;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v41);
    if ( a4 )
    {
      if ( a4 == 1 && (CClassicWindowManager::_ChangeWindowType(v8, v34, 4u) & 4) != 0 )
      {
        *(_QWORD *)&v36 = v8;
        v42 = v34;
        *(_QWORD *)&v37 = &v42;
        *((_QWORD *)&v37 + 1) = &v36;
        v39 = v37;
        CClassicWindowManager::ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___(v8, &v39);
      }
    }
    else
    {
      CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v8, v34, 9LL);
    }
    v28 = (__int64 *)&v41;
  }
  else
  {
    v10 = 0;
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v10 = 1;
        if ( CApplicationManagerUtility::IsOwnedWindow(a2, v9) )
          v10 = 5;
      }
    }
    else
    {
      v10 = 4;
    }
    v12 = v10 | 8;
    if ( !(unsigned int)GetPropW((HWND)a2, L"ITaskList_Deleted") )
      v12 = v10;
    if ( (v12 & 4) != 0 )
    {
      ClassicWindowOwner = (CClassicWindow **)CClassicWindowManager::GetClassicWindowOwner((__int64)v8, &v37, (HWND)a2);
      v14 = 1;
    }
    else
    {
      *(_QWORD *)&v36 = 0LL;
      ClassicWindowOwner = (CClassicWindow **)&v36;
      v14 = 2;
    }
    v15 = 0LL;
    v42 = 0LL;
    if ( &v42 != ClassicWindowOwner )
    {
      v15 = *ClassicWindowOwner;
      v42 = *ClassicWindowOwner;
      *ClassicWindowOwner = 0LL;
    }
    if ( (v14 & 2) != 0 )
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v36);
    v16 = v14 & 0xFD;
    if ( (v14 & 2) == 0 )
      v16 = v14;
    if ( (v16 & 1) != 0 )
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v37);
    v41 = 0LL;
    *(_QWORD *)&v37 = a2;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                (int)a1 + 152,
                (int)&v37,
                v11,
                (int)&v36) >= 0 )
    {
      v35 = v36;
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v41, a1[20] + 8 * v36);
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[19] + 16LL))(a1 + 19, v35);
      v17 = (*(__int64 (__fastcall **)(CClassicWindow *, CClassicWindow *, __int64, _QWORD))(*(_QWORD *)v41 + 32LL))(
              v41,
              v15,
              a5,
              v12);
    }
    else
    {
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v41);
      v17 = CClassicWindow::s_CreateInstance(a2, v15, a5, v12, &v41);
    }
    v19 = v17;
    if ( v17 < 0 )
      goto LABEL_44;
    *(_QWORD *)&v37 = v41;
    *(_QWORD *)&v36 = &v37;
    *((_QWORD *)&v36 + 1) = v8;
    v40 = v36;
    *(_QWORD *)&v36 = v15;
    *(_QWORD *)&v39 = &v36;
    *((_QWORD *)&v39 + 1) = &v40;
    CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___((__int64)v8, (__int64)&v39);
    if ( CClassicWindowManager::IsWindowPseudoTrayAfterChange(v20, v41, 0) )
      (*(void (__fastcall **)(CClassicWindow *, __int64))(*(_QWORD *)v41 + 112LL))(v41, 32LL);
    v21 = a1 + 14;
    v22 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[14] + 8LL);
    v23 = v22 == CClassicWindowActivationBasedCollection::PositionNewCreatedApp
        ? CClassicWindowActivationBasedCollection::PositionNewCreatedApp(v21, (__int64 *)&v41)
        : v22(v21, (__int64 *)&v41);
    v19 = v23;
    if ( v23 < 0 )
    {
LABEL_44:
      if ( v41 )
        CClassicWindowManager::RemoveApplicationView(v18, v41, 0LL);
    }
    else
    {
      v24 = v41;
      v25 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v41 + 120LL);
      if ( v25 == CClassicWindow::ShouldHaveAppView )
      {
        HaveAppView = CClassicWindow::ShouldHaveAppView(v41);
      }
      else
      {
        HaveAppView = v25(v41);
        v24 = v41;
      }
      if ( HaveAppView )
        CClassicWindowManager::AddApplicationView(v27, v24);
    }
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v41);
    v28 = (__int64 *)&v42;
  }
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(v28);
  return v19 >= 0;
}
