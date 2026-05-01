/*
 * XREFs of _lambda_4d3db48dcfcb6d65bc97b5eb3c36596d_::__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d_ @ 0x18003F138
 * Callers:
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x1801E80EF (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4d3db48dcfcb6d65bc97b5eb3c36596d_::__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[6];
  if ( v2 )
  {
    a1[6] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
