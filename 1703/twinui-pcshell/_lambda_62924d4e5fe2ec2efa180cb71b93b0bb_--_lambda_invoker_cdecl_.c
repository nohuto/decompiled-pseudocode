/*
 * XREFs of _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x18010FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x180100A74 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18010FFC8 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d1d8d58343981d67c57f7f39dcd56a0___ @ 0x18011016C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_9d1d8d58343981d67c57f7f39dcd56a0___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+70h] [rbp+10h] BYREF

  std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(a1, &v11);
  v4 = (__int64)v12;
  v13 = a1;
  v14 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v4 = (__int64)v12;
  }
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(&v14, v11, v4);
  v5 = *(_DWORD *)(a1 + 16);
  v15 = a2;
  v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d1d8d58343981d67c57f7f39dcd56a0___(&v16, &v13);
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
    v4 = (__int64)v12;
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = v12;
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return 0LL;
}
