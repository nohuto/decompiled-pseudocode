/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180006FE0
 * Callers:
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180005BD0 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180006FD0 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180007D60 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F5D04 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180119174 (CClassicWindowManager--ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18011A904 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

// Hidden C++ exception states: #wind=9
_BOOL8 __fastcall CClassicWindowManager::_HandleDestructionOrHide(_QWORD *a1, HWND a2, int a3)
{
  int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  CClassicWindow *v9; // rbx
  __int64 (__fastcall *v10)(CClassicWindow *, GUID *, CClassicWindow **); // rax
  volatile int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r10
  bool (__fastcall *v14)(CClassicWindow *__hidden, HWND); // rax
  bool v15; // al
  void (__fastcall *v16)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *, __int64); // rax
  CClassicWindow *v17; // r10
  void *(__fastcall *v18)(CClassicWindow *__hidden, unsigned int); // rax
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  int v20; // ebx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rdi
  bool v23; // bl
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v28; // r14
  __int64 v29; // rbx
  int v30; // edi
  char v31; // di
  _QWORD v32[4]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  CClassicWindow *v35; // [rsp+98h] [rbp+48h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+58h] BYREF

  v32[1] = -2LL;
  v6 = 0;
  v34 = 0LL;
  v36 = a1[25];
  v32[0] = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !v36 )
  {
LABEL_28:
    v20 = -2147319765;
    goto LABEL_29;
  }
  v32[2] = 0LL;
  while ( 1 )
  {
    v9 = *(CClassicWindow **)(a1[24] + 8 * v8);
    v33[0] = v9;
    if ( v9 )
      (*(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v9 + 8LL))(v9);
    v35 = 0LL;
    v10 = **(__int64 (__fastcall ***)(CClassicWindow *, GUID *, CClassicWindow **))v9;
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
    {
      v35 = v9;
      (*(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else if ( (int)v10(v9, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v35) < 0 )
    {
      v13 = (__int64)v35;
LABEL_14:
      v6 = -1;
      goto LABEL_15;
    }
    v13 = (__int64)v35;
    v14 = *(bool (__fastcall **)(CClassicWindow *__hidden, HWND))(*(_QWORD *)v35 + 192LL);
    if ( v14 == CClassicWindow::IsEqualByHWND )
    {
      v15 = a2 == *((HWND *)v35 + 2);
    }
    else
    {
      v15 = v14(v35, a2);
      v13 = (__int64)v35;
    }
    if ( !v15 )
      goto LABEL_14;
LABEL_15:
    if ( !v13 )
      goto LABEL_26;
    v35 = 0LL;
    v16 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *, __int64))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v16 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
    {
      v19 = (struct Microsoft::WRL::Details::ModuleBase *)v13;
LABEL_25:
      v16(v19, v11, v12);
      goto LABEL_26;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v13 + 12), v11) )
    {
      v18 = *(void *(__fastcall **)(CClassicWindow *__hidden, unsigned int))(*(_QWORD *)v17 + 216LL);
      if ( v18 == CClassicWindow::`scalar deleting destructor' )
        CClassicWindow::`scalar deleting destructor'(v17, 1u);
      else
        v18(v17, 1u);
      v19 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v16 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, volatile int *, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        v11 = (volatile int *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount;
        if ( (char *)v16 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        {
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
LABEL_26:
    (*(void (__fastcall **)(CClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v6 )
      break;
    ++v8;
    v6 = 0;
    if ( v8 >= a1[25] )
      goto LABEL_28;
  }
  v7 = v8;
  v20 = 0;
LABEL_29:
  if ( v20 < 0 )
  {
    v22 = v36;
  }
  else
  {
    v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[24] + 8 * v7);
    v20 = (**v21)(v21, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v34);
    v22 = v7;
  }
  v23 = v20 >= 0;
  if ( v23 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 136LL))(v34) )
    {
      v35 = (CClassicWindow *)v34;
      v32[0] = &v35;
      v36 = v34;
      v33[0] = &v36;
      v33[1] = v32;
      CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___(a1, v33);
    }
    if ( a3 || (*(int (__fastcall **)(_QWORD *, __int64 *))(a1[28] + 8LL))(a1 + 28, &v34) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[23] + 16LL))(a1 + 23, v22);
      v25 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[23] + 16LL))(a1 + 23, v22);
      v25 = 1LL;
    }
    CClassicWindowManager::RemoveApplicationView(v24, v34, v25);
  }
  else
  {
    v23 = 0;
    if ( a3 == 1 )
    {
      v33[0] = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      if ( a1[30] )
      {
        while ( 1 )
        {
          v32[0] = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(v32);
          v36 = *(_QWORD *)(a1[29] + 8 * v29);
          Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v36);
          v35 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v36, &v35) >= 0
            && (*(unsigned __int8 (__fastcall **)(CClassicWindow *, HWND))(*(_QWORD *)v35 + 192LL))(v35, a2) )
          {
            v30 = 0;
          }
          else
          {
            v30 = -1;
          }
          Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v35);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
          if ( !v30 )
            break;
          if ( (unsigned __int64)++v29 >= a1[30] )
            goto LABEL_52;
        }
        v28 = v29;
        v31 = 1;
      }
      else
      {
LABEL_52:
        v31 = 0;
      }
      v23 = v31;
      if ( v31 )
      {
        CClassicWindowManager::RemoveApplicationView(a1, *(_QWORD *)(a1[29] + 8 * v28), 0LL);
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[28] + 16LL))(a1 + 28, v28);
      }
    }
  }
  v26 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v23;
}
