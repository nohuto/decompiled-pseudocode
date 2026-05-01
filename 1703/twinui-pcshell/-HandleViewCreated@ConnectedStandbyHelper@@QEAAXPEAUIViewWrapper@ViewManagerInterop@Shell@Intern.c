/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94
 * Callers:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x180100A74 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x18010FCD8 (_lambda_379fb6251cfae0942258739af0295e77_--__lambda_379fb6251cfae0942258739af0295e77_.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18010FFC8 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_379fb6251cfae0942258739af0295e77___ @ 0x180110128 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_379fb6251cfae0942258739af0295e77___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-28h]
  ConnectedStandbyHelper *v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // [rsp+58h] [rbp-8h]
  __int64 v14; // [rsp+70h] [rbp+10h] BYREF

  std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(this, &v9);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (__int64)v10;
  v11 = this;
  v12 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v4 = (__int64)v10;
  }
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v12, v9, v4);
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = *((_DWORD *)this + 4);
  v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_379fb6251cfae0942258739af0295e77___(&v14, &v11);
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_(&v11);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
  {
    v8 = v10;
    (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
    if ( !_InterlockedDecrement(v8 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
