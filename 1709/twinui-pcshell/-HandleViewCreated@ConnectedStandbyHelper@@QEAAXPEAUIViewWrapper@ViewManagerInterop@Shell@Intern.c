/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180139E58
 * Callers:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x18012B3C8 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x18013A07C (_lambda_379fb6251cfae0942258739af0295e77_--__lambda_379fb6251cfae0942258739af0295e77_.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x18013A7C8 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed __int32 v6; // eax
  __int64 v7; // r14
  int v8; // r15d
  IUnknown *v9; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-40h] BYREF
  ConnectedStandbyHelper *v15; // [rsp+58h] [rbp-28h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // [rsp+70h] [rbp-10h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = *(_QWORD *)this;
  v13 = 0LL;
  if ( !v2 )
  {
LABEL_27:
    std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v6 = *(_DWORD *)(v2 + 8);
    if ( !v6 )
      goto LABEL_27;
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v6 + 1, v6) );
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v13, v4, v2);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_QWORD *)&v13 + 1);
  v15 = this;
  v16 = 0LL;
  if ( *((_QWORD *)&v13 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    v7 = *((_QWORD *)&v13 + 1);
  }
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v16, v13, v7);
  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = *((_DWORD *)this + 4);
  v9 = 0LL;
  v10 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = &IAppViewDataSourceAdapter::`vftable';
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    v10[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = off_18020CC38;
    *((_QWORD *)v11 + 2) = v15;
    *(_OWORD *)(v11 + 6) = v16;
    *((_QWORD *)v11 + 5) = 0LL;
    v16 = 0LL;
    if ( v11 + 10 != (_DWORD *)&v17 )
    {
      v17 = 0LL;
      *((_QWORD *)v11 + 5) = a2;
    }
    v9 = (IUnknown *)v11;
  }
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v8, 0, v9, 0LL);
  if ( v9 )
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_(&v15);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
  {
    v12 = *((_QWORD *)&v13 + 1);
    (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
  }
}
