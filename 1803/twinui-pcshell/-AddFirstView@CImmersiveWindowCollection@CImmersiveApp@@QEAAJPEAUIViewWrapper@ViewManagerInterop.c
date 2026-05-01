/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800F1D88 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B2A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B3E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Det.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800474D0 (-SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047EFC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18005BE68 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18009DED8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7878 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  unsigned __int64 v6; // r12
  char *v7; // rdi
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rbx
  void (*v11)(void); // rax
  int v12; // edi
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD *); // rax
  int v14; // eax
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, CTaskWindow **); // rcx
  __int64 (__fastcall *v17)(CTaskWindow *); // rax
  __int64 NativeWindow; // rax
  __int64 v19; // r9
  CTaskWindow *v20; // rsi
  CTaskWindow *v21; // rbx
  const void **v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  CTaskWindow **v25; // rax
  void (__fastcall *v26)(__int64, __int64, __int64, __int64, int); // rax
  __int64 v27; // r8
  CTaskWindow *v28; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm2
  __int128 v32; // xmm1
  int v33; // [rsp+28h] [rbp-79h]
  CTaskWindow *v34; // [rsp+48h] [rbp-59h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, CTaskWindow **); // [rsp+50h] [rbp-51h] BYREF
  CTaskWindow *v36; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v37[6]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v38; // [rsp+90h] [rbp-11h]
  __int128 v39; // [rsp+98h] [rbp-9h] BYREF
  __int128 v40; // [rsp+A8h] [rbp+7h]
  __int64 v41; // [rsp+B8h] [rbp+17h]

  v37[1] = -2LL;
  v34 = 0LL;
  v6 = 1LL;
  if ( a3 )
  {
    v30 = *((_QWORD *)this + 18);
    LODWORD(v39) = 2;
    *((_QWORD *)&v39 + 1) = 0LL;
    *(_QWORD *)&v40 = (v30 + 112) & -(__int64)(v30 != 0);
    DWORD2(v40) = 0;
    v41 = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v39);
    if ( v12 < 0 )
      goto LABEL_43;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v34, a3);
  }
  else
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 4) <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7) )
    {
      v7 = (char *)this + 16;
      v31 = *(_OWORD *)((char *)this + 68);
      v32 = *(_OWORD *)((char *)this + 84);
      v38 = *(_QWORD *)((char *)this + 100);
      v39 = v31;
      v40 = v32;
      LODWORD(v41) = v38;
    }
    v8 = (*((_QWORD *)this + 18) + 112LL) & -(__int64)(*((_QWORD *)this + 18) != 0LL);
    v34 = 0LL;
    v35 = 0LL;
    v9 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (__int64)v9;
    v37[0] = v9;
    if ( v9 )
    {
      v9[4] = 1LL;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITaskWindow>::`vftable';
      v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITaskWindow>::`vftable'{for `ITaskWindow'};
      v9[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITaskWindow>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v11 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v11 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
        else
          v11();
      }
      *(_QWORD *)v10 = &CTaskWindow::`vftable';
      *(_QWORD *)(v10 + 8) = &CTaskWindow::`vftable'{for `ITaskWindow'};
      *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ITaskWindow>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
      *(_QWORD *)(v10 + 40) = 0LL;
      *(_DWORD *)(v10 + 48) = 0;
      *(_DWORD *)(v10 + 52) = -1;
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_BYTE *)(v10 + 64) = 1;
      *(_DWORD *)(v10 + 68) = 0;
      *(_QWORD *)(v10 + 72) = 0LL;
      *(_QWORD *)(v10 + 80) = 0LL;
      *(_QWORD *)(v10 + 88) = 0LL;
      *(_DWORD *)(v10 + 96) = 0;
      *(_BYTE *)(v10 + 100) = 0;
      *(_DWORD *)(v10 + 104) = 0;
      *(_QWORD *)(v10 + 112) = 0LL;
      *(_BYTE *)(v10 + 120) = 0;
      *(_QWORD *)(v10 + 124) = 0LL;
      *(_QWORD *)(v10 + 136) = 0LL;
      *(_QWORD *)(v10 + 144) = 0LL;
      v36 = (CTaskWindow *)v10;
      v37[0] = 0LL;
      v12 = CTaskWindow::RuntimeClassInitialize(
              v10,
              0LL,
              (__int64)a2,
              1,
              v8,
              (__int64)v7,
              (unsigned __int64)&v39 & -(__int64)(v7 != 0LL));
      if ( v12 < 0 )
      {
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v36);
        Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(v37);
      }
      else
      {
        v13 = **(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v10;
        if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::QueryInterface )
          v14 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::QueryInterface(
                  v10,
                  (__int64)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
                  &v35);
        else
          v14 = v13(v10, (__int64)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v35);
        v12 = v14;
        if ( v10 )
        {
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL);
          if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::Release(v10);
          else
            v15(v10);
        }
      }
      if ( v12 >= 0 )
        v12 = (**v35)(v35, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v34);
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(v37);
      v12 = -2147024882;
    }
    v16 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, CTaskWindow **)))(*v16)[2])(v16);
    }
  }
  if ( v12 >= 0 )
  {
    if ( !v34
      || ((v17 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v34 + 32LL), v17 != CTaskWindow::GetNativeWindow)
        ? (NativeWindow = ((__int64 (*)(void))v17)())
        : (NativeWindow = CTaskWindow::GetNativeWindow(v34)),
          !NativeWindow) )
    {
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
        this,
        2LL,
        *(_BYTE *)(*((_QWORD *)this + 18) + 714LL) != 0 ? 0x20 : 0);
    }
    v20 = v34;
    v21 = v34;
    v36 = v34;
    if ( v34 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v34 + 8LL))(v34);
    v22 = (const void **)((char *)this + 152);
    v12 = 0;
    v23 = *((_QWORD *)this + 20);
    if ( v23 )
      v6 = v23 + 1;
    if ( v6 <= *((_QWORD *)this + 22)
      || (v12 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  (char *)this + 152,
                  v6),
          v12 >= 0) )
    {
      v24 = *((_QWORD *)this + 20);
      if ( v24 )
        memmove((char *)*v22 + 8, *v22, 8 * v24);
      *((_QWORD *)this + 20) = v6;
      v25 = (CTaskWindow **)*v22;
      if ( *v22 )
      {
        *v25 = 0LL;
        if ( v25 != &v36 )
        {
          *v25 = v21;
          v21 = 0LL;
        }
      }
    }
    if ( v21 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v12 >= 0 )
      CSplashScreen::OnViewAdded(*((CSplashScreen **)this + 29), v20);
    v26 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)v20 + 248LL);
    if ( v26 == CTaskWindow::SetResizingState )
      CTaskWindow::SetResizingState((__int64)v20, 0LL, v24, v19, v33);
    else
      ((void (__fastcall *)(CTaskWindow *, _QWORD))v26)(v20, 0LL);
    if ( v12 >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame((CFrameApplicationPresentation **)this, v34, v27);
  }
LABEL_43:
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v12;
}
