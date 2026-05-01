/*
 * XREFs of ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x180100A74
 * Callers:
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1800FEA94 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x18010FA50 (_lambda_62924d4e5fe2ec2efa180cb71b93b0bb_--_lambda_invoker_cdecl_.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18010FFC8 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)a1[1];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  a1[1] = a3;
  *a1 = a2;
  return result;
}
