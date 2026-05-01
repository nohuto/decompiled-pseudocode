/*
 * XREFs of ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x1800499F0 (-GetZbid@CImmersiveApp@@UEAA-AW4ZBID@@XZ.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180070CF0 (-PositionNewCreatedApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@W.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18010980C (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x1801164E8 (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180116570 (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180116668 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CImmersiveWindowManager::HandleWindowAction(
        __int64 a1,
        IUnknown *a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        int a5,
        struct ITaskWindow *a6)
{
  int ActiveApp; // ebx
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbx
  int v15; // r15d
  __int64 (__fastcall *v16)(CImmersiveApp *, struct IImmersiveApplication *, int *); // rax
  CImmersiveApp *v17; // rcx
  struct IImmersiveApplication *v18; // rcx
  char v19; // r15
  ULONG (__stdcall *Release)(IUnknown *); // rax
  int v21; // eax
  __int64 (__fastcall *v22)(__int64); // rax
  unsigned int v23; // eax
  __int64 v25; // r14
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(__int64, CImmersiveApp **); // rax
  int v30; // eax
  CImmersiveApp *v31; // rcx
  unsigned int v32; // eax
  struct IImmersiveApplication *v33; // [rsp+30h] [rbp-30h] BYREF
  CImmersiveApp *v34; // [rsp+38h] [rbp-28h] BYREF
  __int64 v35[4]; // [rsp+40h] [rbp-20h] BYREF

  v35[1] = -2LL;
  ActiveApp = -2147024809;
  v9 = 0;
  if ( !a5 )
  {
    v25 = a1 - 160;
    IUnknown_SetSite(a2, (IUnknown *)(a1 - 160));
    AddRef = a2->lpVtbl[1].AddRef;
    if ( (char *)AddRef == (char *)CImmersiveApp::HandleInitialViewCreation )
      v27 = CImmersiveApp::HandleInitialViewCreation((CImmersiveApp *)a2, a4, a6);
    else
      v27 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct ITaskWindow *))AddRef)(
              a2,
              a4,
              a6);
    ActiveApp = v27;
    if ( v27 >= 0 )
    {
      v34 = (CImmersiveApp *)a2;
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
      v28 = v25 + 208;
      v29 = *(__int64 (__fastcall **)(__int64, CImmersiveApp **))(*(_QWORD *)(v25 + 208) + 8LL);
      if ( (char *)v29 == (char *)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewCreatedApp )
        v30 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewCreatedApp(
                v28,
                &v34);
      else
        v30 = v29(v28, &v34);
      ActiveApp = v30;
      v31 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v31 + 16LL))(v31);
      }
      if ( ActiveApp < 0 )
        IUnknown_SetSite(a2, 0LL);
    }
    return (unsigned int)ActiveApp;
  }
  if ( a5 != 2 )
  {
    if ( a5 != 1 )
    {
      switch ( a5 )
      {
        case 5:
          v32 = ((__int64 (__fastcall *)(IUnknown *, HWND, _QWORD, _QWORD))a2->lpVtbl[4].Release)(a2, a3, 0LL, 0LL);
          break;
        case 6:
          v32 = CImmersiveWindowManager::_RemoveApplication(
                  (CImmersiveWindowManager *)(a1 - 160),
                  (struct IImmersiveApplicationInternal *)a2);
          break;
        case 7:
          v32 = ((__int64 (__fastcall *)(IUnknown *, HWND))a2->lpVtbl[2].AddRef)(a2, a3);
          break;
        case 8:
          v32 = CImmersiveWindowManager::_HandleApplicationPrecreation(
                  (IUnknown *)(a1 - 160),
                  (struct IImmersiveApplicationInternal *)a2);
          break;
        default:
          if ( a5 <= 8 || a5 > 11 )
            return (unsigned int)ActiveApp;
          goto LABEL_52;
      }
      return v32;
    }
LABEL_52:
    if ( a5 != 1 )
    {
      if ( a5 == 9 )
      {
        v9 = 1;
      }
      else if ( a5 == 10 )
      {
        v9 = 2;
      }
      else
      {
        v9 = 3;
      }
    }
    return ((unsigned int (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD, struct ITaskWindow *))a2->lpVtbl[2].QueryInterface)(
             a2,
             a4,
             v9,
             a6);
  }
  v10 = a1 - 160;
  v33 = 0LL;
  ((void (__fastcall *)(IUnknown *, GUID *, struct IImmersiveApplication **))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v33);
  v35[0] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_QWORD *)(v10 + 224) )
  {
    v35[2] = 0LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 216) + 8 * v13);
      v35[3] = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = -1;
      v34 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, CImmersiveApp **))v14)(
             v14,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v34) >= 0 )
      {
        v16 = *(__int64 (__fastcall **)(CImmersiveApp *, struct IImmersiveApplication *, int *))(*(_QWORD *)v34 + 104LL);
        if ( v16 == CImmersiveApp::IsEqualByApp )
          CImmersiveApp::IsEqualByApp(v34, v33, &a5);
        else
          v16(v34, v33, &a5);
        v15 = (a5 != 0) - 1;
      }
      v17 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( !v15 )
        break;
      if ( (unsigned __int64)++v13 >= *(_QWORD *)(v10 + 224) )
        goto LABEL_63;
    }
    v12 = v13;
    ActiveApp = 0;
  }
  else
  {
LABEL_63:
    ActiveApp = -2147319765;
  }
  v18 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( ActiveApp >= 0 )
  {
    if ( !*(_BYTE *)(v10 + 248) || (v19 = 1, v12) )
      v19 = 0;
    Release = a2->lpVtbl[2].Release;
    LOBYTE(v11) = v19;
    if ( (char *)Release == (char *)CImmersiveApp::HandleActivation )
      v21 = CImmersiveApp::HandleActivation((CImmersiveApp *)a2, a3);
    else
      v21 = ((__int64 (__fastcall *)(IUnknown *, HWND, __int64))Release)(a2, a3, v11);
    ActiveApp = v21;
    if ( v21 >= 0 )
    {
      if ( !v19 )
      {
        v22 = (__int64 (__fastcall *)(__int64))a2->lpVtbl[5].Release;
        v23 = v22 == CImmersiveApp::GetZbid ? CImmersiveApp::GetZbid((__int64)a2) : v22((__int64)a2);
        ActiveApp = 0;
        if ( *(_BYTE *)(v10 + 248) )
          ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(v10, v23);
      }
      if ( v12 )
      {
        v35[0] = (__int64)a2;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v35);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
          v10 + 208,
          v35,
          v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v35);
      }
      if ( ActiveApp >= 0 )
        *(_BYTE *)(v10 + 248) = 1;
    }
  }
  return (unsigned int)ActiveApp;
}
