/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18013A0F4
 * Callers:
 *     _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x180139E50 (_lambda_62924d4e5fe2ec2efa180cb71b93b0bb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x18012B3C8 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x18013A7C8 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rsi
  int v8; // r12d
  IUnknown *v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-40h] BYREF
  ConnectedStandbyHelper *v18; // [rsp+58h] [rbp-28h]
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  int v20; // [rsp+70h] [rbp-10h]

  v2 = *((_QWORD *)this + 1);
  v4 = *(_QWORD *)this;
  v16 = 0LL;
  if ( !v2 )
  {
LABEL_25:
    std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v6 = *(_DWORD *)(v2 + 8);
    if ( !v6 )
      goto LABEL_25;
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v6 + 1, v6) );
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v16, v4, v2);
  v7 = *((_QWORD *)&v16 + 1);
  v18 = this;
  v19 = 0LL;
  if ( *((_QWORD *)&v16 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    v7 = *((_QWORD *)&v16 + 1);
  }
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v19, v16, v7);
  v8 = *((_DWORD *)this + 4);
  v9 = 0LL;
  v20 = a2;
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
    *(_QWORD *)v11 = off_18020CC10;
    v12 = 0LL;
    v9 = (IUnknown *)v11;
    *((_QWORD *)v11 + 2) = v18;
    *(_OWORD *)(v11 + 6) = v19;
    v11[10] = a2;
    *((_QWORD *)&v19 + 1) = 0LL;
  }
  else
  {
    v12 = *((_QWORD *)&v19 + 1);
  }
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v8, 0, v9, 0LL);
  if ( v9 )
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
    v7 = *((_QWORD *)&v16 + 1);
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v14 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  return 0LL;
}
