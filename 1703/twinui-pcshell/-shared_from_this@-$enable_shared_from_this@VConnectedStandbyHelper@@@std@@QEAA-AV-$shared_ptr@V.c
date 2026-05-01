/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18010FFC8
 * Callers:
 *     _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x18010FA50 (_lambda_62924d4e5fe2ec2efa180cb71b93b0bb_--_lambda_invoker_cdecl_.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x180100A74 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x180110478 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

_QWORD *__fastcall std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a1[1];
  v4 = *a1;
  if ( !v3 )
  {
LABEL_7:
    std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v3 + 8);
    if ( !v5 )
      goto LABEL_7;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5) );
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(a2, v4, v3);
  return a2;
}
