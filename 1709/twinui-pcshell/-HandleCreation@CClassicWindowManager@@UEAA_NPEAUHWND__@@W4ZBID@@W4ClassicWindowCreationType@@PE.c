/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180036160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180034FD0 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180036D8C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180036F28 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180036FE4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180037234 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180037340 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800374DC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180037648 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180039350 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEA.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180039B0C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  int v19; // ebx
  __int64 v20; // r8
  unsigned int v21; // r12d
  struct IClassicWindow **ClassicWindowOwner; // rax
  char v23; // di
  HWND v24; // rcx
  CClassicWindowManager *v25; // rcx
  int App; // eax
  struct IClassicWindow *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  struct IClassicWindow *v30; // rdi
  int v31; // eax
  __int64 v32; // rcx
  CClassicWindowManager *v33; // rcx
  struct IClassicWindow *v34; // rcx
  HWND v36; // [rsp+30h] [rbp-30h] BYREF
  struct IClassicWindow *v37; // [rsp+38h] [rbp-28h] BYREF
  CClassicWindowManager *v38; // [rsp+40h] [rbp-20h]
  _QWORD v39[3]; // [rsp+48h] [rbp-18h] BYREF
  struct IClassicWindow *v40; // [rsp+90h] [rbp+30h] BYREF

  v39[1] = -2LL;
  LODWORD(v40) = 0;
  v8 = (CClassicWindowManager *)(a1 - 10);
  if ( (int)CClassicWindowManager::_FindClassicWindow(
              (CClassicWindowManager *)(a1 - 10),
              a2,
              0LL,
              (unsigned __int64 *)&v40) >= 0 )
  {
    v9 = v40;
    v10 = *(_QWORD *)(a1[15] + 8LL * (_QWORD)v40);
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
          v38 = v8;
          v40 = v14;
          v15 = *((_QWORD *)v8 + 26);
          for ( i = 0LL; i < v15; ++i )
          {
            v17 = *(_QWORD *)(*((_QWORD *)v8 + 25) + 8 * i);
            if ( v17 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(*((_QWORD *)v8 + 25) + 8 * i));
            v18 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
            if ( *v18 == v40 )
              CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v38, v17, 0LL);
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
  v21 = v19 | 8;
  if ( !(unsigned int)GetPropW(a2, L"ITaskList_Deleted") )
    v21 = v19;
  if ( (v21 & 4) != 0 )
  {
    ClassicWindowOwner = (struct IClassicWindow **)CClassicWindowManager::GetClassicWindowOwner(v8);
    v23 = 1;
    v24 = v36;
  }
  else
  {
    v24 = 0LL;
    v36 = 0LL;
    ClassicWindowOwner = (struct IClassicWindow **)&v36;
    v23 = 2;
  }
  v14 = 0LL;
  v37 = 0LL;
  if ( &v37 != ClassicWindowOwner )
  {
    v14 = *ClassicWindowOwner;
    v37 = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
    v24 = v36;
  }
  if ( (v23 & 2) != 0 )
  {
    v23 &= ~2u;
    if ( v24 )
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( (v23 & 1) != 0 )
  {
    v25 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  v40 = 0LL;
  v36 = a2;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
          a1 + 19,
          &v36,
          v20,
          v39);
  v27 = v40;
  if ( App < 0 )
  {
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v31 = CClassicWindow::s_CreateInstance((__int64)a2, (__int64)v14, a5, v21, &v40);
  }
  else
  {
    v28 = a1[20];
    v29 = v39[0];
    v30 = *(struct IClassicWindow **)(v28 + 8LL * v39[0]);
    if ( v40 != v30 )
    {
      if ( v30 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(*(_QWORD *)(v28 + 8LL * v39[0]));
        v27 = v40;
      }
      v40 = v30;
      if ( v27 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication(a1 + 19, v29);
    v31 = (*(__int64 (__fastcall **)(struct IClassicWindow *, struct IClassicWindow *, __int64, _QWORD))(*(_QWORD *)v40 + 32LL))(
            v40,
            v14,
            a5,
            v21);
  }
  v13 = v31;
  if ( v31 < 0 )
    goto LABEL_50;
  CClassicWindowManager::RecomputeOwnerForDirectOwnees(v8, v14, v40);
  if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v32, v40, 0LL) )
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v40 + 112LL))(v40, 32LL);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(a1[14] + 8LL))(a1 + 14, &v40);
  if ( v13 < 0 )
  {
LABEL_50:
    v34 = v40;
    if ( !v40 )
      goto LABEL_53;
    CClassicWindowManager::RemoveApplicationView(v40, v40, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v40 + 120LL))(v40) )
  {
    CClassicWindowManager::AddApplicationView(v33, v40);
  }
  v34 = v40;
LABEL_53:
  if ( v34 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_55:
  if ( v14 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  return v13 >= 0;
}
