/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180033A10 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18003565C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x1800357F8 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1800358B4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180035B04 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180035C58 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035E3C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180037B80 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEA.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180038420 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleCreation(_QWORD *a1, HWND a2, __int64 a3, int a4, __int64 a5)
{
  CClassicWindowManager *v8; // r15
  struct IClassicWindow *v9; // r14
  __int64 v10; // rcx
  CApplicationManagerUtility *v11; // rax
  HWND v12; // rdx
  int v13; // esi
  struct IClassicWindow *v14; // rbx
  unsigned __int64 v15; // r12
  unsigned __int64 i; // r14
  __int64 v17; // rdi
  struct IClassicWindow **v18; // rax
  unsigned int v19; // esi
  __int64 v20; // r8
  struct IClassicWindow **ClassicWindowOwner; // rax
  char v22; // di
  HWND v23; // rcx
  CClassicWindowManager *v24; // rcx
  int App; // eax
  struct IClassicWindow *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  struct IClassicWindow *v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  CClassicWindowManager *v32; // rcx
  struct IClassicWindow *v33; // rcx
  HWND v35; // [rsp+30h] [rbp-30h] BYREF
  struct IClassicWindow *v36; // [rsp+38h] [rbp-28h] BYREF
  CClassicWindowManager *v37; // [rsp+40h] [rbp-20h]
  _QWORD v38[3]; // [rsp+48h] [rbp-18h] BYREF
  struct IClassicWindow *v39; // [rsp+90h] [rbp+30h] BYREF

  v38[1] = -2LL;
  LODWORD(v39) = 0;
  v8 = (CClassicWindowManager *)(a1 - 7);
  if ( (int)CClassicWindowManager::_FindClassicWindow(
              (CClassicWindowManager *)(a1 - 7),
              a2,
              0LL,
              (unsigned __int64 *)&v39) >= 0 )
  {
    v9 = v39;
    v10 = *(_QWORD *)(a1[15] + 8LL * (_QWORD)v39);
    v11 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    if ( CApplicationManagerUtility::IsValidWindow(v11, v12) )
    {
      v13 = -2147024713;
      v14 = *(struct IClassicWindow **)(a1[15] + 8LL * (_QWORD)v9);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(a1[15] + 8LL * (_QWORD)v9));
      if ( a4 )
      {
        if ( a4 == 1 && (CClassicWindowManager::_ChangeWindowType(v8, v14, 4LL) & 4) != 0 )
        {
          v37 = v8;
          v39 = v14;
          v15 = *((_QWORD *)v8 + 23);
          for ( i = 0LL; i < v15; ++i )
          {
            v17 = *(_QWORD *)(*((_QWORD *)v8 + 22) + 8 * i);
            if ( v17 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(*((_QWORD *)v8 + 22) + 8 * i));
            v18 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
            if ( *v18 == v39 )
              CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v37, v17, 0LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      else
      {
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v8, v14, 9LL);
      }
      goto LABEL_55;
    }
  }
  v19 = 0;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v19 = 1;
      if ( GetWindow(a2, 4u) )
        v19 = 5;
    }
  }
  else
  {
    v19 = 4;
  }
  if ( (unsigned int)GetPropW(a2, L"ITaskList_Deleted") )
    v19 |= 8u;
  if ( (v19 & 4) != 0 )
  {
    ClassicWindowOwner = (struct IClassicWindow **)CClassicWindowManager::GetClassicWindowOwner(v8);
    v22 = 1;
    v23 = v35;
  }
  else
  {
    v23 = 0LL;
    v35 = 0LL;
    ClassicWindowOwner = (struct IClassicWindow **)&v35;
    v22 = 2;
  }
  v14 = 0LL;
  v36 = 0LL;
  if ( &v36 != ClassicWindowOwner )
  {
    v14 = *ClassicWindowOwner;
    v36 = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
    v23 = v35;
  }
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( v23 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (v22 & 1) != 0 )
  {
    v24 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  v39 = 0LL;
  v35 = a2;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
          a1 + 19,
          &v35,
          v20,
          v38);
  v26 = v39;
  if ( App < 0 )
  {
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v30 = CClassicWindow::s_CreateInstance((__int64)a2, (__int64)v14, a5, v19, &v39);
  }
  else
  {
    v27 = a1[20];
    v28 = v38[0];
    v29 = *(struct IClassicWindow **)(v27 + 8LL * v38[0]);
    if ( v39 != v29 )
    {
      if ( v29 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 8LL))(*(_QWORD *)(v27 + 8LL * v38[0]));
        v26 = v39;
      }
      v39 = v29;
      if ( v26 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication(a1 + 19, v28);
    v30 = (*(__int64 (__fastcall **)(struct IClassicWindow *, struct IClassicWindow *, __int64, _QWORD))(*(_QWORD *)v39 + 32LL))(
            v39,
            v14,
            a5,
            v19);
  }
  v13 = v30;
  if ( v30 < 0 )
    goto LABEL_50;
  CClassicWindowManager::RecomputeOwnerForDirectOwnees(v8, v14, v39);
  if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v31, v39, 0LL) )
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v39 + 112LL))(v39, 32LL);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(a1[14] + 8LL))(a1 + 14, &v39);
  if ( v13 < 0 )
  {
LABEL_50:
    v33 = v39;
    if ( !v39 )
      goto LABEL_53;
    CClassicWindowManager::RemoveApplicationView(v39, v39, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v39 + 120LL))(v39) )
  {
    CClassicWindowManager::AddApplicationView(v32, v39);
  }
  v33 = v39;
LABEL_53:
  if ( v33 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_55:
  if ( v14 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  return v13 >= 0;
}
