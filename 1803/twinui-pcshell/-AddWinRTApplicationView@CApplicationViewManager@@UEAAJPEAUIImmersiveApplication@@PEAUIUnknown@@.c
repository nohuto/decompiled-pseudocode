/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18002DED0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e___::Run @ 0x18008FA40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e___--Run.c)
 * Callees:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18001B87C (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ??0CApplicationViewBase@@QEAA@XZ @ 0x180025050 (--0CApplicationViewBase@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  volatile signed __int64 *v5; // rdi
  CApplicationViewBase *v6; // rax
  CApplicationViewBase *v7; // rbx
  volatile signed __int64 *v8; // r15
  __int64 *v9; // rdi
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  void (*v12)(void); // rax
  int v13; // r14d
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  volatile int *v17; // rdx
  volatile signed __int64 *v18; // rbx
  unsigned int (__fastcall *v19)(__int64); // rax
  char *Ptr; // rdx
  volatile signed __int64 **v21; // rdx
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  volatile signed __int64 *v26; // [rsp+20h] [rbp-20h] BYREF
  CApplicationViewBase *v27; // [rsp+28h] [rbp-18h]
  __int64 v28; // [rsp+30h] [rbp-10h]
  RTL_SRWLOCK *v29; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  LPUNKNOWN ppunkMarshal; // [rsp+98h] [rbp+58h] BYREF

  v28 = -2LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = (CApplicationViewBase *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    CApplicationViewBase::CApplicationViewBase(v6);
    *((_QWORD *)v7 + 19) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v9 = (__int64 *)((char *)v7 + 176);
    *((_QWORD *)v7 + 22) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        (char *)v7 + 176);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    *((_QWORD *)v7 + 24) = 1LL;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationView'};
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewBase'};
    *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v7 + 17) = &CWinRTApplicationView::`vftable';
    *((_QWORD *)v7 + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `IWinRTApplicationView'};
    *((_QWORD *)v7 + 19) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v12 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v12();
    }
    *(_QWORD *)v7 = &CWinRTApplicationView::`vftable'{for `IApplicationView'};
    *((_QWORD *)v7 + 1) = &CWinRTApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v7 + 2) = &CWinRTApplicationView::`vftable'{for `IApplicationViewBase'};
    *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v7 + 17) = &CWinRTApplicationView::`vftable';
    *((_QWORD *)v7 + 18) = &CWinRTApplicationView::`vftable'{for `IWinRTApplicationView'};
    *((_QWORD *)v7 + 19) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v7 + 25) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_BYTE *)v7 + 208) = 0;
    *(_QWORD *)((char *)v7 + 212) = 0LL;
    *((_BYTE *)v7 + 220) = 0;
    v5 = (volatile signed __int64 *)v7;
    v27 = v7;
    v8 = (volatile signed __int64 *)v7;
  }
  if ( !v8 )
  {
    v13 = -2147024882;
    v14 = 2147942414LL;
    v15 = 491LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v14,
      (int)v26);
    goto LABEL_36;
  }
  v16 = CWinRTApplicationView::RuntimeClassInitialize((CWinRTApplicationView *)v5);
  v13 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v15 = 492LL;
    goto LABEL_19;
  }
  v29 = this + 48;
  AcquireSRWLockExclusive(this + 48);
  v18 = v8;
  v26 = v8;
  v19 = *(unsigned int (__fastcall **)(__int64))(*v8 + 8);
  if ( v19 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)v8);
  else
    v19((__int64)v8);
  v13 = 0;
  Ptr = (char *)this[50].Ptr;
  if ( Ptr != this[52].Ptr
    || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                &this[49],
                Ptr + 1),
        v13 >= 0) )
  {
    v21 = (volatile signed __int64 **)((char *)this[49].Ptr + 8 * (__int64)this[50].Ptr++);
    if ( v21 )
    {
      *v21 = 0LL;
      if ( v21 != &v26 )
      {
        *v21 = v8;
        v18 = 0LL;
        v26 = 0LL;
      }
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v18 + 16))(v18);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v13,
      (int)v26);
  else
    CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)this, v8, 0, a3);
  if ( this != (RTL_SRWLOCK *)-384LL )
    ReleaseSRWLockExclusive(this + 48);
LABEL_36:
  if ( v5 )
  {
    v22 = *((_QWORD *)v5 + 24);
    while ( v22 >= 0 )
    {
      if ( (_DWORD)v22 == 0x7FFFFFFF )
        return (unsigned int)v13;
      v23 = v22 - 1;
      v24 = v22;
      v22 = _InterlockedCompareExchange64(v5 + 24, v22 - 1, v22);
      if ( v24 == v22 )
        goto LABEL_43;
    }
    v23 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v17);
LABEL_43:
    if ( !v23 )
    {
      (*(void (__fastcall **)(CApplicationViewBase *, __int64))(*(_QWORD *)v27 + 464LL))(v27, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v13;
}
