/*
 * XREFs of _lambda_650cc3be0f7c1281208c8cf80a59183f_::__lambda_650cc3be0f7c1281208c8cf80a59183f_ @ 0x18013F870
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$6 @ 0x1801A35E4 (_XamlAltTabViewHost--Show_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_650cc3be0f7c1281208c8cf80a59183f_::__lambda_650cc3be0f7c1281208c8cf80a59183f_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[4];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[3];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[2];
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return result;
}
