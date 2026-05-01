/*
 * XREFs of _lambda_6363101253bf33f24c351b7ac39c5c85_::__lambda_6363101253bf33f24c351b7ac39c5c85_ @ 0x18000BC44
 * Callers:
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$1 @ 0x1801E6690 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$1.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1801E7934 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6363101253bf33f24c351b7ac39c5c85_::__lambda_6363101253bf33f24c351b7ac39c5c85_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(result + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
